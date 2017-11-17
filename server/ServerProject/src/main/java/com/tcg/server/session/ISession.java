package com.tcg.server.session;

import java.net.SocketAddress;

import com.tcg.msg.IMessage;

public interface ISession {
    void write(IMessage message);

    void close();

    boolean isClosing();

    boolean isConnected();

    SocketAddress getRemoteAddress();

//    Object setAttribute(Object var1, Object var2);
//
//    Object getAttribute(Object var1);

    long getSessionId();
    
    Object getData(String var1);

    void putData(String var1, Object var2);

    String getRemoteAdd();
    
    boolean hasData(String var1);
   
}
