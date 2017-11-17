package com.tcg.fight;

import java.util.Collections;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

import com.tcg.actor.RoomActor;
import com.tcg.constant.ChannelKeyConstant;
import com.tcg.constant.Constant;
import com.tcg.constant.PlayerState;
import com.tcg.data.CardData;
import com.tcg.data.HeroData;
import com.tcg.fight.HeroWrapper.Function;
import com.tcg.manager.ConfigManager;
import com.tcg.manager.ServerManager;
import com.tcg.server.session.ISession;
import com.tcg.service.CardTeamDAO;
import com.tcg.service.PlayerDAO;
import com.tcg.utils.RandomUtil;
import com.tcg.vo.CardHeroVO;
import com.tcg.vo.PlayerVO;

import protomsg.Room.EffectMsg;
import protomsg.Room.Effecter;
import protomsg.Room.EffectsMsg;
import protomsg.Room.FightCardMsg;
import protomsg.Room.FightCardsMsg;
import protomsg.Room.RoleInfoMsg;
import protomsg.Room.RolePropType;
import protomsg.Room.TargetType;
import protomsg.Room.UseMsg;
import protomsg.Room.UseType;

public class FightRole implements IEffect {
	private int pid;
	
	private String nickName;
	
	private int selectTeam;

	// 先手1后手2
	private int index;
	// 资源加载进度
	private int load = 0;
	// 是否完成替换阶段
	private boolean finishReplace = false;
	// 抽卡区
	private LinkedList<CardWrapper> cardArea = new LinkedList<CardWrapper>();
	// 弃牌区
	private List<CardWrapper> discardArea = new LinkedList<CardWrapper>();
	//index作为key 手牌区
	public Map<Integer, CardWrapper> handArea = new HashMap<Integer, CardWrapper>();
	//index作为key 英雄
	public Map<Integer, HeroWrapper> heroList = new HashMap<Integer, HeroWrapper>();
	//位置作为key 英雄
	public Map<Integer, HeroWrapper> heroPosList = new HashMap<Integer, HeroWrapper>();
	// 奥义点数
	private int arcaneNum = 0;
	// 初始卡牌数量
	private int initNum;
	// 疲劳时间
	private int fatigueTime = 0;
	// 敌人
	private FightRole enemy;
	//角色存活状态
	public int liveNum;
	//房间
	public RoomActor room;
	//在线状态
	public boolean online = true;
	//战斗结束
	public boolean fightEnd = false;

	public FightRole(int pid, int index,RoomActor room) {
		this.pid = pid;
		this.index = index;
		this.room = room;
		if (index == 1) {
			initNum = Constant.FIRST_CARD;
			arcaneNum = 1;
		} else {
			initNum = Constant.SECOND_CARD;
		}
		PlayerDAO playerDao = ConfigManager.getInstance().getBean(PlayerDAO.class);
		ISession session = ServerManager.getInstance().getSession(pid);
		PlayerVO player = null;
		//判定是否在线
		if(null!=session){
			player = (PlayerVO)session.getData(ChannelKeyConstant.PLAYER_KEY);
			online = true;
		}else{
			player = playerDao.getPlayer(pid);
			online = false;
			System.out.println("offline======="+pid);
			load = 100;
		}
		nickName = player.getNickName();
		selectTeam = player.getSelectTeam();
		player.setPlayerState(PlayerState.Fighting);
		playerDao.savePlayerVO(player);
	}

	public RoleInfoMsg initAndMsg() {
		RoleInfoMsg.Builder builder = RoleInfoMsg.newBuilder();
		
		CardTeamDAO cardTeamDao = ConfigManager.getInstance().getBean(CardTeamDAO.class);
		builder.setPid(pid);
		builder.setName(nickName);
		builder.setArcaneNum(arcaneNum);
		builder.setFatigueTime(fatigueTime);
		initHero(cardTeamDao.getFightHeroList(pid, selectTeam), builder);
		builder.setCards(extractCard(initNum));

		return builder.build();
	}

	private void initHero(Map<Integer, CardHeroVO> data, RoleInfoMsg.Builder builder) {
		int i = 1;
		int size = data.size() + 1;
		for (int pos = 1; pos < size; pos++) {
			CardHeroVO vo = data.get(pos);
			liveNum++;
			HeroData herpData = ConfigManager.getInstance().getConfig(vo.getConfigId(), HeroData.class);
			HeroWrapper hero = new HeroWrapper(herpData, vo.getArcaneId(), pos, this);
			List<Integer> cardList = vo.getCardList();
			List<CardWrapper> clist = new LinkedList<CardWrapper>();
			for (Integer cardId : cardList) {
				CardData cardData = ConfigManager.getInstance().getConfig(cardId, CardData.class);
				int num = cardData.getCard_num();
				while (num > 0) {
					CardWrapper cw = new CardWrapper(cardData, i, hero);
					cardArea.add(cw);
					clist.add(cw);
					i++;
					num--;
				}
			}
			hero.setCardList(clist);
			heroList.put(hero.getIndex(), hero);
			heroPosList.put(hero.getPos(), hero);
			builder.addHeros(hero.getMsg());

		}
		Collections.shuffle(cardArea);
	}

	public FightCardsMsg.Builder replaceCard() {
		for (CardWrapper cw : handArea.values()) {
			cardArea.add(RandomUtil.getNexInt(cardArea.size()), cw);
		}
		handArea.clear();
		return extractCard(initNum);
	}

	// 抽卡
	private FightCardsMsg.Builder extractCard(int size) {
		FightCardsMsg.Builder cardBuilder = FightCardsMsg.newBuilder();
		for (int i = 0; i < size; i++) {
			CardWrapper cw = cardArea.remove(0);
			handArea.put(cw.getIndex(), cw);
			FightCardMsg msg = cw.getMsg();
			cardBuilder.addCard(msg);
		}
		return cardBuilder;
	}
	
	private void extractCard(int size,EffectsMsg.Builder builder){
		int hsize = Constant.MAX_CARD - handArea.size();
		if(size > hsize){
			size = hsize;
		}
		for (int i = 0; i < size; i++) {
			CardWrapper cw = cardArea.poll();
			if(null == cw){
				cw = resetCardArea(builder);
			}
			handArea.put(cw.getIndex(), cw);
			EffectMsg.Builder effectBuilder = createEffectMsgBuilder(RolePropType.ExtractCard_VALUE, 1 ,getEffecter());
			effectBuilder.setCard(cw.getMsg());
			builder.addEffect(effectBuilder.build());
			cw.extractTrigger(builder);
		}
	}
	
	public EffectsMsg.Builder use(UseMsg msg){
		switch(msg.getType().getNumber()){
			case UseType.CardType_VALUE:
				return useCard(msg);
			case UseType.ExpType_VALUE:
				return chargeCard(msg);
			case UseType.MoveType_VALUE:
				return move(msg);
			case UseType.ArcaneType_VALUE:
				return useArcane(msg);
		}
		return null;
	}

	/**
	 * 使用卡牌
	 */
	public EffectsMsg.Builder useCard(UseMsg msg) {
		CardWrapper card = handArea.remove(msg.getIndex());
		
		if(null != card&&card.check(msg.getTarget())){
			EffectsMsg.Builder builder = EffectsMsg.newBuilder();
			card.useCard(msg,builder);
			discardArea.add(card);
			return builder;
		}
		return null;
	}
	
	/**
	 * 卡牌充能
	 */
	public EffectsMsg.Builder chargeCard(UseMsg msg) {
		CardWrapper card = handArea.remove(msg.getIndex());
		
		if(null != card){
			EffectsMsg.Builder builder = EffectsMsg.newBuilder();
			card.chargeCard(msg,builder);
			discardArea.add(card);
			return builder;
		}
		return null;
	}

	/**
	 * 使用奥义
	 */
	public EffectsMsg.Builder useArcane(UseMsg msg) {
		HeroWrapper shero = heroList.get(msg.getIndex());
		if(null != shero && shero.checkArcane(msg.getTarget())){
			EffectsMsg.Builder builder = EffectsMsg.newBuilder();
			shero.useArcane(builder);
			return builder;
		}
		return null;
	}

	/**
	 * 移动
	 */
	public EffectsMsg.Builder move(UseMsg msg) {
		HeroWrapper shero = heroList.get(msg.getIndex());
		
		int tpos = shero.getPos() + msg.getTarget();
		HeroWrapper thero = heroPosList.get(tpos);
		
		if(null != shero && shero.checkMove() && null != thero && !thero.isDeath()){
			EffectsMsg.Builder builder = EffectsMsg.newBuilder();
			shero.move(thero,builder);
			return builder;
		}
		
		return null;
	}
	
	public void overRound(EffectsMsg.Builder builder){
		for(HeroWrapper hero:heroList.values()){
			hero.overRound(builder);
		}
		
		extractCard(Constant.MAX_CARD,builder);
	}
	
	public void startRound(EffectsMsg.Builder builder){
		
	}
	
	/**
	 * 
	 */
	public void doEffect(EffectWrapper effect,EffectsMsg.Builder builder){
		int x = effect.findNumX();
		int times = effect.findTimesX();
		Function fun = null; 
		int change = effect.getEffect_value()+x*effect.getEffect_value_c_rate();
		switch(effect.getEffect()){
			case RolePropType.ArcaneNum_VALUE:
				fun = (int value) -> {
					arcaneNum = arcaneNum + value;
					builder.addEffect(createEffectMsg(RolePropType.ArcaneNum_VALUE,value,effect.getEffecter()));
				};
				break;
			case RolePropType.ExtractCard_VALUE:
				fun = (int value) -> {
					extractCard(value,builder);
				};				
				break;
			case RolePropType.CreateCard_VALUE:
				fun = (int value) -> {
					
				};
				break;
			case RolePropType.RemoveCard_VALUE:
				fun = (int value) -> {
					
				};
				break;
			case RolePropType.Rank_VALUE:
				fun = (int value) -> {
					
				};
				break;
		}
		while(times > 0){
			fun.run(change);
			times--;
		}
	}
	
	//重置牌库
	public CardWrapper resetCardArea(EffectsMsg.Builder builder){
		//对方奥义点数增加5点
		builder.addEffect(enemy.createEffectMsg(RolePropType.ArcaneNum_VALUE, 5, getEffecter()));
		cardArea.addAll(discardArea);
		discardArea.clear();
		Collections.shuffle(cardArea);
		return cardArea.poll();
	}
	
	public EffectMsg createEffectMsg(int prop,int value,Effecter trigger){
		EffectMsg.Builder builder = createEffectMsgBuilder(prop,value,trigger);
		return builder.build();
	}
	
	public EffectMsg.Builder createEffectMsgBuilder(int prop,int value,Effecter source){
		EffectMsg.Builder builder = EffectMsg.newBuilder();
		builder.setTarget(getEffecter());
		builder.setSource(source);
		builder.setProp(prop);
		builder.setValue(value);
		return builder;
	}
	
	public Effecter getEffecter(){
		Effecter.Builder builder = Effecter.newBuilder();
		builder.setPid(pid);
		builder.setType(TargetType.Role);
		builder.setIndex(0);
		return builder.build();
	}

	
	public int getPid() {
		return pid;
	}

	public void setPid(int pid) {
		this.pid = pid;
	}

	public int getIndex() {
		return index;
	}

	public void setIndex(int index) {
		this.index = index;
	}

	public int getLoad() {
		return load;
	}

	public void setLoad(int load) {
		this.load = load;
	}

	public int getArcaneNum() {
		return arcaneNum;
	}

	public void setArcaneNum(int arcaneNum) {
		this.arcaneNum = arcaneNum;
	}

	public FightRole getEnemy() {
		return enemy;
	}

	public void setEnemy(FightRole enemy) {
		this.enemy = enemy;
	}

	public boolean isFinishReplace() {
		return finishReplace;
	}

	public void setFinishReplace(boolean finishReplace) {
		this.finishReplace = finishReplace;
	}

}
