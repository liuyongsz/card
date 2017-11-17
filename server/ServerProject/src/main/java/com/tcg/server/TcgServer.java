package com.tcg.server;

import com.tcg.config.ServerConfig;

import io.netty.bootstrap.ServerBootstrap;
import io.netty.buffer.PooledByteBufAllocator;
import io.netty.channel.ChannelFuture;
import io.netty.channel.ChannelOption;
import io.netty.channel.EventLoopGroup;
import io.netty.channel.nio.NioEventLoopGroup;
import io.netty.channel.socket.nio.NioServerSocketChannel;
import io.netty.handler.logging.LogLevel;
import io.netty.handler.logging.LoggingHandler;

public class TcgServer {
	private EventLoopGroup bossGroup;
	private EventLoopGroup workerGroup;
	
	public void bind(ServerConfig config) {
		bossGroup = new NioEventLoopGroup();
		workerGroup = new NioEventLoopGroup();
		try {
			ServerBootstrap b = new ServerBootstrap();
			b.group(bossGroup, workerGroup);
			b.channel(NioServerSocketChannel.class);
            b.option(ChannelOption.SO_REUSEADDR, true);
            b.option(ChannelOption.ALLOCATOR, PooledByteBufAllocator.DEFAULT);
			b.option(ChannelOption.SO_BACKLOG, 1024);
			b.childOption(ChannelOption.TCP_NODELAY, true);
            b.childOption(ChannelOption.ALLOCATOR, PooledByteBufAllocator.DEFAULT);
			b.handler(new LoggingHandler(LogLevel.INFO));
			b.childHandler(new Netty4ProtocolCodecFactory());
			ChannelFuture f = b.bind(config.getPort()).sync();

			f.channel().closeFuture().sync();
		} catch(Exception e){
			
		} finally {
			bossGroup.shutdownGracefully();
			workerGroup.shutdownGracefully();
		}
		
	}
	
	public void close() {
		bossGroup.shutdownGracefully();
		workerGroup.shutdownGracefully();
	}

}
