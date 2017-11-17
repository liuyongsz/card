//================================枚举定义===========================
/// <summary>比赛结果胜利方</summary>
public enum E_MatchWinSide
{
    Null,     //没有胜利
    Left,     //左边胜利
    Right,    //右边胜利
    Equally   //平分
}

/// <summary>寻路节点操作</summary>
public enum E_AtartNodeOper
{
    Null,      //没有
    Pass,      //传球
    Shoot,     //射门
    Tackle,    //铲球
    FindPath,  //寻路
    TurnToPass, //转身后传球
    Def = -1,   //防守
}

/// <summary>球员困难度</summary>
public enum TypePlayer
{
    DEFENDER,
    MIDDLER,
    ATTACKER
};

/// <summary>球员状态</summary>
public enum Player_State
{
    NULL,           //空
    TACKLE,         //住当
    DAIPAN,         //带盘
    RUNNNING,       //奔跑
    RESTING,        //休息
    PASSING,        //传球
    SHOOTING,       //射门
    STOLE_BALL,     //偷球
    CONTROLLING,    //控球
    OPONENT_ATTACK, //攻击
    SLOWDOWNTOREST, //减速到停止
    MOVE_AUTOMATIC, //自由移动
    /// <summary>向后移动</summary>
    ONE_STEP_BACK,
    ONE_STEP_BACK2,
    /// <summary>强制向后移动</summary>
    ONE_STEP_BACK_FORCE,
    MOVE_AUTOMATIC2,
};

/// <summary>守门员状态</summary>
public enum GoalKeeper_State
{
    TACKLE, //铲球
    RESTING,
    GET_BALL,
    JUMP_LEFT,
    PASS_HAND,
    JUMP_RIGHT,
    STOLE_BALL,  //偷求
    GET_BALL_UP,
    UP_WITH_BALL,
    GET_BALL_DOWN,
    JUMP_LEFT_RASO,
    JUMP_RIGHT_RASO,
    GO_ORIGIN_GOALKEEPER,
};

/// <summary>设置坐标类型</summary>
public enum E_SetPostionFlag
{
    Normal,      //=
    AddEuqal,    //+=
}

/// <summary>比赛类型</summary>
public enum E_MatchType
{
    PVE,    //人机
    Union,  //联赛
    Cup,    //杯赛
    PVP     //玩家
}

/// <summary>射击方向</summary>
public enum E_ShootDirection
{
    Both,
    Left,
    Right
}

/// <summary>扑球的类型</summary>
public enum E_PuQiuType
{
    Fly,  //飞身扑球
    Raso, //倒地扑球
}

/// <summary>皮肤部位</summary>
public enum E_SkinPart
{
    Skin,
    Cloth,
    Hair
}

/// <summary>球曲线的到达目标的类型</summary>
public enum E_BallBezierToType
{
    Vector,
    Transfrom,
    Gound, //滚动求
}

/// <summary>传球类型</summary>
public enum E_PassType
{
    Normal,
    Bezier,
    Ground,
}

public enum E_PassOrShootType
{
    Normal = 1,        //普通传球
    PointHeight = 2,   //制定高度传球
    Ground = 3,        //滚地球
    PushShoot = 4,     //推射
    NormalShoot = 5,   //普通射门
    SkillShoot = 6,    //技能射门
    FreeKick = 7,      //任意球射门
}

public enum E_StepResult
{
    Null = 7,
    con_result_pass_succ = 115,           //普通传球
    con_result_perfect_pass = 116,        //完美传球
    con_result_shoot_succ = 113,          //射门成功
    con_result_shoot_fail = 114,          //射门失败
    con_result_be_steal = 117,            //被抢断
    con_result_break_succ = 118,          //突破成功
    con_result_not_shoot_succ = 119,      //未射门成功 代表防守成功
    con_result_gk_steal = 120,            //守门员抢断成功
    con_result_reshoot_succ = 121,        //补射成功
    con_result_reshoot_fail = 122,        //补射失败
    select = 6,                           //操作选择
}

/// <summary>赛事点的类型</summary>
public enum E_MatchDotType
{
    Normal, //普通点
    Oper,   //打开选择操作界面
}

/// <summary>比赛的全场还是半场</summary>

public enum MatchHalfType
{ 
    Both, //全场
    Left, //左半场
    Right //有半场
}

/// <summary>移动类型</summary>
public enum MoveType
{
    Normal,//普通
    OnlyX, //只移动X
    OnlyZ, //只移动Z
    Cure,  //曲线
    Lerp,  //弧线差值
    CheckHou,
}

public enum Skill_Type
{
    Active = 1,     //主动技能
    Passive = 2,    //被动技能
    Assist = 3,     //协助技能
    Property = 4,   //属性技能
}

public enum Skill_RangeType
{
    Single = 1, //单个
    All,        //全部
}

public enum Skill_UseStep
{
    Attack, //进攻者
    Midle,  //中间者
    End,    //终结者
}

/// <summary>技能类型</summary>
public enum Skill_ActionType
{
    Pass = 1,  //传球技能
    Shoot = 2,  //射门技能
    Both = 3,   //传球射门都使用的技能
}

public enum CloneGMFlag
{
    no_steal = 1,       //过人成功
    shoot_succ = 2,     //射门成功
    shoot_fail = 3,     //射门失败
}

public enum Skill_ShowFlag
{
    Atk = 1,             //进攻有球
    AtkAssist = 2,           //进攻无求
    Def = 3,                 //防守带球者
    DefAssist = 4,           //非对位防守时
    AllAttackTime = 5,       //任意进攻轮事
    AllDefendTime = 6,       //任意防守轮事
    AllTime = 7,             //任意时候
}

public enum EditerType
{
    Shoot,
    Match,
}

public enum Skill_EffectType
{
    faill = -1,
    // 1、射门值、射门值
    effect_add_shoot = 1,
    //2、传球值、传球值
    effect_add_passball = 2,
    // 3、盘带值、盘带值 %
    effect_add_reel = 3,
    // 4、控球值、控球值 %（增加控球值效果的技能都是被动，在计算攻守回合数时就要计算进去）
    effect_add_control = 4,
    // 5、防守值、防守值 %
    effect_add_defend = 5,
    // 6、拦截值、拦截值 %
    effect_add_trick = 6,
    // 7、抢断值、抢断值 %
    effect_add_steal = 7,
    // 8、守门值、守门值 %
    effect_add_keep = 8,
    // 9、射偏率
    effect_add_shoot_miss_per = 9,
    // 10、进球率（计算完 （射门值 - 防守值） / 守门值的值）
    effect_shoot_succ_per = 10,
    // 11、过人成功率（计算完 （抢断值 - 盘带值） / 抢断基数的值）
    effect_breakthrough_per = 11,
    // 12、完美传球几率（计算完 （传球 - 拦截） / 传球基数的值）
    effect_perfect_passball_per = 12,
    // 13、怒气值
    effect_add_anger = 13,
    // 14、终结者计算得球概率提升
    effect_as_third_step_player_per = 14,
    // 15、中间者计算得球概率提升
    effect_as_second_step_player_per = 15,
    // 16、将A属性的值或n % 的值，附加到B的属性上
    effect_remove_a_add_b = 16,
    // 17、造成晕眩，无法进行防守
    effect_no_defend = 17,
    // 18、获得黄牌
    effect_get_yellow = 18,
    // 19、获得红牌
    effect_get_red = 19,
    // 20、改变流程
    effect_change_flow = 20,
    // 将自身射门值的n%加到传球值上
    effect_1005_effect = 22,
    // 结束回合
    effect_end_round = 23,
    // 协防补位
    effect_help_defend = 24,
    //免疫负面状态（不再获得负面状态，已有的还存在
    effect_immune_negative_buffer = 25,
    //26、解除负面状态（解除身上已拥有的负面状态，不免疫本轮获取的负面状态）
    effect_del_negative_buffer = 26,
    // 补射一次
    effect_reshoot = 28,
    // 反击
    effect_counterattack = 29,
    //门柱保命
    effect_GoalPost_Help = 30,
    // 任意球
    effect_Free_Kick = 31,
    Null,
}

public enum CloneError
{
    // 副本未开启
    clone_not_open = 1,
    // 剩余挑战次数不足
    clone_not_enough_rest_count = 2,
    // 体力不足
    clone_not_enough_power = 3,
    // 不足三星
    clone_not_enough_3Star = 4,
    // 配置错误
    clone_config_error = 5,
    // 章节未开启
    clone_chapter_not_open = 6,
    // 章节奖励已领取
    clone_chapter_reward_has_got = 7,
    // 章节星不够
    clone_chapter_reward_not_enough_star = 8,
}

public enum HelperPlayerType
{
    Null,    //没有
    My,      //辅助我方
    Oponent, //辅助敌方
}

public enum ShootOutFailType
{
    Null,     //空
    Normal,   //普通
    HitWall,  //踢到人墙
    FlyOut,   //飞出
}

/// <summary>球员标记</summary>
public enum PlayerFlag
{
    Null,
    /// <summary>就势摔倒球员</summary>
    PotentialFall,
    /// <summary>就势摔倒 发出铲球进攻的球员</summary>
    PotentialFallTacke,
    /// <summary>门线救险时候的球员</summary>
    LineEmergency,
}

public enum NetState
{
    Close, //没网络,
    Phone, //手机
    Wifi,  //WiFi
}

/// <summary>特效效果类型</summary>
public enum E_EffectType
{
    Null,
    HP,
    Def,
    Move,
}