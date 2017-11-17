package com.tcg.actor;

import org.apache.commons.lang3.StringUtils;

import com.tcg.annotation.MessageMapping;
import com.tcg.constant.ChannelKeyConstant;
import com.tcg.manager.ConfigManager;
import com.tcg.manager.MessageManager;
import com.tcg.manager.ServerManager;
import com.tcg.msg.net.NetMessage;
import com.tcg.server.session.ISession;
import com.tcg.service.CardTeamDAO;
import com.tcg.service.HeroDAO;
import com.tcg.service.PlayerDAO;
import com.tcg.vo.PlayerVO;

import protomsg.Login.LoginMsg;
import protomsg.Result.ParamStrMsg;
import protomsg.Result.ServerResultFlag;
import protomsg.Rpc;


public class LoginActor extends MessageActor {
	
	@MessageMapping(Rpc.Request.Login_VALUE)
	public void login(NetMessage message){
		LoginMsg loginMsg = (LoginMsg)message.getLite();
		ISession session = message.getSession();
		String accountId = loginMsg.getAccountId();
        if (session.isClosing()) {
            return;
        }
		if(StringUtils.isEmpty(accountId)){
			return;
		}
		System.out.println("AccountId:--"+accountId);
		PlayerDAO dao = ConfigManager.getInstance().getBean(PlayerDAO.class);
		int pid = dao.getPidByAid(accountId);
		//是否创建过角色
		if(pid == 0){
			session.putData(ChannelKeyConstant.AID_KEY, accountId);
			session.write(MessageManager.getInstance().notifyServerResponeMsg(ServerResultFlag.NoRole));
			return;
		}
		//是否重复登录
		ISession oldSession = ServerManager.getInstance().getSession(pid);
		PlayerVO player = null;
		if(null != oldSession){
			player = (PlayerVO)oldSession.getData(ChannelKeyConstant.PLAYER_KEY);
			oldSession.close();
		}else{
			player = dao.getPlayer(pid);
		}
		ServerManager.getInstance().addSession(player, session);
		session.write(MessageManager.getInstance().notifyPlayerMsg(player));
	}

	@MessageMapping(Rpc.Request.Create_VALUE)
	public void create(NetMessage message){
		ParamStrMsg loginMsg = (ParamStrMsg)message.getLite();
		ISession session = message.getSession();
		String nickName = loginMsg.getStrValue();
		if(StringUtils.isEmpty(nickName)){
			return;
		}
		String accountId = (String)session.getData(ChannelKeyConstant.AID_KEY);
		if(StringUtils.isEmpty(accountId)){
			return;
		}
		
		PlayerDAO dao = ConfigManager.getInstance().getBean(PlayerDAO.class);
		int pid = dao.getPidByAid(accountId);
		//是否创建过角色
		if(pid != 0){
			return;
		}
		
		//名字重复
		if (dao.hasName(nickName)){
			session.write(MessageManager.getInstance().notifyServerResponeMsg(ServerResultFlag.NickNameRepeat));
			return;
		}

		PlayerVO player = dao.creatPlayer(accountId,nickName);
		ServerManager.getInstance().addSession(player, session);

		//初始化英雄
		HeroDAO heroDAO = ConfigManager.getInstance().getBean(HeroDAO.class);
		heroDAO.iniGiveHero(player.getPid());

		//初始化队伍
		CardTeamDAO cardTeamDAO = ConfigManager.getInstance().getBean(CardTeamDAO.class);
		cardTeamDAO.initCardTeam(session);

		session.write(MessageManager.getInstance().notifyPlayerMsg(player));


	}

}
