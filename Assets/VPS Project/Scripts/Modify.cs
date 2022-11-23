using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Modify : MonoBehaviour
{
    public Toggle x, y, z, x1, y1, z1, m;
    public GameObject toggle, selector;
    // Start is called before the first frame update
    void Start()
    {
        m = gameObject.GetComponent<Toggle>();
        toggle = GameObject.FindGameObjectWithTag("Toggle");
        x = toggle.transform.GetChild(0).GetComponent<Toggle>();
        y = toggle.transform.GetChild(1).GetComponent<Toggle>();
        z = toggle.transform.GetChild(2).GetComponent<Toggle>();
        selector = GameObject.FindGameObjectWithTag("Selector");
        x1 = selector.transform.GetChild(0).GetComponent<Toggle>();
        y1 = selector.transform.GetChild(1).GetComponent<Toggle>();
        z1 = selector.transform.GetChild(2).GetComponent<Toggle>();
    }

    // Update is called once per frame
    void Update()
    {
       if(!m.isOn)
        {
            x.isOn = false;
            y.isOn = false;
            z.isOn = false;
            x1.isOn = false;
            y1.isOn = false;
            z1.isOn = false;
        }
    }
}
