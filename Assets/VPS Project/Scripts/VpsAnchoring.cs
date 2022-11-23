// Copyright 2022 Niantic, Inc. All Rights Reserved.
using System;
using System.Collections.Generic;
using System.Linq;
using System.IO;

using Niantic.ARDK;
using Niantic.ARDK.AR;
using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.AR.HitTest;
using Niantic.ARDK.AR.WayspotAnchors;
using Niantic.ARDK.Extensions;
using Niantic.ARDK.LocationService;
using Niantic.ARDK.Utilities;
using Niantic.ARDK.AR.Configuration;
using Niantic.ARDK.Utilities.Input.Legacy;

using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace Niantic.ARDKExamples.WayspotAnchors
{
    public class VpsAnchoring : MonoBehaviour
    {
        public ARPlaneManager aR;
        public Index index ;
        int runner, l, m, selIndex;
        public int[] indexArray , _index;
        public Vector3[] scaleArray , _scale;

        public TMP_Dropdown selectPrefab;

        public GameObject[] placed,prefabs;
        GameObject _pref;
        int numOfPlaced = 0;

        [Tooltip("The anchor that will be placed")]
        [SerializeField]
        private GameObject _anchorPrefab;

        [Tooltip("Camera used to place the anchors via raycasting")]
        [SerializeField]
        private Camera _camera;

        [Tooltip("Text used to display the current status of the demo")]
        [SerializeField]
        private Text _statusLog;

        [Tooltip("Text used to show the current localization state")]
        [SerializeField]
        private Text _localizationStatus;

        public WayspotAnchorService WayspotAnchorService;
        private IARSession _arSession;

        private readonly HashSet<WayspotAnchorTracker> _wayspotAnchorTrackers =
          new HashSet<WayspotAnchorTracker>();

        private IWayspotAnchorsConfiguration _config;

        string path, data;
        string[] datas;

        public GameObject reticle;

        bool centred;

        public Toggle modify;
        public GameObject vps, modfier;

        public bool add;
        private void Awake()
        {
            // This is necessary for setting the user id associated with the current user.
            // We strongly recommend generating and using User IDs. Accurate user information allows
            //  Niantic to support you in maintaining data privacy best practices and allows you to
            //  understand usage patterns of features among your users.
            // ARDK has no strict format or length requirements for User IDs, although the User ID string
            //  must be a UTF8 string. We recommend avoiding using an ID that maps back directly to the
            //  user. So, for example, don’t use email addresses, or login IDs. Instead, you should
            //  generate a unique ID for each user. We recommend generating a GUID.
            // When the user logs out, clear ARDK's user id with ArdkGlobalConfig.ClearUserIdOnLogout

            //  Sample code:
            //  // GetCurrentUserId() is your code that gets a user ID string from your login service
            //  var userId = GetCurrentUserId();
            //  ArdkGlobalConfig.SetUserIdOnLogin(userId);
            path = Application.dataPath + "/Payload.txt";
            _statusLog.text = "Initializing Session.";
            selIndex = 0;
            //aR = _camera.GetComponent<ARPlaneManager>();
        }

        private void OnEnable()
        {
            ARSessionFactory.SessionInitialized += HandleSessionInitialized;
            _pref = prefabs[0];
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
            if (modify.isOn)
            {
                
                reticle.SetActive(false);
                //modfier.SetActive(true);
            }
                
            else
            {
                
                reticle.SetActive(true);
                //modfier.SetActive(false);
            }

            centred = TryGetCentre(out Matrix4x4 coord);
            var position = coord.ToPosition();

            reticle.transform.position = position;

            if (WayspotAnchorService == null)
                return;

            // Do hit test from where player taps on screen
            
            /*var touchSuccess = TryGetTouchInput(out Matrix4x4 localPose);
            if (touchSuccess)
            {
                var rot = Quaternion.Euler(0, localPose.rotation.eulerAngles.y, 0);
                if (WayspotAnchorService.LocalizationState == LocalizationState.Localized)
                    if (!modify.isOn)
                    {
                        CreateWayspotAnchorGameObject(localPose.ToPosition(), rot, _pref);//Create the Wayspot Anchor and place the GameObject
                        //aR.enabled = false; 
                    }
                
                else
                    _statusLog.text = "Must localize before placing anchor.";
            }*/
        }

        public void createButton()
        {
            var touchSuccess = TryGetCentre(out Matrix4x4 localPose);
            //if (touchSuccess)
            {
                var rot = Quaternion.Euler(0, localPose.rotation.eulerAngles.y, 0);
                if (WayspotAnchorService.LocalizationState == LocalizationState.Localized)
                    if (!modify.isOn)
                    {
                        CreateWayspotAnchorGameObject(localPose.ToPosition(), rot, prefabs[selIndex]);//Create the Wayspot Anchor and place the GameObject
                        //aR.enabled = false; 
                    }

                    else
                        _statusLog.text = "Must localize before placing anchor.";
            }
        }
        /// Saves all of the existing wayspot anchors
        public void SaveWayspotAnchors()
        {
            runner = -1;
            l = 0;
            m = 0;
            Debug.Log(_wayspotAnchorTrackers.Count);
            if (_wayspotAnchorTrackers.Count > 0)
            {
                GameObject[] ToSave;
                ToSave = placed;
                Array.Resize<int>(ref indexArray, 0);
                Array.Resize<Vector3>(ref scaleArray, 0);
                var wayspotAnchors = WayspotAnchorService.GetAllWayspotAnchors();
                Debug.Log($"Anchors = {wayspotAnchors.Count()}");
                // Only anchors that have successfully resolved can be saved
                var saveableAnchors = wayspotAnchors.Where(a => a.Status == WayspotAnchorStatusCode.Success);
                var payloads = saveableAnchors.Select(a => a.Payload);
                for(int i = 0; i < placed.Length; i++)
                {
                    index = ToSave[i].GetComponent<Index>();
                    var ind = index.returnIndex();
                    Array.Resize<int>(ref indexArray, indexArray.Length + 1);
                    Array.Resize<Vector3>(ref scaleArray, scaleArray.Length + 1);
                    indexArray[i] = ind;
                    scaleArray[i] = ToSave[i].transform.localScale;
                }
                
                File.WriteAllText(path, "");
                Debug.Log($"Payloads = {payloads.Count()}");
                foreach(WayspotAnchorPayload _payloads in payloads)
                {
                    runner++;
                    data = _payloads.Serialize();
                    var pjson = JsonUtility.ToJson(data);
                    File.AppendAllText(path, data + "\n");
                    File.AppendAllText(path, indexArray[runner].ToString() + "\n");
                    File.AppendAllText(path, scaleArray[runner].ToString() + "\n");
                    //File.AppendAllText(path, pjson);
                }
                
                //WayspotAnchorDataUtility.SaveLocalPayloads(payloads.ToArray());
            }
            if(_wayspotAnchorTrackers.Count == 0)
            {
                File.WriteAllText(path, "");
                //WayspotAnchorDataUtility.SaveLocalPayloads(Array.Empty<WayspotAnchorPayload>());
            }

            _statusLog.text = $"Saved {++runner} Wayspot Anchors.";
        }

        /// Clears all of the active wayspot anchors
        public void ClearAnchorGameObjects()
        {

            if (_wayspotAnchorTrackers.Count == 0)
            {
                _statusLog.text = "No anchors to clear.";
                return;
            }

            foreach (var anchor in _wayspotAnchorTrackers)
                DestroyImmediate(anchor.gameObject);

            _wayspotAnchorTrackers.Clear();
            var wayspotAnchors = WayspotAnchorService.GetAllWayspotAnchors();
            WayspotAnchorService.DestroyWayspotAnchors(wayspotAnchors);
            wayspotAnchors = WayspotAnchorService.GetAllWayspotAnchors();
            _statusLog.text = "Cleared Wayspot Anchors.";
            var saveableAnchors = wayspotAnchors.Where(a => a.Status == WayspotAnchorStatusCode.Limited || a.Status == WayspotAnchorStatusCode.Success);
            var payloads = saveableAnchors.Select(a => a.Payload);
            Debug.Log($"Payloads = {payloads.Count()}");
            numOfPlaced = 0;
            Array.Resize<GameObject>(ref placed, 0);
            Array.Resize<int>(ref indexArray, 0);
            Array.Resize<Vector3>(ref scaleArray, 0);
            Array.Resize<int>(ref _index, 0);
            Array.Resize<Vector3>(ref _scale, 0);
        }

        public void PauseARSession()
        {
            if (_arSession.State == ARSessionState.Running)
            {
                _arSession.Pause();
                _statusLog.text = $"AR Session Paused.";
            }
            else
            {
                _statusLog.text = $"Cannot pause AR Session.";
            }
        }

        public void ResumeARSession()
        {
            if (_arSession.State == ARSessionState.Paused)
            {
                _arSession.Run(_arSession.Configuration);
                _statusLog.text = $"AR Session Resumed.";
            }
            else
            {
                _statusLog.text = $"Cannot resume AR Session.";
            }
        }

        public void RestartWayspotAnchorService()
        {
            WayspotAnchorService.Restart();
        }

        public IWayspotAnchor AddTrackers(GameObject tran, bool adds, IWayspotAnchor anc)
        {

            if (tran==null)
            {

            }
            Matrix4x4 localPose;
            localPose = Matrix4x4.TRS(tran.transform.position, tran.transform.localRotation, Vector3.one);
            var anchors = WayspotAnchorService.CreateWayspotAnchors(localPose);
            Debug.Log(anchors);
            if (adds)
            {
                var tracker = tran.GetComponent<WayspotAnchorTracker>();
                if (tracker == null)
                {
                    tracker = tran.AddComponent<WayspotAnchorTracker>();
                }
                //tracker.gameObject.setActive(true);
                tracker.AttachAnchor(anchors[0]);
                _wayspotAnchorTrackers.Add(tracker);
                _statusLog.text = $"{_wayspotAnchorTrackers.Count} Anchors placed.";
                Debug.Log(_wayspotAnchorTrackers.Count());
                Debug.Log("I was Called");
                return anchors[0];
            }
            else
            {
                var tracker = tran.GetComponent<WayspotAnchorTracker>();
                if (tracker == null)
                {
                    tran.AddComponent<WayspotAnchorTracker>();
                    tracker = tran.GetComponent<WayspotAnchorTracker>();
                }
                //tracker.gameObject.setActive(true);
                tracker.AttachAnchor(anc);
                _wayspotAnchorTrackers.Add(tracker);
                Debug.Log("I was Called");
                return null;
            }
            
        }

        public void AddButton()
        {
            GameObject[] prefs;
            prefs = placed;
            _wayspotAnchorTrackers.Clear();
            var wayspotAnchors = WayspotAnchorService.GetAllWayspotAnchors();
            WayspotAnchorService.DestroyWayspotAnchors(wayspotAnchors);
            wayspotAnchors = WayspotAnchorService.GetAllWayspotAnchors();
            Debug.Log(wayspotAnchors.Count());
            foreach (GameObject pre in prefs)
            {
                if(pre != null)
                AddTrackers(pre, true, null);
            }
            
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
            WayspotAnchorService = CreateWayspotAnchorService();
            WayspotAnchorService.LocalizationStateUpdated += OnLocalizationStateUpdated;
            _statusLog.text = "Session running";
        }

        private void OnLocalizationStateUpdated(LocalizationStateUpdatedArgs args)
        {
            _localizationStatus.text = "Localization status: " + args.State;
        }

        private WayspotAnchorService CreateWayspotAnchorService()
        {
            var locationService = LocationServiceFactory.Create(_arSession.RuntimeEnvironment);
            locationService.Start();

            if (_config == null)
                _config = WayspotAnchorsConfigurationFactory.Create();

            var wayspotAnchorService =
              new WayspotAnchorService
              (
                _arSession,
                locationService,
                _config
              );

            wayspotAnchorService.LocalizationStateUpdated += LocalizationStateUpdated;

            return wayspotAnchorService;
        }

        private void LocalizationStateUpdated(LocalizationStateUpdatedArgs args)
        {
            _localizationStatus.text = args.State.ToString();
        }

        private GameObject PlaceAnchor(Matrix4x4 localPose, GameObject pref)
        {
            Debug.Log(localPose);          
            var position = localPose.ToPosition();
            var gopref = CreateWayspotAnchorGameObject(position, Quaternion.identity,pref);
            return gopref;
        }

        public GameObject CreateWayspotAnchorGameObject
        (
          Vector3 position,
          Quaternion rotation,
          GameObject pref
        )
        {
            if(pref.tag == "Vertical")
            {
                if (rotation.eulerAngles.y > 180)
                    rotation.eulerAngles = new Vector3(0, rotation.eulerAngles.y - 90, 0);
                else
                    rotation.eulerAngles = new Vector3(0, rotation.eulerAngles.y + 90, 0);
            }

            var go = Instantiate(pref, position, rotation);

            Array.Resize<GameObject>(ref placed, placed.Length + 1);
            placed[numOfPlaced] = go;
            numOfPlaced++;
            _statusLog.text = rotation.eulerAngles.ToString();
            //AddTrackers(go, true, null);
            return go;
        }

        private bool TryGetTouchInput(out Matrix4x4 localPose)
        {
            var screencentre = Camera.main.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
            if (_arSession == null || PlatformAgnosticInput.touchCount <= 0)
            {
                localPose = Matrix4x4.zero;
                return false;
            }

            var touch = PlatformAgnosticInput.GetTouch(0);
            if (touch.IsTouchOverUIObject())
            {
                localPose = Matrix4x4.zero;
                return false;
            }

            if (touch.phase != TouchPhase.Began)
            {
                localPose = Matrix4x4.zero;
                return false;
            }

            var currentFrame = _arSession.CurrentFrame;
            if (currentFrame == null)
            {
                localPose = Matrix4x4.zero;
                return false;
            }

            if (_arSession.RuntimeEnvironment == RuntimeEnvironment.Playback)
            {
                // Playback doesn't support plane detection yet, so instead of hit testing against planes,
                // just place the anchor in front of the camera.
                localPose =
                  Matrix4x4.TRS
                  (
                    _camera.transform.position + (_camera.transform.forward * 2),
                    Quaternion.identity,
                    Vector3.one
                  );
                Debug.Log("1 was called");
            }
            else
            {
                var results = currentFrame.HitTest
                (
                  _camera.pixelWidth,
                  _camera.pixelHeight,
                  screencentre,
                  ARHitTestResultType.ExistingPlane
                );

                int count = results.Count;
                if (count <= 0)
                {
                    localPose = Matrix4x4.zero;
                    return false;
                }
                Debug.Log("2 was called");
                var result = results[0];
                localPose = result.WorldTransform;
            }

            return true;
        }

        private bool TryGetCentre(out Matrix4x4 localPose)
        {
            var screencentre = Camera.main.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
            var currentFrame = _arSession.CurrentFrame;
            var results = currentFrame.HitTest
                (
                  _camera.pixelWidth,
                  _camera.pixelHeight,
                  screencentre,
                  ARHitTestResultType.ExistingPlane
                );
            int count = results.Count;
            if (count <= 0)
            {
                localPose = Matrix4x4.zero;
                return false;
            }
            var result = results[0];
            localPose = result.WorldTransform;
            return true;
        }

        public void loadAnchor()
        {   datas = File.ReadAllLines(path);
            Debug.Log(datas.ToArray());
            
            for (int i = 0; i < datas.Length-1; )
            {
                var temp = datas[i];
                i++;
                var inc = int.Parse(datas[i]);
                i++;
                var sc = StringToVector3(datas[i]);
                i++;
                var payload = WayspotAnchorPayload.Deserialize(temp);
                //if(WayspotAnchorService.)
                var anchors = WayspotAnchorService.RestoreWayspotAnchors(payload);

                if (anchors.Length == 0)
                {
                    Debug.Log("Error");
                    return; // error raised in CreateWayspotAnchor
                }


                var go = CreateWayspotAnchorGameObject(Vector3.zero, Quaternion.identity, prefabs[inc]);
                go.transform.localScale = sc;
                /*Array.Resize<GameObject>(ref placed, placed.Length + 1);
                placed[numOfPlaced] = go;
                numOfPlaced++;*/
                AddTrackers(go, false, anchors[0]);
                Debug.Log("I am Working");
            }
            
        }

        public void SelIndexer0()
        {
            selIndex = 0;
        }
        public void SelIndexer1()
        {
            selIndex = 1;
        }
        public void SelIndexer2()
        {
            selIndex = 2;
        }
        public void SelIndexer3()
        {
            selIndex = 3;
        }

        public static Vector3 StringToVector3(string sVector)
        {
            // Remove the parentheses
            if (sVector.StartsWith("(") && sVector.EndsWith(")"))
            {
                sVector = sVector.Substring(1, sVector.Length - 2);
            }

            // split the items
            string[] sArray = sVector.Split(',');

            // store as a Vector3
            Vector3 result = new Vector3(
                float.Parse(sArray[0]),
                float.Parse(sArray[1]),
                float.Parse(sArray[2]));

            return result;
        }

        public void SetConfig(IWayspotAnchorsConfiguration config)
        {
            _config = config;
        }
    }
}