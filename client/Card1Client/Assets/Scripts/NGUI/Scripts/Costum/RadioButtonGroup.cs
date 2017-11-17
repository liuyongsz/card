using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// RadioButton 组
/// Author : YangDan
/// Date : 2014/10/28
/// </summary>
public class RadioButtonGroup : MonoBehaviour
{
    public List<UIButton> list = new List<UIButton>();

    public delegate void RadioButtonDelagate(GameObject button);
    private RadioButtonDelagate m_GroupChangeEvent;

    public RadioButtonDelagate GroupChangeEvent
    {
        set { m_GroupChangeEvent = value; }
    }

    private int m_selectedIndex = -1;

    private UIButton m_lastButton;

    public int SelectedIndex
    {
        get
        {
            return m_selectedIndex;
        }
        set
        {
            m_selectedIndex = Mathf.Min(value, list.Count - 1);
            m_selectedIndex = Mathf.Max(m_selectedIndex, 0);
            UpdateGroup();
        }
    }

    public void Reset()
    {
        m_selectedIndex = -1;
        for (int i = 0; i < list.Count; i++)
        {
            UIButton button = list[i];
            button.isEnabled = (m_selectedIndex != i);
        }
    }

    public void Init()
    {
        for (int i = 0; i < list.Count; i++)
        {
            UIButton button = list[i];
            button.isEnabled = (m_selectedIndex != i);
            UIEventListener.Get(button.gameObject).onClick = OnChangeEvent;
        }
    }

    public GameObject SelectedItem
    {
        get
        {
            return list[m_selectedIndex].gameObject;
        }
        set
        {
            int index = list.IndexOf(value.GetComponent<UIButton>());
            if (index > -1)
                m_selectedIndex = index;

            UpdateGroup();
        }
    }

    private void OnChangeEvent(GameObject go)
    {
        UIButton button = go.GetComponent<UIButton>();
        m_selectedIndex = list.IndexOf(button);

        UpdateGroup();
    }

    private void UpdateGroup()
    {
        if (m_lastButton != null)
        {
            m_lastButton.isEnabled = true;
        }

        m_lastButton = list[m_selectedIndex];
        m_lastButton.isEnabled = false;

        if (m_GroupChangeEvent != null)
            m_GroupChangeEvent(m_lastButton.gameObject);
    }
    #region 释放
    //add by chenfei 20150824
    void OnDestroy()
    {

        if (null != list)
        {
            list.Clear();
        }

        m_lastButton = null;
    }
    #endregion;
}
