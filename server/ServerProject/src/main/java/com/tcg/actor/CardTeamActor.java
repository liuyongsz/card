package com.tcg.actor;

import java.util.List;

import com.tcg.annotation.MessageMapping;
import com.tcg.constant.ChannelKeyConstant;
import com.tcg.data.HeroData;
import com.tcg.manager.ConfigManager;
import com.tcg.manager.MessageManager;
import com.tcg.msg.net.NetMessage;
import com.tcg.server.session.ISession;
import com.tcg.service.CardTeamDAO;
import com.tcg.service.HeroDAO;
import com.tcg.service.PlayerDAO;
import com.tcg.vo.CardHeroVO;
import com.tcg.vo.CardTeamVO;
import com.tcg.vo.HeroVO;
import com.tcg.vo.PlayerVO;

import protomsg.CardAssembly;
import protomsg.CardAssembly.ArcaneMsg;
import protomsg.CardAssembly.CardMsg;
import protomsg.CardAssembly.CardTeamInfo;
import protomsg.CardAssembly.CreateCardTeamMsg;
import protomsg.CardAssembly.DeleteSuitCardMsg;
import protomsg.CardAssembly.HeroOnFightMsg;
import protomsg.Result.ParamIntMsg;
import protomsg.Result.ParamStrMsg;
import protomsg.Result.ServerResultFlag;
import protomsg.Rpc;

import static protomsg.CardAssembly.*;

public class CardTeamActor extends MessageActor
{
    //请求小队列表
    @MessageMapping(Rpc.Request.CardAssemblyList_VALUE)
    public void getCardTeam(NetMessage message){
        ISession session = message.getSession();

        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);

        if (session == null || player == null)
            return;

        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        List<CardTeamVO> list = cardTeamDAO.getCardTeamList(session,1);
        session.write(MessageManager.getInstance().notifyCardTeamListMsg(list));

        CardTeamVO teamVO = cardTeamDAO.getTeamVO(session,player.getSelectCardTeamUUid());
        List<CardHeroVO> teamHeroList = cardTeamDAO.getTeamHeroList(session,1,player.getSelectCardTeamUUid());
        if (teamVO == null )
            return;
        session.write(MessageManager.getInstance().notifyTeamHeroListMsg(player,teamVO.getUuid(),teamVO.getTeamName(),teamHeroList));
    }
    //创建小队
    @MessageMapping(Rpc.Request.CreateCardTeam_VALUE)
    public void creatCardTeam(NetMessage message)
    {
        ParamStrMsg createCardTeamMsg = (ParamStrMsg)message.getLite();
        ISession session = message.getSession();
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);

        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        CardTeamVO vo = cardTeamDAO.setCardTeamVO(session,1,createCardTeamMsg.getStrValue());

        if (vo == null)
            return;

        List<CardTeamVO> list = cardTeamDAO.getCardTeamList(session,1);
        session.write(MessageManager.getInstance().notifyCardTeamListMsg(list));

        List<CardHeroVO> teamHeroList = cardTeamDAO.getTeamHeroList(session,1,vo.getUuid());
        session.write(MessageManager.getInstance().notifyTeamHeroListMsg(player,vo.getUuid(),vo.getTeamName(),teamHeroList));


//        session.write(MessageManager.getInstance().notifyCardTeamInfoMsg(vo.getUuid(),vo.getTeamName()));

    }



    //改变小队名字
    @MessageMapping(Rpc.Request.ChangeTeamName_VALUE)
    public void changeTeamName(NetMessage message){

        ISession session = message.getSession();
        CardTeamInfo info = (CardTeamInfo)message.getLite();

        boolean hasBadWord = ConfigManager.getInstance().checkHasBadWords(info.getName());
        if (hasBadWord){
            session.write(MessageManager.getInstance().notifyServerResponeMsg(ServerResultFlag.CardTeamNameHasIllegality));
            return;
        }

        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        boolean bool = cardTeamDAO.changeCardTeamName(session,info.getId(), info.getName());

        List<CardTeamVO> list = cardTeamDAO.getCardTeamList(session,1);
        session.write(MessageManager.getInstance().notifyCardTeamListMsg(list));

        if (bool){
            session.write(MessageManager.getInstance().notifyCardTeamInfoMsg(info.getId(),info.getName()));
        }

    }

    //小队英雄列表
    @MessageMapping(Rpc.Request.CardHeroList_VALUE)
    public void onGetTeamHeroList(NetMessage message){

        ISession session = message.getSession();
        PlayerDAO dao = ConfigManager.getInstance().getBean(PlayerDAO.class);
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);

        ParamIntMsg msg = (ParamIntMsg)message.getLite();

        int teamUUid = msg.getIntValue();
        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        player.setSelectCardTeamUUid(teamUUid);
        dao.savePlayerVO(player);

        CardTeamVO teamVO = cardTeamDAO.getTeamVO(session,teamUUid);

        List<CardHeroVO> teamHeroList = cardTeamDAO.getTeamHeroList(session,1,teamUUid);
        session.write(MessageManager.getInstance().notifyTeamHeroListMsg(player,teamUUid,teamVO.getTeamName(),teamHeroList));

    }
    //创建小队英雄牌组
    @MessageMapping(Rpc.Request.CreateCardTeamReq_VALUE)
    public void onCreateCardTeam(NetMessage message){

        ISession session = message.getSession();
        CreateCardTeamMsg msg = (CreateCardTeamMsg)message.getLite();
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);
        int teamId = msg.getTeamId();
        int heroConfigId = msg.getHeroConfigId();

        HeroData hero = ConfigManager.getInstance().getConfig(heroConfigId,HeroData.class);
        if (hero == null)
            return;

        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        CardHeroVO cardHeroVO = cardTeamDAO.setCardTeamHero(session,1,teamId,heroConfigId,0,hero.getArcane_initial(),hero.getHero_name());

        if (cardHeroVO == null)
            return;
        List<Integer> fightList = cardHeroVO.getCardList();
        HeroDAO heroDAO = ConfigManager.getInstance().getBean(HeroDAO.class);
        HeroVO heroVO = heroDAO.getHeroVO(player.getPid(),cardHeroVO.getConfigId());
        if (heroVO == null)
            return;
        List<Integer> hasList = heroVO.getCardList();
        session.write(MessageManager.getInstance().notifyTeamCardListMsg(cardHeroVO,hasList,fightList));
    }

    //小队英雄出战
    @MessageMapping(Rpc.Request.HeroOnFight_VALUE)
    public void onHeroOnFight(NetMessage message)
    {
        ISession session = message.getSession();
        HeroOnFightMsg info = (HeroOnFightMsg)message.getLite();

        int teamId = info.getTeamId();
        int heroId = info.getHeroId();
        int replaceId = info.getReplaceId();
        int pos = info.getPos();

        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        ServerResultFlag flag = cardTeamDAO.heroOnFight(session,teamId,heroId,replaceId,pos);

        session.write(MessageManager.getInstance().notifyServerResponeMsg(flag));

    }

    //重置组牌小队
    @MessageMapping(Rpc.Request.ResetCardTeam_VALUE)
    public void onResetCardTeam(NetMessage message)
    {
        ISession session = message.getSession();
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);

        ParamIntMsg msg = (ParamIntMsg)message.getLite();
        int teamId = msg.getIntValue();

        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        cardTeamDAO.resetCardTeam(session,msg.getIntValue());
        CardTeamVO teamVO = cardTeamDAO.getTeamVO(session,teamId);

        List<CardHeroVO> teamHeroList = cardTeamDAO.getTeamHeroList(session,1,teamId);
        session.write(MessageManager.getInstance().notifyTeamHeroListMsg(player,teamId,teamVO.getTeamName(),teamHeroList));

    }



    //改变小队英雄名字
    @MessageMapping(Rpc.Request.ChangeTeamHeroNameReq_VALUE)
    public void onChangeTeamHeroName(NetMessage message){
        ISession session = message.getSession();
        ChangeTeamHeroNameMsg msg = (ChangeTeamHeroNameMsg)message.getLite();

        boolean hasBadWord = ConfigManager.getInstance().checkHasBadWords(msg.getName());
        if (hasBadWord){
            session.write(MessageManager.getInstance().notifyServerResponeMsg(ServerResultFlag.HeroTeamNameHasIllegality));
            return;
        }

        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        cardTeamDAO.changeTeamHeroName(session,msg.getTeamId(),msg.getHeroId(),msg.getName());

        session.write(MessageManager.getInstance().notifyTeamHeroName(msg.getTeamId(),msg.getHeroId(),msg.getName()));


    }

    //改变英雄奥义
    @MessageMapping(Rpc.Request.ChangeArcane_VALUE)
    public void onArcaneChange(NetMessage message)
    {
        ISession session = message.getSession();
        ArcaneMsg arcaneMsg = (ArcaneMsg)message.getLite();

        int teamUUid = arcaneMsg.getTeamUUid();
        int teamHeroUUid = arcaneMsg.getTeamHeroUUid();
        int arcaneId = arcaneMsg.getArcaneId();

        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        CardHeroVO heroVO = cardTeamDAO.getTeamHeroData(session,1,teamUUid,teamHeroUUid);

        if (heroVO == null)
            return;

        int heroConfigId = heroVO.getConfigId();

        HeroData heroData = ConfigManager.getInstance().getConfig(heroConfigId,HeroData.class);
        int index = heroData.getArcane_list().indexOf(arcaneId);
        if (index == -1)
            return;

        cardTeamDAO.changeArcane(session,teamUUid,teamHeroUUid,arcaneId);
//        session.write(MessageManager.getInstance().notiyfyArcaneMsg(teamUUid,teamHeroUUid,arcaneId));

    }

    //获取小队英雄牌组
    @MessageMapping(Rpc.Request.TeamHeroCardListReq_VALUE)
    public void onTeamCardList(NetMessage message){

        ISession session = message.getSession();
        PlayerVO player = (PlayerVO)session.getData(ChannelKeyConstant.PLAYER_KEY);

        CardMsg msg = (CardMsg)message.getLite();
        int teamId = msg.getTeamUUid();
        int teamHeroId = msg.getTeamHeroUUid();

        CardTeamDAO teamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        CardHeroVO cardHeroVO = teamDAO.getTeamHeroData(session,1,teamId,teamHeroId);
        if (cardHeroVO == null)
            return;
        List<Integer> fightList = cardHeroVO.getCardList();

        HeroDAO heroDAO = ConfigManager.getInstance().getBean(HeroDAO.class);
        HeroVO heroVO = heroDAO.getHeroVO(player.getPid(),cardHeroVO.getConfigId());
        List<Integer> hasList = heroVO.getCardList();

        session.write(MessageManager.getInstance().notifyTeamCardListMsg(cardHeroVO,hasList,fightList));


    }

    //卡牌上阵
    @MessageMapping(Rpc.Request.CardEnterTeamReq_VALUE)
    public void onCardEnterTeam(NetMessage message){

        ISession session = message.getSession();
        CardMsg cardMsg = (CardMsg)message.getLite();

        int teamUUid = cardMsg.getTeamUUid();
        int teamHeroUUid = cardMsg.getTeamHeroUUid();
        int oldCardId = cardMsg.getOldCardId();
        int newCardId = cardMsg.getNewCardId();

        if(newCardId == 0)
            return;

        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        //上阵卡牌属不属于该英雄
        CardHeroVO teamHero = cardTeamDAO.getTeamHeroData(session,1,teamUUid,teamHeroUUid);
        HeroData heroData = ConfigManager.getInstance().getConfig(teamHero.getConfigId(),HeroData.class);
        int index = heroData.getCard_list().indexOf(newCardId);
        if (index == -1){
            session.write(MessageManager.getInstance().notifyServerResponeMsg(ServerResultFlag.CardNoEnter));
            return;
        }

        //是否已经上阵

        boolean isExit = cardTeamDAO.isCardExitTeam(session,teamUUid,teamHeroUUid,newCardId);
        if (isExit){
            session.write(MessageManager.getInstance().notifyServerResponeMsg(ServerResultFlag.CardEnterAlready));
            return;
        }
        cardTeamDAO.cardEnterTeam(session,teamUUid,teamHeroUUid,oldCardId,newCardId);
//        session.write(MessageManager.getInstance().notifyCardEnterMsg(teamUUid,teamHeroUUid,cardId));

    }

    //删除小队英雄组装牌
    @MessageMapping(Rpc.Request.HeroDeleteCardReq_VALUE)
    public void onDeleteHeroSuitCard(NetMessage message){

        ISession session = message.getSession();
        DeleteSuitCardMsg msg = (DeleteSuitCardMsg) message.getLite();

        int teamUUid = msg.getTeamUUid();
        int teamHeroUUid = msg.getTeamHeroUUid();

        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        cardTeamDAO.deleteTeamHero(session,teamUUid,teamHeroUUid);

//        CardTeamVO teamVO = cardTeamDAO.getTeamVO(session,teamUUid);

//        List<CardHeroVO> teamHeroList = cardTeamDAO.getTeamHeroList(session,teamUUid);
//        session.write(MessageManager.getInstance().notifyTeamHeroListMsg(teamUUid,teamVO.getTeamName(),teamHeroList));
    }

    //请求所有小队信息
    @MessageMapping(Rpc.Request.TeamListReq_VALUE)
    public void onTeamList(NetMessage message){
        ISession session = message.getSession();

        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        List<CardTeamVO> list = cardTeamDAO.getCardTeamList(session,1);
        session.write(MessageManager.getInstance().notifyTeamListMsg(session,list));

    }

    //创建排位小队
    @MessageMapping(Rpc.Request.CreateRankTeamReq_VALUE)
    public void onCreateRankTeam(NetMessage message){

        ParamStrMsg msg = (ParamStrMsg)message.getLite();
        ISession session = message.getSession();
        PlayerVO player = (PlayerVO)session.getData(ChannelKeyConstant.PLAYER_KEY);

        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        CardTeamVO vo = cardTeamDAO.setCardTeamVO(session,2,msg.getStrValue());
        if (vo == null)
            return;
    }

    //复制小队
    @MessageMapping(Rpc.Request.CopyCardTeam_VALUE)
    public void onCopyCardTeam(NetMessage message){

        CopyTeamMsg copyMsg = (CopyTeamMsg)message.getLite();
        ISession session = message.getSession();
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);

        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        CardTeamVO teamVO = cardTeamDAO.copyTeam(session,copyMsg.getType(),copyMsg.getTeamId(),copyMsg.getName());

        List<CardTeamVO> list = cardTeamDAO.getCardTeamList(session,copyMsg.getType());
        session.write(MessageManager.getInstance().notifyCardTeamListMsg(list));

        List<CardHeroVO> teamHeroList = cardTeamDAO.getTeamHeroList(session,copyMsg.getType(),teamVO.getUuid());
        session.write(MessageManager.getInstance().notifyTeamHeroListMsg(player,teamVO.getUuid(),teamVO.getTeamName(),teamHeroList));

    }

    //交换英雄位置
    @MessageMapping(Rpc.Request.ChangeHeroPos_VALUE)
    public void onChangeHeroPos(NetMessage message){

        ISession session = message.getSession();
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);
        ChangeHeroPosMsg msg = (ChangeHeroPosMsg)message.getLite();

        int type =  msg.getType();
        int teamId = msg.getTeamId();
        int heroId = msg.getHeroId();
        int changeId = msg.getChangId();
        int starPos = msg.getStartPos();
        int endPos = msg.getEndPos();


        CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
        cardTeamDAO.changeHeroPos(session,type,teamId,heroId,changeId,starPos,endPos);


    }

//    //卡牌下阵
//    @MessageMapping(Rpc.Request.CardLeaveTeamReq_VALUE)
//    public void onCardLeaveTeam(NetMessage message){
//
//        ISession session = message.getSession();
//        CardMsg msg = (CardMsg)message.getLite();
//        int teamUUid = msg.getTeamUUid();
//        int teamHeroUUid = msg.getTeamHeroUUid();
//        int cardId = msg.getCardId();
//
//        CardTeamDAO teamDAO =  ConfigManager.getInstance().getBean(CardTeamDAO.class);
//        teamDAO.cardLeaveTeam(session,teamUUid,teamHeroUUid,cardId);
//
//        session.write(MessageManager.getInstance().notifyCardLeaveMsg(teamUUid,teamHeroUUid,cardId));
//
//
//
//    }



}
