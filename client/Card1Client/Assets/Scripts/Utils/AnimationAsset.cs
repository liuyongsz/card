using UnityEngine;

public class AnimationAsset : ScriptableObject
{
    public AnimationClip mainClip;
    public AnimationClip[] animClip;
    #region 释放
    //add by chenfei 20150824
    void OnDestroy()
    {
        mainClip = null;
        for (int i = 0; i < animClip.Length; i++)
        {
            animClip[i] = null;
        }

    }
    #endregion;

}
