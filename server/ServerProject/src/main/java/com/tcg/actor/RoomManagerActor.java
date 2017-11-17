package com.tcg.actor;

import java.util.HashMap;
import java.util.Map;

import com.tcg.annotation.MessageMapping;
import com.tcg.constant.ChannelKeyConstant;
import com.tcg.constant.Local;
import com.tcg.constant.PlayerState;
import com.tcg.manager.ConfigManager;
import com.tcg.msg.IMessage;
import com.tcg.msg.local.CloseRoomMsg;
import com.tcg.msg.local.CreateRoomMsg;
import com.tcg.msg.local.LocalMessage;
import com.tcg.msg.net.NetMessage;
import com.tcg.server.session.ISession;
import com.tcg.service.PlayerDAO;
import com.tcg.utils.UUIDUtil;
import com.tcg.vo.PlayerVO;

import akka.actor.ActorRef;
import akka.actor.Props;
import protomsg.Rpc;

public class RoomManagerActor extends ProxyActor {
	private final Map<Integer, ActorRef> roomMap = new HashMap<Integer, ActorRef>();
	private final Map<Integer,Integer> pidRoomMap= new HashMap<Integer, Integer>();
	
	public RoomManagerActor(){
		proxyCmd.add(Rpc.Request.RoomLoadReq_VALUE);
		proxyCmd.add(Rpc.Request.ReplaceCardReq_VALUE);
		proxyCmd.add(Rpc.Request.UseReq_VALUE);
		proxyCmd.add(Rpc.Request.OverRoundReq_VALUE);
		proxyCmd.add(Local.Message.SessionClose_VALUE);
	}
	
	@MessageMapping(Local.Message.CreateRoom_VALUE)
	public void createRoom(LocalMessage message){
		ActorRef actor = context().actorOf(Props.create(RoomActor.class));
		int uuid = UUIDUtil.getUUIDHash();
		roomMap.put(uuid, actor);
		CreateRoomMsg msg = (CreateRoomMsg)message.getLite();
		msg.setUuid(uuid);
		pidRoomMap.put(msg.getFpid(), uuid);
		pidRoomMap.put(msg.getSpid(), uuid);
		actor.tell(message, self());
		System.out.println("createRoom:"+msg.getFpid()+":"+msg.getSpid()+":"+actor.path());
	}
	
	@Override
	public void proxyInvoke(IMessage message){
		int pid = 0;
		if(message instanceof NetMessage){
			 ISession session = ((NetMessage)message).getSession();
			 PlayerVO player= (PlayerVO)session.getData(ChannelKeyConstant.PLAYER_KEY);
			 pid = player.getPid();
		}else{
			pid = ((LocalMessage)message).getPid();
		}
		 Integer roomId = pidRoomMap.get(pid);
		 ActorRef roomActor = roomMap.get(roomId);
		 if(null != roomActor){
			 roomActor.tell(message, ActorRef.noSender());
		 }
	}
	
	@MessageMapping(Local.Message.CloseRoom_VALUE)
	public void closeRoom(LocalMessage message){
		CloseRoomMsg msg = (CloseRoomMsg)message.getLite();
		roomMap.remove(msg.getUuid());
		pidRoomMap.remove(msg.getFpid());
		pidRoomMap.remove(msg.getSpid());
		
		PlayerDAO playerDao = ConfigManager.getInstance().getBean(PlayerDAO.class);
		PlayerVO fplayer = playerDao.getPlayer(msg.getFpid());
		PlayerVO splayer = playerDao.getPlayer(msg.getSpid());
		fplayer.setPlayerState(PlayerState.None);
		splayer.setPlayerState(PlayerState.None);
		playerDao.savePlayerVO(fplayer);
		playerDao.savePlayerVO(splayer);
		context().stop(sender());
	}
}
