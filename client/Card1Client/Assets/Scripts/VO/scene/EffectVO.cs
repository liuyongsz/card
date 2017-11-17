using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using NetProtocal;

[Serializable]
public class EffecterVO
{
    /// <summary></summary>
    public int Pid;
    /// <summary>类型(英雄,卡牌,玩家)</summary>
    public TargetType Type;
    /// <summary>位置</summary>
    public int Target;
    public void Prase(Effecter msg)
    {
        Pid = msg.pid;
        Type = msg.type;
        Target = msg.index;
    }
}

[Serializable]
public class EffectVO
{
    public EffecterVO Source;
    public EffecterVO Target;

    public HeroPropType HeroProp;
    public CardPropType CardProp;
    public RolePropType RoleProp;

    public TargetType Type;
    public int Value;
    public FightCardMsg CardItem = null;
    public void Prase(EffectMsg msg)
    {
        Value = msg.value;

        if(msg.card != null && msg.card.cardId > 0)
            CardItem = msg.card;

        Source = new EffecterVO();
        Source.Prase(msg.source);

        Target = new EffecterVO();
        Target.Prase(msg.target);

        Type = msg.target.type;
        //type 目标类型(英雄,卡牌,玩家)RolePropType,HeroPropType,CardPropType
        if (Target.Type == TargetType.Hero)
        {
            HeroProp = (HeroPropType)msg.prop;
        }
        else if (Target.Type == TargetType.Card)
        {
            CardProp = (CardPropType)msg.prop;
        }
        else if (Target.Type == TargetType.Role)
        {
            RoleProp = (RolePropType)msg.prop;
        }
    }

    public bool IsMe
    {
        get
        {
            return Source.Pid == PlayerProxy.Instance.Info.pid;
        }
    }
}
