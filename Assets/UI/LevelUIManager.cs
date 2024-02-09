
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;

public class LevelUIManager : MonoBehaviour
{


   private void OnEnable()
   {
      VisualElement root = GetComponent<UIDocument>().rootVisualElement;
      Label label = root.Q<Label>("score");
      Button backBtn = root.Q<Button>("backbtn");
      Button oneBtn = root.Q<Button>("1");
      Button twoBtn = root.Q<Button>("2");
      Button threeBtn = root.Q<Button>("3");
      Button fourBtn = root.Q<Button>("4");
      Button fiveBtn = root.Q<Button>("5");
      Button sixBtn = root.Q<Button>("6");
      Button sevenBtn = root.Q<Button>("7");
      Button eightBtn = root.Q<Button>("8");
      Button nineBtn = root.Q<Button>("9");

      backBtn.clicked +=  () =>SceneManager.LoadScene(0);
      oneBtn.clicked += () => SceneManager.LoadScene(3);
      twoBtn.clicked += () => SceneManager.LoadScene(3);
      threeBtn.clicked += () => SceneManager.LoadScene(3);
      fourBtn.clicked += () => SceneManager.LoadScene(3);
      fiveBtn.clicked += () => SceneManager.LoadScene(3);
      sixBtn.clicked += () => SceneManager.LoadScene(3);
      sevenBtn.clicked += () => SceneManager.LoadScene(3);
      eightBtn.clicked += () => SceneManager.LoadScene(3);
      nineBtn.clicked += () => SceneManager.LoadScene(3);



   }
}
