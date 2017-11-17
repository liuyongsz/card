package com.tcg.actor;

import java.util.HashSet;
import java.util.LinkedList;
import java.util.Set;
import java.util.concurrent.TimeUnit;

import com.tcg.annotation.MessageMapping;
import com.tcg.constant.ChannelKeyConstant;
import com.tcg.constant.Local;
import com.tcg.constant.PlayerState;
import com.tcg.manager.ConfigManager;
import com.tcg.msg.local.CreateRoomMsg;
import com.tcg.msg.local.LocalMessage;
import com.tcg.msg.local.SessionCloseMsg;
import com.tcg.msg.net.NetMessage;
import com.tcg.server.session.ISession;
import com.tcg.service.PlayerDAO;
import com.tcg.vo.PlayerVO;

import akka.actor.ActorRef;
import akka.actor.ActorSelection;
import akka.actor.ActorSystem;
import protomsg.Room.MatchFightMsg;
import protomsg.Rpc;
import scala.concurrent.duration.Duration;

public class MatchActor extends MessageActor {
	private final LinkedList<Integer> queue = new LinkedList<Integer>();
	private final Set<Integer> set = new HashSet<Integer>();

	
	@Override
	public void preStart(){
		super.preStart();
		ActorSystem system = context().system();
		system.scheduler().schedule(Duration.create(1, TimeUnit.SECONDS), 
				Duration.create(1, TimeUnit.SECONDS),
				getSelf(),
				new LocalMessage(Local.Message.MatchPlayer_VALUE),
				system.dispatcher(),
				ActorRef.noSender());
	}
	
	@MessageMapping(Rpc.Request.MatchFightReq_VALUE)
	public void addMatch(NetMessage message){
		 ISession session = message.getSession();
		 MatchFightMsg msg = (MatchFightMsg)message.getLite();
		 PlayerVO player = (PlayerVO)session.getData(ChannelKeyConstant.PLAYER_KEY);
		 if(player.getPlayerState() != PlayerState.None) return;
		 if(set.contains(player.getPid())) return;
		 player.setPlayerState(PlayerState.MatchFight);
		 player.setSelectTeam(msg.getSelectTeam());
	     PlayerDAO dao = ConfigManager.getInstance().getBean(PlayerDAO.class);
	     dao.savePlayerVO(player);
		 queue.offer(player.getPid());
		 set.add(player.getPid());
	}
	
	@MessageMapping(Local.Message.SessionClose_VALUE)
	public void removeMatch(LocalMessage message){
		SessionCloseMsg msg = (SessionCloseMsg)message.getLite();
//		if(!set.remove(msg.getPid())) return;
//		queue.remove(queue.indexOf(msg.getPid()));
		
		PlayerDAO playerDao = ConfigManager.getInstance().getBean(PlayerDAO.class);
		PlayerVO player = playerDao.getPlayer(msg.getPid());
		player.setPlayerState(PlayerState.None);
		playerDao.savePlayerVO(player);
	}
	
	@MessageMapping(Local.Message.MatchPlayer_VALUE)
	public void matchPlayer(LocalMessage message){
		if (queue.size() < 2){
			return;
		}
		
		int fpid = queue.poll();
		set.remove(fpid);

		int spid = queue.poll();
		set.remove(spid);

		ActorSelection roomManager = context().actorSelection("akka://default/user/$d");
		CreateRoomMsg msg = new CreateRoomMsg();
		msg.setFpid(fpid);
		msg.setSpid(spid);
		roomManager.tell(new LocalMessage(Local.Message.CreateRoom_VALUE,msg),ActorRef.noSender());
	}
}
