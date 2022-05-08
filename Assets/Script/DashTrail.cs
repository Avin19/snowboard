using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DashTrail : MonoBehaviour
{
    [SerializeField] ParticleSystem dashParticle;
    [SerializeField] SurfaceEffector2D surfaceEffector2D;
    float boostSpeed = 20f;
    float lowSpeed=10f;
    
    void Start()
    {
        surfaceEffector2D = FindObjectOfType<SurfaceEffector2D>();
    }

    // Update is called once per frame
    void Update()
    {
        if(surfaceEffector2D.speed ==0){
            dashParticle.Stop();
        }
    }
    void OnCollisionEnter2D(Collision2D other)
    {
        if(other.gameObject.tag =="Ground")
        {
            dashParticle.Play();
            surfaceEffector2D.speed= boostSpeed;
        
        }
    }
    void OnCollisionExit2D( Collision2D other)
    {
        if(other.gameObject.tag=="Ground")
        {
            dashParticle.Stop();
            surfaceEffector2D.speed=lowSpeed;
        }
    }
}
