using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.Events;
using System.Xml;
using TinyBinaryXml;

public enum E_HeroType
{
    Normal,
}

public class TD_Hero
{
    public int id;
    public E_HeroType type;
    public string name;
    public string res;
    public string skinRes;
    public string hero_dis;
    public string arcane_list;
    public string card_list;
    public string card_initial_list;
    public string awake;
    /// <summary>觉醒技能</summary>
    public int arcaneInitalSkill;
    public int hp;
    /// <summary>护甲</summary>
    public int shield;

    public int deck_build;

    public string headRes;

    public string hero_atked;

    /// <summary>英雄占格数</summary>
    public int hero_occupy;

    /// <summary>入场语音</summary>
    public string hero_voice1;
    /// <summary>胜利语音</summary>
    public string hero_voice2;
    /// <summary>死亡语音</summary>
    public string hero_voice3;
    /// <summary>觉醒语音</summary>
    public string hero_voice4;
    /// <summary>受伤语音</summary>
    public string hero_voice5;
}

public class HeroConfig : ConfigBase
{
    private static List<TD_Hero> m_data;
    private UnityAction m_callBack;
    public void LoadXml(UnityEngine.Events.UnityAction loadedFun = null)
    {
        m_callBack = loadedFun;
        LoadData("Hero", loadedFun);
    }

    public override void onloaded(AssetBundles.NormalRes data)
    {
        byte[] asset = (data as AssetBundles.BytesRes).m_bytes;

        if (asset == null)
            return;

        m_data = new List<TD_Hero>();

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

        TD_Hero item;
        for (int i = 0; i < xmlNodeListLength; ++i)
        {
            TbXmlNode node = xmlNodeList[i] as TbXmlNode;

            item = new TD_Hero();
            item.id = node.GetIntValue("hero_id");
            item.res = node.GetStringValue("hero_res");
            item.name = node.GetStringValue("hero_name");
            item.type = (E_HeroType)node.GetIntValue("hero_type");
            item.skinRes = node.GetStringValue("skin_res");
            item.hero_dis = node.GetStringValue("hero_dis");
            item.hp = node.GetIntValue("hp");
            item.shield = node.GetIntValue("shield");
            item.headRes = node.GetStringValue("hero_head");
            item.arcane_list = node.GetStringValue("arcane_list");
            item.arcaneInitalSkill = node.GetIntValue("arcane_initial_list");
            item.card_list = node.GetStringValue("card_list");
            item.card_initial_list = node.GetStringValue("card_initial_list");
            item.awake = node.GetStringValue("awake");
            item.hero_occupy = node.GetIntValue("hero_occupy");
            item.hero_atked = node.GetStringValue("hero_atked");
            item.hero_voice1 = node.GetStringValue("hero_voice1");
            item.hero_voice2 = node.GetStringValue("hero_voice2");
            item.hero_voice3 = node.GetStringValue("hero_voice3");
            item.hero_voice4 = node.GetStringValue("hero_voice4");
            item.hero_voice5 = node.GetStringValue("hero_voice5");
            item.deck_build = node.GetIntValue("deck_build");

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
    /// <returns>TD_Hero</returns>
    public static TD_Hero GetItem(int id)
    {
        TD_Hero itm = null;

        int cnt = m_data.Count;
        for (int i = 0; i < cnt; i++)
        {
            if (m_data[i].id.CompareTo(id) == 0)
                return m_data[i];
        }

        return itm;
    }
}
