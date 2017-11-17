
using UnityEngine;
using System.Collections;

[AddComponentMenu("NGUI/Interaction/ButtonPressActivate")]
public class UIButtonPressActivate : MonoBehaviour {

    public GameObject target;
    public bool state = true;

    void OnEnable() 
    {
        if (target != null)
            if (target != null) NGUITools.SetActive(target, !state); 
    }

    void OnPress(bool isPressed)
    {        
        if (isPressed)
        {
            if (target != null) NGUITools.SetActive(target, state); 
        }
        else
        {
            if (target != null) NGUITools.SetActive(target, !state); 
        }
       
    }  

    void OnDestroy()
    {
        target = null;
    }
}
