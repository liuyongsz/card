package com.tcg.server;

import com.tcg.msg.net.NetMessage;

import io.netty.buffer.ByteBuf;
import io.netty.channel.ChannelHandlerContext;
import io.netty.handler.codec.MessageToByteEncoder;

public class DefaultNetty4Encoder extends MessageToByteEncoder<NetMessage> {

	@Override
	protected void encode(ChannelHandlerContext ctx, NetMessage msg, ByteBuf out) throws Exception {
        try {
            out.writeShort(msg.getLength());
            out.writeShort(msg.getCmd());
            byte[] data = msg.getData();
            if(data != null) {
            	out.writeBytes(data);
            }
	    } catch (Throwable err) {
	        
	    }
	}
}
