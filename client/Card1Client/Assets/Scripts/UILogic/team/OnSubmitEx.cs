using UnityEngine;
using System.Collections;

public delegate void OnSubmitExCallBack();
public class OnSubmitEx : MonoBehaviour {

    // 产生事件的游戏体(Input Field)  
    public GameObject source_obj;
    public OnSubmitExCallBack submitExCallBack;
    void Start()
    {
        UIEventListener.Get(source_obj).onSelect = SelectGameObject;
    }
   

    void SelectGameObject(GameObject obj, bool status)
    {
        if (status)
        {
        }
        else
        {
            submitExCallBack();
        }
    }
    private void OnDestroy()
    {
        source_obj = null;
    }
}
