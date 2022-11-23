using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class switcher : MonoBehaviour
{
    public GameObject switchTo;
    public GameObject companion, enemy;
    public GameObject Scroll;
    // Start is called before the first frame update
    void OnEnable()
    {
        
    }
    public void switches()
    {
        switchTo.GetComponent<Image>().enabled = true;
        gameObject.GetComponent<Image>().enabled = false;
        if (companion != null)
            companion.GetComponent<Image>().enabled = true;
        if (enemy != null)
            enemy.GetComponent<Image>().enabled = false;
    }

    public void scrollOn()
    {
        if (Scroll != null)
        {
            Scroll.SetActive(true);
        }
    }
    public void scrollOff()
    {
        if (Scroll != null)
        {
            Scroll.SetActive(false);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
