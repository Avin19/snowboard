using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class UIManager : MonoBehaviour
{
   
   private void OnEnable() {
    VisualElement ui = GetComponent<UIDocument>().rootVisualElement;
    Button startBtn = ui.Q<Button>("startbtn");
    Button settingtBtn = ui.Q<Button>("settingbtn");
    Button quitBtn = ui.Q<Button>("quitbtn");
   }
}
