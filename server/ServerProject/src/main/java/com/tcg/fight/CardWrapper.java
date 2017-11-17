package com.tcg.fight;

import java.util.List;

import com.tcg.config.Condition;
import com.tcg.data.CardData;
import com.tcg.data.SkillData;
import com.tcg.fight.HeroWrapper.Function;
import com.tcg.manager.ConfigManager;

import protomsg.Room.CardPropType;
import protomsg.Room.EffectMsg;
import protomsg.Room.Effecter;
import protomsg.Room.EffectsMsg;
import protomsg.Room.FightCardMsg;
import protomsg.Room.RolePropType;
import protomsg.Room.TargetType;
import protomsg.Room.UseMsg;

public class CardWrapper implements IEffect {
	private CardData data;
	//生成的序列号
	private int index;
	//卡牌经验
	private int exp;
	//当前效果
	private List<EffectWrapper> currentEffect;
	//当前激活技能(有可能为空)
	private SkillWrapper skill;
	//所属玩家
	private FightRole role;
	//所属英雄
	private HeroWrapper hero;
	//单体伤害加成
	private int monomer;
	//aoe伤害加成
	private int aoe;
	//最大经验值
	private int maxExp;
	
	public CardWrapper(CardData data,int index,HeroWrapper hero){
		this.data = data;
		this.index = index;
		this.exp = 0;
		this.role = hero.getRole();
		this.hero = hero;
		List<Condition> skillList= data.getSkill_list();
		maxExp = skillList.get(skillList.size() - 1).getValue();
		setSkill();
	}

	public int getIndex() {
		return index;
	}

	public void setIndex(int index) {
		this.index = index;
	}
	
	public int getCardId() {
		return data.getCard_id();
	}
	
	public FightRole getRole() {
		return role;
	}

	public void setRole(FightRole role) {
		this.role = role;
	}

	public void doEffect(EffectWrapper effect,EffectsMsg.Builder builder){
		int x = effect.findNumX();
		int times = effect.findTimesX();
		Function fun = null;
		int change = effect.getEffect_value() + x*effect.getEffect_value_c_rate();
		switch(effect.getEffect()){
			case CardPropType.Exp_VALUE:
				fun = (int value) -> {
					addExp(value);
					builder.addEffect(createEffectMsg(CardPropType.Exp_VALUE,value,effect.getEffecter()));
				};
				break;
			case CardPropType.Monomer_VALUE:
		
				break;
			case CardPropType.AOE_VALUE:

				break;
		}
		while(times > 0){
			fun.run(change);
			times--;
		}
	}
	
	public void useCard(UseMsg msg,EffectsMsg.Builder builder){
		skill.doEffect(builder);
		role.setArcaneNum(role.getArcaneNum()+1);
		builder.addEffect(role.createEffectMsg(RolePropType.ArcaneNum_VALUE, 1,getEffecter()));
		builder.addEffect(role.createEffectMsg(RolePropType.RemoveCard_VALUE, index,getEffecter()));
	}
	
	public void chargeCard(UseMsg msg,EffectsMsg.Builder builder){
		CardWrapper card = role.handArea.get(msg.getTarget());
		card.addExp(1);
		builder.addEffect(card.createEffectMsg(CardPropType.Exp_VALUE,1,getEffecter()));	
		builder.addEffect(role.createEffectMsg(RolePropType.RemoveCard_VALUE, index,getEffecter()));
	}
	
	//回合开始触发
	public void roundStartTrigger(EffectsMsg.Builder builder){
		
	}
	
	//回合结束触发
	public void roundEndTrigger(EffectsMsg.Builder builder){
		
	}
	
	//抽取触发
	public void extractTrigger(EffectsMsg.Builder builder){
		
	}
	
	public void addExp(int value){
		exp = exp + value;
		setSkill();
	}
	
	private void setSkill(){
		List<Condition> skillList= data.getSkill_list();
		int size = skillList.size();
		for(int i = size - 1; i >= 0; i--){
			Condition c = skillList.get(i);
			if(c.getValue() >= exp){
				SkillData data = ConfigManager.getInstance().getConfig(c.getKey(), SkillData.class);
				skill = new SkillWrapper(data, this);
				return;
			}
		}
	}
	
	public SkillWrapper getSkill(){
		return skill;
	}

	public HeroWrapper getHero() {
		return hero;
	}

	public void setHero(HeroWrapper hero) {
		this.hero = hero;
	}
	
	public CardData getData() {
		return data;
	}

	public void setData(CardData data) {
		this.data = data;
	}

	public void doDeath(){
		this.data = ConfigManager.getInstance().getConfig(data.getDeath_id(), CardData.class);
		this.exp = 0;
		setSkill();
	}
	
	public EffectMsg createEffectMsg(int prop,int value,Effecter source){
		EffectMsg.Builder builder = EffectMsg.newBuilder();
		builder.setTarget(getEffecter());
		builder.setSource(source);
		builder.setProp(prop);
		builder.setValue(value);
		return builder.build();
	}
	
	public FightCardMsg getMsg(){
		FightCardMsg.Builder builder = FightCardMsg.newBuilder();
		builder.setPid(role.getPid());
		builder.setIndex(index);
		builder.setCardId(data.getCard_id());
		builder.setExp(exp);
		return builder.build();
	}
	
	public Effecter getEffecter(){
		Effecter.Builder builder = Effecter.newBuilder();
		builder.setPid(role.getPid());
		builder.setType(TargetType.Card);
		builder.setIndex(index);
		return builder.build();
	}
	
	public boolean check(int target){
		if(null == skill) return false;
		
		return skill.check(target);
	}
	
	public void reset(){
		skill = null;
		exp = 0;
		setSkill();
	}
	
}
