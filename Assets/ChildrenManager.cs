using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChildrenManager : MonoBehaviour
{
    public GameObject[] children;
    public Image img;
    int i = 0;
    int j = 0;
    // Start is called before the first frame update
    void Start()
    {
        foreach(Transform child in transform)
        {
            Array.Resize<GameObject>(ref children, children.Length + 1);
            children[i] = child.gameObject;
            i++;
        }
        Debug.Log(children);
    }

    public void imageControlOn()
    {
        j = 0;
        Image[] chils = new Image[3];
        foreach(GameObject chila in children)
        {
            chils[j] = chila.transform.GetChild(0).GetComponent<Image>();
            chils[j].enabled = true;
            j++;
        }
        
    }

    public void imageControlOff()
    {
        foreach (GameObject chila in children)
        {
            foreach (Transform chilf in chila.transform)
            {
                img = chilf.GetComponent<Image>();
                img.enabled = false;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
