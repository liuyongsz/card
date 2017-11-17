//----------------------------------------------
//            NGUI: Next-Gen UI kit
// Copyright © 2011-2014 Tasharen Entertainment
//----------------------------------------------

using UnityEngine;

/// <summary>
/// Plays the specified sound.
/// </summary>

[AddComponentMenu("NGUI/Interaction/Play Sound")]
public class UIPlaySound : MonoBehaviour
{
    public enum Trigger
    {
        OnClick,
        OnMouseOver,
        OnMouseOut,
        OnPress,
        OnRelease,
        Custom,
    }

    public enum SoundMode : int
    {
        NULL = 0,
        NormalClick = 1,    //普通点击声音
        ViewClosed = 2,         //界面关闭声音
        Login = 3,              //进游戏音效
        Award = 4,              //领取奖励按钮
        RANDOM = 5,             //随机
        SKILL = 6,              //技能点击
        Button = 7, //通用按下按键音效
        GameButton = 8,//进入游戏按钮
        ViewEject = 9,//通用界面弹出音效
        TipsEject = 10,//tips弹窗
        Dropdown = 11,//下拉菜单弹出
        Putaway = 12,//下拉菜单收起
        FunctionEject = 13,//右上角功能弹出
        FunctionIncome = 14,//右上角功能收进
        FunctionSwitch = 15,//功能页签切换
        ForGold = 16,//获得金币
        DressUp = 17,//换装
        Strengthen = 18,//强化
        JewelSet = 19,//宝石镶嵌
        JewelSynthesis = 20,//宝石合成
        EquipRemove = 21,//装备卸下
        Smelting = 22,//熔炼
        SkillUpgrade = 23,//技能
        SoulUpgrade = 24,//灵魂
        ScreenOPen = 25,//选择角色那边 开幕声音
        ScreenClose = 26,//选择角色那边 闭幕声音
        createshow_yijian = 27,//角色登场剑男
        AddMoney = 28,//角色增加金钱
        system_button_all_8 = 29,//人物选择
        system_button_all_9 = 30,//男女切换 
        createshow_yijian_1 = 31,////角色登场剑女
        createshow_bahuang = 32,////角色登场八男
        createshow_bahuang_1 = 33,////角色登场八女
        createshow_taiqing = 34,////角色登场杖男
        createshow_taiqing_1 = 35,////角色登场杖女
        Button_Arrange = 36,//背包整理
        Button_Bottle_of_HP = 37,//使用血瓶
        Button_Draw = 38,//拜会（抽奖）
        Button_Mix = 39,//熔炼
        Button_Strengthen = 40,//强化
        Button_Horse = 41,//坐骑
        Button_Country = 42,//国家
        Button_Skill = 43,//技能
        Button_TenDraw = 44,//拜会十次
        taskcomplete = 50,//任务完成
        scene_Fail = 51,//任务完成
        Arena_01 = 52,//倒计时
        system_remind_all_18 = 55,	//成就	
        system_remind_all_19 = 56,	//捐献	
        system_remind_all_20 = 57,	//钱箱开启	
        system_remind_all_21 = 58,	//新功能开启	
        system_remind_all_22 = 59,	//钻石箱子开启
        system_huoban_001 = 61,     //喝酒
        system_remind_shen = 62, //神装激活与升阶
        system_remind_001 = 89, //宠物激活
        system_remind_002 = 90, //宠物技能提升
        system_remind_003 = 91, //宠物进阶
        system_remind_004 = 92, //宠物升级
        system_remind_005 = 93, //宠物突破
        system_remind_006 = 94, //上下拖动宠物栏
        Playertalk_01_m = 101,//男杖出场
        Playertalk_01_f = 104,//女杖出场
        Playertalk_02_m = 102,
        Playertalk_02_f = 105,
        Playertalk_03_m = 103,
        Playertalk_03_f = 106,
		system_remind_all_30 = 107,//返回按钮
        system_remind_all_31 = 108,//活动进入按钮
		system_remind_all_32 = 109,//商店购买
        system_remind_all_33 = 110,//左切换
        system_remind_all_34 = 111,//点开头像
		system_remind_all_35 = 112,//军阶升级
        system_remind_all_36 = 113,//洗筋伐髓
        system_remind_all_37 = 114,//	熔炼
        system_remind_all_38 = 115,//	签到
        system_remind_all_39 = 116,//	获得新技能
        system_remind_all_40 = 117,//	铸造
		system_remind_all_41 = 118,//	整理
		Npctalk0007 = 124,
		Npctalk0008 = 125,
		Npctalk0009 = 126,
		Npctalk0010 = 127,
		Npctalk0011 = 128,
		Npctalk0012 = 129,
		Npctalk0013 = 130,
		Npctalk0014 = 131,
		Npctalk0015 = 132,
        system_remind_item_18 = 137,//限时仙灵 莲花的播放
		system_remind_all_43 =139,//猴1
		system_remind_all_44 =140,//猴2
		system_remind_all_45 =141,//猴3
		system_remind_all_50=146,//帮战buff特效
		system_remind_all_51=147,//帮战被击杀提醒
        Btn_GameStart=201,//点击"开始游戏"按钮音效
        MainPanel_open = 202,//功能选择界面打开音效
        Btn_close = 203,//界面“返回”按钮音效
        Btn_List1 = 204,//左侧列表：角色/武学/成就/图鉴
        Btn_List2 = 205,//右侧列表：帮会/拍卖行/合成/商人/锻造/邮件/排行/挂机任务/副本/竞技/活动/设置
        Btn_ChangePage1 = 206,//功能一级界面内：所有横列音效
        Btn_ChangePage2 = 207,//功能一级界面内：所有纵列音效
        Btn_Click = 208,//列表二级界面内：所有按钮点击声
        Effect_Achievement = 209,//获得XX成就音效
        Effect_Zhuansheng = 210,//转生
        Effect_LevelUp = 211,//人物等级升级
        Effect_Guild_Create = 212,//创建帮会成功
        Effect_Guild_Juanxian = 213,//帮会捐献成功
        Effect_Guild_shuyuan = 214,//帮会书院升级
        Effect_Guild_Xiulianfa = 215,//修炼法升级
        Effect_Guild_Gongjiangxue = 216,//工匠学升级
        Effect_Guild_yaoyiyao = 217,//帮会BOSS摇一摇（同微信声）
        PVP_Win = 218,//PVP胜利
        PVP_Lose = 219,//PVP失败
        Effect_Equip_Shengxing = 220,//升星
        Effect_Equip_Zhuijia = 221,//追加
        Effect_Equip_Jinjie = 222,//进阶
        Effect_Equip_Xiangqian = 223,//镶嵌
        Effect_Equip_Fenjie = 224,//装备分解
        Effect_Wuxue_New = 225,//领悟新武学
        Effect_Wuxue_LevelUp = 226,//门派武学升级
        Effect_Wuxue_Xiezai = 227,//门派武学卸载
        Effect_Wuxue_Hecheng = 228,//武学、内功的碎片合成
        Effect_Wuxue_Jinjie = 229,//武学境界提升
        Effect_cangjingge_LevelUp = 230,//藏经阁升级成功
        Effect_Duanwei_LevelUp = 231,//段位升级成功
        Effect_Email_New = 232,//新邮件提示音
        Effect_Hecheng_Ticket = 233,//门票合成
        Effect_Hecheng_Danyao = 234,//丹药提炼
        Effect_Buy = 235,//所有购买
        Effect_Sell = 236,//所有出售
        Effect_Get1 = 237,//宝箱领取
        Effect_Get2 = 238,//所有领取奖励界面
	    Btn_notice = 239,//公告按钮	
		Btn_notice_ChangePage1 = 240,//公告界面横向列表	
		Btn_notice_ChangePage2  = 241,//公告界面纵向列表	
		Btn_close2 = 242,//界面“X”型关闭按钮	
		ChooseRole_List = 243,//选角界面纵向列表	
		ChooseNation_List = 244,//选角界面选势力列表	
		Btn_RoleHead = 245,//主界面玩家头像点击声	
		Btn_DeleteRole = 246,//选角界面“删除角色“按钮	
		Btn_GameStart2 = 247,//选角界面点击"开始游戏"按钮音效
		Effect_XinFa_LevelUp = 248,//心法升级成功
		Effect_NeiGong_LevelUp = 249,//内功升级成功
		Btn_ChooseName = 250,//选角界面随机名字骰子按钮
        Btn_FuBen_Win = 251,
        Btn_FuBen_Fail = 252,
        Btn_ChangDang_Win = 253,
        Btn_ChangDang_Fail = 254,
        Music_Caiji = 255,
        Effect_panel_open1 = 256,
        Effect_panel_open2 = 257,
        Effect_panel_open3 = 258,
        Effect_panel_close1 = 259,
        Effect_panel_close2 = 260,
        Effect_panel_close3 = 261,
        Manor_kill_1 = 262,
        Manor_kill_2 = 263,
        Manor_kill_3 = 264,
        Manor_kill_4 = 265,
        Manor_kill_5 = 266,
        Manor_kill_6 = 267,
        Manor_kill_7 = 268,
        Manor_kill_8 = 269,
        Manor_kill_9 = 270,
        Manor_kill_10 = 271,
        Manor_kill_20 = 272,
        Manor_kill_50 = 273,
        Manor_kill_100 = 274,
		Effect_Pokemon_jinjie = 275,
        Effect_Pokemon_lianhua1 = 276,
        Effect_Pokemon_lianhua2 = 277,
        Effect_role_chuangjue = 278,
        Btn_chuangjue_zuocetupian = 279,
        Btn_chuangjue_xuantu = 280,
        Btn_fuwuqixuanze = 281,
        Btn_fuwuqixuanze_zuo = 282,
        sound_tanchu_renwuzuo = 283,
        sound_tanru_renwuzuo = 284,
        sound_tanchu_renwuyou = 285,
        sound_tanru_renwuyou = 286,
        Btn_xuanjuekaishi = 287,
        Btn_3jijiemian_qudding = 288,
        Btn_3jijiemian_quxiao = 289,
        Btn_zhuangbei_up = 290,
        Btn_zhuangbei_down = 291,
        Btn_gg_close= 292,
        Btn_fwq_open = 293,
        Btn_fwq_close = 294,
        Btn_xuanjue_close = 298,
        Btn_zhugongneng_close = 299,
        Btn_ChangePage2_jiajian = 300,
        Btn_tp_xuanze = 301,
        Btn_ChangePage_big = 302,
        dragonflagfaul = 303,
        dragonflagsucess = 304,
        dragonflagvoice = 305,
        dragonflagintro = 306,
        dragonflagbegin = 307,
		Effect_Equip_Shengxing_Fail = 311,
        Effect_jbdown = 312,
        Effect_jbup = 313,
    }

    public SoundMode soundMode = SoundMode.NULL;
    public AudioClip audioClip;
    public Trigger trigger = Trigger.OnClick;

    bool mIsOver = false;

#if UNITY_3_5
	public float volume = 1f;
	public float pitch = 1f;
#else
	[Range(0f, 1f)] public float volume = 1f;
	[Range(0f, 2f)] public float pitch = 1f;
#endif

    void OnHover(bool isOver)
    {
        if (trigger == Trigger.OnMouseOver)
        {
            if (mIsOver == isOver)
                return;
            mIsOver = isOver;
        }

        if (enabled && ((isOver && trigger == Trigger.OnMouseOver) || (!isOver && trigger == Trigger.OnMouseOut)))
        {
            if (soundMode != SoundMode.NULL)
                NGUITools.PlaySound((int)soundMode);
            else
                NGUITools.PlaySound(audioClip, volume, pitch);
        }
    }

    void OnPress(bool isPressed)
    {
        if (trigger == Trigger.OnPress)
        {
            if (mIsOver == isPressed)
                return;
            mIsOver = isPressed;
        }

        if (enabled && ((isPressed && trigger == Trigger.OnPress) || (!isPressed && trigger == Trigger.OnRelease)))
        {
            if (soundMode != SoundMode.NULL)
                NGUITools.PlaySound((int)soundMode);
            else
                NGUITools.PlaySound(audioClip, volume, pitch);
        }
    }

    void OnClick()
    {
        if (enabled && trigger == Trigger.OnClick)
        {
            if (soundMode != SoundMode.NULL)
                NGUITools.PlaySound((int)soundMode);
            else
                NGUITools.PlaySound(audioClip, volume, pitch);
        }
    }

    void OnSelect(bool isSelected)
    {
        if (enabled && (!isSelected || UICamera.currentScheme == UICamera.ControlScheme.Controller))
            OnHover(isSelected);
    }

    public void Play()
    {
        if (soundMode != SoundMode.NULL)
            NGUITools.PlaySound((int)soundMode);
        else
            NGUITools.PlaySound(audioClip, volume, pitch);
    }
}
