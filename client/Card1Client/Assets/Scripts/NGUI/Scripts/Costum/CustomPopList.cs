///作者  zhangrj
///日期  2014115
///功能  自定义滚动条PopList  
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

[AddComponentMenu("NGUI/Custom/PopList")]
public class CustomPopList : MonoBehaviour {

    public enum Movement
    {
        Horizontal,
        Vertical,
    }

    public Movement movement = Movement.Vertical;

    public UIGridItem self;

    public UIGrid m_gird;

    public UIPlayTween playTween;

    private List<object> oDatas;

    public System.Action<UIGridItem> UpdateDataCallBack;
    public System.Action<int> onSelectedIndex;
    public System.Action<object> onSelectedObject;

    private int selectedIndex;

    public int Value
    {
        get { return selectedIndex; }
    }

    void Awake()
    {
        playTween.onFinished.Add(new EventDelegate(onTweenFinished));
        m_gird.SelectItem = OnClickSubItem;
        m_gird.BindCustomCallBack(OnUpdateDataRow);
        m_gird.StartCustom();
        selectedIndex = -1;
    }

    void OnEnable()
    {
        if (movement == Movement.Vertical)
        {
            Vector3 vTemp = Vector3.zero;
            vTemp.x = 1;
            vTemp.y = 0;
            vTemp.z = 1;
            playTween.tweenTarget.transform.localScale = vTemp;
        }
        else
        {
            Vector3 vTemp = Vector3.zero;
            vTemp.x = 0;
            vTemp.y = 1;
            vTemp.z = 1;
            playTween.tweenTarget.transform.localScale = vTemp;
        }
    }

    void OnClickSubItem(int index,bool active,bool select)
    {
        if (!active || !select) return;
        selectedIndex = index;
        playTween.Play(true);
    }

    void onTweenFinished()
    {
        if (selectedIndex >= 0)
        {
            if (onSelectedIndex != null)
                onSelectedIndex(selectedIndex);
            if (onSelectedObject != null)
                onSelectedObject(oDatas[selectedIndex]);
        }
    }

    public void AddItems(List<object> list)
    {
        oDatas = list;
        m_gird.AddCustomDataList(list);
    }

    public void SetdefaultObject()
    {
        if (UpdateDataCallBack != null)
            UpdateDataCallBack(self);
    }

    void OnUpdateDataRow(UIGridItem item)
    {
        if (UpdateDataCallBack != null)
            UpdateDataCallBack(item);
    }

    public void Clear()
    {
        m_gird.ClearCustomGrid();
    }
	
}
