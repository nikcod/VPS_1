using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Lean.Touch;

public class Selector : MonoBehaviour
{
    public GameObject selector;
    public Image x, y, z;
    // Start is called before the first frame update
    void Awake()
    {
        selector = GameObject.FindGameObjectWithTag("Selector");
        x = selector.transform.GetChild(0).GetComponent<Image>();
        y = selector.transform.GetChild(1).GetComponent<Image>();
        z = selector.transform.GetChild(2).GetComponent<Image>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!x.enabled)
        {
            gameObject.GetComponent<xyzDragTranslate>().enabled = false;
        }
        else
        {
            gameObject.GetComponent<xyzDragTranslate>().enabled = true;
        } 

        if (!y.enabled)
        {
            gameObject.GetComponent<xyzTwistRotate>().enabled = false;
        }
        else
            gameObject.GetComponent<xyzTwistRotate>().enabled = true;

        if (!z.enabled)
        {
            gameObject.GetComponent<xyzPinchScale>().enabled = false;
        }
        else
        {
            gameObject.GetComponent<xyzPinchScale>().enabled = true;
        }


    }
}
