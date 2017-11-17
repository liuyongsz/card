package com.tcg.manager;

import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

import com.google.protobuf.InvalidProtocolBufferException;
import com.google.protobuf.MessageLite;
import com.tcg.actor.CardTeamActor;
import com.tcg.actor.HeroActor;
import com.tcg.actor.LoginActor;
import com.tcg.actor.MatchActor;
import com.tcg.actor.RoomManagerActor;
import com.tcg.constant.Local;
import com.tcg.constant.PlayerState;
import com.tcg.msg.IMessage;
import com.tcg.msg.local.LocalMessage;
import com.tcg.msg.local.SessionCloseMsg;
import com.tcg.msg.net.NetMessage;
import com.tcg.server.session.ISession;
import com.tcg.service.CardTeamDAO;
import com.tcg.service.HeroDAO;
import com.tcg.vo.CardHeroVO;
import com.tcg.vo.CardTeamVO;
import com.tcg.vo.HeroVO;
import com.tcg.vo.PlayerVO;

import akka.actor.ActorRef;
import akka.actor.ActorSystem;
import akka.actor.Props;
import protomsg.CardAssembly;
import protomsg.CardAssembly.ArcaneMsg;
import protomsg.CardAssembly.CardDataMsg;
import protomsg.CardAssembly.CardInfoListMsg;
import protomsg.CardAssembly.CardListMsg;
import protomsg.CardAssembly.CardMsg;
import protomsg.CardAssembly.CardTeamInfo;
import protomsg.CardAssembly.ChangeTeamHeroNameMsg;
import protomsg.CardAssembly.CreateCardTeamMsg;
import protomsg.CardAssembly.DeleteSuitCardMsg;
import protomsg.CardAssembly.HeroInfo;
import protomsg.CardAssembly.HeroListMsg;
import protomsg.CardAssembly.HeroOnFightMsg;
import protomsg.CardAssembly.SelectTeamMsg;
import protomsg.CardAssembly.TeamListMsg;
import protomsg.Hero.HeroInfoListMsg;
import protomsg.Hero.HeroInfoMsg;
import protomsg.Login.LoginMsg;
import protomsg.Player.PlayerInfoMsg;
import protomsg.Result.ParamIntMsg;
import protomsg.Result.ParamStrMsg;
import protomsg.Result.ServerResultFlag;
import protomsg.Result.ServerResultMsg;
import protomsg.Room.MatchFightMsg;
import protomsg.Room.ReplaceCardMsg;
import protomsg.Room.RoomLoadMsg;
import protomsg.Room.UseMsg;
import protomsg.Rpc;

import static protomsg.CardAssembly.*;

public class MessageManager implements IManager {
	private static MessageManager instance = new MessageManager();
	
	public static MessageManager getInstance() {  
        return instance;  
    }  
	
	private Map<Integer, MessageLite> prototypeMap;
	
	private Map<Integer, ActorRef> actorMap;
	
	private ActorRef roomManager;
	private ActorRef match;
	
	public void init() {
		actorMap = new ConcurrentHashMap<Integer, ActorRef>();
		prototypeMap = new ConcurrentHashMap<Integer, MessageLite>();

		prototypeMap.put(Rpc.Request.Login_VALUE, LoginMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.Create_VALUE, ParamStrMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.CreateCardTeam_VALUE, ParamStrMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.ChangeTeamName_VALUE, CardTeamInfo.getDefaultInstance());
		prototypeMap.put(Rpc.Request.HeroOnFight_VALUE, HeroOnFightMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.ResetCardTeam_VALUE, ParamIntMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.ChangeArcane_VALUE, ArcaneMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.CardEnterTeamReq_VALUE, CardMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.HeroDeleteCardReq_VALUE, DeleteSuitCardMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.CardHeroList_VALUE, ParamIntMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.CardLeaveTeamReq_VALUE, CardMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.MatchFightReq_VALUE,MatchFightMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.RoomLoadReq_VALUE,RoomLoadMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.ReplaceCardReq_VALUE,ReplaceCardMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.UseReq_VALUE,UseMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.TeamHeroCardListReq_VALUE,CardMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.ChangeTeamHeroNameReq_VALUE,ChangeTeamHeroNameMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.CreateCardTeamReq_VALUE,CreateCardTeamMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.CreateRankTeamReq_VALUE,ParamStrMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.CopyCardTeam_VALUE, CopyTeamMsg.getDefaultInstance());
		prototypeMap.put(Rpc.Request.ChangeHeroPos_VALUE, ChangeHeroPosMsg.getDefaultInstance());

		
		ActorSystem system = ActorSystem.create();
		system.actorOf(Props.create(LoginActor.class));
		system.actorOf(Props.create(CardTeamActor.class));
		match = system.actorOf(Props.create(MatchActor.class));
		roomManager = system.actorOf(Props.create(RoomManagerActor.class));
		system.actorOf(Props.create(HeroActor.class));

	}

	public void shutdown() {

	}
	
    public MessageLite decodeBody(int dataType, byte[] array){        
        MessageLite prototype = prototypeMap.get(dataType);
        if(null != prototype) {
        	try {
				return prototype.newBuilderForType().mergeFrom(array).build();
			} catch (InvalidProtocolBufferException e) {
				e.printStackTrace();
			}
        	return null;
        }
        return null;
    }
    
    public void addActorMap(int cmd,ActorRef actor){
    	actorMap.put(cmd, actor);
    }
    
    public void sendMsg(IMessage message){
     	ActorRef actor = actorMap.get(message.getCmd());
    	if(null!=actor){
    		actor.tell(message, ActorRef.noSender());
    	}
    }
    
//    public void removeSession(int pid){
//		SessionCloseMsg msg = new SessionCloseMsg();
//		msg.setPid(pid);
//		sessionActor.tell(new LocalMessage(Local.Message.SessionClose_VALUE,msg), ActorRef.noSender());
//    }
    
    public void playerOffline(PlayerVO player){
    	PlayerState ps = player.getPlayerState();
    	if(ps == PlayerState.MatchFight){
    		SessionCloseMsg msg = new SessionCloseMsg();
    		msg.setPid(player.getPid());
        	match.tell(new LocalMessage(Local.Message.SessionClose_VALUE,msg), ActorRef.noSender());
    	}else if(ps == PlayerState.Loading || ps == PlayerState.Fighting){
    		SessionCloseMsg msg = new SessionCloseMsg();
    		msg.setPid(player.getPid());
        	roomManager.tell(new LocalMessage(Local.Message.SessionClose_VALUE,msg,player.getPid()), ActorRef.noSender());
    	}
    }
    
    public IMessage notifyPlayerMsg(PlayerVO player){
    	PlayerInfoMsg.Builder builder = PlayerInfoMsg.newBuilder();
		builder.setPid(player.getPid());
		builder.setNickName(player.getNickName());
		builder.setSelectTeamId(player.getSelectTeam());

		NetMessage respone = new NetMessage(Rpc.Respone.PlayerInfo_VALUE,builder);
		return respone;
    }
    
    public IMessage notifyCreatePlayerMsg(){ 
    	ServerResultMsg.Builder builder = ServerResultMsg.newBuilder();
		builder.setFlag(ServerResultFlag.NoRole);
		NetMessage respone = new NetMessage(Rpc.Respone.ServerResult_VALUE,builder);
		return respone;
    }
    //服务器返回结果
    public IMessage notifyServerResponeMsg(ServerResultFlag flag)
	{
		ServerResultMsg.Builder builder = ServerResultMsg.newBuilder();
		builder.setFlag(flag);
		NetMessage respone = new NetMessage(Rpc.Respone.ServerResult_VALUE,builder);
		return respone;
	}
    //发送小队列表
    public IMessage notifyCardTeamListMsg(List<CardTeamVO> list)
	{
		CardListMsg.Builder builder = CardListMsg.newBuilder();

		Iterator<CardTeamVO> iterator = list.iterator();
		while (iterator.hasNext())
		{
			CardTeamVO cardTeamVO =  iterator.next();
			CardTeamInfo.Builder infoBuild = CardTeamInfo.newBuilder();
			infoBuild.setId(cardTeamVO.getUuid());
			infoBuild.setName(cardTeamVO.getTeamName());
			builder.addCardList(infoBuild);

		}

		NetMessage respone = new NetMessage(Rpc.Respone.CardTeamList_VALUE,builder);
		return respone;
	}


	//发送小队信息
	public IMessage notifyCardTeamInfoMsg(int uuid,String name)
	{
		CardTeamInfo.Builder builder = CardTeamInfo.newBuilder();
		builder.setId(uuid);
		builder.setName(name);

		NetMessage respone = new NetMessage(Rpc.Respone.ChangeName_VALUE,builder);
		return respone;
	}

	//发送英雄出战结果
	public IMessage notifyCardHeroFightResultMsg(int result)
	{
		ParamIntMsg.Builder builder = ParamIntMsg.newBuilder();
		builder.setIntValue(result);
		NetMessage respone = new NetMessage(Rpc.Respone.HeroFightResult_VALUE,builder);
		return respone;
	}


	//发送英雄list
	public IMessage notifyHeroInfoListMsg(List<HeroVO> list){

		HeroInfoListMsg.Builder builder = HeroInfoListMsg.newBuilder();

		Iterator<HeroVO> iterator = list.iterator();
		while (iterator.hasNext()){

			HeroVO heroVO = iterator.next();

			HeroInfoMsg.Builder heroBuilder = HeroInfoMsg.newBuilder();
			heroBuilder.setConfigId(heroVO.getConfigId());
			heroBuilder.setLevel(heroVO.getLeve());
			builder.addHeroList(heroBuilder);
		}

		NetMessage respone = new NetMessage(Rpc.Respone.HeroListRes_VALUE,builder);
		return respone;

	}

	//小队英雄list
	public IMessage notifyTeamHeroListMsg(PlayerVO player, int teamUUid,String teamName,List<CardHeroVO> list){

		HeroDAO heroDAO = ConfigManager.getInstance().getBean(HeroDAO.class);

		HeroListMsg.Builder builder = HeroListMsg.newBuilder();
		builder.setId(teamUUid);
		builder.setTeamName(teamName);
		for (int i=0; i<list.size(); i++){
			CardHeroVO vo = list.get(i);
			HeroVO heroVO = heroDAO.getHeroVO(player.getPid(),vo.getConfigId());
			int time = heroVO == null?0:heroVO.getTrialTime();

			List<Integer> cardList = vo.getCardList();

			HeroInfo.Builder infoBuilder = HeroInfo.newBuilder();
			infoBuilder.setHeroUUId(vo.getUuid());
			infoBuilder.setConfigId(vo.getConfigId());
			infoBuilder.setPos(vo.getPos());
			infoBuilder.setArcaneId(vo.getArcaneId());
			infoBuilder.setCardTeamName(vo.getName());
			infoBuilder.setTrialTime(time);
			for (int j=0; j< cardList.size(); j++)
			{
				infoBuilder.addSkillID(cardList.get(j));
			}
			builder.addHeroList(infoBuilder);
		}
		NetMessage respone = new NetMessage(Rpc.Respone.CardTeamHeroRes_VALUE,builder);
		return respone;
	}

	//发送小队英雄名字
	public IMessage notifyTeamHeroName(int teamId, int heroId, String name){
		ChangeTeamHeroNameMsg.Builder builder = ChangeTeamHeroNameMsg.newBuilder();
		builder.setTeamId(teamId);
		builder.setHeroId(heroId);
		builder.setName(name);
		NetMessage respone = new NetMessage(Rpc.Respone.ChangeTeamHeroNameRes_VALUE,builder);
		return respone;
	}

	//发送奥义信息
	/*public IMessage notiyfyArcaneMsg(int teamUUid,int teamHeroUUid,int arcaneId){

		ArcaneMsg.Builder builder = ArcaneMsg.newBuilder();

		builder.setTeamUUid(teamUUid);
		builder.setTeamHeroUUid(teamHeroUUid);
		builder.setArcaneId(arcaneId);
		ArcaneMsg msg = builder.build();

		NetMessage respone = new NetMessage(Rpc.Respone.ArcaneChangeSuc_VALUE,msg.toByteArray());
		return respone;
	}*/

	//返回小队英雄卡牌list
	public IMessage notifyTeamCardListMsg(CardHeroVO cardHeroVO,List<Integer> hasList, List<Integer> fightList){
		CardInfoListMsg.Builder builder = CardInfoListMsg.newBuilder();

		builder.setTeamId(cardHeroVO.getTeamUUid());
		builder.setHeroId(cardHeroVO.getUuid());
		builder.setHeroConfigId(cardHeroVO.getConfigId());
		builder.setArcaneId(cardHeroVO.getArcaneId());
		builder.setCardName(cardHeroVO.getName());
		for (int i=0; i<hasList.size(); i++){
			CardDataMsg.Builder infoBuilder = CardDataMsg.newBuilder();

			int cardId = hasList.get(i);
			int index = fightList.indexOf(cardId);
			int isfight = index >= 0 ? 1:0 ;
			infoBuilder.setConfigId(cardId);
			infoBuilder.setIsFight(isfight);
			builder.addCardList(infoBuilder);
		}
		NetMessage respone = new NetMessage(Rpc.Respone.TeamHeraoCardListRes_VALUE,builder);
		return respone;
	}

	//卡牌上阵返回
	public IMessage notifyCardEnterMsg(int teamUUid,int teamHeroUUid,int oldCardId, int newCardId){

		CardMsg.Builder builder = CardMsg.newBuilder();
		builder.setTeamUUid(teamUUid);
		builder.setTeamHeroUUid(teamHeroUUid);
		builder.setNewCardId(newCardId);
		builder.setOldCardId(oldCardId);

		NetMessage respone = new NetMessage(Rpc.Respone.CardEnterTeamRes_VALUE,builder);
		return respone;

	}

	//卡牌下阵
	public IMessage notifyCardLeaveMsg(int teamId,int teamHeroUUid,int oldCardId, int newCardId){

		CardMsg.Builder builder = CardMsg.newBuilder();
		builder.setTeamUUid(teamId);
		builder.setTeamHeroUUid(teamHeroUUid);
		builder.setNewCardId(newCardId);
		builder.setOldCardId(oldCardId);

		NetMessage respone = new NetMessage(Rpc.Respone.CardLeaveTeamRes_VALUE,builder);
		return respone;
	}

	//删除小队英雄套牌
	public IMessage notifyDeleteSuitCardMsg(int teamUUid,int teamHeroUUid){

		DeleteSuitCardMsg.Builder builder = DeleteSuitCardMsg.newBuilder();
		builder.setTeamUUid(teamUUid);
		builder.setTeamHeroUUid(teamHeroUUid);

		NetMessage respone = new NetMessage(Rpc.Respone.DeletSuitCardRes_VALUE,builder);
		return respone;
	}

	//获取所有小队信息
	public IMessage notifyTeamListMsg(ISession session, List<CardTeamVO> list){

		TeamListMsg.Builder builder = TeamListMsg.newBuilder();

		CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
		for (int i=0; i<list.size(); i++){

			CardTeamVO teamVO = list.get(i);
			SelectTeamMsg.Builder teamBuilder = SelectTeamMsg.newBuilder();
			teamBuilder.setTeamId(teamVO.getUuid());
			teamBuilder.setTeamName(teamVO.getTeamName());

			List<CardHeroVO> teamHeroList = cardTeamDAO.getTeamHeroList(session,1,teamVO.getUuid());
			for (int j=0; j<teamHeroList.size(); j++){
				CardHeroVO heroVO = teamHeroList.get(j);
				if (heroVO.getPos() > 0){
					teamBuilder.addConfigIdList(heroVO.getConfigId());
				}
			}
			builder.addTeam(teamBuilder);
		}
		NetMessage respone = new NetMessage(Rpc.Respone.TeamListRes_VALUE,builder);
		return respone;

	}





}
