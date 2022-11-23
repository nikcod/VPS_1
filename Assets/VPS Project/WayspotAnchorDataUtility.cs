// Copyright 2022 Niantic, Inc. All Rights Reserved.
using System;
using System.Collections.Generic;
using System.Linq;

using Niantic.ARDK.AR.WayspotAnchors;

using UnityEngine;

namespace Niantic.ARDKExamples.WayspotAnchors
{
  public static class WayspotAnchorDataUtility
  {
    private const string DataKey = "wayspot_anchor_payloads";
    private const string PrefabName = "prefab_name";
    private const string PrefabScale = "prefab_scale";
    
    /// <summary>
    /// Save the payloads to the Player prefs
    /// </summary>
    /// <param name="wayspotAnchorPayloads">Array of way spot Anchors</param>
    /// <param name="gameObjectNames">List of gameObject names</param>
    /// <param name="gameObjectScale">List of gameObject scale</param>
    public static void SaveLocalPayloads(WayspotAnchorPayload[] wayspotAnchorPayloads,List<string> gameObjectNames,List<string> gameObjectScale)
    {
      var waySpotAnchorsData = new WayspotAnchorsData { Payloads = wayspotAnchorPayloads.Select(a => a.Serialize()).ToArray() };
      var prefabNames = new PrefabNames { prefabNames = gameObjectNames };
      var prefabScales = new PrefabScales { prefabScales = gameObjectScale };
      
      var waySpotAnchorsJson = JsonUtility.ToJson(waySpotAnchorsData);
            //Debug.Log(waySpotAnchorsJson);
      var waySpotGameObjectJson = JsonUtility.ToJson(prefabNames);
      var waySpotGameObjectScaleJson = JsonUtility.ToJson(prefabScales);
      
      PlayerPrefs.SetString(DataKey, waySpotAnchorsJson);
      PlayerPrefs.SetString(PrefabName,waySpotGameObjectJson);
      PlayerPrefs.SetString(PrefabScale,waySpotGameObjectScaleJson);
    }

    public static (WayspotAnchorPayload[],List<string>,List<string>) LoadLocalPayloads()
    {
      if (PlayerPrefs.HasKey(DataKey) && PlayerPrefs.HasKey(PrefabName))
      {
        var payloads = new List<WayspotAnchorPayload>();
        var json = PlayerPrefs.GetString(DataKey);
        var wayspotAnchorsData = JsonUtility.FromJson<WayspotAnchorsData>(json);
        
        foreach (var wayspotAnchorPayload in wayspotAnchorsData.Payloads)
        {
          var payload = WayspotAnchorPayload.Deserialize(wayspotAnchorPayload);
          payloads.Add(payload);
        }
        
        var gameObjectNameJson = PlayerPrefs.GetString(PrefabName);
        var gameObjectNames = JsonUtility.FromJson<PrefabNames>(gameObjectNameJson);
        
        var gameObjectScaleJson = PlayerPrefs.GetString(PrefabScale);
        var gameObjectScales = JsonUtility.FromJson<PrefabScales>(gameObjectScaleJson);
        
        Debug.Log(json);
        Debug.Log(gameObjectNameJson);
        return (payloads.ToArray(),gameObjectNames.prefabNames,gameObjectScales.prefabScales);
      }
      else
      {
        Debug.Log("No payloads were found to load.");
        return (Array.Empty<WayspotAnchorPayload>(),new List<string>(),new List<string>());
      }
    }

    public static void ClearLocalPayloads()
    {
      if (PlayerPrefs.HasKey(DataKey)) PlayerPrefs.DeleteKey(DataKey);
      if (PlayerPrefs.HasKey(PrefabName)) PlayerPrefs.DeleteKey(PrefabName);
      if (PlayerPrefs.HasKey(PrefabScale)) PlayerPrefs.DeleteKey(PrefabScale);
    }

    [Serializable]
    private class WayspotAnchorsData
    {
      /// The payloads to save via JsonUtility
      public string[] Payloads = Array.Empty<string>();
    }
    
    [Serializable]
    private class PrefabNames
    {
      public List<string> prefabNames = new List<string>();
    }
    
    [Serializable]
    private class PrefabScales
    {
      public List<string> prefabScales = new List<string>();
    }
  }
}
