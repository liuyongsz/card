package com.tcg.server;

import com.tcg.constant.ChannelKeyConstant;
import com.tcg.manager.MessageManager;
import com.tcg.manager.ServerManager;
import com.tcg.msg.net.NetMessage;
import com.tcg.server.session.ISession;
import com.tcg.server.session.Netty4Session;

import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;
import io.netty.handler.timeout.IdleStateEvent;
import protomsg.Rpc;

public class Netty4Hander extends SimpleChannelInboundHandler<NetMessage> {

	@Override
	protected void channelRead0(ChannelHandlerContext ctx, NetMessage msg) throws Exception {
		ISession session = Netty4Session.getSession(ctx.channel());
		msg.setSession(session);
		System.out.println(msg.getCmd());
		switch(msg.getCmd()){
			case Rpc.Request.Login_VALUE:
				break;
			case Rpc.Request.Create_VALUE:
				if(!session.hasData(ChannelKeyConstant.AID_KEY)){
					return;
				}
				break;
			default:
				if(!session.hasData(ChannelKeyConstant.PLAYER_KEY)){
					return;
				}
				break;
		}
		MessageManager.getInstance().sendMsg(msg);
	}

	@Override
    public void channelActive(ChannelHandlerContext ctx) throws Exception {

    }
	
	@Override
	public void channelInactive(ChannelHandlerContext ctx) throws Exception {
		ISession session = Netty4Session.getSession(ctx.channel());
		ServerManager.getInstance().removeSession(session);
	}
	
	@Override
    public void userEventTriggered(ChannelHandlerContext ctx, Object evt) throws Exception {
	       if(evt instanceof IdleStateEvent) {
	            IdleStateEvent idleState = (IdleStateEvent)evt;
	       }
    }
	
	@Override
    public void exceptionCaught(ChannelHandlerContext ctx, Throwable throwable) throws Exception {
        throwable.printStackTrace();
        ctx.close();
    }
}
