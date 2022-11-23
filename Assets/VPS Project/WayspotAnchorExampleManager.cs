// Copyright 2022 Niantic, Inc. All Rights Reserved.
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;

using Niantic.ARDK;
using Niantic.ARDK.AR;
using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.AR.HitTest;
using Niantic.ARDK.AR.WayspotAnchors;
using Niantic.ARDK.Extensions;
using Niantic.ARDK.LocationService;
using Niantic.ARDK.Utilities;
using Niantic.ARDK.Utilities.Input.Legacy;

using UnityEngine;
using UnityEngine.UI;

namespace Niantic.ARDKExamples.WayspotAnchors
{
  public class WayspotAnchorExampleManager: MonoBehaviour
  {
    [Tooltip("Text used to display the current status of the demo")]
    [SerializeField] private Text _statusLog;

    [Tooltip("Text used to show the current localization state")]
    [SerializeField] private Text _localizationStatus;

    
    public WayspotAnchorService WayspotAnchorService;
    private IARSession _arSession;
    private readonly HashSet<WayspotAnchorTracker> _wayspotAnchorTrackers = new HashSet<WayspotAnchorTracker>();
    
    private IWayspotAnchorsConfiguration _config;
    private GameObject instantiatedGameObject;
    [SerializeField] private GameObject _pointer;
    [SerializeField] private GameObject _pointerGameObject;
    [SerializeField] private ARDepthManager _arDepthManager;
    
    [Header("Prefabs")]
    [SerializeField] private List<string> _prefabNames;
    [SerializeField] private List<string> _prefabScales;
    [SerializeField] private List<GameObject> _prefabs = new List<GameObject>();
    [SerializeField] private GameObject _currentSelectedPrefab;
    [SerializeField] private int _currentSelectedPrefabId;

    private void Awake()
    {
      _statusLog.text = "Initializing Session.";
    }
    
    private void OnEnable()
    {
      ARSessionFactory.SessionInitialized += HandleSessionInitialized;
    }
    
    private void OnDisable()
    {
      ARSessionFactory.SessionInitialized -= HandleSessionInitialized;
    }

    private void OnDestroy()
    {
      if (WayspotAnchorService != null)
      {
        WayspotAnchorService.LocalizationStateUpdated -= LocalizationStateUpdated;
        WayspotAnchorService.Dispose();
      }
    }

    private void Update()
    {
      if (WayspotAnchorService == null)
        return;

      //pointer position and rotation based on Depth 
      //If touch pos get touch count else get middle of the screen as position for pointer.
      var touchPosition = PlatformAgnosticInput.touchCount > 0 ? PlatformAgnosticInput.GetTouch(0).position : new Vector2(Screen.width / 2.0f, Screen.height / 2.0f);
      //If touch over UI move
      var touch = PlatformAgnosticInput.GetTouch(0);
      if (touch.IsTouchOverUIObject()) return;
      
      var worldPosition = _arDepthManager.DepthBufferProcessor.GetWorldPosition((int)touchPosition.x, (int)touchPosition.y);
      var normal = _arDepthManager.DepthBufferProcessor.GetSurfaceNormal((int)touchPosition.x, (int)touchPosition.y);
      var rotation = Quaternion.Slerp(_pointer.transform.rotation, Quaternion.FromToRotation(Vector3.up, normal), Time.deltaTime * 10.0f);
      
      //Place the Pointer pos and rot
      _pointer.transform.position = worldPosition;
      _pointer.transform.rotation = rotation;
    }

  
    public void PlaceAnchorPosition()
    {
      if (WayspotAnchorService.LocalizationState != LocalizationState.Localized) return;
      var localPos = Matrix4x4.TRS(_pointerGameObject.transform.position, _pointerGameObject.transform.rotation, _pointerGameObject.transform.localScale);
      PlaceAnchor(localPos);
    }
    
    /// Saves all of the existing wayspot anchors
    public void SaveWaySpotAnchors()
    {
      if (_wayspotAnchorTrackers.Count > 0)
      {
        var waySpotAnchors = WayspotAnchorService.GetAllWayspotAnchors();

        // Only anchors that have successfully resolved can be saved
        IEnumerable<IWayspotAnchor> saveableAnchors = waySpotAnchors.Where(a => a.Status == WayspotAnchorStatusCode.Limited || a.Status == WayspotAnchorStatusCode.Success);
        IEnumerable<WayspotAnchorPayload> payloads = saveableAnchors.Select(a => a.Payload);

        WayspotAnchorDataUtility.SaveLocalPayloads(payloads.ToArray(),_prefabNames,_prefabScales);
      }
      else
      {
        WayspotAnchorDataUtility.SaveLocalPayloads(Array.Empty<WayspotAnchorPayload>(),new List<string>(),new List<string>());
      }
      _statusLog.text = $"Saved {_wayspotAnchorTrackers.Count} Wayspot Anchors.";
    }

    /// Loads all of the saved wayspot anchors
    public void LoadWaySpotAnchors()
    {
      (WayspotAnchorPayload[] payloads,List<string> payloadNames,List<string> payloadScale) = WayspotAnchorDataUtility.LoadLocalPayloads();
      if (payloads.Length > 0 && payloadNames.Count > 0)
      {
        for (var i = 0; i < payloads.Length; i++)
        {
          var payload = payloads[i];
          var anchors = WayspotAnchorService.RestoreWayspotAnchors(payload);
          if (anchors.Length == 0) return; // error raised in CreateWaySpotAnchors
          CreateWayspotAnchorGameObject(anchors[0], Vector3.zero, Quaternion.identity, true, payloadNames[i],payloadScale[i]);
        }

        _statusLog.text = $"Loaded {_wayspotAnchorTrackers.Count} anchors.";
      }
      else
      {
        _statusLog.text = "No anchors to load.";
      }
    }
    /// Clears all of the active way spot anchors
    public void ClearAnchorGameObjects()
    {
      if (_wayspotAnchorTrackers.Count == 0)
      {
        _statusLog.text = "No anchors to clear.";
        return;
      }

      //WayspotAnchorDataUtility.ClearLocalPayloads();
      
      foreach (var anchor in _wayspotAnchorTrackers)
        Destroy(anchor.gameObject);

            _wayspotAnchorTrackers.Clear();
            _prefabNames.Clear();
            _prefabScales.Clear();

      IWayspotAnchor[] waySpotAnchors = _wayspotAnchorTrackers.Select(go => go.WayspotAnchor).ToArray();
      WayspotAnchorService.DestroyWayspotAnchors(waySpotAnchors);
      
      
      _statusLog.text = "Cleared Wayspot Anchors.";
    }
    
    private void HandleSessionInitialized(AnyARSessionInitializedArgs args)
    {
      _statusLog.text = "Session initialized";
      _arSession = args.Session;
      _arSession.Ran += HandleSessionRan;
    }

    private void HandleSessionRan(ARSessionRanArgs args)
    {
      _arSession.Ran -= HandleSessionRan;
      WayspotAnchorService = CreateWaySpotAnchorService();
      WayspotAnchorService.LocalizationStateUpdated += OnLocalizationStateUpdated;
      _statusLog.text = "Session running";
    }

    private void OnLocalizationStateUpdated(LocalizationStateUpdatedArgs args)
    {
      _localizationStatus.text = "Localization status: " + args.State;
    }

    private WayspotAnchorService CreateWaySpotAnchorService()
    {
      var locationService = LocationServiceFactory.Create(_arSession.RuntimeEnvironment);
      locationService.Start();

      _config ??= WayspotAnchorsConfigurationFactory.Create();

      var waySpotAnchorService =
        new WayspotAnchorService
        (
          _arSession,
          locationService,
          _config
        );

      waySpotAnchorService.LocalizationStateUpdated += LocalizationStateUpdated;

      return waySpotAnchorService;
    }

    private void LocalizationStateUpdated(LocalizationStateUpdatedArgs args)
    {
      _localizationStatus.text = args.State.ToString();
    }

    /// <summary>
    /// Place the anchor 
    /// </summary>
    /// <param name="localPose">game object properties </param>
    private void PlaceAnchor(Matrix4x4 localPose)
    {
      IWayspotAnchor[] anchors = WayspotAnchorService.CreateWayspotAnchors(localPose);
      if (anchors.Length == 0)
        return; // error raised in CreateWay spot Anchors
      
      var position = localPose.ToPosition();
      var rotation = localPose.ToRotation();
      CreateWayspotAnchorGameObject(anchors[0], position, rotation, true,_currentSelectedPrefab.name,Vector3ToString(localPose.lossyScale));

      _statusLog.text = "Anchor placed.";
    }

    /// <summary>
    /// Create a Way Spot anchor and instantiate in the given position
    /// </summary>
    /// <param name="anchor">Called when the status, position, or rotation of the way spot anchor has been updated</param>
    /// <param name="position">Position of the game object</param>
    /// <param name="rotation">Rotation of the game object</param>
    /// <param name="startActive">Sets the game object active state</param>
    /// <param name="prefabName">Name of the prefab that needs to be instantiated</param>
    /// <returns></returns>
    private GameObject CreateWayspotAnchorGameObject(IWayspotAnchor anchor, Vector3 position, Quaternion rotation, bool startActive,string prefabName,string prefabScale)
    {
      var prefab = _prefabs.Find( x=> x.name == prefabName);
      var go = Instantiate(prefab, position, rotation);
      go.transform.localScale = Vector3FromString(prefabScale);
      var tracker = go.GetComponent<WayspotAnchorTracker>();
      if (tracker == null)
      {
        Debug.Log("Anchor prefab was missing WayspotAnchorTracker, so one will be added.");
        tracker = go.AddComponent<WayspotAnchorTracker>();
      }

      tracker.gameObject.SetActive(startActive);
      tracker.AttachAnchor(anchor);
      _wayspotAnchorTrackers.Add(tracker);
      _prefabNames.Add(prefabName);
      _prefabScales.Add(prefabScale);
      return go;
    }
    
    /// <summary>
    /// Change Prefab on click left
    /// </summary>
    public void OnSwipeLeft()
    {
      switch (_currentSelectedPrefabId < _prefabs.Count - 1)
      {
        case true:
          _currentSelectedPrefabId += 1;
          break;
        default:
          _currentSelectedPrefabId = 0;
          break;
      }

      ChangeGameObjectPrefab();
    }
    
    /// <summary>
    /// Change Prefab on click right
    /// </summary>
    public void OnSwipeRight()
    {
      switch (_currentSelectedPrefabId > 0)
      {
        case true:
          _currentSelectedPrefabId -= 1;
          break;
        default:
          _currentSelectedPrefabId = _prefabs.Count - 1;
          break;
      }

      ChangeGameObjectPrefab();
    }
        
    /// <summary>
    /// Change the prefab and Assign the same position and rotation as the previous game object
    /// </summary>
    private void ChangeGameObjectPrefab()
    {
      _currentSelectedPrefab = _prefabs[_currentSelectedPrefabId];
      Destroy(_pointerGameObject);
      _pointerGameObject = Instantiate(_prefabs[_currentSelectedPrefabId],_pointer.transform);
      _pointerGameObject.transform.localPosition = new Vector3(0, 0.06f, 0);
      Destroy(_pointerGameObject.GetComponent<WayspotAnchorTracker>());
      _pointerGameObject.transform.localScale = new Vector3(_prefabs[_currentSelectedPrefabId].transform.localScale.x, 
        _prefabs[_currentSelectedPrefabId].transform.localScale.y,
        _prefabs[_currentSelectedPrefabId].transform.localScale.z);
    }
    
    public void SetConfig(IWayspotAnchorsConfiguration config)
    {
      _config = config;
    }

    private static string Vector3ToString(Vector3 v){
      // change 0.00 to 0.0000 or any other precision you desire, i am saving space by using only 2 digits
      Debug.Log($"{v.x:0.0000},{v.y:0.0000},{v.z:0.0000}");
      return $"{v.x:0.0000},{v.y:0.0000},{v.z:0.0000}";
    }

    private static Vector3 Vector3FromString(String s){
      string[] parts = s.Split(new string[] { "," }, StringSplitOptions.None);
      Debug.Log( $"{float.Parse(parts[0])} ,{float.Parse(parts[1])}, {float.Parse(parts[2])}");
      return new Vector3(
        float.Parse(parts[0]),
        float.Parse(parts[1]),
        float.Parse(parts[2]));
    }
  }
}