using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// 高 中 低配 极简
/// </summary>
public class EffectLevel : MonoBehaviour {

    /// <summary>
    /// 默认低配
    /// </summary>
    public static GameQuality iEffectLevel = GameQuality.LOW;
    public static void SetEffectLevel(GameQuality level)
    {
        if (iEffectLevel != level)
        {
            iEffectLevel = level;
            NoticeLevelChange(iEffectLevel);
        }
    }

    /// <summary>
    /// 变化
    /// </summary>
    /// <param name="ilevel"></param>
    static void NoticeLevelChange(GameQuality level)
    {
        for (int i = 0; i < mGoList.Count; i++)
        {
            EffectLevel eLevel = mGoList[i];
            if (eLevel != null)
            {
                eLevel.LevelChange(level);
            }
        }
    }
    static List<EffectLevel> mGoList = new List<EffectLevel>();
    public static void AddGoList(EffectLevel eLevel)
    {
        if (eLevel != null)
            mGoList.Add(eLevel);
    }

    public static void ClearList()
    {
        mGoList.Clear();
    }

    public static void RemoveGoList(EffectLevel eLevel)
    {
        if (eLevel != null && mGoList.Contains(eLevel))
        {
            mGoList.Remove(eLevel);
        }
    }

    /// <summary>
    /// 高
    /// </summary>
    public bool mbHigh = false;

    /// <summary>
    /// 中
    /// </summary>
    public bool mbMiddle = false;

    /// <summary>
    /// 低
    /// </summary>
    public bool mbLow = false;

    /// <summary>
    /// 级科
    /// </summary>
    public bool mbMinimalism = false;

    /// <summary>
    /// 当前显示状态
    /// </summary>
    protected bool mbCurActive = false;

	// Use this for initialization
	void Start () {
        AddGoList(this);
        StartELevel();
        LevelChange(iEffectLevel);
	}
	
    void Destroy()
    {
        DestoryELevel();
        RemoveGoList(this);
    }

    /// <summary>
    /// 开始
    /// </summary>
    protected virtual void StartELevel()
    {

    }

    /// <summary>
    /// 级别变化
    /// </summary>
    /// <param name="ieLevel"></param>
    protected virtual void LevelChange(GameQuality level)
    {
        bool bShow = false;
        switch (level)
        {
            case GameQuality.SUPER_LOW://极简
                if (mbMinimalism)
                    bShow = true;
                break;
            case GameQuality.LOW://低
                if (mbLow)
                    bShow = true;
                break;
            case GameQuality.MIDDLE://中
                if (mbMiddle)
                    bShow = true;
                break;
            case GameQuality.HIGH://高
                if (mbHigh)
                    bShow = true;
                break;
        }
        mbCurActive = bShow;
        SetActive(mbCurActive);
    }

    /// <summary>
    /// 设置显示隐藏
    /// </summary>
    /// <param name="bShow"></param>
    protected virtual void SetActive(bool bShow)
    {

    }

    /// <summary>
    /// 删除
    /// </summary>
    protected virtual void DestoryELevel()
    {

    }
}
