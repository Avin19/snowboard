using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;


public class levelselectpage : MonoBehaviour
{   [SerializeField] private TMP_Text highScoreText;

    
    // Start is called before the first frame update
    void Start()
    {
      
    highScoreText.text =$"HighScore : {PlayerPrefs.GetInt("HighScore", 0)}";
        
    
        
    }

    
   
    public void LevelSelector(int l)
    {   
        SceneManager.LoadScene(l);
        //Scoresystem.canRunTheScore =true;
       
    }
}
