using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{   Rigidbody2D rb2d;
    SurfaceEffector2D surfaceEffector2D;
    [SerializeField] float torqueAmount = 1f;
    bool canMove= true;
    
    
    // Start is called before the first frame update
    void Start()
    {
        rb2d = GetComponent<Rigidbody2D>();
        surfaceEffector2D = FindObjectOfType<SurfaceEffector2D>();
    }

    // Update is called once per frame
    void Update()
    {   if(canMove)
        {
        RotatePlayer();
        
        }
    
    }
    public void ContinueGame(){
         canMove =true;
        surfaceEffector2D.speed =20f;
        surfaceEffector2D.forceScale=0.5f;
        FindObjectOfType<Crash>().canPlay =true;
    }
    public void DisableControl()
    {
        canMove =false;
        surfaceEffector2D.speed =0f;
        surfaceEffector2D.forceScale=0f;
        
    }
   
    void RotatePlayer()
    {   
        if(Touchscreen.current.primaryTouch.press.isPressed)
        {
            Vector2 touchpoint= Touchscreen.current.primaryTouch.position.ReadValue();

            if(touchpoint.x<500)
            {
                rb2d.AddTorque(torqueAmount);
            }
            else if (touchpoint.x>500)
            {
                rb2d.AddTorque(-torqueAmount);
            }
        }
        
    }
}
