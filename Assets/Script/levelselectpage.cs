using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using GoogleMobileAds.Api;
using System;

public class levelselectpage : MonoBehaviour
{   [SerializeField] private TMP_Text highScoreText;
    private BannerView bannerView;
    
    // Start is called before the first frame update
    void Start()
    {
      
    highScoreText.text =$"HighScore : {PlayerPrefs.GetInt("HighScore", 0)}";
        
    Invoke(nameof(ShowBannerADs),0.5f);
        
    }

    void ShowBannerADs()
    {
        MobileAds.Initialize(initStat =>{});
       
            
            
    
    }
    void Update()
    {
        
    }
    public void LevelSelector(int l)
    {   
        SceneManager.LoadScene(l);
        //Scoresystem.canRunTheScore =true;
       
    }
}
