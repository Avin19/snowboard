using UnityEngine;
using UnityEngine.SceneManagement;


public class Crash : MonoBehaviour
{   [SerializeField] ParticleSystem crashEffect;
    [SerializeField] private GameObject gameOver;
    
    AudioSource audioHurt;
    public bool canPlay =true;
    private Scoresystem scoreSystem;

    void Start()
    {   gameOver.SetActive(false);
        audioHurt= GetComponent<AudioSource>();
        scoreSystem = GameObject.FindObjectOfType<Scoresystem>(); 
    }
    void OnTriggerEnter2D(Collider2D other)
    {
        if(other.tag=="Ground" && canPlay)
        {   
            FindObjectOfType<PlayerController>().DisableControl();
            crashEffect.Play();
            canPlay= false;
            audioHurt.Play();
            scoreSystem.canRunTheScore =false;
            Invoke("ReloadScence", 0.5f);
        }
    }
    void ReloadScence()   
    {
        gameOver.SetActive(true);        
    }
}