package com.tcg.msg;

public interface IMessage {
    int getCmd();

    void setCmd(int cmd);
    
    void setLite(Object result);
    
    Object getLite();
}
