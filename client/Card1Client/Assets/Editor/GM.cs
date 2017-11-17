using UnityEngine;
using UnityEditor;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.Text;

public class GM : EditorWindow
{

    [MenuItem("UGame/GM")]
    static void OpenWindow()
    {
        EditorWindow.GetWindow<GM>(false, "GM命令", true).Show();
    }
    // 等级
    private string level;
    // 欧元
    private string euro;
    // 钻石
    private string diamond;
    //个人贡献点
    private string guildDonate;
    //公会资金
    private string guildFunds;
    //公会s声望
    private string guildReputation;
    // 体力
    private string bodyPower;

    private string blackMoney;

    private string itemID;

    private string count;

    private string skillIndex;

    private string skill;

    private string fame;

    private string officialID;

    private string vipLevel;
    void OnGUI()
    {
        GUILayout.BeginHorizontal();
        //输入框控件
        //level = EditorGUILayout.TextField("设置主角等级", level, GUILayout.Width(300), GUILayout.Height(20));
        //if (GUILayout.Button("确定", GUILayout.Width(50), GUILayout.Height(20)))
        //{
        //    ServerCustom.instance.SendClientMethods("onClientGM", "level " + level);
        //}
        //GUILayout.EndHorizontal();

        //GUILayout.BeginHorizontal();
        ////输入框控件
        //blackMoney = EditorGUILayout.TextField("添加黑市币", blackMoney, GUILayout.Width(300), GUILayout.Height(20));
        //if (GUILayout.Button("确定", GUILayout.Width(50), GUILayout.Height(20)))
        //{
        //    ServerCustom.instance.SendClientMethods("onClientGM", "blackMoney " + blackMoney);
        //}
        //GUILayout.EndHorizontal();

        //GUILayout.BeginHorizontal();
        //diamond = EditorGUILayout.TextField("添加钻石", diamond, GUILayout.Width(300), GUILayout.Height(20));
        //if (GUILayout.Button("确定", GUILayout.Width(50), GUILayout.Height(20)))
        //{
        //    ServerCustom.instance.SendClientMethods("onClientGM", "diamond " + diamond);
        //}
        //GUILayout.EndHorizontal();

        //GUILayout.BeginHorizontal();
        //guildDonate = EditorGUILayout.TextField("添加个人公会贡献点", guildDonate, GUILayout.Width(300), GUILayout.Height(20));
        //if (GUILayout.Button("确定", GUILayout.Width(50), GUILayout.Height(20)))
        //{
        //    ServerCustom.instance.SendClientMethods("onClientGM", "guildDonate " + guildDonate);
        //}
        //GUILayout.EndHorizontal();

        //GUILayout.BeginHorizontal();
        //euro = EditorGUILayout.TextField("添加欧元", euro, GUILayout.Width(300), GUILayout.Height(20));
        //if (GUILayout.Button("确定", GUILayout.Width(50), GUILayout.Height(20)))
        //{
        //    ServerCustom.instance.SendClientMethods("onClientGM", "euro " + euro);
        //}
        //GUILayout.EndHorizontal();

        //GUILayout.BeginHorizontal();
        //vipLevel = EditorGUILayout.TextField("设置vip等级", vipLevel, GUILayout.Width(300), GUILayout.Height(20));
        //if (GUILayout.Button("确定", GUILayout.Width(50), GUILayout.Height(20)))
        //{
        //    ServerCustom.instance.SendClientMethods("onClientGM", "vipLevel " + vipLevel);
        //}
        //GUILayout.EndHorizontal();

        //GUILayout.BeginHorizontal();
        //bodyPower = EditorGUILayout.TextField("添加体力", bodyPower, GUILayout.Width(300), GUILayout.Height(20));
        //if (GUILayout.Button("确定", GUILayout.Width(50), GUILayout.Height(20)))
        //{
        //    ServerCustom.instance.SendClientMethods("onClientGM", "bodyPower " + bodyPower);
        //}
        //GUILayout.EndHorizontal();

        //GUILayout.BeginHorizontal();
        //guildFunds = EditorGUILayout.TextField("添加公会资金", guildFunds, GUILayout.Width(300), GUILayout.Height(20));
        //if (GUILayout.Button("确定", GUILayout.Width(50), GUILayout.Height(20)))
        //{
        //    ServerCustom.instance.SendClientMethods("onClientGMAddGuildFunds",int.Parse(guildFunds));
        //}
        //GUILayout.EndHorizontal();

        //GUILayout.BeginHorizontal();
        //guildReputation = EditorGUILayout.TextField("添加公会声望", guildReputation, GUILayout.Width(300), GUILayout.Height(20));
        //if (GUILayout.Button("确定", GUILayout.Width(50), GUILayout.Height(20)))
        //{
        //    ServerCustom.instance.SendClientMethods("onClientGMAddGuildReputation", int.Parse(guildReputation));
        //}
        //GUILayout.EndHorizontal();

        //GUILayout.BeginHorizontal();
        //fame = EditorGUILayout.TextField("添加个人名望声望", fame, GUILayout.Width(300), GUILayout.Height(20));
        //if (GUILayout.Button("确定", GUILayout.Width(50), GUILayout.Height(20)))
        //{
        //    ServerCustom.instance.SendClientMethods("onClientGM", "fame " + fame);
        //}
        //GUILayout.EndHorizontal();

        //GUILayout.BeginHorizontal();
        //officialID = EditorGUILayout.TextField("设置官职-输入官职ID", officialID, GUILayout.Width(300), GUILayout.Height(20));
        //if (GUILayout.Button("确定", GUILayout.Width(50), GUILayout.Height(20)))
        //{
        //    ServerCustom.instance.SendClientMethods("onClientPromoteOfficial", UtilTools.IntParse(officialID));
        //}
        //GUILayout.EndHorizontal();

        //GUILayout.BeginHorizontal();
        //itemID = EditorGUILayout.TextField("添加道具ID", itemID, GUILayout.Width(200), GUILayout.Height(20));
        //count = EditorGUILayout.TextField("添加道具数量", count, GUILayout.Width(200), GUILayout.Height(20));
        //if (GUILayout.Button("确定", GUILayout.Width(120), GUILayout.Height(20)))
        //{
        //    ServerCustom.instance.SendClientMethods("onClientGmAddItem",UtilTools.IntParse(itemID), UtilTools.IntParse(count));
        //}
        //GUILayout.EndHorizontal();

        //GUILayout.BeginHorizontal();
        //skillIndex = EditorGUILayout.TextField("技能索引", skillIndex, GUILayout.Width(200), GUILayout.Height(20));
        //skill = EditorGUILayout.TextField("技能下标", skill, GUILayout.Width(200), GUILayout.Height(20));
        //if (GUILayout.Button("确定", GUILayout.Width(120), GUILayout.Height(20)))
        //{
        //    ServerCustom.instance.SendClientMethods("gmSetSkill", UtilTools.IntParse(skillIndex), UtilTools.IntParse(skill));
        //}
        //GUILayout.EndHorizontal();



        //GUILayout.BeginHorizontal();

        //if (GUILayout.Button("批量加金钱", GUILayout.Width(120), GUILayout.Height(20)))
        //{
        //    ServerCustom.instance.SendClientMethods("onClientGmAddAll");
        //}
        GUILayout.EndHorizontal();
    }
 
}
