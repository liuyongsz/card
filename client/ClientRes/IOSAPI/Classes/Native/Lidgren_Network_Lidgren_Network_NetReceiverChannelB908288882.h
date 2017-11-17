#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lidgren.Network.NetPeer
struct NetPeer_t1779390221;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetReceiverChannelBase
struct  NetReceiverChannelBase_t908288882  : public Il2CppObject
{
public:
	// Lidgren.Network.NetPeer Lidgren.Network.NetReceiverChannelBase::m_peer
	NetPeer_t1779390221 * ___m_peer_0;
	// Lidgren.Network.NetConnection Lidgren.Network.NetReceiverChannelBase::m_connection
	NetConnection_t3331492029 * ___m_connection_1;

public:
	inline static int32_t get_offset_of_m_peer_0() { return static_cast<int32_t>(offsetof(NetReceiverChannelBase_t908288882, ___m_peer_0)); }
	inline NetPeer_t1779390221 * get_m_peer_0() const { return ___m_peer_0; }
	inline NetPeer_t1779390221 ** get_address_of_m_peer_0() { return &___m_peer_0; }
	inline void set_m_peer_0(NetPeer_t1779390221 * value)
	{
		___m_peer_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_peer_0, value);
	}

	inline static int32_t get_offset_of_m_connection_1() { return static_cast<int32_t>(offsetof(NetReceiverChannelBase_t908288882, ___m_connection_1)); }
	inline NetConnection_t3331492029 * get_m_connection_1() const { return ___m_connection_1; }
	inline NetConnection_t3331492029 ** get_address_of_m_connection_1() { return &___m_connection_1; }
	inline void set_m_connection_1(NetConnection_t3331492029 * value)
	{
		___m_connection_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_connection_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
