using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using TinyBinaryXml;
using UnityEngine.Events;
using System.Xml;
using System.Text.RegularExpressions;

public class TD_SkillPrefabInfo
{
    public string id;
    public string scale;
    public string rootScale;
    public string enemyPoint;
    public string selfPoint;
    public bool haveEnemy;

    public Vector3 ToScale
    {
        get
        {
            string[] lst = scale.Split(',');

            return new Vector3(lst[0].ToFloat(), lst[1].ToFloat(), lst[2].ToFloat());
        }
    }


    public Vector3 EnemyPosition
    {
        get
        {
            string[] lst = enemyPoint.Split(',');

            return new Vector3(lst[0].ToFloat(),lst[1].ToFloat(),lst[2].ToFloat());
        }
    }

    public Vector3 SelfPosition
    {
        get
        {
            string[] lst = selfPoint.Split(',');

            return new Vector3(lst[0].ToFloat(), lst[1].ToFloat(), lst[2].ToFloat());
        }
    }

    public Vector3 InitRootScale
    {
        get
        {
            string[] lst = rootScale.Split(',');

            return new Vector3(lst[0].ToFloat(), lst[1].ToFloat(), lst[2].ToFloat());
        }
    }
}

class SkillPrefabInfoConfig : ConfigBase
{
    private List<TD_SkillPrefabInfo> m_data;

    private UnityAction m_callBack;
    public void LoadXml(UnityEngine.Events.UnityAction loadedFun = null)
    {
        m_callBack = loadedFun;
        LoadData("SkillPrefabInfo", loadedFun);
    }

    public override void onloaded(AssetBundles.NormalRes data)
    {
        byte[] asset = (data as AssetBundles.BytesRes).m_bytes;
 
        if (asset == null)
            return;

        m_data = new List<TD_SkillPrefabInfo>();

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

        TD_SkillPrefabInfo item;
        for (int i = 0; i < xmlNodeListLength; ++i)
        {
            TbXmlNode node = xmlNodeList[i] as TbXmlNode;

            item = new TD_SkillPrefabInfo();
            item.id = node.GetStringValue("id");
            item.scale = node.GetStringValue("scale");
            item.rootScale = node.GetStringValue("rootScale");
            item.enemyPoint = node.GetStringValue("enemyPoint");
            item.selfPoint = node.GetStringValue("selfPoint");
            item.haveEnemy = node.GetBooleanValue("haveEnemy");

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
    public TD_SkillPrefabInfo GetItem(string id)
    {
        TD_SkillPrefabInfo itm = null;

        int cnt = m_data.Count;
        for(int i = 0; i < cnt;i++)
        {
            if (m_data[i].id.CompareTo(id) == 0)
                return m_data[i];
        }
       

        return itm;
    }
}

