//----------------------------------------------
//            NGUI: Next-Gen UI kit
// Copyright © 2011-2014 Tasharen Entertainment
//----------------------------------------------

using UnityEngine;

//@brief: 视窗单元项显示与控制脚本
public class UIGridItem : MonoBehaviour
{
    //存放脚本对象列表
    public MonoBehaviour[] mScripts ;
    public Transform SelectedItem;
    /// <summary>是否上锁  上锁后不可选择了</summary>
    public bool Locked;
    public object oData;
	public int miCurIndex = -1;
    public UIGrid Owner;

    private bool m_selected = false;
	public void setIndex(int iIndex )
	{
		miCurIndex = iIndex;
	}
	public int GetIndex()
	{
		return miCurIndex;
	}

    public delegate void VoidDelegate(UIGridItem item);
    public delegate void BoolDelegate(UIGridItem item, bool state);
    public delegate void FloatDelegate(UIGridItem item, float delta);
    public delegate void VectorDelegate(UIGridItem item, Vector2 delta);
    public delegate void ObjectDelegate(UIGridItem item, GameObject draggedObject);
    public delegate void KeyCodeDelegate(UIGridItem item, KeyCode key);

    public object parameter;

    public VoidDelegate onSubmit;
    public VoidDelegate onClick;
    public VoidDelegate onDoubleClick;
    public BoolDelegate onHover;
    public BoolDelegate onPress;
    public BoolDelegate onSelect;
    public FloatDelegate onScroll;
    public VectorDelegate onDrag;
    public ObjectDelegate onDrop;
    public KeyCodeDelegate onKey;

    public void Start()
    {
        if (null != SelectedItem)
        {
            SelectedItem.gameObject.SetActive(m_selected);
        }
    }

    void OnSubmit() { if (onSubmit != null) onSubmit(this); }
    void OnClick() { if (onClick != null) onClick(this); }
    void OnDoubleClick() { if (onDoubleClick != null) onDoubleClick(this); }
    void OnHover(bool isOver) { if (onHover != null) onHover(this, isOver); }
    void OnPress(bool isPressed) { if (onPress != null) onPress(this, isPressed); }

    void OnSelect(bool selected) {

        if (Locked)
            return;

        RaycastHit hit;
        UICamera.Raycast(Input.mousePosition,out hit);

        if (null == hit.transform|| hit.transform.GetComponent<UIScrollView>() == null)
            return;

        if (null != Owner && null != Owner.OldSelectedItem)
            Owner.OldSelectedItem.Selected = false;

        Owner.OldSelectedItem = this;

        if (null != SelectedItem)
        {
            SelectedItem.gameObject.SetActive(selected);
        }

        Selected = selected;

        if (onSelect != null) onSelect(this, selected);
    }

    public bool Selected
    {
        get
        {
            return m_selected;
        }
        set
        {
            if (null != SelectedItem)
                SelectedItem.gameObject.SetActive(value);
            m_selected = value;
        }
    }

    void OnScroll(float delta) { if (onScroll != null) onScroll(this, delta); }
    void OnDrag(Vector2 delta) { if (onDrag != null) onDrag(this, delta); }
    void OnDrop(GameObject go) { if (onDrop != null) onDrop(this, go); }
    void OnKey(KeyCode key) { if (onKey != null) onKey(this, key); }

    void OnDestroy() 
    { 
        if( mScripts != null )
        {
            for( int i = 0 ; i < mScripts.Length ; i++ )
            {
                mScripts[i] = null;
            }
            mScripts = null;
        }
    }
}