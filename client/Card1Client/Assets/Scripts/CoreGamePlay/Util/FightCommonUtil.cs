using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class FightCommonUtil
{
    /// <summary>检测卡牌当前等级技能是否有使用目标</summary>
    /// <param name="cfg"></param>
    /// <param name="lv"></param>
    /// <returns></returns>
    public static bool CheckCardSkillHaveTarget(TD_Card cfg,int lv)
    {
        if (null == cfg)
            return false;

        if (lv <= 0)
            lv = 1;

        string skillStr = cfg.skill_list;

        string[] skills = skillStr.Split(';');

        string curstr = skills[lv - 1];

        if (curstr.IsNullOrEmpty())
            return false;

        string[] skillInfo = curstr.Split(':');

        string useSkill = skillInfo[0];

        TD_Skill data = SkillConfig.GetItem(useSkill.ToInt());

        return data.effect_target.IsNullOrEmpty();
    }
}
