using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using TinyBinaryXml;
using UnityEngine.Events;

public class OfficalInfo
{
    public int id;
    public int type;
    public string name;
    public int limit;
    public int needLevel;
    public string needCost;
    public int admit;
    public int maxAchievements;
    public string question;
    public int everyDayReward;
    public string havePermission;
    public int guildLevel;
    public int signUpLimit;
    public Dictionary<int, OfficalRankInfo> officalRankList = new Dictionary<int, OfficalRankInfo>();
}

public class OfficalRankInfo
{
    public int dbid;
    public int rank;
    public string name;
    public string guildName; 
    public int fame;
    public int topOfficialTurn;
}

class OfficalConfig : ConfigBase
{

    public static Dictionary<int, OfficalInfo> configList = new Dictionary<int, OfficalInfo>();

    public static void Init()
    {
        ResourceManager.Instance.LoadBytes("Official", AssetBundles.EResType.E_BYTE, LoadOfficialConfig, UtilTools.ConfigLoadError);
    }
    static void LoadOfficialConfig(AssetBundles.NormalRes data)
    {
        byte[] asset = (data as AssetBundles.BytesRes).m_bytes;
        if (asset == null)
            return;

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
        OfficalInfo info;
        for (int i = 0; i < xmlNodeList.Count; ++i)
        {
            TbXmlNode node = xmlNodeList[i] as TbXmlNode;
            info = new OfficalInfo();
            info.id = node.GetIntValue("ID");
            info.type = node.GetIntValue("officialType");
            info.name = node.GetStringValue("name");
            info.limit = node.GetIntValue("limit");
            info.needLevel = node.GetIntValue("needLevel");
            info.needCost = node.GetStringValue("needCost");
            info.admit = node.GetIntValue("admit");
            info.maxAchievements = node.GetIntValue("maxAchievements");
            info.question = node.GetStringValue("question");
            info.everyDayReward = node.GetIntValue("everyDayReward");
            info.havePermission = node.GetStringValue("havePermission"); 
            info.guildLevel = node.GetIntValue("guildLevel");
            info.signUpLimit = node.GetIntValue("signUpLimit");
            if (configList.ContainsKey(info.id))
            {
                configList[info.id] = info;
            }
            else
            {
                configList.Add(info.id, info);
            }
        }
        asset = null;
    }

    public static OfficalInfo GetOfficalInfo(int id)
    {
        if (configList.ContainsKey(id))
            return configList[id];
        return null;
    }

}

