package com.tcg.server;

import io.netty.channel.Channel;
import io.netty.channel.ChannelInitializer;
import io.netty.channel.ChannelPipeline;
import io.netty.handler.timeout.IdleStateHandler;

public class Netty4ProtocolCodecFactory extends ChannelInitializer<Channel> {

    public Netty4ProtocolCodecFactory() {
       
    }

    protected void initChannel(Channel channel) throws Exception {
        ChannelPipeline pipeline = channel.pipeline();
//        pipeline.addLast(new IdleStateHandler(10, 10, 10));
        pipeline.addLast(new DefaultNetty4Decoder());
        pipeline.addLast(new DefaultNetty4Encoder());
        pipeline.addLast(new Netty4Hander());
    }
}
