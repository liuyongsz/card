#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Lidgren_Network_Lidgren_Network_NetReceiverChannelB908288882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetUnreliableUnorderedReceiver
struct  NetUnreliableUnorderedReceiver_t3541921227  : public NetReceiverChannelBase_t908288882
{
public:
	// System.Boolean Lidgren.Network.NetUnreliableUnorderedReceiver::m_doFlowControl
	bool ___m_doFlowControl_2;

public:
	inline static int32_t get_offset_of_m_doFlowControl_2() { return static_cast<int32_t>(offsetof(NetUnreliableUnorderedReceiver_t3541921227, ___m_doFlowControl_2)); }
	inline bool get_m_doFlowControl_2() const { return ___m_doFlowControl_2; }
	inline bool* get_address_of_m_doFlowControl_2() { return &___m_doFlowControl_2; }
	inline void set_m_doFlowControl_2(bool value)
	{
		___m_doFlowControl_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
