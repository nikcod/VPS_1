using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using Niantic.ARDK.AR.WayspotAnchors;

public class Makefile : MonoBehaviour
{
    string[] data;
    string path;
    //WayspotAnchorPayload payload;
    // Start is called before the first frame update
    void Start()
    {
        path =Application.persistentDataPath + "/Write.txt";
        File.WriteAllText(path, "Hello World!\nTest Passed\nBye!!!");
        data = File.ReadAllLines(path);
        path = Application.persistentDataPath + "/Read.text";
        File.WriteAllText(path, "");
        foreach (string temp in data)
        {
            File.AppendAllText(path, temp + "\n");
        }
        //payload = WayspotAnchorPayload.Deserialize(data);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
