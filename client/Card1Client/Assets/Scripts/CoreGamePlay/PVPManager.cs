using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using PureMVC.Patterns;
using NetProtocal;

/// <summary>
/// PVP管理器
/// </summary>
public class PVPManager : MonoBehaviour
{
    public List<EffectVO> Msgs;

    /// <summary>是否是我方回合</summary>
    public static bool IsMyTurn;
    /// <summary>是否是我方回合</summary>
    public static bool CanDoNextEffect;
    /// <summary>是否可以移动</summary>
    public static bool CanDoMoveNextEffect;

    public AttackVO CurrentAttack;
    private List<string> mAttkQueue;
    /// <summary>攻击词典</summary>
    private Dictionary<string, AttackVO> AttackDIc = new Dictionary<string, AttackVO>();
    /// <summary>效果列表</summary>
    private List<EffectVO> mEffects = new List<EffectVO>();
    /// <summary>移动效果列表</summary>
    private List<EffectVO> mMoveEffects = new List<EffectVO>();

    public static PVPManager Instance;

    public Camera BackgroundCamera;
    public Camera AvatarCamera;
    public Camera FightCamera;

    public FightHPPanel HPRoot;

    public HighlightingSystem.HighlightingRenderer HighlightRender;


    public FightPoint MyFightPoint;
    public FightPoint OpFightPoint;

    public Dictionary<Transform, CardRole> CardRoleDic = new Dictionary<Transform, CardRole>();

    public List<Transform> MyPosition;
    public List<Transform> OpPosition;

    public List<string> Test_MyAB;
    public List<string> Test_OpAB;

    private bool mTweenOutAtkOver;
    private bool mTweenOutAtkedOver;

    private GameObject mFightObject;

    public List<SimpleHeroData> SimpleHeroDatas = new List<SimpleHeroData>();


    /// <summary>加载化身回调函数</summary>
    private static UnityEngine.Events.UnityAction on_complete_avatar;
    /// <summary>加载地图回调函数</summary>
    private static UnityEngine.Events.UnityAction on_complete_map;

    /// <summary>英雄Did词典</summary>
    public Dictionary<int, CardRole> CardRoleDidDic = new Dictionary<int, CardRole>();
    /// <summary>英雄Did词典</summary>
    public Dictionary<Transform, CardRole> TransformCardRoleTeamA = new Dictionary<Transform, CardRole>();
    /// <summary>英雄Did词典</summary>
    public Dictionary<Transform, CardRole> TransformCardRoleTeamB = new Dictionary<Transform, CardRole>();

    // Use this for initialization

    public Transform TweenOutOrgObjectAtk;
    public Transform TweenOutOrgObjectAtked;
    public bool TweenOutAtk_ResLoaded;
    public bool TweenOutAtked_ResLoaded;
    public bool TweenOut_IsSng;

    public TweenLayerUtil TweenOutAtk = new TweenLayerUtil();
    public TweenLayerUtil TweenOutAtked = new TweenLayerUtil();

    private TD_Hero mAtkCfg;
    private TD_Hero mAtkedCfg;
    private Transform mAtkOutTransform;
    private Transform mAtkedOutTransform;
    private Transform mAtkBackTransform;
    private Transform mAtkedBackTransform;
    public bool IsMirror;

    private static MoveArrow ArrowObject;
    private static Transform MapObject;
    private static bool LoadingObject;

    void Start()
    {
        Instance = this;
        CanDoNextEffect = true;

        PVPManager.Instance.Test_LoaderMapAndAvatar();

        if (Define.VSTest)
        {
            PlayerInfoMsg msg = new PlayerInfoMsg();
            msg = new PlayerInfoMsg();
            msg.pid = 0;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (null != SkillSystem.Instance.TriggerStay)
        {
            SkillSystem.Instance.TriggerStay();
        }

        bool isTwoOver = mTweenOutAtkOver && mTweenOutAtkedOver;
        bool isSngOver = TweenOut_IsSng && mTweenOutAtkOver;
        if ((isTwoOver || isSngOver) && null != mFightObject)
        {
            mTweenOutAtkOver = false;
            mTweenOutAtkedOver = false;

            //TweenOutAtk.Target.gameObject.SetActive(false);
            //TweenOutAtked.Target.gameObject.SetActive(false);

            mFightObject.SetActive(true);
        }

        if (null != TweenOutAtk)
            TweenOutAtk.Update();

        if (null != TweenOutAtked)
            TweenOutAtked.Update();

        if (null != TweenOutAtk && null != TweenOutAtked && TweenOutAtk.TweenBackIsComplete && TweenOutAtked.TweenBackIsComplete)
        {
            TweenOutOrgObjectAtk.gameObject.SetActive(true);
            TweenOutOrgObjectAtked.gameObject.SetActive(true);

            TweenOutAtk.ResetBool();
            TweenOutAtked.ResetBool();

            GameObject.DestroyObject(TweenOutAtk.Target.gameObject);
            GameObject.DestroyObject(TweenOutAtked.Target.gameObject);

            CurrentAttack = null;
            PlayNextMainAnimation();
        }
        else if (null != TweenOutAtk && TweenOutAtk.TweenBackIsComplete && TweenOut_IsSng)
        {
            TweenOutOrgObjectAtk.gameObject.SetActive(true);

            TweenOutAtk.ResetBool();

            GameObject.DestroyObject(TweenOutAtk.Target.gameObject);

            CurrentAttack = null;
            PlayNextMainAnimation();
        }


        if (null != mAtkOutTransform &&
            null != mAtkedOutTransform &&
            TweenOutAtk.TweenOutIsComplete &&
            TweenOutAtked.TweenOutIsComplete)
        {
            GameObject.DestroyObject(TweenOutAtk.Target.gameObject);

            TweenOutAtk.Target = null;
            mAtkOutTransform = null;
            mAtkedOutTransform = null;
        }
        else if (null != mAtkOutTransform &&
          TweenOutAtk.TweenOutIsComplete &&
          TweenOut_IsSng)
        {
            GameObject.DestroyObject(TweenOutAtk.Target.gameObject);

            TweenOutAtk.Target = null;
            mAtkOutTransform = null;
            mAtkedOutTransform = null;
        }

        bool isSng = TweenOutAtk_ResLoaded && TweenOut_IsSng;
        bool isTwo = TweenOutAtk_ResLoaded && TweenOutAtked_ResLoaded;
        if (isSng || isTwo)
        {
            TweenOutAtk_ResLoaded = false;
            TweenOutAtked_ResLoaded = false;

            TweenOutAtk.TweenToFightLayer();
            if (!TweenOut_IsSng)
                TweenOutAtked.TweenToFightLayer(true);

            TweenOutOrgObjectAtk.gameObject.SetActive(false);
            if (!TweenOut_IsSng)
                TweenOutOrgObjectAtked.gameObject.SetActive(false);
        }
    }

    /// <summary>加载地图后加载角色</summary>
    /// <param name="mapId"></param>
    /// <param name="complete"></param>
    public void LoadMapThenAvatar(string mapId, UnityEngine.Events.UnityAction complete = null)
    {
        LoadMapThenAvatarComplete = complete;
        LoadMap(mapId, OnLoader_MapComplete);
    }

    private UnityEngine.Events.UnityAction LoadMapThenAvatarComplete;

    private void OnLoader_MapComplete()
    {
        LoadAvatar(LoadMapThenAvatarComplete);
        LoadMapThenAvatarComplete = null;
    }

    /// <summary>加载地图</summary>
    public void LoadMap(int mapId, UnityEngine.Events.UnityAction complete = null)
    {
        string mapName = "";
        on_complete_map = complete;
        ResourceManager.Instance.LoadPrefab(mapName, OnLoader_MapComplete, OnLoader_Error);
    }

    /// <summary>加载地图</summary>
    public void LoadMap(string mapName, UnityEngine.Events.UnityAction complete = null)
    {
        on_complete_map = complete;
        ResourceManager.Instance.LoadPrefab(mapName, OnLoader_MapComplete, OnLoader_Error);
    }

    /// <summary>加载地图完成 </summary>
    private void OnLoader_MapComplete(string name, GameObject obj)
    {
        if (null != on_complete_map)
            on_complete_map();

        obj.layer = LayerMask.NameToLayer("BackGround");
        MapObject = obj.transform;

        on_complete_map = null;
        PureMVC.Patterns.Facade.Instance.SendNotification(NotificationID.Fight_LoaderMapComplete);
        ResourceManager.Instance.LoadPrefab("UIEffect_Arrow".ToLower(), OnLoad_ArrowComplete, OnLoader_Error);
    }

    /// <summary>加载卡牌化身 </summary>
    public void LoadAvatar(UnityEngine.Events.UnityAction complete = null)
    {
        if (complete != null)
            on_complete_avatar = complete;

        if (SimpleHeroDatas.Count > 0)
        {
            LoadAvatar(SimpleHeroDatas[0]);
        }
        else
        {

        }
    }

    /// <summary>加载卡牌化身 </summary>
    private void LoadAvatar(SimpleHeroData vo)
    {
        string avatarName = "";
        ResourceManager.Instance.LoadPrefab(avatarName, OnLoader_AvatarComplete, OnLoader_Error);
    }

    /// <summary>加载卡牌化身错误 </summary>
    private void OnLoader_Error(string error)
    {

    }

    /// <summary>加载卡牌化身完成 </summary>
    private void OnLoader_AvatarComplete(string name, GameObject obj)
    {
        PureMVC.Patterns.Facade.Instance.SendNotification(NotificationID.Fight_LoaderAvatarItemComplete, SimpleHeroDatas[0]);
        SimpleHeroDatas.RemoveAt(0);
        if (SimpleHeroDatas.Count > 0)
        {
            LoadAvatar();
        }
        else
        {
            if (null != on_complete_avatar)
                on_complete_avatar();

            on_complete_avatar = null;

            PureMVC.Patterns.Facade.Instance.SendNotification(NotificationID.Fight_LoaderAvatarComplete);
        }
    }


    public void OnGUI()
    {
        if (GUI.Button(new Rect(0, 0, 150, 40), "FightTest"))
        {
            int cnt = Msgs.Count;
            AttackVO atkVo = null;
            for (int i = 0; i < cnt; i++)
            {
                EffectVO vo = Msgs[i];
                vo.Target.Pid = PlayerProxy.Instance.Info.pid;

                if (vo.HeroProp == HeroPropType.Damage || vo.HeroProp == HeroPropType.Hp || vo.HeroProp == HeroPropType.Shield)
                {
                    atkVo = PVPManager.Instance.On_AddMainOverEffect(vo);
                }
                else if (null != PVPManager.Instance)
                {
                    PVPManager.Instance.On_AddEffect(vo);
                }
            }

            if (null != PVPManager.Instance && !PVPManager.Instance.InPlayMainAnimation() && null != atkVo)
                PVPManager.Instance.PlayMainAnimation(atkVo);
        }

        GUI.Label(new Rect(100, 100, 400, 40), FightProxy.xxxxxx);
    }

    /// <summary>播放主动画</summary>
    public void PlayMainAnimation()
    {
        if (TweenOut_IsSng && TweenOutOrgObjectAtk == null)
        {
            Debug.LogError("TweenOutOrgObjectAtk no data");
            return;
        }
        else if ((TweenOutOrgObjectAtked == null || TweenOutOrgObjectAtk == null) && !TweenOut_IsSng)
        {
            Debug.LogError("TweenOutOrgObjectAtk,TweenOutOrgObjectAtked no data");
            return;
        }

        TweenOutAtk.OnTweenOutComplete = OnTween_TeamAOutComplete;
        TweenOutAtked.OnTweenOutComplete = OnTween_TeamBOutComplete;

        mTweenOutAtkOver = false;
        mTweenOutAtkedOver = false;
        OnLoad_TweenRes();
    }

    public void OnLoad_TweenRes()
    {
        mAtkCfg = HeroConfig.GetItem(1001);

        TD_Skill skillItem = SkillConfig.GetItem(10011001);

        if (Define.VSTest)
        {
            skillItem.hero_out = "test_outtween";
            skillItem.hero_back = "test_outtween";
        }


        ResourceManager.Instance.LoadPrefab(skillItem.hero_out.ToLower(), (abname, obj) =>
        {
            TweenOutAtk.IsMirror = IsMirror;
            mAtkOutTransform = obj.transform;
            TweenOutAtk.Target = obj.transform;
            TweenOutAtk.InitParams(skillItem.animation);

            TweenOutAtk.AdaptMapObjectPosition(TweenOutOrgObjectAtk.position);

            TweenOutAtk_ResLoaded = true;

        }, OnLoader_Error);

        if (!TweenOut_IsSng)
        {
            mAtkedCfg = HeroConfig.GetItem(1001);
            ResourceManager.Instance.LoadPrefab(mAtkedCfg.hero_atked.ToLower(), (abname, obj) =>
            {
                TweenOutAtked.FaceX = -1;
                TweenOutAtked.IsMirror = IsMirror;
                mAtkedOutTransform = obj.transform;
                TweenOutAtked.Target = obj.transform;
                TweenOutAtked.InitParams(skillItem.animation);
                TweenOutAtked.AdaptMapObjectPosition(TweenOutOrgObjectAtked.position);

                TweenOutAtked_ResLoaded = true;
                mAtkedBackTransform = obj.transform;

            }, OnLoader_Error);
        }

        if (!skillItem.animation.IsNullOrEmpty())
            ResourceManager.Instance.LoadPrefab(skillItem.animation.ToLower(), OnLoader_FightCompleteTest, OnLoader_Error);

        ResourceManager.Instance.LoadPrefab(skillItem.hero_back.ToLower(), (abname, obj) =>
        {
            obj.SetActive(false);
            obj.name = "atk_tweenOut";
            mAtkBackTransform = obj.transform;

        }, OnLoader_Error);
    }

    public void Test_LoaderMapAndAvatar()
    {
        if (LoadingObject)
            return;

        LoadingObject = true;
        LoadMap("test_map");
    }

    /// <summary>添加执行效果</summary>
    /// <param name="vo"></param>
    public void On_AddEffect(EffectVO vo)
    {
        if (null == mEffects)
            mEffects = new List<EffectVO>();


        if (vo.Type == TargetType.Role && vo.RoleProp == RolePropType.ExtractCard)
        {
            CanDoMoveNextEffect = true;
            mMoveEffects.Add(vo);
        }
        else
        {
            mEffects.Add(vo);
        }

        On_DoNextEffect();
    }

    /// <summary>添加主动画过后执行效果</summary>
    /// <param name="vo"></param>
    public AttackVO On_AddMainOverEffect(EffectVO vo)
    {
        AttackVO atkvo = new AttackVO();
        atkvo.Pid = vo.Source.Pid;
        atkvo.TargetPid = vo.Target.Pid;
        atkvo.From = vo.Source.Target;
        atkvo.To = vo.Target.Target;

        AttackVO dicvo;

        if (!AttackDIc.TryGetValue(atkvo.ID, out dicvo))
            AttackDIc[atkvo.ID] = atkvo;

        AttackDIc[atkvo.ID].Effects.Add(vo);

        return AttackDIc[atkvo.ID];
    }

    /// <summary>执行主动画过后执行效果</summary>
    public void On_DoMainOverEffect()
    {
        if (null == CurrentAttack)
            return;

        int cnt = CurrentAttack.Effects.Count;
        for (int i = 0; i < cnt; i++)

            On_AddEffect(CurrentAttack.Effects[i]);
        //Facade.Instance.SendNotification(NotificationID.Fight_Effect, CurrentAttack.Effects[i]);
    }

    /// <summary>执行下一个效果</summary>
    public void On_DoNextEffect(bool force = false)
    {
        if (force)
            CanDoNextEffect = true;

        if (!CanDoNextEffect)
            return;

        if (mEffects.Count > 0)
        {
            EffectVO vo = mEffects[0];

            mEffects.RemoveAt(0);

            CanDoNextEffect = false;
            Facade.Instance.SendNotification(NotificationID.Fight_Effect, vo);
        }

        On_DoMoveNextEffect();
    }

    /// <summary>执行下一个移动</summary>
    public void On_DoMoveNextEffect(bool force = false)
    {
        if (force)
            CanDoMoveNextEffect = true;

        if (!CanDoMoveNextEffect)
            return;

        if (mMoveEffects.Count > 0)
        {
            EffectVO vo = mMoveEffects[0];

            mMoveEffects.RemoveAt(0);

            CanDoMoveNextEffect = false;
            Facade.Instance.SendNotification(NotificationID.Fight_Effect, vo);
        }
    }

    public void Test_LoaderAvatar()
    {
        if (FightProxy.Instance.RoomInfo != null)
        {
            bool isMe = FightProxy.Instance.RoomInfo.frole.pid == PlayerProxy.Instance.Info.pid;

            List<FightHeroMsg> teamA;
            List<FightHeroMsg> teamB;

            System.Action<string, GameObject, object> teamABack;
            System.Action<string, GameObject, object> teamBBack;

            //if (isMe)
            //{
                teamA = FightProxy.Instance.RoomInfo.frole.heros;
                teamB = FightProxy.Instance.RoomInfo.srole.heros;

                teamABack = OnLoader_FSideAvatarCompleteTest;
                teamBBack = OnLoader_SSideAvatarCompleteTest;
            //}
            //else
            //{
            //    teamA = FightProxy.Instance.RoomInfo.srole.heros;
            //    teamB = FightProxy.Instance.RoomInfo.frole.heros;

            //    teamABack = OnLoader_OpAvatarCompleteTest;
            //    teamBBack = OnLoader_MyAvatarCompleteTest;
            //}

            TD_Hero heroCfg;
            FightHeroMsg loadMsg;
            int cnt = teamA.Count;
            for (int i = 0; i < cnt; i++)
            {
                loadMsg = teamA[i];
                heroCfg = HeroConfig.GetItem(loadMsg.heroId);
                ResourceManager.Instance.LoadPrefab(heroCfg.res, teamABack, OnLoader_Error, loadMsg);
            }

            cnt = teamB.Count;
            for (int i = 0; i < cnt; i++)
            {
                loadMsg = teamB[i];
                heroCfg = HeroConfig.GetItem(loadMsg.heroId);
                ResourceManager.Instance.LoadPrefab(heroCfg.res, teamBBack, OnLoader_Error, loadMsg);
            }
        }
        else
        {
            for (int i = 0; i < Test_MyAB.Count; i++)
                ResourceManager.Instance.LoadPrefab(Test_MyAB[i], OnLoader_FSideAvatarCompleteTest, OnLoader_Error, i);

            for (int i = 0; i < Test_OpAB.Count; i++)
                ResourceManager.Instance.LoadPrefab(Test_OpAB[i], OnLoader_SSideAvatarCompleteTest, OnLoader_Error, i);
        }
    }

    /// <summary>加载A队人物伍完成</summary>
    /// <param name="abName"></param>
    /// <param name="obj"></param>
    /// <param name="param"></param>
    private void OnLoader_FSideAvatarCompleteTest(string abName, GameObject obj, object param)
    {
        CreateSpineAni create = obj.GetComponent<CreateSpineAni>();
        create.SpineScale = new Vector3(0.01f, 0.01f, 0.01f);

        int index;
        CardRole cdRole = obj.GetComponent<CardRole>();
        if (FightProxy.Instance.RoomInfo != null)
        {
            FightHeroMsg msg = param as FightHeroMsg;
            cdRole.SerData = msg;

            index = msg.pos - 1;
            cdRole.SlotIndex = msg.pos;

            CardRoleDidDic[msg.heroId] = cdRole;
        }
        else
        {
            index = param.ToInt();

            FightHeroMsg msg = new FightHeroMsg();
            msg.heroId = index;

            cdRole.SerData = msg;
            cdRole.SerData.pos = index;
            cdRole.SlotIndex = index + 1;

            CardRoleDidDic[msg.heroId] = cdRole;
        }


        cdRole.SlotPostion = Instance.MyPosition[index].position;
        obj.transform.position = Instance.MyPosition[index].position;

        TransformCardRoleTeamA[obj.transform] = cdRole;

        obj.layer = LayerMask.NameToLayer("MapLayer");

        Facade.Instance.SendNotification(NotificationID.FightRoleHp_AddMyHP, cdRole);
    }


    /// <summary>加载B队人物伍完成</summary>
    /// <param name="abName"></param>
    /// <param name="obj"></param>
    /// <param name="param"></param>
    private void OnLoader_SSideAvatarCompleteTest(string abName, GameObject obj, object param)
    {
        CreateSpineAni create = obj.GetComponent<CreateSpineAni>();
        create.SpineScale = new Vector3(0.01f, 0.01f, 0.01f);

        int index;
        CardRole cdRole = obj.GetComponent<CardRole>();
        if (FightProxy.Instance.RoomInfo != null)
        {
            FightHeroMsg msg = param as FightHeroMsg;
            cdRole.SerData = msg;

            index = msg.pos - 1;

            CardRoleDidDic[msg.heroId] = cdRole;
        }
        else
        {
            index = param.ToInt();

            FightHeroMsg msg = new FightHeroMsg();
            msg.heroId = index + 4;
            cdRole.SerData = msg;
            cdRole.SerData.pos = index;

            CardRoleDidDic[msg.heroId] = cdRole;
        }

        cdRole.SlotPostion = Instance.OpPosition[index].position;
        obj.transform.position = Instance.OpPosition[index].position;

        obj.layer = LayerMask.NameToLayer("MapLayer");

        TransformCardRoleTeamB[obj.transform] = cdRole;

        Facade.Instance.SendNotification(NotificationID.FightRoleHp_AddOpHP, cdRole);
    }

    private void OnLoader_FightCompleteTest(string abName, GameObject obj, object param)
    {
        obj.layer = LayerMask.NameToLayer("FightLayer");
        obj.SetActive(false);

        mFightObject = obj;

        if (IsMirror)
        {
            Vector3 scale = obj.transform.localScale;
            scale.x *= -1;
            obj.transform.localScale = scale;
        }
    }

    private void OnTween_TeamAOutComplete()
    {
        mTweenOutAtkOver = true;
    }

    private void OnTween_TeamBOutComplete()
    {
        mTweenOutAtkedOver = true;
    }

    /// <summary>获取卡牌</summary>
    /// <param name="did"></param>
    /// <returns></returns>
    public CardRole GetCardRoleByDid(int did)
    {
        CardRole cdrole = CardRoleDidDic[did];

        return cdrole;
    }

    /// <summary>获取卡牌</summary>
    /// <param name="did"></param>
    /// <returns></returns>
    public CardRole GetCardRoleByPos(bool isTeamA, int pos)
    {
        CardRole cdrole = null;

        if (isTeamA)
        {
            foreach (var itmA in TransformCardRoleTeamA)
            {
                if (itmA.Value.SerData.pos == pos)
                {
                    cdrole = itmA.Value;
                    break;
                }
            }
        }
        else
        {
            foreach (var itmB in TransformCardRoleTeamB)
            {
                if (itmB.Value.SerData.pos == pos)
                {
                    cdrole = itmB.Value;
                    break;
                }
            }
        }

        return cdrole;
    }

    /// <summary>获取卡牌</summary>
    /// <param name="did"></param>
    /// <returns></returns>
    public CardRole GetCardRoleByTransform(Transform trans)
    {
        CardRole cdrole = null;

        if (!TransformCardRoleTeamA.TryGetValue(trans, out cdrole))
        {
            TransformCardRoleTeamB.TryGetValue(trans, out cdrole);
        }

        return cdrole;
    }

    /// <summary>是否在播放主动画</summary>
    /// <returns></returns>
    public bool InPlayMainAnimation()
    {
        return CurrentAttack != null;
    }

    /// <summary></summary>
    /// <param name="pos">self position</param>
    public void OnPrefabEvent_Complete(Transform trans, Vector3 pos, Vector3 enemyPos)
    {
        if (null != mFightObject && trans == mFightObject.transform)
        {
            mAtkBackTransform.gameObject.SetActive(true);
            if (null != mAtkedBackTransform)
                mAtkedBackTransform.gameObject.SetActive(true);

            mAtkBackTransform.localScale = TweenOutAtk.EndScale;
            if (null != mAtkedBackTransform)
                mAtkedBackTransform.localScale = TweenOutAtked.EndScale;

            TweenOutAtk.Target = mAtkBackTransform;
            if (null != mAtkedBackTransform)
                TweenOutAtked.Target = mAtkedBackTransform;

            TweenOutAtk.Target.position = pos;
            if (TweenOutAtked != null && TweenOutAtked.Target != null)
                TweenOutAtked.Target.position = enemyPos;

            TweenOutAtk.TweenToMapLayer();
            if (TweenOutAtked != null)
                TweenOutAtked.TweenToMapLayer();

            mFightObject = null;
            On_DoMainOverEffect();
        }
    }

    private void OnLoad_ArrowComplete(string abname, GameObject obj)
    {
        obj.SetActive(false);

        if (ArrowObject != null)
            GameObject.DestroyObject(ArrowObject.gameObject);

        ArrowObject = obj.transform.GetComponent<MoveArrow>();
    }

    public static void SetArrowOrgPoint(Vector3 orgPt)
    {
        if (PVPManager.Instance != null && ArrowObject != null)
        {
            ArrowObject.ArrowCamera = PVPManager.Instance.FightCamera;
            ArrowObject.gameObject.SetActive(true);
            ArrowObject.SetOrgPoint(orgPt);
        }
    }

    public static void HideArrow()
    {
        if (PVPManager.Instance != null && ArrowObject != null)
        {
            ArrowObject.Hide();
        }
    }


    /// <summary>交换槽位</summary>
    /// <param name="role0"></param>
    /// <param name="role1"></param>
    public void ChangeSlotPostion(CardRole role0, CardRole role1)
    {
        Vector3 pos = role0.SlotPostion;
        role0.SlotPostion = role1.SlotPostion;
        role1.SlotPostion = pos;

        int indx = role0.SlotIndex;
        role0.SlotIndex = role1.SlotIndex;
        role1.SlotIndex = indx;
    }

    /// <summary>播放下一个主动画</summary>
    public void PlayNextMainAnimation()
    {
        if (mAttkQueue != null && mAttkQueue.Count > 0)
        {
            string key = mAttkQueue[0];

            mAttkQueue.RemoveAt(0);

            AttackVO atkvo;
            if (AttackDIc.TryGetValue(key, out atkvo))
                PlayMainAnimation(AttackDIc[key]);
            else
                Debug.LogError("Do Not Find:" + key);
        }
    }

    /// <summary>播放攻击主动画</summary>
    /// <param name="atkVo"></param>
    public void PlayMainAnimation(AttackVO atkVo)
    {
        if (CurrentAttack != null)
        {
            if (mAttkQueue == null)
                mAttkQueue = new List<string>();

            mAttkQueue.Add(atkVo.ID);
            return;
        }

        CurrentAttack = atkVo;
        AttackDIc.Remove(atkVo.ID);

        string warnstr = CurrentAttack == null ? "CurrentAttack is Null" : "CurrentAttack not Null";
        Debug.Log(warnstr);

        bool isFst = atkVo.TargetPid == FightProxy.Instance.RoomInfo.frole.pid;

        CardRole cd0 = PVPManager.Instance.GetCardRoleByPos(isFst, atkVo.From);
        CardRole cd1 = PVPManager.Instance.GetCardRoleByPos(!isFst, atkVo.To);


        PVPManager.Instance.TweenOutOrgObjectAtk = cd0.transform;
        PVPManager.Instance.TweenOutOrgObjectAtked = cd1.transform;

        Vector3 atkScreenPos = AvatarCamera.WorldToScreenPoint(PVPManager.Instance.TweenOutOrgObjectAtk.position);
        Vector3 atkedScreenPos = AvatarCamera.WorldToScreenPoint(PVPManager.Instance.TweenOutOrgObjectAtked.position);

        PVPManager.Instance.IsMirror = atkScreenPos.x > atkedScreenPos.x;

        PVPManager.Instance.PlayMainAnimation();
    }

    public void DestroyObject()
    {
        if (ArrowObject != null)
            GameObject.DestroyImmediate(ArrowObject.gameObject);
        ArrowObject = null;

        if (null != MapObject)
            GameObject.DestroyImmediate(MapObject.gameObject);
        MapObject = null;
    }

    public void OnDestroy()
    {
        DestroyObject();
        IsMyTurn = false;
        LoadingObject = false;
        CanDoNextEffect = false;
        UICardDrag.DragObject = null;
        UICardDrag.ClickedObject = null;
    }
}

public class AttackVO
{
    public int Pid;
    public int TargetPid;
    public int From;
    public int To;
    public int SkillId;

    public List<EffectVO> Effects = new List<EffectVO>();

    public string ID
    {
        get
        {
            return Pid + "_" + TargetPid + "_" + From + "_" + To;
        }
    }
}
