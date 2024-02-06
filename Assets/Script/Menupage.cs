
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menupage : MonoBehaviour
{   
    
    public void PlayBtn()
    {
        SceneManager.LoadScene(1);
    }
    public void SettingBtn()
    {
        SceneManager.LoadScene(2);
    }
    public void QuitBtn(){
        Application.Quit();
    }
}
