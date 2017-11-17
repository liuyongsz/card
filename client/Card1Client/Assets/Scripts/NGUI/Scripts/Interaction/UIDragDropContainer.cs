//----------------------------------------------
//            NGUI: Next-Gen UI kit
// Copyright © 2011-2014 Tasharen Entertainment
//----------------------------------------------

using UnityEngine;

[AddComponentMenu("NGUI/Interaction/Drag and Drop Container")]
public class UIDragDropContainer : MonoBehaviour
{
	public Transform reparentTarget;
    //
    #region 释放
    //add by chenfei 20150824
    void OnDestroy()
    {
        reparentTarget = null;
    }
    #endregion;

}
