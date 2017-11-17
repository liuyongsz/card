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

// Lidgren.Network.NetReliableSequencedReceiver
struct  NetReliableSequencedReceiver_t2385271929  : public NetReceiverChannelBase_t908288882
{
public:
	// System.Int32 Lidgren.Network.NetReliableSequencedReceiver::m_windowStart
	int32_t ___m_windowStart_2;
	// System.Int32 Lidgren.Network.NetReliableSequencedReceiver::m_windowSize
	int32_t ___m_windowSize_3;

public:
	inline static int32_t get_offset_of_m_windowStart_2() { return static_cast<int32_t>(offsetof(NetReliableSequencedReceiver_t2385271929, ___m_windowStart_2)); }
	inline int32_t get_m_windowStart_2() const { return ___m_windowStart_2; }
	inline int32_t* get_address_of_m_windowStart_2() { return &___m_windowStart_2; }
	inline void set_m_windowStart_2(int32_t value)
	{
		___m_windowStart_2 = value;
	}

	inline static int32_t get_offset_of_m_windowSize_3() { return static_cast<int32_t>(offsetof(NetReliableSequencedReceiver_t2385271929, ___m_windowSize_3)); }
	inline int32_t get_m_windowSize_3() const { return ___m_windowSize_3; }
	inline int32_t* get_address_of_m_windowSize_3() { return &___m_windowSize_3; }
	inline void set_m_windowSize_3(int32_t value)
	{
		___m_windowSize_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
