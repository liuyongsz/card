package com.tcg.server.session;

import java.net.SocketAddress;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.atomic.AtomicLong;

import com.tcg.constant.ChannelKeyConstant;
import com.tcg.log.Log;
import com.tcg.msg.IMessage;

import io.netty.channel.Channel;
import io.netty.util.Attribute;
import io.netty.util.AttributeKey;

public class Netty4Session implements ISession {
    private static final AttributeKey<Map<String,Object>> attributeKey = AttributeKey.newInstance("data");
    private static AtomicLong idgenerate = new AtomicLong();
    
    private Channel channel;
    private long id;

    public static ISession getSession(Channel channel) {
        Attribute<Map<String,Object>> attr = channel.attr(attributeKey);
        Map<String,Object> map = attr.get();
        if (map == null) {
        	map = new HashMap<String,Object>();
            attr.set(map);
        }
        ISession session = (ISession) map.get(ChannelKeyConstant.SESSION_KEY);
        if (session == null) {
            session = new Netty4Session(channel);
            map.put(ChannelKeyConstant.SESSION_KEY, session);
        }

        return session;
    }

    private Netty4Session(Channel channel) {
        this.channel = channel;
        this.id = idgenerate.incrementAndGet();
    }

    public Object getData(String key) {
    	Attribute<Map<String, Object>> attr = this.channel.attr(attributeKey);
        return ((Map<String,Object>)attr.get()).get(key);
    }

    public void putData(String key, Object object) {
    	Attribute<Map<String, Object>> attr = this.channel.attr(attributeKey);
        ((Map<String, Object>)attr.get()).put(key, object);
    }
    
    public boolean hasData(String key) {
    	Attribute<Map<String, Object>> attr = this.channel.attr(attributeKey);
        return ((Map<String,Object>)attr.get()).containsKey(key);
    }

    public void write(IMessage message) {
        if(this.channel != null && this.channel.isActive() && this.channel.isWritable()) {
            this.channel.writeAndFlush(message);
        } else {
            Log.error("send message but session is null. ", new NullPointerException());
        }

    }
    
    public SocketAddress getRemoteAddress() {
        return this.channel.remoteAddress();
    }

    public String getRemoteAdd() {
        return this.channel.remoteAddress().toString();
    }

    public void close() {
        this.channel.close();
    }

    public boolean isClosing() {
        return !this.channel.isActive();
    }

    public boolean isConnected() {
        return this.channel.isActive();
    }

    public long getSessionId() {
        return this.id;
    }

}
