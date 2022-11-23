using UnityEngine;
using System.Collections;

public class DemonicPortal : MonoBehaviour
{

    public GameObject pentagramFX;
    public GameObject portalFX;
    public GameObject innerFX;
    public ParticleSystem sparkParticles;
    public ParticleSystem smokeParticles;
    public ParticleSystem fireParticles;
    public AudioSource portalAudio;

    private bool portalActive = false;

    void Start()
    {

        portalFX.SetActive(false);
        pentagramFX.SetActive(false);
        StartCoroutine("OpenPortal");

    }


    void Update()
    {

        if (Input.GetButtonDown("Fire1"))
        {


            if (portalActive == false)
            {

               // StartCoroutine("OpenPortal");

            }
            

        }

        // Reset effect

        //if (Input.GetButtonDown("Fire2"))
        {

        

        }

    }


    IEnumerator OpenPortal()
    {

        portalActive = true;

        portalAudio.Play();
        pentagramFX.SetActive(true);
        yield return new WaitForSeconds(3.0f);

        portalFX.SetActive(true);
        innerFX.SetActive(true);
        // pentagramFX.SetActive(false);

        yield return new WaitForSeconds(2.9f);
        sparkParticles.Stop();
        fireParticles.Stop();
  

        yield return new WaitForSeconds(2.0f);
        smokeParticles.Stop();


        yield return new WaitForSeconds(2.0f);
        innerFX.SetActive(false);

        yield return new WaitForSeconds(3.0f);
        portalFX.SetActive(false);
        pentagramFX.SetActive(false);

        portalActive = false;

    }

}
