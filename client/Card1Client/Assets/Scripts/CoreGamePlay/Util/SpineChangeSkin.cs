using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;

public class SpineChangeSkin
{
    public enum ESkin
    {
        [Description("不存在此套装，错误反馈专用")]
        Null = 100,
        [Description("动态组装套装基础")]
        Dynamic = 101,
        [Description("可选套装1")]
        Clothing001 = 102,
        [Description("可选套装2")]
        Clothing002 = 103,
    }

    public enum ESlot
    {
        Null = 200,
        Blet = 201,               //  腰带   
        Weapon = 202,             //  武器   
        BodyArmour = 203,         //  盔甲   
        Hair = 204,               //  头发   
        LeftHand = 205,           //  左手   
        LeftPauldron = 206,       //  左护肩 
        Leftleg = 207,            //  左腿   
        LeftShoes = 208,          //  左鞋   
        Shield = 209,             //  护盾   
        RightHand = 210,          //  右手   
        RightPauldron = 211,      //  右护肩 
        Rightleg = 212,           //  右腿   //
        RightShoes = 213,         //  右鞋子 //
    }
}
