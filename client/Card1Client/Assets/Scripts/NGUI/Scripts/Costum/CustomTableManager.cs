///作者  zhangrj
///日期  2014112
///功能  自定义滚动条管理  
///目标  实现button控制滚动条
using UnityEngine;
using System.Collections;

[AddComponentMenu("NGUI/Custom/TableManager")]
public class CustomTableManager : MonoBehaviour
{

    public CustomScrollView view;
    public MonoBehaviour up;
    public MonoBehaviour down;

    public float dragFower;
    private Vector3 offset;
    PressTimer pTimer = new PressTimer();
    Vector3 dragDelta;

    void Awake()
    {

        if (up != null)
        {
            UIEventListener.Get(up.gameObject).onClick = on_click;
            UIEventListener.Get(up.gameObject).onPress = on_press;
        }
        if (down != null)
        {
            UIEventListener.Get(down.gameObject).onClick = on_click;
            UIEventListener.Get(down.gameObject).onPress = on_press;
        }
        if (dragFower == 0) dragFower = 1;
        Vector3 vTemp = Vector3.zero;
        vTemp.x = 0;
        vTemp.y =  dragFower;
        vTemp.z =  0;
        offset = vTemp;
        pTimer.Set(false, Time.realtimeSinceStartup);
    }

    void Update()
    {
        if (view.shouldMoveHorizontally || view.shouldMoveVertically)
        {
            up.gameObject.SetActive(true);
            down.gameObject.SetActive(true);
        }
        else
        {
            up.gameObject.SetActive(false);
            down.gameObject.SetActive(false);
        }
        if (view == null || !pTimer.press)
            return;
        view.Drag(dragDelta);
        //if (view.panel.clipOffset.y >= 20 || view.panel.clipOffset.y <= -view.panel.baseClipRegion.w + view.panel.baseClipRegion.y + 20)
        //    press = false;
    }

    void on_click(GameObject go)
    {
        if (view == null)
            return;
        if (pTimer.press || (Time.realtimeSinceStartup - pTimer.timer < 0.5f))
            return;
        if (go.name == up.name)
        {
            view.Press(true);
            view.Drag(offset);
            view.Press(false);
        }
        else if (go.name == down.name)
        {
            view.Press(true);
            view.Drag(-offset);
            view.Press(false);
        }
    }

    void on_press(GameObject go, bool result)
    {
        if (view == null)
            return;
        if (result)
        {
            view.Press(true);
            pTimer.Set(true, Time.realtimeSinceStartup);

            if (go.name == up.name)
            {
                dragDelta = Vector3.up * 0.1f;
            }
            else if (go.name == down.name)
            {
                dragDelta = Vector3.down * 0.1f;
            }
        }
        else
        {
            view.Press(false);
            pTimer.Set(false, Time.realtimeSinceStartup);
        }
    }

    /// <summary>
    /// 
    /// </summary>
    class PressTimer
    {
        public bool press;
        public float timer;

        public void Set(bool _press, float _timer)
        {
            this.press = _press;
            this.timer = _timer;
        }
    }
}
