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

// Lidgren.Network.NetUnreliableSequencedReceiver
struct  NetUnreliableSequencedReceiver_t2497601560  : public NetReceiverChannelBase_t908288882
{
public:
	// System.Int32 Lidgren.Network.NetUnreliableSequencedReceiver::m_lastReceivedSequenceNumber
	int32_t ___m_lastReceivedSequenceNumber_2;

public:
	inline static int32_t get_offset_of_m_lastReceivedSequenceNumber_2() { return static_cast<int32_t>(offsetof(NetUnreliableSequencedReceiver_t2497601560, ___m_lastReceivedSequenceNumber_2)); }
	inline int32_t get_m_lastReceivedSequenceNumber_2() const { return ___m_lastReceivedSequenceNumber_2; }
	inline int32_t* get_address_of_m_lastReceivedSequenceNumber_2() { return &___m_lastReceivedSequenceNumber_2; }
	inline void set_m_lastReceivedSequenceNumber_2(int32_t value)
	{
		___m_lastReceivedSequenceNumber_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
