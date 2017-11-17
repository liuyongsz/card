using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using PureMVC.Patterns;
using UnityEngine.Events;

/// <summary>
/// 技能系统 管理器
/// </summary>
public class SkillSystem :  Proxy<SkillSystem>
{
    public UnityAction TriggerStay;
    private List<SkillInstance> mSkillIns = new List<SkillInstance>();

    public void Update()
    {
        if(null != TriggerStay)
            TriggerStay();
    }

    /// <summary>
    /// 创建技能实列 但是删除受到触发完成的被动控制(触发器完成自动删除  控制触发器的删除即可)
    /// </summary>
    /// <param name="skillId"></param>
    public SkillInstance CreateInstance(int skillId,int ownerId, bool fromCfg = true)
    {
        SkillInstance ins = new SkillInstance();
        ins.Init(skillId, ownerId, fromCfg);

        return ins;
    }

    /// <summary>
    /// 删除触发器
    /// </summary>
    /// <param name="timing"></param>
    /// <param name="ownerId">默认所有的删除</param>
    public void RemoveTrigger(E_SkillTiming timing, E_SkillTrigger trigger, int ownerId = -1)
    {
        SkillInstance ins;
        int cnt = mSkillIns.Count;

        for (int i = 0; i < cnt; i++)
        {
            ins = mSkillIns[i];

            if(ownerId != -1)
                ins.RemoveTrigger(timing,trigger,ownerId);
            else if(ownerId == ins.OwnerId)
                ins.RemoveTrigger(timing, trigger, ownerId);
        }
    }

    /// <summary>
    /// 某个时机执行技能操作
    /// </summary>
    /// <param name="timing"></param>
    public void Excute(E_SkillTiming timing)
    {
        SkillInstance ins;
        int cnt = mSkillIns.Count;

        for (int i = 0; i < cnt; i++)
        {
            ins = mSkillIns[i];
            ins.Excute(timing);
        }
    }

    public void RemoveInstance(SkillInstance ins)
    {
        mSkillIns.Remove(ins);
    }
}
