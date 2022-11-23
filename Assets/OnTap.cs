using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnTap : MonoBehaviour
{
    public GameObject chocolate;
    ParticleSystem ps;
    // Start is called before the first frame update
    void Start()
    {
        ps = chocolate.GetComponent<ParticleSystem>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Play()
    {
        ps.Play();
    }
}
