using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.Events;
using System.Xml;
using TinyBinaryXml;

public enum E_CardType
{
    Skill = 1,
    Jianjie = 2,
    Task = 3,
    Death = 4,
}

public class TD_Card
{
    public int id;
    public string res;
    public string name;
    public E_CardType type;
    public string type1;
    public int isHave;
    public int isFight;
    public string skill_list;
}

public class CardConfig : ConfigBase
{
    public static List<TD_Card> m_data;
    private UnityAction m_callBack;
    public void LoadXml(UnityEngine.Events.UnityAction loadedFun = null)
    {
        m_callBack = loadedFun;
        LoadData("Card", loadedFun);
    }

    public override void onloaded(AssetBundles.NormalRes data)
    {
        byte[] asset = (data as AssetBundles.BytesRes).m_bytes;

        if (asset == null)
            return;

        m_data = new List<TD_Card>();

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

        TD_Card item;
        for (int i = 0; i < xmlNodeListLength; ++i)
        {
            TbXmlNode node = xmlNodeList[i] as TbXmlNode;

            item = new TD_Card();
            item.id = node.GetIntValue("card_id");
            item.res = node.GetStringValue("res");
            item.name = node.GetStringValue("name");
            item.type = (E_CardType)node.GetIntValue("card_type");
            item.type1 = node.GetStringValue("card_type1");
            item.skill_list = node.GetStringValue("skill_list");

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
    public static TD_Card GetItem(int id)
    {
        TD_Card itm = null;

        int cnt = m_data.Count;
        for (int i = 0; i < cnt; i++)
        {
            if (m_data[i].id.CompareTo(id) == 0)
                return m_data[i];
        }

        return itm;
    }
}
