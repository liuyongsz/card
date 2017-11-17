#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lidgren.Network.NetOutgoingMessage
struct NetOutgoingMessage_t2016542980;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetStoredReliableMessage
struct  NetStoredReliableMessage_t1576378473 
{
public:
	// System.Int32 Lidgren.Network.NetStoredReliableMessage::NumSent
	int32_t ___NumSent_0;
	// System.Double Lidgren.Network.NetStoredReliableMessage::LastSent
	double ___LastSent_1;
	// Lidgren.Network.NetOutgoingMessage Lidgren.Network.NetStoredReliableMessage::Message
	NetOutgoingMessage_t2016542980 * ___Message_2;
	// System.Int32 Lidgren.Network.NetStoredReliableMessage::SequenceNumber
	int32_t ___SequenceNumber_3;

public:
	inline static int32_t get_offset_of_NumSent_0() { return static_cast<int32_t>(offsetof(NetStoredReliableMessage_t1576378473, ___NumSent_0)); }
	inline int32_t get_NumSent_0() const { return ___NumSent_0; }
	inline int32_t* get_address_of_NumSent_0() { return &___NumSent_0; }
	inline void set_NumSent_0(int32_t value)
	{
		___NumSent_0 = value;
	}

	inline static int32_t get_offset_of_LastSent_1() { return static_cast<int32_t>(offsetof(NetStoredReliableMessage_t1576378473, ___LastSent_1)); }
	inline double get_LastSent_1() const { return ___LastSent_1; }
	inline double* get_address_of_LastSent_1() { return &___LastSent_1; }
	inline void set_LastSent_1(double value)
	{
		___LastSent_1 = value;
	}

	inline static int32_t get_offset_of_Message_2() { return static_cast<int32_t>(offsetof(NetStoredReliableMessage_t1576378473, ___Message_2)); }
	inline NetOutgoingMessage_t2016542980 * get_Message_2() const { return ___Message_2; }
	inline NetOutgoingMessage_t2016542980 ** get_address_of_Message_2() { return &___Message_2; }
	inline void set_Message_2(NetOutgoingMessage_t2016542980 * value)
	{
		___Message_2 = value;
		Il2CppCodeGenWriteBarrier(&___Message_2, value);
	}

	inline static int32_t get_offset_of_SequenceNumber_3() { return static_cast<int32_t>(offsetof(NetStoredReliableMessage_t1576378473, ___SequenceNumber_3)); }
	inline int32_t get_SequenceNumber_3() const { return ___SequenceNumber_3; }
	inline int32_t* get_address_of_SequenceNumber_3() { return &___SequenceNumber_3; }
	inline void set_SequenceNumber_3(int32_t value)
	{
		___SequenceNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Lidgren.Network.NetStoredReliableMessage
struct NetStoredReliableMessage_t1576378473_marshaled_pinvoke
{
	int32_t ___NumSent_0;
	double ___LastSent_1;
	NetOutgoingMessage_t2016542980 * ___Message_2;
	int32_t ___SequenceNumber_3;
};
// Native definition for marshalling of: Lidgren.Network.NetStoredReliableMessage
struct NetStoredReliableMessage_t1576378473_marshaled_com
{
	int32_t ___NumSent_0;
	double ___LastSent_1;
	NetOutgoingMessage_t2016542980 * ___Message_2;
	int32_t ___SequenceNumber_3;
};
