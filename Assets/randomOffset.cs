using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class randomOffset : MonoBehaviour
{
    float offset;
    public float maxOffset;
    public Animator anim;
    // Start is called before the first frame update
    void Start()
    {
        offset = Random.Range(0f, maxOffset);
        anim = GetComponent<Animator>();
        anim.enabled = false;
        StartCoroutine("animOffset");
    }

    IEnumerator animOffset()
    {
        yield return new WaitForSeconds(offset);
        anim.enabled = true;

    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
