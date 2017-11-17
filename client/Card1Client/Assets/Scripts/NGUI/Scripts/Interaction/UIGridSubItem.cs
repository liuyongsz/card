//----------------------------------------------
//            NGUI: Next-Gen UI kit
// Copyright © 2011-2014 Tasharen Entertainment
//----------------------------------------------

using UnityEngine;
using System.Collections.Generic;

/// <summary>
/// 绑定对象子结点响应点击事件
/// </summary>
public class UIGridSubItem : MonoBehaviour
{
    public UIGridItem oEventReciever;  /// 视窗的格子对象
    public UIGrid mGrid;                       /// 视窗对象

    ///点击时回调
    void OnClick() 
    {
        if ( mGrid != null && oEventReciever != null )
        {
            mGrid.OnClickItem( oEventReciever, this.gameObject );
        }
    }

    void OnDestroy()
    {
        oEventReciever = null;
        mGrid = null;
    }
}