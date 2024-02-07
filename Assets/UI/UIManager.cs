using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour
{
   
   private void OnEnable() {
    VisualElement ui = GetComponent<UIDocument>().rootVisualElement;
    Button startBtn = ui.Q<Button>("startbtn");
    Button settingtBtn = ui.Q<Button>("settingbtn");
    Button quitBtn = ui.Q<Button>("quitbtn");

    startBtn.clicked +=  () =>SceneManager.LoadScene(1);
    settingtBtn.clicked += () => SceneManager.LoadScene(2);
    quitBtn.clicked += () => Application.Quit();
   }
  
}
