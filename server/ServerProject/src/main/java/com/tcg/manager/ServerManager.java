package com.tcg.manager;

import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

import com.tcg.config.ServerConfig;
import com.tcg.constant.ChannelKeyConstant;
import com.tcg.server.TcgServer;
import com.tcg.server.session.ISession;
import com.tcg.vo.PlayerVO;

public class ServerManager implements IManager {
	private static ServerManager instance = new ServerManager();
	
	private TcgServer server;
	private Map<Integer, ISession> sessionMap;
	
	public static ServerManager getInstance() {  
        return instance;  
    }  
	
	public void init() {
		sessionMap = new ConcurrentHashMap<Integer, ISession>();
		ServerConfig config = ConfigManager.getInstance().getBean(ServerConfig.class);
		server = new TcgServer();
		server.bind(config);
	}

	public void shutdown() {
		server.close();
	}
	
	public void addSession(PlayerVO player,ISession session){
		session.putData(ChannelKeyConstant.PLAYER_KEY, player);
		sessionMap.put(player.getPid(), session);
	}
	
	public void removeSession(ISession session){
		PlayerVO player = (PlayerVO)session.getData(ChannelKeyConstant.PLAYER_KEY);
		if(null!=player){
			sessionMap.remove(player.getPid());
			MessageManager.getInstance().playerOffline(player);
		}
	}
	
	public ISession getSession(int pid){
		return sessionMap.get(pid);
	}

}
