using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/// <summary>
/// 技能触发器
/// 震动
/// </summary>
public class Trigger_ShakeScreen : AbstractSkillTrigger
{
    override public void Start(SkillInstance ins)
    {
        //GetComponent<Transform>().DOShakePosition(0.2f, 0.2f, 50, 360, false);

        base.Exit(ins);
    }
}
