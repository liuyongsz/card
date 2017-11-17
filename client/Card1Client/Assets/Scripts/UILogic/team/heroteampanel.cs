using System;
using PureMVC.Interfaces;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using AssetBundles;
using NetProtocal;
using Spine.Unity;

/// <summary>
/// 获取控件
/// </summary>
public class heroteampanel : BasePanel
{
    public UISprite backBtn;
    public UISprite showTeamUIBtn;
    public UISprite reset;
    public UIGrid heroGrid;
    public UIGrid cardGrid;
    public UISprite createTeamBtn;
    public UISprite changeNameBtn;
    public UISprite deleteCardBtn;
    public Transform pos;
    public UILabel teamName;
    public UIScrollView heroScrollView;
    public UIScrollView cloneScrollView;
    public SpriteRenderer startPos;
}


public class HeroTeamMediator : UIMediator<heroteampanel>
{
    public heroteampanel panel
    {
        get
        {
            return m_Panel as heroteampanel;
        }
    }
    public HeroListMsg heroListMsg;
    private List<HeroInfo> heroList = new List<HeroInfo>();
    public static HeroTeamMediator heroTeamMediator;
    private static MoveArrow arrowObject;
    public HeroInfo dropInfo;
    private UIGridItem startPos;
    public HeroTeamMediator() : base("heroteampanel")
    {
        m_isprop = false;
        isHideMain = true;
        RegistPanelCall(NotificationID.HeroTeamOpen, OpenPanel);
        RegistPanelCall(NotificationID.HeroTeamClose, ClosePanel);
    }

    /// <summary>
    /// 界面显示之前调用
    /// </summary>
    protected override void OnStart(INotification notification)
    {

        if (heroTeamMediator == null)
        {
            heroTeamMediator = Facade.RetrieveMediator("HeroTeamMediator") as HeroTeamMediator;
        }
        panel.heroGrid.enabled = true;
        panel.heroGrid.BindCustomCallBack(UpdateHeroGrid);
        panel.heroGrid.StartCustom();
        panel.cardGrid.enabled = true;
        panel.cardGrid.BindCustomCallBack(UpdateDownHeroGrid);
        panel.cardGrid.StartCustom();

    }

    /// <summary>
    /// 复制当前小队
    /// </summary>
    void CopyTeam()
    {
        int cardList = HeroProxy.Instance.cardListMsg.cardList.Count + 1;
        CopyTeamMsg msg = new CopyTeamMsg
        {
            type = 1,
            teamId = heroListMsg.id,
            name = string.Format(TextManager.GetUIString("UI1017"), cardList),
        };
        NSocket.GetInstance().SendData(Request.CopyCardTeam, msg);
    }

    /// <summary>
    /// 创建新的小队
    /// </summary>
    void CeateTeam()
    {
        int cardList = HeroProxy.Instance.cardListMsg.cardList.Count + 1;
        ParamStrMsg info = new ParamStrMsg
        {
            strValue = string.Format(TextManager.GetUIString("UI1017"), cardList)
        };
        NSocket.GetInstance().SendData(Request.CreateCardTeam, info);
    }

    /// <summary>
    /// 重置小队
    /// </summary>
    void ResetTeam()
    {
        ParamIntMsg info = new ParamIntMsg
        {
            intValue = heroListMsg.id,
        };
        NSocket.GetInstance().SendData(Request.ResetCardTeam, info);
    }
    /// <summary>
    /// 界面显示调用
    /// </summary> 
    protected override void OnShow(INotification notification)
    {
        heroListMsg = (HeroListMsg)notification.Body;
        UpdateTeamInfo(heroListMsg);
    }


    /// <summary>
    /// 刷新小队信息
    /// </summary>
    /// <param name="info"></param>
    public void UpdateTeamInfo(HeroListMsg info)
    {
        heroList.Clear();
        heroListMsg = info;
        info.heroList.Sort((x, y) => y.pos.CompareTo(x.pos));
        panel.teamName.text = info.teamName;
        List<int> pos = new List<int> { 1, 2, 3, 4 };
        for (int i = 0; i < info.heroList.Count; ++i)
        {
            if (info.heroList[i].pos == 0)
                continue;
            HeroInfo infos = new HeroInfo
            {
                heroUUId = info.heroList[i].heroUUId,
                configId = info.heroList[i].configId,
                pos = info.heroList[i].pos,
                arcaneId = info.heroList[i].arcaneId,
                cardTeamName = info.heroList[i].cardTeamName,
            };
            pos.Remove(info.heroList[i].pos);
            heroList.Add(infos);
        }

        for (int i = 0; i < pos.Count; ++i)
        {
            HeroInfo infos = new HeroInfo
            {
                heroUUId = 0,
                pos = pos[i],
            };
            heroList.Add(infos);
        }
        heroList.Sort((x, y) => x.pos.CompareTo(y.pos));
        panel.heroGrid.AddCustomDataList(AddGridDataList(4, heroList));
        panel.cardGrid.AddCustomDataList(AddGridDataList(8, info.heroList));
    }


    List<object> AddGridDataList(int index, List<HeroInfo> heroList)
    {
        List<object> list = new List<object>();
        for (int i = 0; i < index; ++i)
        {
            if (heroList.Count > i)
            {
                list.Add(heroList[i]);
            }
            else
            {
                HeroInfo data = new HeroInfo
                {
                    heroUUId = 0
                };
                list.Add(data);
            }
        }
        return list;
    }

    /// <summary>
    /// 事件组件
    /// </summary>
    protected override void AddComponentEvents()
    {
        UIEventListener.Get(panel.changeNameBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(panel.backBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(panel.createTeamBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(panel.showTeamUIBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(panel.reset.gameObject).onClick = OnClick;
    }
    /// <summary>
    /// 点击事件
    /// </summary>
    private void OnClick(GameObject go)
    {
        if (go == panel.backBtn.gameObject)
        {
            ClosePanel(null);
        }
        else if (go == panel.createTeamBtn.gameObject)
        {
            GUIManager.ShowPromptPanel(TextManager.GetUIString("UI1032"), "", PromtType.CreateTeam, null, CeateTeam, CopyTeam);
        }
        else if (go == panel.changeNameBtn.gameObject)
        {
            ResourceManager.Instance.LoadPrefab("changeteamnamepanel", ChangeTeamNamePanelComplete, LoadFail);
        }
        else if (go == panel.showTeamUIBtn.gameObject)
        {
            NSocket.GetInstance().SendData(Request.TeamListReq);
        }
        else if (go == panel.reset.gameObject)
        {
            GUIManager.ShowPromptPanel(TextManager.GetUIString("UI1012"), TextManager.GetUIString("UI1031"), PromtType.Normal, ResetTeam, null, null);
        }
    }

    /// <summary>
    /// 加载改变队伍名字界面
    /// </summary>
    /// <param name="abName"></param>
    /// <param name="obj"></param>
    /// <param name="param"></param>
    void ChangeTeamNamePanelComplete(string abName, GameObject obj, object param)
    {
        Main.blurCamera.gameObject.SetActive(true);
        Main.CameraUI.GetComponent<Blur>().enabled = true;
        obj.transform.parent = Main.blurCamera.transform;
        obj.transform.localPosition = Vector3.zero;
        obj.transform.localScale = Vector3.one;
    }

    /// <summary>
    /// 刷新上阵小队信息
    /// </summary>
    /// <param name="item"></param>
    void UpdateHeroGrid(UIGridItem item)
    {
        if (item == null || item.oData == null || item.mScripts == null)
            return;
        item.onPress = SeeHeroArcaneInfo;
        HeroInfo info = item.oData as HeroInfo;
        UILabel heroName = item.mScripts[0] as UILabel;
        UILabel cardName = item.mScripts[1] as UILabel;
        UITexture isEmpty = item.mScripts[4] as UITexture;
        CreateSpineAni player = item.mScripts[2] as CreateSpineAni;
        item.name = "hero" + item.miCurIndex.ToString();
        if (player != null)
            MonoBehaviour.Destroy(player.gameObject);
        heroName.gameObject.SetActive(info.heroUUId > 0);
        cardName.gameObject.SetActive(info.heroUUId > 0);
        isEmpty.gameObject.SetActive(info.heroUUId <= 0);
        if (info.heroUUId > 0)
        {
            TD_Hero heroInfo = HeroConfig.GetItem(info.configId);
            heroName.text = heroInfo.name;
            cardName.text = info.cardTeamName;
            ResourceManager.Instance.LoadPrefab(heroInfo.res, LoadComplete, LoadFail, item);
        }
       
    }
    /// <summary>
    /// 查看英雄装备的奥义
    /// </summary>
    /// <param name="item"></param>
    /// <param name="isPressed"></param>
    void SeeHeroArcaneInfo(UIGridItem item, bool isPressed)
    {
        RaycastHit hit;
        Ray ray;
        UIGridItem hitItem;
        if (item.mScripts[2] == null)
            return;
        if (isPressed)
        {
            Facade.SendNotification(NotificationID.ArcaneInfoOpen, item);
            startPos = item;
            item.GetComponent<UIGridItem>().mScripts[2].GetComponent<CardRole>().ShowHighlighter();
            ResourceManager.Instance.LoadPrefab("linerender", LoadLineRenderComplete, LoadFail, item.gameObject);
        }
        else
        {
            panel.startPos.gameObject.SetActive(false);
            item.GetComponent<UIGridItem>().mScripts[2].GetComponent<CardRole>().HideHighlighter();
            if (ArcaneInfoMediator.arcaneInfoMediator != null)
                Facade.SendNotification(NotificationID.ArcaneInfoClose);
            if (Main.Ins.lineRender != null)
            {
                MonoBehaviour.DestroyImmediate(Main.Ins.lineRender.gameObject);
                Main.Ins.lineRender = null;
            }
            Main.Ins.Camera3D.gameObject.SetActive(false);
            ray = UICamera.currentCamera.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit, Mathf.Infinity))
            {
                if (hit.collider.transform.name.Contains("hero") && hit.collider.GetComponent<UIGridItem>() != null)
                {
                    hitItem = hit.collider.GetComponent<UIGridItem>();
                    if (hitItem.mScripts[2] != null)
                        hitItem.mScripts[2].GetComponent<CardRole>().HideHighlighter();
                    SwitchTwoHeroPosition(startPos, hit.collider.GetComponent<UIGridItem>());
                }
            }
        }
    }
    /// <summary>
    /// 加载箭头指向
    /// </summary>
    /// <param name="abName"></param>
    /// <param name="obj"></param>
    /// <param name="param"></param>
    void LoadLineRenderComplete(string abName, GameObject obj, object param)
    {
        UIGridItem item = (param as GameObject).GetComponent<UIGridItem>();
        panel.startPos.gameObject.SetActive(true);
        panel.startPos.transform.position = item.transform.position;
        Main.Ins.lineRender = obj.GetComponent<MoveHeroPosition>();
        Material mat = Resources.Load("Mat/UI_Additive") as Material;
        Main.Ins.lineRender.transform.FindChild("jiantou").GetComponent<SpriteRenderer>().material = mat;
        panel.startPos.material = mat;
        Main.Ins.lineRender.canMove = true;
        Main.Ins.lineRender.tragetV3 = item.transform.position;
        Main.Ins.lineRender.transform.position = Vector3.zero;
        Main.Ins.lineRender.transform.localScale = 0.2f * Vector3.one;
    }
    /// <summary>
    /// 交换两个英雄位置
    /// </summary>
    /// <param name="start"></param>
    /// <param name="end"></param>
    void SwitchTwoHeroPosition(UIGridItem start, UIGridItem end)
    {
        if (start == null || end == null || start.miCurIndex == end.miCurIndex)
            return;
        Vector3 temp = start.transform.localPosition;
        TweenPosition.Begin(start.gameObject, 0.2f, end.transform.localPosition);
        TweenPosition.Begin(end.gameObject, 0.2f, temp);
        HeroInfo startInfo = start.oData as HeroInfo;
        HeroInfo endInfo = end.oData as HeroInfo;
        ChangeHeroPosMsg msg = new ChangeHeroPosMsg
        {
            teamId = heroListMsg.id,
            type = 1,
            heroId = startInfo.heroUUId,
            startPos = startInfo.pos,
            changId = endInfo.heroUUId,
            endPos = endInfo.pos,
        };
        startInfo.pos = msg.endPos;
        endInfo.pos = msg.startPos;
        NSocket.GetInstance().SendData(Request.ChangeHeroPos, msg);
    }
    /// <summary>
    /// 加载英雄预设成功
    /// </summary>
    /// <param name="abName"></param> 
    /// <param name="obj"></param>
    /// <param name="param"></param>
    void LoadComplete(string abName, GameObject obj, object param)
    {
        UIGridItem trans = param as UIGridItem;
        obj.transform.parent = trans.mScripts[3].transform;
        GUIManager.ChangeLayer(obj, "UI");
        trans.GetComponent<UIGridItem>().mScripts[2] = obj.GetComponent<CreateSpineAni>();
        obj.GetComponent<CreateSpineAni>().SpineScale = Vector3.one * 2;
        obj.GetComponent<BoxCollider>().enabled = false;
        obj.transform.localPosition = new Vector3(0, -212, 0);
    }

    
    
    /// <summary>
    /// 加载英雄预设失败
    /// </summary>
    /// /// <param name="abName"></param>
    void LoadFail(string abName)
    {
        Debug.LogError("cannot find this prefab" + abName);
    }
    /// <summary>
    /// 刷新备用小队信息
    /// </summary>
    /// <param name="item"></param>
    void UpdateDownHeroGrid(UIGridItem item)
    {
        if (item == null || item.oData == null || item.mScripts == null)
            return;
        HeroInfo info = item.oData as HeroInfo;
        UITexture head = item.mScripts[0] as UITexture;
        UILabel cardName = item.mScripts[1] as UILabel;
        UISprite addHeroBtn = item.mScripts[2] as UISprite;
        UISprite isFight = item.mScripts[3] as UISprite;
        UISprite dropItemSpri = item.mScripts[4] as UISprite;
        UILabel isMove = item.mScripts[5] as UILabel;
        UISprite isReady = item.mScripts[6] as UISprite;
        dropItemSpri.gameObject.SetActive(false);
        isMove.gameObject.SetActive(true);
        UIEventListener.Get(addHeroBtn.gameObject).onClick = CreateCardTeam;
        item.onPress = ChooseItem;
        item.onClick = SetHeroItem;
        isFight.gameObject.SetActive(info.pos >= 1);
        addHeroBtn.gameObject.SetActive(info.heroUUId == 0);
        isReady.gameObject.SetActive(false);
        if (info.heroUUId > 0)
        {
            TD_Hero hero = HeroConfig.GetItem(info.configId);
            isReady.gameObject.SetActive(info.arcaneId == 0 || info.skillID.Count < hero.deck_build);
            if (isReady.gameObject.activeSelf)
                isReady.Additive = true;
            LoadSprite.LoaderHead(head, hero.headRes);
            cardName.text = info.cardTeamName;
        }
        else
        {
            head.mainTexture = null;
            cardName.text = TextManager.GetUIString("UI1005");
        }
    }
    /// <summary>
    /// 创建英雄卡组
    /// </summary>
    /// <param name="go"></param>
    void CreateCardTeam(GameObject go)
    {
        dropInfo = go.GetComponentInParent<UIGridItem>().oData as HeroInfo;
        NSocket.GetInstance().SendData(Request.HeroListReq);
    }

    /// <summary>
    /// 添加新建英雄卡组
    /// </summary>
    /// <param name="cardInfoList"></param>
    public void AddNewCardTeam(CardInfoListMsg cardInfoList)
    {
        dropInfo.heroUUId = cardInfoList.heroId;
        dropInfo.configId = cardInfoList.heroConfigId;
        dropInfo.pos = 0;
        dropInfo.arcaneId = cardInfoList.arcaneId;
        dropInfo.cardTeamName = cardInfoList.cardName;
        panel.cardGrid.UpdateCustomData(dropInfo);
    }
    /// <summary>
    /// 上阵英雄
    /// </summary>
    public void SetHeroFight(int fightIndex,int index)
    {
        HeroInfo info = panel.heroGrid.GetCustomDataItem(index) as HeroInfo;
        HeroInfo downInfo = panel.cardGrid.GetCustomDataItem(fightIndex) as HeroInfo;
        int replaceId = 0;
        replaceId = info.heroUUId;
        bool haveFight = false;
        for (int i = 0; i < panel.heroGrid.mDataSource.Count; ++i)
        {
            if ((panel.heroGrid.GetCustomDataItem(i) as HeroInfo).configId == downInfo.configId)
            {
                if(index == i)
                {
                    continue;
                }
                haveFight = true;
                break;
            }
        }
        if (haveFight || downInfo.pos > 0)
        {
            Debug.LogError("已经存在");
            panel.cardGrid.UpdateCustomData(downInfo);
            return;
        }
        TD_Hero hero = HeroConfig.GetItem(downInfo.configId);
        if (downInfo.skillID.Count < hero.deck_build || downInfo.arcaneId == 0)
        {
            Debug.LogError("技能没有全或者奥义没有选奥义");
            panel.cardGrid.UpdateCustomData(downInfo);
            return;
        }
        if (info.heroUUId != 0)
        {
            HeroInfo infos = null;
            for (int i = 0; i < panel.cardGrid.mDataSource.Count; ++i)
            {
                infos = panel.cardGrid.GetCustomDataItem(i) as HeroInfo;
                if (infos.heroUUId == info.heroUUId)
                {
                    infos.pos = 0;
                    panel.cardGrid.UpdateCustomData(infos);
                    break;
                }
            }
        }
        info.heroUUId = downInfo.heroUUId;
        info.configId = downInfo.configId;
        info.cardTeamName = downInfo.cardTeamName;
        panel.heroGrid.UpdateCustomData(info);
        downInfo.pos = index + 1;
        panel.cardGrid.UpdateCustomData(downInfo);
        HeroOnFightMsg msg = new HeroOnFightMsg
        {
            teamId = heroListMsg.id,
            heroId = downInfo.heroUUId,
            replaceId = replaceId,
            pos = downInfo.pos,
        };
        NSocket.GetInstance().SendData(Request.HeroOnFight, msg);
    }

    /// <summary>
    /// 拖拽结束无变化
    /// </summary>
    public void UpdateItem(int fightIndex)
    {
        HeroInfo downInfo = panel.cardGrid.GetCustomDataItem(fightIndex) as HeroInfo;
        panel.cardGrid.UpdateCustomData(downInfo);
    }
    /// <summary>
    /// 删除套牌
    /// </summary>
    /// <param name="fightIndex"></param>
    public void DeleteCardTeam(int fightIndex)
    {
        HeroInfo downInfo = panel.cardGrid.GetCustomDataItem(fightIndex) as HeroInfo;
        DeleteSuitCardMsg msg = new DeleteSuitCardMsg
        {
            teamUUid = heroListMsg.id,
            teamHeroUUid = downInfo.heroUUId,
        };
        NSocket.GetInstance().SendData(Request.HeroDeleteCardReq, msg);
        HeroInfo info;
        if (downInfo.pos > 0)
        {
            for (int i = 0; i < panel.heroGrid.mDataSource.Count; ++i)
            {
                info = panel.heroGrid.GetCustomDataItem(i) as HeroInfo;
                if (info.configId == downInfo.configId)
                {
                    info.heroUUId = 0;
                    info.configId = 0;
                    panel.heroGrid.UpdateCustomData(info);
                    break;
                }
            }
        }
        downInfo.heroUUId = 0;
        downInfo.pos = 0;
        downInfo.configId = 0;
        panel.cardGrid.UpdateCustomData(downInfo);
    }
    /// <summary>
    /// 设置英雄奥义 卡牌
    /// </summary>
    /// <param name="item"></param>
    void SetHeroItem(UIGridItem item)
    {
        dropInfo = item.oData as HeroInfo;
        CardMsg info = new CardMsg
        {
            teamHeroUUid = dropInfo.heroUUId,
            teamUUid = heroListMsg.id,
            oldCardId = 0,
        };
        NSocket.GetInstance().SendData(Request.TeamHeroCardListReq, info);
    }
    void ChooseItem(UIGridItem item,bool onPress)
    {
        if (!onPress)
            return;
        dropInfo = item.oData as HeroInfo;
        Debug.Log(dropInfo.heroUUId);
    }
    public void PlayAnimation()
    {
        panel.deleteCardBtn.GetComponent<Animation>().Play("aoyi_scale");
    }
    public void SetShowHighlighter(int index)
    {
        UIGridItem item = panel.heroGrid.GetCustomGridItem(index);
        item.mScripts[3].GetComponent<Animation>().Play("aoyi_scale");
        if (item.mScripts[2] == null)
            return;
        item.mScripts[2].GetComponent<CardRole>().ShowHighlighter();
        
    }
    
    public void HideHighlighter(int index)
    {
        UIGridItem item = panel.heroGrid.GetCustomGridItem(index);
        if (item.mScripts[2] == null)
            return;
        item.mScripts[2].GetComponent<CardRole>().HideHighlighter();
    }
    /// <summary>
    /// 关闭界面调用 释放内存
    /// </summary>
    protected override void OnDestroy()
    {
        heroTeamMediator = null;
        heroList.Clear();
        base.OnDestroy();
    }
}