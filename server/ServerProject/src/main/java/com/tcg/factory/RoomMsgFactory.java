package com.tcg.factory;

import com.tcg.msg.IMessage;
import com.tcg.msg.net.NetMessage;

import protomsg.Room.RoomState;
import protomsg.Room.RoomStateMsg;
import protomsg.Room.StartRoundMsg;
import protomsg.Rpc;

public class RoomMsgFactory {
	
    public static IMessage notifyRoomStateMsg(RoomState state){
    	RoomStateMsg.Builder builder = RoomStateMsg.newBuilder();
    	builder.setState(state);
		NetMessage respone = new NetMessage(Rpc.Respone.RoomStateRes_VALUE,builder);
		return respone;
    }
    
    public static IMessage createStartRoundMsg(int pid){
    	StartRoundMsg.Builder builder = StartRoundMsg.newBuilder();
    	builder.setPid(pid);
		NetMessage respone = new NetMessage(Rpc.Respone.StartRoundRes_VALUE,builder);
		return respone;
    }
    
    
}
