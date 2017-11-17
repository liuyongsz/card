using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/// <summary>
/// 技能触发借口
/// 
/// 有Stay()需要 Start->System::TriggerStay注册事件 和Exit删除
/// </summary>
public interface ISkillTrigger
{
    void Init(string args);
    void Reset();

    ISkillTrigger Clone();

    /// <summary>触发开始</summary>
    void Start(SkillInstance ins);
    /// <summary>触发中</summary>
    void Stay(SkillInstance ins);
    /// <summary>触发结束</summary>
    void Exit(SkillInstance ins);

    void SetOwnerID(int ownerId);
    /// <summary>获取所属者</summary>
    int GetOwnerID();

    void SetTrigger(E_SkillTrigger trigger);
    E_SkillTrigger GetTrigger();
}
