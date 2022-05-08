using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using System;
using StartApp;

public class LevelController : MonoBehaviour
{   private Scene levelSelected;
    private float score;
    private Scoresystem scoresystem;

   
    void Start()
    {
        levelSelected = SceneManager.GetActiveScene();
        scoresystem = GameObject.FindObjectOfType<Scoresystem>();
       
    }

    public void PlayAgain()
    {
        int currentHighScore= PlayerPrefs.GetInt("Highscore",0);
        if(score>currentHighScore)
        {
            PlayerPrefs.SetInt("HighScore",Mathf.FloorToInt(score));
        }
        SceneManager.LoadScene(levelSelected.name);
    }
    
    public void Conttn() 
    {
          scoresystem.canRunTheScore = true;  
          AdSdk.Instance.ShowDefaultAd();
          gameObject.SetActive(false); 
          
          FindObjectOfType<PlayerController>().ContinueGame();
        
    }
    public void ReturnToMenu()
    {
        SceneManager.LoadScene("LevelSelect");
    }
}
