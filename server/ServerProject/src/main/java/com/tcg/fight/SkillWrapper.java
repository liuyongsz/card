package com.tcg.fight;

import java.util.HashSet;
import java.util.List;
import java.util.Set;

import com.tcg.data.CardData;
import com.tcg.data.EffectData;
import com.tcg.data.SkillData;
import com.tcg.manager.ConfigManager;
import com.tcg.utils.RandomUtil;

import protomsg.Room.EffectsMsg;
import protomsg.Room.TargetType;

public class SkillWrapper {
	private SkillData skill;
	private FightRole role;
	private CardWrapper card;
	private HeroWrapper hero;
	
	private IEffect target; //有目标要选择目标,没有目标则根据配置表选择目标
	
	private IEffect randomTarget;	//随机目标
	
	private int lastSeed;	//上一次随机种子
	
	public SkillWrapper(SkillData skill,CardWrapper card){
		this.skill = skill;
		this.role = card.getRole();
		this.hero = card.getHero();
		this.card = card;
	}
	
	public SkillWrapper(SkillData skill,HeroWrapper hero){
		this.skill = skill;
		this.role = hero.getRole();
		this.hero = hero;
	}
	
	public void doEffect(EffectsMsg.Builder builder){
		Set<Integer> effectTarget = skill.getEffect_target();
		if(null==effectTarget){
			effectTarget = new HashSet<Integer>();
		}
		
		List<Integer> effectList = skill.getEffect_list();
		
		if(effectList == null)	return;
		
		for(int effectId:effectList){
			EffectData effect = ConfigManager.getInstance().getConfig(effectId, EffectData.class);
			EffectWrapper ew = new EffectWrapper(effect,hero);
			
			if(effectTarget.contains(effectId)){
				//目标卡牌英雄
				if(effect.getTarget_type() == TargetType.CardHero_VALUE){
					ew.doEffect(((CardWrapper)target).getHero(),builder);
				}else{
					ew.doEffect(target,builder);
				}
			}else{
				//自动发动无需目标
				FightRole targetRole = null;
				if(effect.getTarget_type1() == 1){
					targetRole = role;
				}else if(effect.getTarget_type1() == 2){
					targetRole = role.getEnemy();
				}
				switch(effect.getTarget_type()){
					case TargetType.Hero_VALUE:
						if(effect.getChoose()==3){
							if(randomTarget==null){
								int target = RandomUtil.getRandomValue(effect.getHero_target());
								randomTarget = targetRole.heroList.get(target);
								lastSeed = effect.getSeed();
							}else if(lastSeed != effect.getSeed()){
								int target = RandomUtil.getRandomValue(effect.getHero_target());
								randomTarget = targetRole.heroList.get(target);
								lastSeed = effect.getSeed();
							}
							ew.doEffect(randomTarget,builder);
						}else{
							for(int target:effect.getHero_target()){
								ew.doEffect(targetRole.heroList.get(target),builder);
							}
						}
						break;
					case TargetType.Card_VALUE:
						//todo
//						ew.doEffect(card);
						break;
					case TargetType.Role_VALUE:
						ew.doEffect(targetRole,builder);
						break;
					case TargetType.CardHero_VALUE:
						//本卡牌英雄
						ew.doEffect(card.getHero(),builder);
						break;
				}
			}
		}
	}
	
	public boolean check(int t){
		if(null == skill.getEffect_target()) return true;
		
		//针对第一条主动效果寻找目标
		int effectId = skill.getEffect_target().iterator().next();
		EffectData effect = ConfigManager.getInstance().getConfig(effectId, EffectData.class);
		FightRole targetRole = null;
		if(effect.getTarget_type1() == 1){
			targetRole = role;
		}else if(effect.getTarget_type1() == 2){
			targetRole = role.getEnemy();
		}
		switch(effect.getTarget_type()){
			case TargetType.Hero_VALUE:
				List<Integer> hero_target = effect.getHero_target();
				
				if(null != hero_target && !hero_target.contains(t)) return false;
				
				//都是本方英雄选取规则
				switch(effect.getHero_target2()){
					//3：与使用者不同位的英雄
					case 3:
						if(t == hero.getPos()) return false;
						break;
					//4：在使用者前方的英雄
					case 4:
						if(t >= hero.getPos()) return false;
						break;
					//5：在使用者后方的英雄
					case 5:
						if(t <= hero.getPos()) return false;
						break;
					//8：与使用者相邻的英雄
					case 8:
						int before = hero.getPos() - 1;
						int after = hero.getPos() + 1;
						if(t != before && t != after) return false;
						break;
				}
				
				HeroWrapper thero = targetRole.heroList.get(t);
				if(null == thero || thero.isDeath()) return false;
				
				target = thero;
				
				break;
			case TargetType.Card_VALUE:
				CardWrapper tcard = targetRole.handArea.get(t);
				if(null == tcard) return false;
				
				List<Integer> card_type = effect.getCard_type();
				CardData data = tcard.getData();
				
				if(null!=card_type&&card_type.contains(data.getCard_type())) return false;
				
				if(effect.getCard_type1()!=0&&data.getCard_type1().contains(effect.getCard_type1())) return false;
				
				target = tcard;
				
				break;
			case TargetType.Role_VALUE:
				target = targetRole;
				break;
		}
		
		return true;
	}
}
