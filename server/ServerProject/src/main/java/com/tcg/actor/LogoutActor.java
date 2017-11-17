package com.tcg.actor;

import akka.actor.UntypedAbstractActor;

public class LogoutActor extends UntypedAbstractActor {
	private int num = 0;

	@Override
	public void onReceive(Object arg0) throws Throwable {
		num++;
		Thread th=Thread.currentThread();
		System.out.println(th.getName() + "===" + arg0 + "===" + num);
	}

}
