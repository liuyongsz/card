package com.tcg.msg.net;

import com.google.protobuf.MessageLite;
import com.google.protobuf.MessageLite.Builder;
import com.tcg.manager.MessageManager;
import com.tcg.msg.AbstractMessage;
import com.tcg.server.session.ISession;

public class NetMessage extends AbstractMessage {
    private byte[] data;
    private ISession session;
    
    public NetMessage(){
    	
    }
    
//    public NetMessage(int cmd){
//    	this.cmd = cmd;
//    }
    
    //decode
    public NetMessage(int cmd,byte[] data){
    	this.cmd = cmd;
    	this.data = data;
    	this.lite = MessageManager.getInstance().decodeBody(cmd,data);
    }
    
    //encode
    public NetMessage(int cmd,MessageLite lite){
    	this.cmd = cmd;
    	this.data = lite.toByteArray();
    }
    
    //encode
    public NetMessage(int cmd,Builder builder){
    	this.cmd = cmd;
    	this.data = builder.build().toByteArray();
    }

	public byte[] getData() {
		return data;
	}

	public void setData(byte[] data) {
		this.data = data;
	}

	public int getLength() {
		return 4 + (data == null?0:data.length);
	}

	public ISession getSession() {
		return session;
	}

	public void setSession(ISession session) {
		this.session = session;
	}

}
