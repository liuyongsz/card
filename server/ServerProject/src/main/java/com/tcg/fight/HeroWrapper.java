package com.tcg.fight;

import java.util.List;

import com.tcg.data.HeroData;
import com.tcg.data.SkillData;
import com.tcg.manager.ConfigManager;

import protomsg.Room.EffectMsg;
import protomsg.Room.Effecter;
import protomsg.Room.EffectsMsg;
import protomsg.Room.FightHeroMsg;
import protomsg.Room.HeroPropType;
import protomsg.Room.TargetType;

public class HeroWrapper implements IEffect {
	private HeroData data;
	
	private FightRole role;
	
	//序号
	private int index;
	
	//当前血量
	private int hp;
	
	//血量上限
	private int maxHp;
	
	//护甲
	private int shield;
	
	//选择的奥义
	private int arcane;
	
	//位置
	private int pos;
	//是否可以移动过
	private boolean canMove = true;
	//是否可以使用奥义
	private boolean canArcane = true;
	//移动次数
	private int moveNum = 0;
	//奥义使用次数
	private int useArcaneNum = 0;
	//行动次数
	private int actionNum = 1;
	//是否死亡
	private boolean death = false;
	//属于该英雄的卡牌
	private List<CardWrapper> cardList;
	
	private SkillWrapper arcaneSkill;
	
	public HeroWrapper(HeroData data,int arcane,int pos,FightRole role){
		this.index = pos;
		this.data = data;
		this.maxHp = data.getHp();
		this.hp = maxHp;
		this.shield = data.getShield();
		this.arcane = arcane;
		this.role = role;
		this.pos = pos;
		death = false;
		
		SkillData skillData = ConfigManager.getInstance().getConfig(arcane, SkillData.class);
		arcaneSkill = new SkillWrapper(skillData, this);
	}
	
	public FightHeroMsg getMsg(){
		FightHeroMsg.Builder builder = FightHeroMsg.newBuilder();
		builder.setPid(role.getPid());
		builder.setIndex(index);
		builder.setHeroId(data.getHero_id());
		builder.setHp(hp);
		builder.setMaxHp(maxHp);
		builder.setShield(shield);
		builder.setArcane(arcane);
		builder.setPos(pos);
		builder.setCanMove(canMove);
		builder.setCanArcane(canArcane);
		builder.setDeath(death);
		builder.setMoveNum(moveNum);
		builder.setUseArcaneNum(useArcaneNum);
		builder.setActionNum(actionNum);
		return builder.build();
	}
	
	public void doEffect(EffectWrapper effect,EffectsMsg.Builder builder){
		if(death) return;
		int x = effect.findNumX();
		int times = effect.findTimesX();
		Function fun = null;
		int change = effect.getEffect_value()+x*effect.getEffect_value_c_rate();
		switch(effect.getEffect()){
			case HeroPropType.Damage_VALUE:
				fun = (int value) -> {
					shield = shield + value;
					if(shield < 0){
						hp = hp + shield;
						shield = 0;
					}
					
					builder.addEffect(createEffectMsg(HeroPropType.Damage_VALUE,value, effect.getEffecter()));
				};
				break;
			case HeroPropType.Hp_VALUE:
				fun = (int value) -> {
					hp = hp + value;
					
					if(hp > maxHp){
						hp = maxHp;
					}
					
					builder.addEffect(createEffectMsg(HeroPropType.Hp_VALUE,value,effect.getEffecter()));
				};				
				break;
			case HeroPropType.Shield_VALUE:
				fun = (int value) -> {
					shield = shield + value;
					
					if(shield < 0){
						shield = 0;
					}
					
					builder.addEffect(createEffectMsg(HeroPropType.Shield_VALUE,value,effect.getEffecter()));
				};
				break;
			case HeroPropType.Move_VALUE:
				fun = (int value) -> {
					
				};
				break;
		}
		while(times > 0){
			fun.run(change);
			times--;
		}
		if(hp <= 0){
			doDeath(builder);
		}
	}
	
	private void doDeath(EffectsMsg.Builder builder){
		builder.addEffect(createEffectMsg(HeroPropType.Death_VALUE,1,getEffecter()));
		death = true;
		int tPos = pos + 1;
		HeroWrapper tHero = role.heroPosList.get(tPos);
		while(tPos<5 && null!=tHero && !tHero.isDeath()){
			builder.addEffect(tHero.createEffectMsg(HeroPropType.Move_VALUE, -1, getEffecter()));
			tHero.setPos(pos);
			this.setPos(tPos);
			tPos++;
			tHero = role.heroPosList.get(tPos);
		}

		for(CardWrapper cw:cardList){
			cw.doDeath();
		}
		
		role.liveNum--;
		if(role.liveNum == 0){
			role.room.fightOver(role.getEnemy().getPid());
		}else if(role.liveNum == 1){
			awaken();
		}
	}
	
	private void awaken(){
		
	}

	public int getHp() {
		return hp;
	}

	public void setHp(int hp) {
		this.hp = hp;
	}

	public int getShield() {
		return shield;
	}

	public void setShield(int shield) {
		this.shield = shield;
	}
	
	public boolean isDeath() {
		return death;
	}

	public void setDeath(boolean death) {
		this.death = death;
	}

	public int getPos() {
		return pos;
	}

	public void setPos(int pos) {
		this.pos = pos;
		role.heroPosList.put(pos, this);
	}

	public int getArcane() {
		return arcane;
	}

	public void setArcane(int arcane) {
		this.arcane = arcane;
	}

	public FightRole getRole() {
		return role;
	}

	public void setRole(FightRole role) {
		this.role = role;
	}

	public List<CardWrapper> getCardList() {
		return cardList;
	}

	public void setCardList(List<CardWrapper> cardList) {
		this.cardList = cardList;
	}
	
	public boolean isCanMove() {
		return canMove;
	}

	public void setCanMove(boolean canMove) {
		this.canMove = canMove;
	}

	public boolean isCanArcane() {
		return canArcane;
	}

	public void setCanArcane(boolean canArcane) {
		this.canArcane = canArcane;
	}

	public int getMoveNum() {
		return moveNum;
	}

	public void setMoveNum(int moveNum) {
		this.moveNum = moveNum;
	}

	public int getUseArcaneNum() {
		return useArcaneNum;
	}

	public void setUseArcaneNum(int useArcaneNum) {
		this.useArcaneNum = useArcaneNum;
	}

	public int getIndex() {
		return index;
	}

	public void setIndex(int index) {
		this.index = index;
	}

	public EffectMsg createEffectMsg(int prop,int value,Effecter source){
		EffectMsg.Builder builder = EffectMsg.newBuilder();
		
		builder.setTarget(getEffecter());
		builder.setSource(source);
		builder.setProp(prop);
		builder.setValue(value);
		return builder.build();
	}
	
	public void move(HeroWrapper thero,EffectsMsg.Builder builder){
		int tpos = thero.pos;

		builder.addEffect(createEffectMsg(HeroPropType.Move_VALUE, tpos - pos , thero.getEffecter()));
		
		thero.setPos(pos);
		this.setPos(tpos);
		
		if(moveNum > 0){
			moveNum--;
			builder.addEffect(createEffectMsg(HeroPropType.MoveNum_VALUE,-1, getEffecter()));
		}else{
			actionNum--;
			builder.addEffect(createEffectMsg(HeroPropType.ActionNum_VALUE,-1, getEffecter()));
		}		
	}
	
	public void useArcane(EffectsMsg.Builder builder){
		arcaneSkill.doEffect(builder);
	}
	
	public void overRound(EffectsMsg.Builder builder){
		moveNum = 0;
		useArcaneNum = 0;
		actionNum = 1;
		builder.addEffect(createEffectMsg(HeroPropType.MoveNum_VALUE, 0, getEffecter()));
		builder.addEffect(createEffectMsg(HeroPropType.UseArcaneNum_VALUE, 0, getEffecter()));
		builder.addEffect(createEffectMsg(HeroPropType.ActionNum_VALUE, 1, getEffecter()));
	}
	
	public Effecter getEffecter(){
		Effecter.Builder builder = Effecter.newBuilder();
		builder.setPid(role.getPid());
		builder.setType(TargetType.Hero);
		builder.setIndex(index);
		return builder.build();
	}
	
	public boolean checkMove(){
		if(death || !canMove) return false;
		
		if(moveNum > 0 || actionNum > 0) return true;
		
		return false;
	}
	
	public boolean checkArcane(int target){
		if(death || !canArcane) return false;
		
		if(useArcaneNum < 1 && actionNum < 1) return false;
		
		return arcaneSkill.check(target);
	}


	@FunctionalInterface
    public interface Function {
        public void run(int value);
    }
	
}
