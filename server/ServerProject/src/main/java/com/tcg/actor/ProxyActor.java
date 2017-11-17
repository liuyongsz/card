package com.tcg.actor;

import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.List;

import com.tcg.annotation.MessageMapping;
import com.tcg.constant.Constant;
import com.tcg.manager.MessageManager;
import com.tcg.msg.IMessage;

public abstract class ProxyActor extends MessageActor {
	protected List<Integer> proxyCmd = new ArrayList<Integer>();
	
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
			}else if("proxyInvoke".equals(method.getName())){
				int size = proxyCmd.size();
				for(int i = 0; i < size; i++){  
					int cmd = proxyCmd.get(i);
					mappingHash.put(cmd, method);
					if (cmd < Constant.LOCAL_DIVIDE && addNet) {
						MessageManager.getInstance().addActorMap(cmd, this.getSelf());
					}
				}
			}
		}
	}
	
	public void proxyInvoke(IMessage message){
		
	}
	
}
