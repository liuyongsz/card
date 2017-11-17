using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

/// <summary>
/// 配置 eff_加特效预制abName
/// </summary>
public class Trigger_AddEffect : AbstractSkillTrigger
{
    public static Dictionary<UnityEngine.Transform, Trigger_AddEffect> Effects = new Dictionary<UnityEngine.Transform, Trigger_AddEffect>();

    public Transform EffectObject = null;
    public string SkillABName = null;
    public bool NormalUse = false;

    override public void Start(SkillInstance ins)
    {
        if(null == SkillABName)
        {
            Debug.LogError("Trigger_AddEffect No SkillABName!");
            return;
        }

        base.Start(ins);

        if (null == EffectObject)
        {
            ResourceManager.Instance.LoadPrefab(SkillABName, OnLoader_Complete, OnLoader_Error);
        }
        else
        {
            EffectObject.gameObject.SetActive(true);
        }
    }

    /// <summary>预加载特效</summary>
    public void PreLoaderEffect(string skillABName)
    {
        ResourceManager.Instance.LoadPrefab(skillABName, OnLoader_PreComplete, OnLoader_Error);
    }

    private void OnLoader_Error(string error)
    {

    }

    private void OnLoader_PreComplete(string abName, UnityEngine.GameObject obj)
    {
        if (null != EffectObject)
            GameObject.Destroy(EffectObject.gameObject);

        Effects[obj.transform] = this;
        EffectObject = obj.transform;

        obj.SetActive(false);
    }

    private void OnLoader_Complete(string abName, UnityEngine.GameObject obj)
    {
        if (null != EffectObject)
            GameObject.Destroy(EffectObject.gameObject);

        Effects[obj.transform] = this;
        EffectObject = obj.transform;
    }

    override public void Exit(SkillInstance ins)
    {
        base.Exit(ins);
        EffectObject = null;
    }
}
