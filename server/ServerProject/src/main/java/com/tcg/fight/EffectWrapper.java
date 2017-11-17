package com.tcg.fight;

import com.tcg.data.EffectData;

import protomsg.Room.Effecter;
import protomsg.Room.EffectsMsg;

public class EffectWrapper {
	private EffectData effect;
	private FightRole role;
	private HeroWrapper hero;
	private Effecter trigger;
	
	public EffectWrapper(EffectData effect,HeroWrapper hero){
		this.effect = effect;
		this.role = hero.getRole();
		this.hero = hero;
		trigger = hero.getEffecter();
	}
	
	public void doEffect(IEffect i,EffectsMsg.Builder builder){
		if(role.fightEnd) return;
		i.doEffect(this,builder);
	}
	
	public int findNumX(){
		int type = effect.getEffect_value_change();
		int x = type == 0?0:findX(type);
		return x;
	}
	
	public int findTimesX(){
		int timesType = effect.getFight_value_change();
		int times = timesType == 0?effect.getFight_value():findX(timesType);
		return times;
	}
	
	private int findX(int type){
		return 0;
	}
	
	public int getEffect(){
		return effect.getEffect();
	}
	
	public int getEffect_value(){
		return effect.getEffect_value();
	}
	
	public int getEffect_value_c_rate(){
		return effect.getEffect_value_c_rate();
	}

	public Effecter getEffecter() {
		return trigger;
	}
	
}
