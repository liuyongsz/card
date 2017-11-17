using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.Events;
using System.Xml;
using TinyBinaryXml;

public class TD_Eff
{
    public int id;
    public string reference;
    public int condition;
    public int time_type;
    public int time_value;
    public int choose;
    public int target;
    public int effect;
    public int effect_value;
    public int effect_value_c_rate;
    public int fight_value;
    public int valid_type;
    public int valid_value;
}

public class EffConfig : ConfigBase
{
    private List<TD_Eff> m_data;
    private UnityAction m_callBack;
    public void LoadXml(UnityEngine.Events.UnityAction loadedFun = null)
    {
        m_callBack = loadedFun;
        LoadData("Effect", loadedFun);
    }

    public override void onloaded(AssetBundles.NormalRes data)
    {
        byte[] asset = (data as AssetBundles.BytesRes).m_bytes;

        if (asset == null)
            return;

        m_data = new List<TD_Eff>();

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

        TD_Eff item;
        for (int i = 0; i < xmlNodeListLength; ++i)
        {
            TbXmlNode node = xmlNodeList[i] as TbXmlNode;

            item = new TD_Eff();
            item.id = node.GetIntValue("effect_id");
            item.reference = node.GetStringValue("reference");
            item.condition = node.GetIntValue("condition");
            item.time_type =  node.GetIntValue("time_type");
            item.time_value = node.GetIntValue("time_value");
            item.choose = node.GetIntValue("choose");
            item.target = node.GetIntValue("target");
            item.effect = node.GetIntValue("effect");
            item.effect_value = node.GetIntValue("effect_value");
            item.effect_value_c_rate = node.GetIntValue("effect_value_c_rate");
            item.fight_value = node.GetIntValue("fight_value");
            item.valid_type = node.GetIntValue("valid_type");
            item.valid_value = node.GetIntValue("valid_value");

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
    public TD_Eff GetItem(int id)
    {
        TD_Eff itm = null;

        int cnt = m_data.Count;
        for (int i = 0; i < cnt; i++)
        {
            if (m_data[i].id.CompareTo(id) == 0)
                return m_data[i];
        }

        return itm;
    }
}
