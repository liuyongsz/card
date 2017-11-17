package com.tcg.service;

import java.util.ArrayList;
import java.util.List;

import javax.annotation.Resource;

import org.springframework.data.redis.core.HashOperations;
import org.springframework.data.redis.core.ValueOperations;
import org.springframework.stereotype.Service;

import com.tcg.constant.RedisKeyConstant;
import com.tcg.vo.PlayerVO;

@Service
public class PlayerDAO {
	
	@Resource(name="jedisTemplate")
	private ValueOperations<String, PlayerVO> playerOps;
	
	@Resource(name="integerTemplate")
	private HashOperations<String, String, Integer> hashOps;
	
	@Resource(name="stringTemplate")
	private ValueOperations<String, String> stringOps;
	
	
	public PlayerVO getPlayer(int pid){
		return playerOps.get(RedisKeyConstant.PLAYER_KEY + pid);
	}


	public int getPidByAid(String aid){
		return hashOps.get(RedisKeyConstant.ACCOUT_LIST, aid);
	}
	//创建玩家
	public PlayerVO creatPlayer(String accountId,String nickName){
		PlayerVO player = new PlayerVO();
		Long key = stringOps.increment(RedisKeyConstant.PID_AUTOINC_KEY,1);
		int pid = key.intValue();
		player.setPid(pid);
		player.setAid(accountId);
		player.setNickName(nickName);
		List<Integer> heros = new ArrayList<Integer>();
		heros.add(1);
		heros.add(2);
		player.setHeros(heros);
		
		hashOps.put(RedisKeyConstant.NAME_LIST, nickName,pid);
		hashOps.put(RedisKeyConstant.ACCOUT_LIST, accountId, pid);
		playerOps.set(RedisKeyConstant.PLAYER_KEY + pid,player);
		return player;

	}

	//保存玩家数据
	public void savePlayerVO(PlayerVO playerVO){
		playerOps.set(RedisKeyConstant.PLAYER_KEY + playerVO.getPid(),playerVO);

	}
	
	public boolean hasName(String nickName){
		return hashOps.hasKey(RedisKeyConstant.NAME_LIST, nickName);
	}

}
