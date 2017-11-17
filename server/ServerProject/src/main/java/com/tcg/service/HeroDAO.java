package com.tcg.service;

import com.tcg.constant.RedisKeyConstant;
import com.tcg.data.HeroData;
import com.tcg.manager.ConfigManager;
import com.tcg.vo.HeroVO;
import org.springframework.data.redis.core.HashOperations;
import org.springframework.stereotype.Service;

import javax.annotation.Resource;
import java.util.*;

@Service
public class HeroDAO {

    @Resource(name="jedisTemplate")
    private HashOperations<String,String,HeroVO> heroHash;// 英雄Hash

    //初始化赠送英雄
    public void iniGiveHero(int playerPid)
    {

        String heroKey = RedisKeyConstant.HERO_KEY+String.valueOf(playerPid);

        Map<Integer,HeroData> heroMap = ConfigManager.getInstance().getConfig(HeroData.class);
        if (heroMap == null)
            return;
        Collection<HeroData> heroCol = heroMap.values();
        Iterator<HeroData> iterator = heroCol.iterator();
        while (iterator.hasNext())
        {
            HeroData hero = iterator.next();
            if (hero.getHero_get() == 1)//赠送
            {
                HeroVO vo = new HeroVO();
                vo.setLeve(1);
                vo.setTrialTime(-1);
                vo.setConfigId(hero.getHero_id());
                heroHash.put(heroKey,String.valueOf(vo.getConfigId()),vo);
            }
        }

    }
    //获取英雄VO
    public HeroVO getHeroVO(int playerPid,int heroConfigId)
    {
        String heroKey = RedisKeyConstant.HERO_KEY+String.valueOf(playerPid);
        String configIdStr = String.valueOf(heroConfigId);

        if (heroHash.hasKey(heroKey,configIdStr)){
            HeroVO heroVO = heroHash.get(heroKey,configIdStr);
            return heroVO;
        }

       return null;
    }

    //保存拥有的卡牌
    public void saveHeroCard(int playerPid,int heroConfigId,int cardID){
        HeroVO heroVO = getHeroVO(playerPid,heroConfigId);
        String heroKey = RedisKeyConstant.HERO_KEY+String.valueOf(playerPid);
        heroVO.saveCardIdInList(cardID);
        heroHash.put(heroKey,String.valueOf(heroVO.getConfigId()),heroVO);
    }

    //获取英雄list
    public List<HeroVO> getHeroListVO(int playerPid)
    {
        String heroKey = RedisKeyConstant.HERO_KEY+String.valueOf(playerPid);
        List<HeroVO> listVO =  heroHash.values(heroKey);

        return listVO;
    }




}
