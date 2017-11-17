package com.tcg.actor;

import java.util.HashMap;
import java.util.Map;

import com.tcg.annotation.MessageMapping;
import com.tcg.constant.ChannelKeyConstant;
import com.tcg.constant.Local;
import com.tcg.factory.RoomMsgFactory;
import com.tcg.fight.FightRole;
import com.tcg.manager.ServerManager;
import com.tcg.msg.IMessage;
import com.tcg.msg.local.CloseRoomMsg;
import com.tcg.msg.local.CreateRoomMsg;
import com.tcg.msg.local.LocalMessage;
import com.tcg.msg.local.SessionCloseMsg;
import com.tcg.msg.net.NetMessage;
import com.tcg.server.session.ISession;
import com.tcg.vo.PlayerVO;

import protomsg.Room.EffectsMsg;
import protomsg.Room.ReplaceCardMsg;
import protomsg.Room.RoomInfoMsg;
import protomsg.Room.RoomLoadMsg;
import protomsg.Room.RoomOverMsg;
import protomsg.Room.RoomState;
import protomsg.Room.UseMsg;
import protomsg.Rpc;

/**
 * @author wang
 *
 */
public class RoomActor extends MessageActor {
	private int fpid;
	private int spid;
	private int uuid;

	//根据pid查找
	private Map<Integer,FightRole> roleMap = new HashMap<Integer,FightRole>();
	
	//回合数
	private int index = -1;
	
	private RoomState state;
	
	public RoomActor(){
		addNet = false;
	}
	
	@Override
	public void preStart(){
		super.preStart();
		
	}
	
	/**
	 * 创建房间信息
	 * @param message
	 */
	@MessageMapping(Local.Message.CreateRoom_VALUE)
	public void createRoom(LocalMessage message){
		CreateRoomMsg msg = (CreateRoomMsg)message.getLite();
		fpid = msg.getFpid();
		spid = msg.getSpid();
		uuid = msg.getUuid();
		
		FightRole frole = new FightRole(fpid,1,this);
		FightRole srole = new FightRole(spid,2,this);
		frole.setEnemy(srole);
		srole.setEnemy(frole);
		roleMap.put(fpid, frole);
		roleMap.put(spid, srole);
		
		RoomInfoMsg.Builder builder = RoomInfoMsg.newBuilder();
		builder.setFrole(frole.initAndMsg());
		builder.setSrole(srole.initAndMsg());
		NetMessage respone = new NetMessage(Rpc.Respone.RoomInfoRes_VALUE,builder);
		sendAllMsg(respone);
		if(loadFinish()){
			start();
		}
	}
	
	  
	/**
	 * 客户端加载房间资源进度
	 * @param message
	 */
	@MessageMapping(Rpc.Request.RoomLoadReq_VALUE)
	public void roomLoad(NetMessage message){
		 ISession session = message.getSession();
		 PlayerVO player= (PlayerVO)session.getData(ChannelKeyConstant.PLAYER_KEY);
		 RoomLoadMsg msg = (RoomLoadMsg)message.getLite();
		 FightRole role = roleMap.get(player.getPid());
		 System.out.println(player.getPid()+ ":load:"+msg.getLoad());
		 role.setLoad(msg.getLoad());
		 sendOtherMsg(player.getPid(),message);
		 if(offline()){
			 //加载资源时掉线
			closeRoom();
			return;
		 }
		 if(loadFinish()){
			 start();
		 }
	}
	
	private void start(){ 
		state = RoomState.Replace;
		sendAllMsg(RoomMsgFactory.notifyRoomStateMsg(state));
		scheduleOnce(30,new LocalMessage(Local.Message.BeginFight_VALUE));
	}
	
	/**
	 * 游戏开始替换手中的卡牌
	 * @param message
	 */
	@MessageMapping(Rpc.Request.ReplaceCardReq_VALUE)
	public void replaceCard(NetMessage message){
		if(state != RoomState.Replace) return;
			 ISession session = message.getSession();
			 ReplaceCardMsg msg =  (ReplaceCardMsg)message.getLite();
			 PlayerVO player= (PlayerVO)session.getData(ChannelKeyConstant.PLAYER_KEY);
			 FightRole role = roleMap.get(player.getPid());
			 System.out.println(player.getPid()+ ":replace:"+msg.getReplace());
			 if(msg.getReplace()&&!role.isFinishReplace()){
				 NetMessage respone = new NetMessage(Rpc.Respone.FightCardsRes_VALUE, role.replaceCard());
				 sendAllMsg(respone);
			 }
			 role.setFinishReplace(true);
			 if(replaceFinish()){
				if(cancel.cancel()){
					fightStart(null);
				}
			 }
		
	}
	
	@MessageMapping(Local.Message.BeginFight_VALUE)
	public void fightStart(LocalMessage message){
		if(state != RoomState.Replace) return;
		
		state = RoomState.Fight;
		sendAllMsg(RoomMsgFactory.notifyRoomStateMsg(state));
		index++;
		scheduleOnce(90,new LocalMessage(Local.Message.ChangeRound_VALUE));
		sendAllMsg(RoomMsgFactory.createStartRoundMsg(fpid));
		
	}
	
	@MessageMapping(Local.Message.ChangeRound_VALUE)
	public void changeRound(LocalMessage message){
		if(state != RoomState.Fight) return;
		index++;
		System.out.println(self().path() + ":index:"+index);
		scheduleOnce(90,new LocalMessage(Local.Message.ChangeRound_VALUE));
		int nowIndex = index%2+1;
		
		FightRole frole = roleMap.get(fpid);
		FightRole srole = roleMap.get(spid);
		
		FightRole crole = frole.getIndex() == nowIndex?frole:srole;
		FightRole nrole = frole.getIndex() == nowIndex?srole:frole;
		
		System.out.println("currentRound:" + crole.getPid());
		
		//回合结束
		EffectsMsg.Builder overBuilder = EffectsMsg.newBuilder();
		nrole.overRound(overBuilder);
		NetMessage overRespone = new NetMessage(Rpc.Respone.EffectRes_VALUE,overBuilder);
		sendAllMsg(overRespone);
		System.out.println(overBuilder.getEffectList());
		//回合开始
//		EffectsMsg.Builder startBuilder = EffectsMsg.newBuilder();
//		crole.startRound(startBuilder);
//		NetMessage startRespone = new NetMessage(Rpc.Respone.EffectRes_VALUE,startBuilder);
//		sendAllMsg(startRespone);
//		System.out.println(startBuilder.getEffectList());
		
		sendAllMsg(RoomMsgFactory.createStartRoundMsg(crole.getPid()));
	}
	
	@MessageMapping(Rpc.Request.UseReq_VALUE)
	public void use(NetMessage message){
		if(state != RoomState.Fight) return;
		ISession session = message.getSession();
		PlayerVO player= (PlayerVO)session.getData(ChannelKeyConstant.PLAYER_KEY);
		if(!checkRound(player.getPid())) return;
		
		FightRole role = roleMap.get(player.getPid());
		UseMsg msg = (UseMsg)message.getLite();
		
		System.out.println("befor:" + player.getPid() + ":type:" + msg.getType() +
				":target:" + msg.getTarget() + 
				":index:" + msg.getIndex());

		EffectsMsg.Builder builder = role.use(msg);
		if(null == builder) return;
		
		builder.setUse(msg);
		
		System.out.println(builder.getEffectList());
		
		NetMessage respone = new NetMessage(Rpc.Respone.EffectRes_VALUE,builder);
		sendAllMsg(respone);
	}
	
	@MessageMapping(Rpc.Request.OverRoundReq_VALUE)
	public void overRound(NetMessage message){
		if(state != RoomState.Fight) return;
		ISession session = message.getSession();
		PlayerVO player= (PlayerVO)session.getData(ChannelKeyConstant.PLAYER_KEY);
		if(!checkRound(player.getPid())) return;
		
		System.out.println(player.getPid()+ ":overRound");
		
		if(cancel.cancel()){
			changeRound(null);
		}
	}
	
	@MessageMapping(Local.Message.SessionClose_VALUE)
	public void sessionClose(LocalMessage message){
		SessionCloseMsg msg = (SessionCloseMsg)message.getLite();
		FightRole role = roleMap.get(msg.getPid());
		role.online = false;
		System.out.println("sessionClose:"+role.getPid());
		if(offline()){
			closeRoom();
			return;
		}
		if(state == RoomState.Loading){
			role.setLoad(100);
			if(loadFinish()){
				start();
			}
		}
	}
	
	//战斗结束
	public void fightOver(int pid){
		RoomOverMsg.Builder builder = RoomOverMsg.newBuilder();
		builder.setWiner(pid);
		NetMessage respone = new NetMessage(Rpc.Respone.RoomOverRes_VALUE,builder);
		sendAllMsg(respone);
		
		for(FightRole role:roleMap.values()){
			role.fightEnd = true;
		}
		
		closeRoom();
	}
	
	//关闭结束
	public void closeRoom(){
		state = RoomState.Over;
		cancel.cancel();
		CloseRoomMsg msg = new CloseRoomMsg();
		msg.setUuid(uuid);
		msg.setFpid(fpid);
		msg.setSpid(spid);
		context().parent().tell(new LocalMessage(Local.Message.CloseRoom_VALUE, msg), self());
	}
	
	private void sendOtherMsg(int pid,IMessage msg){
		pid = pid == fpid?spid:fpid;
		sendMsg(pid,msg);
	}
	
	private void sendMsg(int pid,IMessage msg){
		FightRole role = roleMap.get(pid);
		if(!role.online){ 
			System.out.println("offline sendMsg======="+pid);
			return;
		}
		
		ISession sSession = ServerManager.getInstance().getSession(pid);
		if(null != sSession){
			sSession.write(msg);
		}
	}
	
	private void sendAllMsg(IMessage msg){
		sendMsg(fpid,msg);
		sendMsg(spid,msg);
	}
	
	private boolean loadFinish(){
		for(FightRole role:roleMap.values()){
			if(role.getLoad() < 100){
				return false;
			}
		}
		return true;
	}
	
	private boolean offline(){
		for(FightRole role:roleMap.values()){
			if(role.online){
				return false;
			}
		}
		return true;
	}
	
	private boolean replaceFinish(){
		for(FightRole role:roleMap.values()){
			if(!role.isFinishReplace()){
				return false;
			}
		}
		return true;
	}
	
	private boolean checkRound(int pid){
		return ((pid == fpid?1:2) == (index%2+1))&&state==RoomState.Fight;
	}
	
}
