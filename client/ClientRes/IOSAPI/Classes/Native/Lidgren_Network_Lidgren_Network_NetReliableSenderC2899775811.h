#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// Lidgren.Network.NetBitVector
struct NetBitVector_t1774780753;
// Lidgren.Network.NetStoredReliableMessage[]
struct NetStoredReliableMessageU5BU5D_t4079791060;

#include "Lidgren_Network_Lidgren_Network_NetSenderChannelBa3096690204.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetReliableSenderChannel
struct  NetReliableSenderChannel_t2899775811  : public NetSenderChannelBase_t3096690204
{
public:
	// Lidgren.Network.NetConnection Lidgren.Network.NetReliableSenderChannel::m_connection
	NetConnection_t3331492029 * ___m_connection_1;
	// System.Int32 Lidgren.Network.NetReliableSenderChannel::m_windowStart
	int32_t ___m_windowStart_2;
	// System.Int32 Lidgren.Network.NetReliableSenderChannel::m_windowSize
	int32_t ___m_windowSize_3;
	// System.Int32 Lidgren.Network.NetReliableSenderChannel::m_sendStart
	int32_t ___m_sendStart_4;
	// System.Boolean Lidgren.Network.NetReliableSenderChannel::m_anyStoredResends
	bool ___m_anyStoredResends_5;
	// Lidgren.Network.NetBitVector Lidgren.Network.NetReliableSenderChannel::m_receivedAcks
	NetBitVector_t1774780753 * ___m_receivedAcks_6;
	// Lidgren.Network.NetStoredReliableMessage[] Lidgren.Network.NetReliableSenderChannel::m_storedMessages
	NetStoredReliableMessageU5BU5D_t4079791060* ___m_storedMessages_7;
	// System.Double Lidgren.Network.NetReliableSenderChannel::m_resendDelay
	double ___m_resendDelay_8;

public:
	inline static int32_t get_offset_of_m_connection_1() { return static_cast<int32_t>(offsetof(NetReliableSenderChannel_t2899775811, ___m_connection_1)); }
	inline NetConnection_t3331492029 * get_m_connection_1() const { return ___m_connection_1; }
	inline NetConnection_t3331492029 ** get_address_of_m_connection_1() { return &___m_connection_1; }
	inline void set_m_connection_1(NetConnection_t3331492029 * value)
	{
		___m_connection_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_connection_1, value);
	}

	inline static int32_t get_offset_of_m_windowStart_2() { return static_cast<int32_t>(offsetof(NetReliableSenderChannel_t2899775811, ___m_windowStart_2)); }
	inline int32_t get_m_windowStart_2() const { return ___m_windowStart_2; }
	inline int32_t* get_address_of_m_windowStart_2() { return &___m_windowStart_2; }
	inline void set_m_windowStart_2(int32_t value)
	{
		___m_windowStart_2 = value;
	}

	inline static int32_t get_offset_of_m_windowSize_3() { return static_cast<int32_t>(offsetof(NetReliableSenderChannel_t2899775811, ___m_windowSize_3)); }
	inline int32_t get_m_windowSize_3() const { return ___m_windowSize_3; }
	inline int32_t* get_address_of_m_windowSize_3() { return &___m_windowSize_3; }
	inline void set_m_windowSize_3(int32_t value)
	{
		___m_windowSize_3 = value;
	}

	inline static int32_t get_offset_of_m_sendStart_4() { return static_cast<int32_t>(offsetof(NetReliableSenderChannel_t2899775811, ___m_sendStart_4)); }
	inline int32_t get_m_sendStart_4() const { return ___m_sendStart_4; }
	inline int32_t* get_address_of_m_sendStart_4() { return &___m_sendStart_4; }
	inline void set_m_sendStart_4(int32_t value)
	{
		___m_sendStart_4 = value;
	}

	inline static int32_t get_offset_of_m_anyStoredResends_5() { return static_cast<int32_t>(offsetof(NetReliableSenderChannel_t2899775811, ___m_anyStoredResends_5)); }
	inline bool get_m_anyStoredResends_5() const { return ___m_anyStoredResends_5; }
	inline bool* get_address_of_m_anyStoredResends_5() { return &___m_anyStoredResends_5; }
	inline void set_m_anyStoredResends_5(bool value)
	{
		___m_anyStoredResends_5 = value;
	}

	inline static int32_t get_offset_of_m_receivedAcks_6() { return static_cast<int32_t>(offsetof(NetReliableSenderChannel_t2899775811, ___m_receivedAcks_6)); }
	inline NetBitVector_t1774780753 * get_m_receivedAcks_6() const { return ___m_receivedAcks_6; }
	inline NetBitVector_t1774780753 ** get_address_of_m_receivedAcks_6() { return &___m_receivedAcks_6; }
	inline void set_m_receivedAcks_6(NetBitVector_t1774780753 * value)
	{
		___m_receivedAcks_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_receivedAcks_6, value);
	}

	inline static int32_t get_offset_of_m_storedMessages_7() { return static_cast<int32_t>(offsetof(NetReliableSenderChannel_t2899775811, ___m_storedMessages_7)); }
	inline NetStoredReliableMessageU5BU5D_t4079791060* get_m_storedMessages_7() const { return ___m_storedMessages_7; }
	inline NetStoredReliableMessageU5BU5D_t4079791060** get_address_of_m_storedMessages_7() { return &___m_storedMessages_7; }
	inline void set_m_storedMessages_7(NetStoredReliableMessageU5BU5D_t4079791060* value)
	{
		___m_storedMessages_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_storedMessages_7, value);
	}

	inline static int32_t get_offset_of_m_resendDelay_8() { return static_cast<int32_t>(offsetof(NetReliableSenderChannel_t2899775811, ___m_resendDelay_8)); }
	inline double get_m_resendDelay_8() const { return ___m_resendDelay_8; }
	inline double* get_address_of_m_resendDelay_8() { return &___m_resendDelay_8; }
	inline void set_m_resendDelay_8(double value)
	{
		___m_resendDelay_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
