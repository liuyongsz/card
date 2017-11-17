using System;
using System.Collections.Generic;

/// <summary>
/// 技能实类
/// </summary>
public class SkillInstance
{
    public int SkillId;
    public int OwnerId;

    private Dictionary<E_SkillTiming, List<ISkillTrigger>> mTriggeres = new Dictionary<E_SkillTiming, List<ISkillTrigger>>();

    /// <summary>
    /// 
    /// </summary>
    /// <param name="skillId"></param>
    /// <param name="ownerId"></param>
    /// <param name="fromCfg">是否根据配置创建</param>
    public void Init(int skillId,int ownerId,bool fromCfg = true)
    {
        this.OwnerId = ownerId;
        this.SkillId = skillId;

        if (fromCfg)
            CreateTriggerFromConfig();
    }

    private void CreateTriggerFromConfig()
    {
        TD_Skill itm = SkillConfig.GetItem(SkillId);

        LoaderPrefab(itm.res);
    }

    public void LoaderPrefab(string abName)
    {
        if (abName.IsNullOrEmpty())
        {
            UnityEngine.Debug.LogError(SkillId +" : Res is Null!!!");
            return;
        }
           
        ResourceManager.Instance.LoadPrefab(abName, OnLoader_PrefabComplete, OnLoader_Error);
    }

    private void OnLoader_PrefabComplete(string abName,UnityEngine.GameObject obj)
    {
        
    }

    private void OnLoader_Error(string error)
    {

    }

    public void RemoveTrigger(ISkillTrigger trigger)
    {
        foreach(var child in mTriggeres)
        {
            List<ISkillTrigger> list = child.Value;
            int cnt = list.Count;

            for(int i = 0; i < cnt;i++)
            {
                if(list[i] == trigger)
                {
                    list.RemoveAt(i);

                    if(list.Count == 0)
                    {
                        mTriggeres.Remove(child.Key);
                    }

                    break;
                }
            }
        }

        if (mTriggeres.Count == 0)
        {
            SkillSystem.Instance.RemoveInstance(this);
        }
    }

    public void Excute(E_SkillTiming timing)
    {
        List<ISkillTrigger> list;
        
        if(mTriggeres.TryGetValue(timing, out list))
        {
            int cnt = list.Count;

            for (int i = 0; i < cnt; i++)
                list[i].Start(this);
        }
    }

    /// <summary>
    /// 删除触发器
    /// </summary>
    /// <param name="timing">时机</param>
    /// <param name="trigger">触发器</param>
    /// <param name="ownerId">技能拥有者</param>
    public void RemoveTrigger(E_SkillTiming timing, E_SkillTrigger trigger,int ownerId = 0)
    {
        List<ISkillTrigger> list;
        ISkillTrigger itm;
        if (mTriggeres.TryGetValue(timing, out list))
        {
            int cnt = list.Count;

            for (int i = 0; i < cnt; i++)
            {
                itm = list[i];

                if (itm.GetOwnerID() == ownerId && itm.GetTrigger() == trigger)
                    itm.Exit(this);
                else if(ownerId > 0)
                    itm.Exit(this);
            }  
        }
    }
}
