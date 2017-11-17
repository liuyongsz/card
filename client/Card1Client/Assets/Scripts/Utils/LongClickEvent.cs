using System;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

public class LongClickEvent : MonoBehaviour
{

    public delegate void LongClickCallBack(GameObject go, bool isPressed);
    public LongClickCallBack onPress;
    private GameObject go;
    public float time = 0;
    public float duration = 1;
    private bool isPress = false;
    private Vector3 position;
    void Start()
    {
        go = this.transform.gameObject;
        UIEventListener.Get(go).onPress = OnPressed;
    }
    void OnPressed(GameObject go, bool isPressed)
    {
        if (isPressed)
        {
           
            if (go.GetComponentsInParent<UIScrollView>().Length > 0)
            {
                position = go.GetComponentsInParent<UIScrollView>()[0].transform.localPosition;
            }
            isPress = true;
        }
        else
        {
            isPress = false;
            onPress(this.transform.gameObject, isPress);
        }
    }
    // Update is called once per frame
    void FixedUpdate()
    {
        if (onPress != null && isPress)
        {
            if (time >= duration)
            {
                time = 0;
                if (go.GetComponentsInParent<UIScrollView>().Length > 0)
                {
                    if (Mathf.Abs(go.GetComponentsInParent<UIScrollView>()[0].transform.localPosition.y - position.y) >= 1)
                    {
                        return;
                    }
                }
                onPress(this.transform.gameObject, isPress);
            }
            time += 0.2f;
        }
    }

    public static LongClickEvent Get(GameObject go)
    {
        if (!go.GetComponent<LongClickEvent>())
        {
            go.AddComponent<LongClickEvent>();
        }
        LongClickEvent listener = go.GetComponent<LongClickEvent>();
        return listener;
    }
}
