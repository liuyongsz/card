package com.tcg.service;

import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

import javax.annotation.Resource;

import org.springframework.data.redis.core.HashOperations;
import org.springframework.stereotype.Service;

import com.tcg.constant.ChannelKeyConstant;
import com.tcg.constant.RedisKeyConstant;
import com.tcg.data.HeroData;
import com.tcg.manager.ConfigManager;
import com.tcg.manager.RedisManager;
import com.tcg.server.session.ISession;
import com.tcg.vo.CardHeroVO;
import com.tcg.vo.CardTeamVO;
import com.tcg.vo.PlayerVO;

import protomsg.Result.ServerResultFlag;

@Service
public class CardTeamDAO {

    @Resource(name="jedisTemplate")
    private HashOperations<String,String,CardTeamVO> cardTeamHash;// Hash

    @Resource(name="jedisTemplate")
    private HashOperations<String,String,CardHeroVO> teamHeroHash;// Hash


    ////////////////////////组队////////////////////

    //初始化默认小队
    public void initCardTeam(ISession session){

        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);

        CardTeamVO teamVO = setCardTeamVO(session,1,"新建小队1");
        PlayerDAO dao = ConfigManager.getInstance().getBean(PlayerDAO.class);

        player.setSelectCardTeamUUid(teamVO.getUuid());
        player.setSelectTeam(teamVO.getUuid());
        dao.savePlayerVO(player);

        HeroDAO heroDAO = ConfigManager.getInstance().getBean(HeroDAO.class);

        Map<Integer,HeroData> heroMap = ConfigManager.getInstance().getConfig(HeroData.class);
        Collection<HeroData> heroCol = heroMap.values();
        Iterator<HeroData> iterator = heroCol.iterator();
        int pos = 1;
        int num = 0;

        while (iterator.hasNext())
        {
            HeroData hero = iterator.next();
            int maxNum = hero.getDeck_build();
            if (hero.getHero_get() == 1 && num < 8)//赠送
            {
                pos = num > maxNum ? 0 : num+1;
                CardHeroVO cardHeroVO = setCardTeamHero(session,1,teamVO.getUuid(),hero.getHero_id(),pos,hero.getArcane_initial(),hero.getHero_name());
                num++;

                //保存英雄卡牌
                //卡牌上阵
                List<Integer> initCardList = hero.getCard_initial_list();
                for (int i=0; i<initCardList.size(); i++){
                    int cardId = initCardList.get(i);
                    heroDAO.saveHeroCard(player.getPid(),hero.getHero_id(),cardId);

                    cardEnterTeam(session,teamVO.getUuid(),cardHeroVO.getUuid(),0,cardId);

                }

            }
        }
    }

    //创建小队信息
    public CardTeamVO setCardTeamVO(ISession session ,int type,String name)
    {
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);

        String typeKey =  RedisKeyConstant.CARD_TEAM;
        if (type == 2)
            typeKey = RedisKeyConstant.RANK_CARD_TEAM;
        String teamKey = typeKey + player.getPid();

        String keyStr = ConfigManager.getInstance().getHashKey(cardTeamHash.keys(teamKey)) ;

//        int uuid = UUIDUtil.getUUIDHash();
        CardTeamVO vo = new CardTeamVO();
        vo.setTeamName(name);
        vo.setUuid(Integer.valueOf(keyStr));
        cardTeamHash.put(teamKey,keyStr,vo);

        PlayerDAO dao = ConfigManager.getInstance().getBean(PlayerDAO.class);
        if (type == 1){
            player.setSelectCardTeamUUid(vo.getUuid());
        }else {
            player.setCurRankTeamId(vo.getUuid());
        }
        dao.savePlayerVO(player);
        return vo;

    }

    //创建排位 小队
    public CardTeamVO createRankTeam(PlayerVO player, String name){
        String teamKey = RedisKeyConstant.RANK_CARD_TEAM + player.getPid();

        String keyStr = ConfigManager.getInstance().getHashKey(cardTeamHash.keys(teamKey)) ;

        CardTeamVO vo = new CardTeamVO();
        vo.setTeamName(name);
        vo.setUuid(Integer.valueOf(keyStr));
        cardTeamHash.put(teamKey,keyStr,vo);

        PlayerDAO dao = ConfigManager.getInstance().getBean(PlayerDAO.class);
        player.setCurRankTeamId(vo.getUuid());
        dao.savePlayerVO(player);
        return vo;
    }

    //复制小队
    public CardTeamVO copyTeam(ISession session,int type,int teamId,String name){

        CardTeamVO teamVO = this.setCardTeamVO(session,type,name);
        List<CardHeroVO> list = this.getTeamHeroList(session,type,teamId);

        for (int i=0; i<list.size(); i++){
            CardHeroVO vo = list.get(i);
            setCardTeamHero(session,type,teamVO.getUuid(),vo.getConfigId(),vo.getPos(),vo.getArcaneId(),vo.getName());
        }

        return teamVO;

    }

    //获取全部小队信息
    public List<CardTeamVO> getCardTeamList(ISession session,int type) {

        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);

        String typeKey = RedisKeyConstant.CARD_TEAM;
        if (type == 2)
            typeKey = RedisKeyConstant.RANK_CARD_TEAM;
        String teamKey =typeKey + player.getPid();

        List<CardTeamVO> list = cardTeamHash.values(teamKey);

        return list;
    }

    //获取小队英雄list
    public List<CardHeroVO> getTeamHeroList(ISession session,int type,int teamId ){
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);

        String keyStr = RedisKeyConstant.TEAM_HERO_KEY;
        if (type == 2)
            keyStr = RedisKeyConstant.RANK_HERO_KEY;


        String heroKey = keyStr + player.getPid() +
        		RedisKeyConstant.DELIMITER + teamId;
        List<CardHeroVO> list = teamHeroHash.values(heroKey);
        return list;
    }
    
    //获取战斗人员
    public Map<Integer,CardHeroVO> getFightHeroList(int pid,int teamId){
        String heroKey = RedisKeyConstant.TEAM_HERO_KEY + pid + 
        		RedisKeyConstant.DELIMITER + teamId;
        List<CardHeroVO> list = teamHeroHash.values(heroKey);
        Map<Integer,CardHeroVO> map = new HashMap<Integer,CardHeroVO>();
        for(CardHeroVO vo:list){
        	int pos = vo.getPos();
        	if(pos > 0){
        		map.put(pos, vo);
        	}
        }
        return map;
    }

    //获取小队VO
    public CardTeamVO getTeamVO(ISession session, int teamId){
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);

        String teamKey = RedisKeyConstant.CARD_TEAM + player.getPid();
        String uuidStr = String.valueOf(teamId);
        if (!cardTeamHash.hasKey(teamKey,uuidStr)){
            return null;
        }
        CardTeamVO teamVO = cardTeamHash.get(teamKey,uuidStr);
        return teamVO;
    }

    //修改小队名字
    public boolean changeCardTeamName(ISession session, int uuid, String name)
    {
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);

        String teamKey = RedisKeyConstant.CARD_TEAM + player.getPid();

        String uuidStr = String.valueOf(uuid);

        if (!cardTeamHash.hasKey(teamKey,uuidStr)){
            return false;
        }
        CardTeamVO teamVO = cardTeamHash.get(teamKey,uuidStr);
        teamVO.setTeamName(name);
        cardTeamHash.put(teamKey,uuidStr,teamVO);

        return true;
    }

    //重置组牌小队
    public void resetCardTeam(ISession session,int teamId){

        if (RedisManager.getInstance().redisTemplate == null)
            return;
        PlayerVO player = (PlayerVO)session.getData(ChannelKeyConstant.PLAYER_KEY);

        String teamKey = RedisKeyConstant.TEAM_HERO_KEY + player.getPid() + 
        		RedisKeyConstant.DELIMITER + teamId;

        RedisManager.getInstance().redisTemplate.delete(teamKey);

    }
    //添加小队英雄库
    public CardHeroVO setCardTeamHero(ISession session,int type,int teamId, int heroConfigId, int pos,int arcaneId, String heroName)
    {
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);

        String typeKey =  RedisKeyConstant.TEAM_HERO_KEY;
        if (type == 2)
            typeKey = RedisKeyConstant.RANK_HERO_KEY;

        String teamKey = typeKey + player.getPid() +
        		RedisKeyConstant.DELIMITER + teamId;

        Long heroCount = teamHeroHash.size(teamKey);
        if (heroCount >= 8)
            return null;

//        int cardHeroUUid = UUIDUtil.getUUIDHash();
        String keyStr = ConfigManager.getInstance().getHashKey(teamHeroHash.keys(teamKey)) ;

        CardHeroVO cardHeroVO = new CardHeroVO();
        cardHeroVO.setTeamUUid(teamId);
        cardHeroVO.setConfigId(heroConfigId);
        cardHeroVO.setUuid(Integer.valueOf(keyStr));
        cardHeroVO.setPos(pos);
        cardHeroVO.setArcaneId(arcaneId);
        cardHeroVO.setName(heroName+keyStr);

        teamHeroHash.put(teamKey,keyStr,cardHeroVO);

        return cardHeroVO;
    }



    //牌库英雄上阵
    public ServerResultFlag heroOnFight(ISession session, int teamUUid, int heroUUid, int replaceUUid, int pos){

        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);
        String teamKey = RedisKeyConstant.TEAM_HERO_KEY + player.getPid() + 
        		RedisKeyConstant.DELIMITER + teamUUid;

        String heroKey = String.valueOf(heroUUid);

        if (!teamHeroHash.hasKey(teamKey,heroKey)){
            return ServerResultFlag.HeroFightFail;
        }

        CardHeroVO heroVO = teamHeroHash.get(teamKey,heroKey);

        //该英雄已经上阵
        if (heroVO.getPos()>0)
            return ServerResultFlag.HeroFightFail;

        //英雄下
        if (pos == 0){
            heroVO.setPos(pos);
            teamHeroHash.put(teamKey,heroKey,heroVO);
            return ServerResultFlag.HeroFightSucc;
        }

        int heroConfig = heroVO.getConfigId();

        //是否已经上阵
        List<CardHeroVO> heroVOList = teamHeroHash.values(teamKey);
        Iterator<CardHeroVO> iterator = heroVOList.iterator();
        while (iterator.hasNext())
        {
            CardHeroVO vo = iterator.next();
            int heroPos = vo.getPos();
            int configId = vo.getConfigId();
            if (heroPos >0 && configId == heroConfig && pos != heroPos) {

                return ServerResultFlag.HeroFightFail;

            }
        }

        String replaceKey = String.valueOf(replaceUUid);
        if (teamHeroHash.hasKey(teamKey,replaceKey)){
            CardHeroVO replaceVO = teamHeroHash.get(teamKey,replaceKey);
            replaceVO.setPos(0);
            teamHeroHash.put(teamKey,replaceKey,replaceVO);
        }

        heroVO.setPos(pos);
        teamHeroHash.put(teamKey,heroKey,heroVO);
        return ServerResultFlag.HeroFightSucc;

    }

    //获取小队英雄信息
    public CardHeroVO getTeamHeroData(ISession session,int type,int teamUUid,int teamHeroUUid){
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);

        String keyStr = RedisKeyConstant.TEAM_HERO_KEY;
        if (type == 2)
            keyStr = RedisKeyConstant.RANK_HERO_KEY;

        String teamKey = keyStr + player.getPid() +
        		RedisKeyConstant.DELIMITER + teamUUid;
        String heroKey = String.valueOf(teamHeroUUid);

        if (teamHeroHash.hasKey(teamKey,heroKey)){
            CardHeroVO vo = teamHeroHash.get(teamKey,heroKey);
            return vo;
        }
        return null;
    }

    //修改小队英雄奥义
    public void changeArcane(ISession session,int teamUUid,int teamHeroUUid, int arcaneId){
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);
        String teamKey = RedisKeyConstant.TEAM_HERO_KEY + player.getPid() + 
        		RedisKeyConstant.DELIMITER + teamUUid;
        String heroKey = String.valueOf(teamHeroUUid);

        if (teamHeroHash.hasKey(teamKey,heroKey)){
            CardHeroVO vo = teamHeroHash.get(teamKey,heroKey);
            vo.setArcaneId(arcaneId);
            teamHeroHash.put(teamKey,heroKey,vo);
        }
    }

    //修改小队英雄名字
    public void changeTeamHeroName(ISession session, int teamId, int heroId, String name){
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);
        String teamKey = RedisKeyConstant.TEAM_HERO_KEY + player.getPid() +
                RedisKeyConstant.DELIMITER + teamId;
        String heroKey = String.valueOf(heroId);
        if (teamHeroHash.hasKey(teamKey,heroKey)){
            CardHeroVO vo = teamHeroHash.get(teamKey,heroKey);
            vo.setName(name);
            teamHeroHash.put(teamKey,heroKey,vo);
        }
    }

    //删除小队英雄
    public void deleteTeamHero(ISession session, int teamUUid, int teamHeroUUid){
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);
        String teamKey = RedisKeyConstant.TEAM_HERO_KEY + player.getPid() + 
        		RedisKeyConstant.DELIMITER + teamUUid;
        String heroKey = String.valueOf(teamHeroUUid);

        if (teamHeroHash.hasKey(teamKey,heroKey)){
           teamHeroHash.delete(teamKey,heroKey);

        }

//        this.deleteSuitCard(session,teamUUid,teamHeroUUid);
    }

    //卡牌上阵
    public void cardEnterTeam(ISession session, int teamId, int teamHeroId, int oldCardId, int newCardId){
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);
        String teamKey = RedisKeyConstant.TEAM_HERO_KEY + player.getPid() +
                RedisKeyConstant.DELIMITER + teamId;
        String heroKey = String.valueOf(teamHeroId);

        if (teamHeroHash.hasKey(teamKey,heroKey)){
            CardHeroVO vo = teamHeroHash.get(teamKey,heroKey);
            if (oldCardId>0){
                int index =  vo.getCardList().indexOf(oldCardId);
                if(index >= 0){
                    vo.getCardList().remove(index);
                }
            }
            vo.saveCardIdInList(newCardId);
            teamHeroHash.put(teamKey,heroKey,vo);
        }

    }

    //判断该卡牌是否上阵
    public boolean isCardExitTeam(ISession session, int teamId, int teamHeroId, int cardId){
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);
        String teamKey = RedisKeyConstant.TEAM_HERO_KEY + player.getPid() +
                RedisKeyConstant.DELIMITER + teamId;
        String heroKey = String.valueOf(teamHeroId);

        if (!teamHeroHash.hasKey(teamKey,heroKey)){
            return false;
        }

        CardHeroVO vo = teamHeroHash.get(teamKey,heroKey);
        int index = vo.getCardList().indexOf(cardId);
        if (index >= 0)
            return true;

        return false;

    }

    //卡牌下阵
    public void cardLeaveTeam(ISession session, int teamId, int teamHeroId, int cardId){
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);
        String teamKey = RedisKeyConstant.TEAM_HERO_KEY + player.getPid() +
                RedisKeyConstant.DELIMITER + teamId;
        String heroKey = String.valueOf(teamHeroId);

        if (teamHeroHash.hasKey(teamKey,heroKey)){
            CardHeroVO vo = teamHeroHash.get(teamKey,heroKey);
            int index = vo.getCardList().indexOf(cardId);
            if (index<0)
                return ;
            vo.getCardList().remove(cardId);
            teamHeroHash.put(teamKey,heroKey,vo);

        }
    }

    //删除小队英雄套牌
    public int deleteSuitCard(ISession session, int teamId, int teamHeroId){
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);
        String teamKey = RedisKeyConstant.TEAM_HERO_KEY + player.getPid() +
                RedisKeyConstant.DELIMITER + teamId;
        String heroKey = String.valueOf(teamHeroId);
        if (teamHeroHash.hasKey(teamKey,heroKey)){
            CardHeroVO vo = teamHeroHash.get(teamKey,heroKey);
            vo.getCardList().clear();
            teamHeroHash.put(teamKey,heroKey,vo);

        }
        return 1;
    }

    //交换上阵英雄位置
    public void changeHeroPos(ISession session,int type, int teamId, int heroId, int changId,int starPos,int endPos){

        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);
        String typeKey =  RedisKeyConstant.TEAM_HERO_KEY;
        if (type == 2)
            typeKey = RedisKeyConstant.RANK_HERO_KEY;

        String teamKey = typeKey + player.getPid() + RedisKeyConstant.DELIMITER + teamId;
        CardHeroVO heroVO = getTeamHeroData(session, type, teamId, heroId);

        if (changId > 0) {

            CardHeroVO changeVO = getTeamHeroData(session, type, teamId, changId);
            changeVO.setPos(starPos);
            teamHeroHash.put(teamKey,String.valueOf(changeVO.getUuid()),changeVO);
        }

        heroVO.setPos(endPos);
        teamHeroHash.put(teamKey,String.valueOf(heroVO.getUuid()),heroVO);


    }




}
