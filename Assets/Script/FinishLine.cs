using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FinishLine : MonoBehaviour
{   [SerializeField] float reloadTime =1.5f;
    [SerializeField] ParticleSystem finishEffect;
    

    private void Start() {
        
    }
    void OnTriggerEnter2D (Collider2D other)
    {
        if( other.tag == "Player")
        {   
            finishEffect.Play();
           Invoke("ReloadScence2", reloadTime);
        }
    }

    void ReloadScence2()
    {
        SceneManager.LoadScene(1);
    }
}
