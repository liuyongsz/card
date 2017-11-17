using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.Events;
using System.Xml;
using TinyBinaryXml;

public class TD_Skill
{
    public int id;
    public string res;
    public string des;
    public string name;
    public int point;
    public string animation;
    public string a_trigger;
    public string hero_out;
    public string hero_back;
    public string effect_target;
    /// <summary>主动画调用数值 填写对应的效果编号</summary>
    public string a_value;
}

public class SkillConfig : ConfigBase
{
    private static List<TD_Skill> m_data;
    private UnityAction m_callBack;
    public void LoadXml(UnityEngine.Events.UnityAction loadedFun = null)
    {
        m_callBack = loadedFun;
        LoadData("Skill", loadedFun);
    }

    public override void onloaded(AssetBundles.NormalRes data)
    {
        byte[] asset = (data as AssetBundles.BytesRes).m_bytes;

        if (asset == null)
            return;

        m_data = new List<TD_Skill>();

        TbXmlNode docNode = TbXml.Load(asset).docNode;
        if (docNode == null)
        {
            return;
        }

        List<TbXmlNode> xmlNodeList = docNode.GetNodes("Object/Property");
        int xmlNodeListLength = xmlNodeList.Count;

        if (xmlNodeListLength < 1)
        {
            return;
        }

        TD_Skill item;
        for (int i = 0; i < xmlNodeListLength; ++i)
        {
            TbXmlNode node = xmlNodeList[i] as TbXmlNode;

            item = new TD_Skill();
            item.id = node.GetIntValue("skill_id");
            item.res = node.GetStringValue("res");
            item.des = node.GetStringValue("skill_dis");
            item.name = node.GetStringValue("name");
            item.point = node.GetIntValue("skill_exp");
            item.animation = node.GetStringValue("animation");
            item.hero_out = node.GetStringValue("hero_out");
            item.hero_back = node.GetStringValue("hero_back");
            item.a_trigger = node.GetStringValue("a_trigger");
            item.a_value = node.GetStringValue("a_value");
            item.effect_target = node.GetStringValue("effect_target");

             m_data.Add(item);
        }
        asset = null;

        if (null != m_callBack)
        {
            m_callBack();
            m_callBack = null;
        }

        base.onloaded(data);
    }

    /// <summary>获取项</summary>
    /// <returns></returns>
    public static TD_Skill GetItem(int id)
    {
        TD_Skill itm = null;

        int cnt = m_data.Count;
        for (int i = 0; i < cnt; i++)
        {
            if (m_data[i].id.CompareTo(id) == 0)
                return m_data[i];
        }

        return itm;
    }
}
