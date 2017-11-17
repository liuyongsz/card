package com.tcg.server;

import java.util.List;

import com.tcg.msg.net.NetMessage;

import io.netty.buffer.ByteBuf;
import io.netty.channel.ChannelHandlerContext;
import io.netty.handler.codec.ByteToMessageDecoder;

public class DefaultNetty4Decoder extends ByteToMessageDecoder {

	@Override
	protected void decode(ChannelHandlerContext ctx, ByteBuf in, List<Object> out) throws Exception {
		if(in.readableBytes() >= 4) {
            in.markReaderIndex();
            short length = in.readShort();
            in.resetReaderIndex();
            if(in.readableBytes() >= length) {
            	in.skipBytes(2);
                int cmd = in.readShort();
                byte[] bytes = new byte[length - 4];
                in.readBytes(bytes);
                NetMessage message = new NetMessage(cmd,bytes);
                out.add(message);
            }
        }

	}

}
