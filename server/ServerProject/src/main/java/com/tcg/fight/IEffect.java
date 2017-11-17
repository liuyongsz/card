package com.tcg.fight;

import protomsg.Room.EffectMsg;
import protomsg.Room.Effecter;
import protomsg.Room.EffectsMsg;

public interface IEffect {
	public void doEffect(EffectWrapper effect,EffectsMsg.Builder builder);
	public EffectMsg createEffectMsg(int prop,int value,Effecter trigger);
}
