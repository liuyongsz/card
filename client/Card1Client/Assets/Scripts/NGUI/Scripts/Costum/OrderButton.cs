using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// 指令按钮
/// 20151222
/// zhangrj
/// </summary>
public class OrderButton : UIButton
{

    UILabel label;

    public static OrderButton Current;

    public string Text
    {
        get
        {
            if (label != null)
                return label.originalText;
            else
                return string.Empty;
        }
    }

    protected override void OnInit()
    {
        base.OnInit();
        Transform lbl = transform.FindChild("Content");
        if (lbl != null)
            label = lbl.GetComponent<UILabel>();
    }

    public new void SetState(State state, bool immediate)
    {
        base.SetState(state, immediate);
        if (label != null)
        {
            switch (state)
            {
                case State.Normal:
                    if (label.gameObject.activeSelf)
                        label.gameObject.SetActive(false);
                    break;
                case State.Hover:
                    if (!label.gameObject.activeSelf)
                        label.gameObject.SetActive(true);
                    break;
                case State.Pressed:
                    if (!label.gameObject.activeSelf)
                        label.gameObject.SetActive(true);
                    break;
                case State.Disabled:
                    if (label.gameObject.activeSelf)
                        label.gameObject.SetActive(false);
                    break;
            }
        }
    }
}
