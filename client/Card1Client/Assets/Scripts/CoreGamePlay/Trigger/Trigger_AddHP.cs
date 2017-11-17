using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class Trigger_AddHP : AbstractSkillTrigger
{
    override public void Start(SkillInstance ins)
    {
        base.Exit(ins);
    }
}
