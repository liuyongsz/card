using UnityEngine;
using System.Collections.Generic;
/// <summary>
/// 控制动画播放\暂停
/// </summary>
public class AnimationControl : MonoBehaviour
{
    /// <summary>
    /// 启用 暂停
    /// </summary>
    public static bool bEnabeld = false;
    public static List<AnimationControl> ListAnimation = new List<AnimationControl>();
    /// <summary>
    /// 设置动画启用 暂停
    /// </summary>
    /// <param name="bValue"></param>
    public static void SetAniamtionEnabled(bool bValue)
    {
        bEnabeld = bValue;
        for (int i = 0, len = ListAnimation.Count; i < len; i++)
        {
            AnimationControl anima = ListAnimation[i];
            if (anima == null || anima.mAnimation == null)
                continue;
            if (!bValue)
            {
                SetNormalized(anima.mAnimation, 0.1f);
            }
            anima.mAnimation.enabled = bValue;
        }
    }

    /// <summary>
    /// 设置位置
    /// </summary>
    /// <param name="animation"></param>
    /// <param name="normal"></param>
    /// <returns></returns>
    private static bool SetNormalized(Animation animation, float normal)
    {
        AnimationState aState = GetAniaNamePlaying(animation);
        if (aState == null)
            return false;

        aState.normalizedTime = Mathf.Clamp01(normal);
        return true;
    }

    /// <summary>
    /// 得到当前动画　播放的名字
    /// </summary>
    /// <param name="animation"></param>
    /// <returns></returns>
    public static AnimationState GetAniaNamePlaying(Animation animation)
    {
        if (animation == null || !animation.isPlaying)
            return null;

        foreach (AnimationState aState in animation)
        {
            if (aState.clip == null)
                continue;
            if (animation.IsPlaying(aState.clip.name))
            {
                return aState;
            };
        }
        return null;
    }

    /// <summary>
    /// 增
    /// </summary>
    /// <param name="aniaml"></param>
    /// <returns></returns>
    public static bool AddAnimation(AnimationControl aniaml)
    {
        if (aniaml == null)
            return false;
        if (ListAnimation.Contains(aniaml))
        {
            return false;
        }
        aniaml.mAnimation.enabled = bEnabeld;
        ListAnimation.Add(aniaml);
        return true;
    }

    /// <summary>
    /// 删
    /// </summary>
    /// <param name="aniaml"></param>
    /// <returns></returns>
    public static bool DelAniation(AnimationControl aniaml)
    {
        if (aniaml == null)
            return false;
        if (ListAnimation.Contains(aniaml))
        {
            ListAnimation.Remove(aniaml);
            return true;
        }
        return false;
    }

    /// <summary>
    /// 动画
    /// </summary>
    public Animation mAnimation;
    // Use this for initialization
    void Start()
    {
        mAnimation = GetComponent<Animation>();
        if (mAnimation == null)
            GameObject.Destroy(this);

        AddAnimation(this);
    }

    /// <summary>
    /// 删除
    /// </summary>
    void OnDestroy()
    {
        DelAniation(this);
    }
}
