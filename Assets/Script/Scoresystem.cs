using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Scoresystem : MonoBehaviour
{   [SerializeField] private TMP_Text scoreText;
    private float score;

    private float multiplex =2f;

    private Scene playerAtLevel;
    public bool canRunTheScore;

   

    private void Start() {
        canRunTheScore =true;
        playerAtLevel = SceneManager.GetActiveScene();
    
       
    }
    public void StopScoreDisplay()
    {canRunTheScore=false;}
    void Update()
    {  
        Debug.Log(canRunTheScore); 
        if(canRunTheScore)
    {    ScoreDisplay();
    }
        
    }

    private void ScoreDisplay()
    {
         score += Time.deltaTime *multiplex * playerAtLevel.buildIndex;
         scoreText.text =$"Score : {Mathf.FloorToInt(score).ToString()}";
    }
    private void OnDestroy() {
        int highScore = PlayerPrefs.GetInt("HighScore",0);
        if(score>highScore){
        PlayerPrefs.SetInt("HighScore", Mathf.FloorToInt(score));
        }

    }
   
}
