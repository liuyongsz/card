#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;

#include "Lidgren_Network_Lidgren_Network_NetBuffer3608062491.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage4279120760.h"
#include "Lidgren_Network_Lidgren_Network_NetMessageType191235414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetIncomingMessage
struct  NetIncomingMessage_t2014089816  : public NetBuffer_t3608062491
{
public:
	// Lidgren.Network.NetIncomingMessageType Lidgren.Network.NetIncomingMessage::m_incomingMessageType
	int32_t ___m_incomingMessageType_5;
	// System.Net.IPEndPoint Lidgren.Network.NetIncomingMessage::m_senderEndPoint
	IPEndPoint_t2615413766 * ___m_senderEndPoint_6;
	// Lidgren.Network.NetConnection Lidgren.Network.NetIncomingMessage::m_senderConnection
	NetConnection_t3331492029 * ___m_senderConnection_7;
	// System.Int32 Lidgren.Network.NetIncomingMessage::m_sequenceNumber
	int32_t ___m_sequenceNumber_8;
	// Lidgren.Network.NetMessageType Lidgren.Network.NetIncomingMessage::m_receivedMessageType
	uint8_t ___m_receivedMessageType_9;
	// System.Boolean Lidgren.Network.NetIncomingMessage::m_isFragment
	bool ___m_isFragment_10;
	// System.Double Lidgren.Network.NetIncomingMessage::m_receiveTime
	double ___m_receiveTime_11;

public:
	inline static int32_t get_offset_of_m_incomingMessageType_5() { return static_cast<int32_t>(offsetof(NetIncomingMessage_t2014089816, ___m_incomingMessageType_5)); }
	inline int32_t get_m_incomingMessageType_5() const { return ___m_incomingMessageType_5; }
	inline int32_t* get_address_of_m_incomingMessageType_5() { return &___m_incomingMessageType_5; }
	inline void set_m_incomingMessageType_5(int32_t value)
	{
		___m_incomingMessageType_5 = value;
	}

	inline static int32_t get_offset_of_m_senderEndPoint_6() { return static_cast<int32_t>(offsetof(NetIncomingMessage_t2014089816, ___m_senderEndPoint_6)); }
	inline IPEndPoint_t2615413766 * get_m_senderEndPoint_6() const { return ___m_senderEndPoint_6; }
	inline IPEndPoint_t2615413766 ** get_address_of_m_senderEndPoint_6() { return &___m_senderEndPoint_6; }
	inline void set_m_senderEndPoint_6(IPEndPoint_t2615413766 * value)
	{
		___m_senderEndPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_senderEndPoint_6, value);
	}

	inline static int32_t get_offset_of_m_senderConnection_7() { return static_cast<int32_t>(offsetof(NetIncomingMessage_t2014089816, ___m_senderConnection_7)); }
	inline NetConnection_t3331492029 * get_m_senderConnection_7() const { return ___m_senderConnection_7; }
	inline NetConnection_t3331492029 ** get_address_of_m_senderConnection_7() { return &___m_senderConnection_7; }
	inline void set_m_senderConnection_7(NetConnection_t3331492029 * value)
	{
		___m_senderConnection_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_senderConnection_7, value);
	}

	inline static int32_t get_offset_of_m_sequenceNumber_8() { return static_cast<int32_t>(offsetof(NetIncomingMessage_t2014089816, ___m_sequenceNumber_8)); }
	inline int32_t get_m_sequenceNumber_8() const { return ___m_sequenceNumber_8; }
	inline int32_t* get_address_of_m_sequenceNumber_8() { return &___m_sequenceNumber_8; }
	inline void set_m_sequenceNumber_8(int32_t value)
	{
		___m_sequenceNumber_8 = value;
	}

	inline static int32_t get_offset_of_m_receivedMessageType_9() { return static_cast<int32_t>(offsetof(NetIncomingMessage_t2014089816, ___m_receivedMessageType_9)); }
	inline uint8_t get_m_receivedMessageType_9() const { return ___m_receivedMessageType_9; }
	inline uint8_t* get_address_of_m_receivedMessageType_9() { return &___m_receivedMessageType_9; }
	inline void set_m_receivedMessageType_9(uint8_t value)
	{
		___m_receivedMessageType_9 = value;
	}

	inline static int32_t get_offset_of_m_isFragment_10() { return static_cast<int32_t>(offsetof(NetIncomingMessage_t2014089816, ___m_isFragment_10)); }
	inline bool get_m_isFragment_10() const { return ___m_isFragment_10; }
	inline bool* get_address_of_m_isFragment_10() { return &___m_isFragment_10; }
	inline void set_m_isFragment_10(bool value)
	{
		___m_isFragment_10 = value;
	}

	inline static int32_t get_offset_of_m_receiveTime_11() { return static_cast<int32_t>(offsetof(NetIncomingMessage_t2014089816, ___m_receiveTime_11)); }
	inline double get_m_receiveTime_11() const { return ___m_receiveTime_11; }
	inline double* get_address_of_m_receiveTime_11() { return &___m_receiveTime_11; }
	inline void set_m_receiveTime_11(double value)
	{
		___m_receiveTime_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
