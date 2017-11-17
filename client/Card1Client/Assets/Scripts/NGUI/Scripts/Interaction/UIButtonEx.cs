//----------------------------------------------
//            NGUI: Next-Gen UI kit
// Copyright © 2011-2014 Tasharen Entertainment
//----------------------------------------------

using UnityEngine;
using System.Collections.Generic;

/// <summary>
/// Similar to UIButtonColor, but adds a 'disabled' state based on whether the collider is enabled or not.
/// </summary>

[AddComponentMenu("NGUI/Interaction/UIButtonEx")]
public class UIButtonEx : UIButton
{
    public GameObject mUIForeSprite;

    public string mstrNormalName;
    public string mstrPressName;
    public string mstrDisableName;

	protected override void SetState (State state, bool immediate)
	{
		base.SetState(state, immediate);
        if (mUIForeSprite != null)
        {
            UISprite uiSprite = mUIForeSprite.GetComponent<UISprite>();
            if (uiSprite != null)
            {
                if (string.IsNullOrEmpty(mstrPressName))
                {
                    mstrPressName = mstrNormalName;
                }
                if (string.IsNullOrEmpty(mstrDisableName))
                {
                    mstrDisableName = mstrNormalName;
                }
                switch (state)
                {
                    case State.Normal: uiSprite.spriteName = mstrNormalName; break;
                    case State.Hover: uiSprite.spriteName = mstrPressName; break;
                    case State.Pressed: uiSprite.spriteName = mstrPressName; break;
                    case State.Disabled: uiSprite.spriteName = mstrDisableName; break;
                }
            }
        }
	}
    #region 释放
    //add by chenfei 20150824
    void OnDestroy()
    {
        mUIForeSprite = null;
    }
    #endregion;
}
