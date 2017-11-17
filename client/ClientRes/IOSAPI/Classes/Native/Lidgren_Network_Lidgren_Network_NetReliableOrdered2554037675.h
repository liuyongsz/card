#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lidgren.Network.NetBitVector
struct NetBitVector_t1774780753;
// Lidgren.Network.NetIncomingMessage[]
struct NetIncomingMessageU5BU5D_t827121993;

#include "Lidgren_Network_Lidgren_Network_NetReceiverChannelB908288882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetReliableOrderedReceiver
struct  NetReliableOrderedReceiver_t2554037675  : public NetReceiverChannelBase_t908288882
{
public:
	// System.Int32 Lidgren.Network.NetReliableOrderedReceiver::m_windowStart
	int32_t ___m_windowStart_2;
	// System.Int32 Lidgren.Network.NetReliableOrderedReceiver::m_windowSize
	int32_t ___m_windowSize_3;
	// Lidgren.Network.NetBitVector Lidgren.Network.NetReliableOrderedReceiver::m_earlyReceived
	NetBitVector_t1774780753 * ___m_earlyReceived_4;
	// Lidgren.Network.NetIncomingMessage[] Lidgren.Network.NetReliableOrderedReceiver::m_withheldMessages
	NetIncomingMessageU5BU5D_t827121993* ___m_withheldMessages_5;

public:
	inline static int32_t get_offset_of_m_windowStart_2() { return static_cast<int32_t>(offsetof(NetReliableOrderedReceiver_t2554037675, ___m_windowStart_2)); }
	inline int32_t get_m_windowStart_2() const { return ___m_windowStart_2; }
	inline int32_t* get_address_of_m_windowStart_2() { return &___m_windowStart_2; }
	inline void set_m_windowStart_2(int32_t value)
	{
		___m_windowStart_2 = value;
	}

	inline static int32_t get_offset_of_m_windowSize_3() { return static_cast<int32_t>(offsetof(NetReliableOrderedReceiver_t2554037675, ___m_windowSize_3)); }
	inline int32_t get_m_windowSize_3() const { return ___m_windowSize_3; }
	inline int32_t* get_address_of_m_windowSize_3() { return &___m_windowSize_3; }
	inline void set_m_windowSize_3(int32_t value)
	{
		___m_windowSize_3 = value;
	}

	inline static int32_t get_offset_of_m_earlyReceived_4() { return static_cast<int32_t>(offsetof(NetReliableOrderedReceiver_t2554037675, ___m_earlyReceived_4)); }
	inline NetBitVector_t1774780753 * get_m_earlyReceived_4() const { return ___m_earlyReceived_4; }
	inline NetBitVector_t1774780753 ** get_address_of_m_earlyReceived_4() { return &___m_earlyReceived_4; }
	inline void set_m_earlyReceived_4(NetBitVector_t1774780753 * value)
	{
		___m_earlyReceived_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_earlyReceived_4, value);
	}

	inline static int32_t get_offset_of_m_withheldMessages_5() { return static_cast<int32_t>(offsetof(NetReliableOrderedReceiver_t2554037675, ___m_withheldMessages_5)); }
	inline NetIncomingMessageU5BU5D_t827121993* get_m_withheldMessages_5() const { return ___m_withheldMessages_5; }
	inline NetIncomingMessageU5BU5D_t827121993** get_address_of_m_withheldMessages_5() { return &___m_withheldMessages_5; }
	inline void set_m_withheldMessages_5(NetIncomingMessageU5BU5D_t827121993* value)
	{
		___m_withheldMessages_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_withheldMessages_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
