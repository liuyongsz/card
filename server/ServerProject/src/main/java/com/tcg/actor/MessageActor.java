package com.tcg.actor;

import java.lang.reflect.Method;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.TimeUnit;

import com.tcg.annotation.MessageMapping;
import com.tcg.constant.Constant;
import com.tcg.log.Log;
import com.tcg.manager.MessageManager;
import com.tcg.msg.IMessage;

import akka.actor.ActorRef;
import akka.actor.ActorSystem;
import akka.actor.Cancellable;
import akka.actor.UntypedAbstractActor;
import scala.concurrent.duration.Duration;

public abstract class MessageActor extends UntypedAbstractActor {
	protected final Map<Integer, Method> mappingHash = new HashMap<Integer, Method>();
	//是否注册到网络消息里面(主要针对被代理消息的Actor)
	protected boolean addNet = true;
	protected Cancellable cancel;
	
	@Override
	public void preStart(){
		Method[] methods = this.getClass().getDeclaredMethods();
		for(Method method :methods){
			MessageMapping mapping = method.getAnnotation(MessageMapping.class);
			if(mapping != null){
				int cmd = mapping.value();
				mappingHash.put(cmd, method);
				if (cmd < Constant.LOCAL_DIVIDE && addNet) {
					MessageManager.getInstance().addActorMap(cmd, this.getSelf());
				}
			}
		}
	}
	
	@Override
	public void onReceive(Object arg0) throws Throwable {
		Long startTime=System.currentTimeMillis();
        try {
			IMessage message = (IMessage)arg0;
			Method method = mappingHash.get(message.getCmd());
			if(method!=null){
				method.invoke(this,message);
			}
		} catch (Exception e) {
			Log.error(arg0.toString(),e);
		} catch(Throwable t){
			Log.error(arg0.toString(),t);
		}
		startTime = System.currentTimeMillis() - startTime;
//		System.out.println("onReceive..."+startTime);
	}
	
	public void scheduleOnce(int time,IMessage msg){
		ActorSystem system = context().system();
		cancel = system.scheduler().scheduleOnce(Duration.create(time, TimeUnit.SECONDS), 
				getSelf(), 
				msg, 
				system.dispatcher(), 
				ActorRef.noSender());
	}
	
	
}
