package com.tcg.msg.local;

import java.io.Serializable;

import com.tcg.msg.AbstractMessage;

public class LocalMessage extends AbstractMessage implements Serializable {


	private static final long serialVersionUID = 1L;
	
	private int pid;


    public LocalMessage(int cmd){
    	this.cmd = cmd;
    }
    
    public LocalMessage(int cmd,Object lite){
    	this.cmd = cmd;
    	this.lite = lite;
    }
    
    public LocalMessage(int cmd,Object lite,int pid){
    	this.cmd = cmd;
    	this.lite = lite;
    	this.pid = pid;
    }

	public int getPid() {
		return pid;
	}

	public void setPid(int pid) {
		this.pid = pid;
	}
    
    
}
