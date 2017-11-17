package com.tcg.msg;

public abstract class AbstractMessage implements IMessage {
	protected int cmd;
	protected Object lite;
    
	public int getCmd() {
		return cmd;
	}

	public void setCmd(int cmd) {
		this.cmd = cmd;
	}
	
	public Object getLite() {
		return lite;
	}

	public void setLite(Object lite) {
		this.lite = lite;
	}

}
