#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lidgren.Network.NetQueue`1<Lidgren.Network.NetOutgoingMessage>
struct NetQueue_1_t4233233666;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetSenderChannelBase
struct  NetSenderChannelBase_t3096690204  : public Il2CppObject
{
public:
	// Lidgren.Network.NetQueue`1<Lidgren.Network.NetOutgoingMessage> Lidgren.Network.NetSenderChannelBase::m_queuedSends
	NetQueue_1_t4233233666 * ___m_queuedSends_0;

public:
	inline static int32_t get_offset_of_m_queuedSends_0() { return static_cast<int32_t>(offsetof(NetSenderChannelBase_t3096690204, ___m_queuedSends_0)); }
	inline NetQueue_1_t4233233666 * get_m_queuedSends_0() const { return ___m_queuedSends_0; }
	inline NetQueue_1_t4233233666 ** get_address_of_m_queuedSends_0() { return &___m_queuedSends_0; }
	inline void set_m_queuedSends_0(NetQueue_1_t4233233666 * value)
	{
		___m_queuedSends_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_queuedSends_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
