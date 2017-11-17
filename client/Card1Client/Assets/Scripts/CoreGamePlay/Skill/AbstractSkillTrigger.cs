using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/// <summary>
/// 技能触发抽象类
/// </summary>
public abstract class AbstractSkillTrigger : ISkillTrigger
{
    public SkillInstance OwnSkill;

    virtual public void Init(string args)
    {

    }
    virtual public void Reset()
    {

    }

    virtual public ISkillTrigger Clone()
    {
        return null;
    }

    virtual public bool Excute(ISkillTrigger instance, float curTime)
    {
        return false;
    }

    virtual public void Start(SkillInstance ins)
    {
        OwnSkill = ins;
    }

    virtual public void Stay(SkillInstance ins)
    {
       
    }

    virtual public void Exit(SkillInstance ins)
    {
        OwnSkill = null;
        ins.RemoveTrigger(this);
    }

    virtual public void SetOwnerID(int ownerId)
    {

    }

    virtual public int GetOwnerID()
    {
        return 0;
    }

    virtual public void SetTrigger(E_SkillTrigger trigger)
    {

    }

    virtual public E_SkillTrigger GetTrigger()
    {
        return E_SkillTrigger.Null;
    }
}
