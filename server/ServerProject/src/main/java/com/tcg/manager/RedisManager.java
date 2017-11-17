package com.tcg.manager;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

import org.springframework.data.redis.core.HashOperations;
import org.springframework.data.redis.core.RedisTemplate;
import org.springframework.data.redis.core.SetOperations;
import org.springframework.data.redis.core.ValueOperations;

import com.tcg.constant.ChannelKeyConstant;
import com.tcg.server.session.ISession;
import com.tcg.vo.CardHeroVO;
import com.tcg.vo.CardTeamVO;
import com.tcg.vo.PlayerVO;

import protomsg.Result.ServerResultFlag;

public class RedisManager implements IManager {
	private static RedisManager instance = new RedisManager();
	public RedisTemplate redisTemplate = null;
	
	private ValueOperations<String, PlayerVO>  playerOps;
	private HashOperations<String, String, Object> hashOps;


	private ValueOperations<String,Object> cardteamOps; //小队Vo
	private SetOperations<String,Object> cardTeamSetOps;// 小队set集合


	private final String ACCOUT_LIST = "AccoutList";
	private final String ACCOUT_PASSWORD_LIST = "AccoutPasswordList";

	private final String PLAYER_KEY = "Player:";
	private final String CARD_TEAM ="CardTeam:";
	private final String CARD_HERO_KEY = "CardHero:";
	private final String CARD_HERO_CONFIG_KEY = "CardHeroConfig:";


	public static RedisManager getInstance() {  
        return instance;  
    }  
	
	@SuppressWarnings({ "unchecked", "rawtypes" })
	public void init() {

		redisTemplate = (RedisTemplate)ConfigManager.getInstance().getBean("jedisTemplate");

		playerOps = redisTemplate.opsForValue();
		hashOps = redisTemplate.opsForHash();
		cardteamOps = redisTemplate.opsForValue();
		cardTeamSetOps = redisTemplate.opsForSet();

	}

	public void shutdown() {
		
	}






}
