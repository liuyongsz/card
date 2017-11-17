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
// Lidgren.Network.NetOutgoingMessage
struct NetOutgoingMessage_t2016542980;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetTuple`2<System.Net.IPEndPoint,Lidgren.Network.NetOutgoingMessage>
struct  NetTuple_2_t3781571512 
{
public:
	// A Lidgren.Network.NetTuple`2::Item1
	IPEndPoint_t2615413766 * ___Item1_0;
	// B Lidgren.Network.NetTuple`2::Item2
	NetOutgoingMessage_t2016542980 * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(NetTuple_2_t3781571512, ___Item1_0)); }
	inline IPEndPoint_t2615413766 * get_Item1_0() const { return ___Item1_0; }
	inline IPEndPoint_t2615413766 ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(IPEndPoint_t2615413766 * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier(&___Item1_0, value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(NetTuple_2_t3781571512, ___Item2_1)); }
	inline NetOutgoingMessage_t2016542980 * get_Item2_1() const { return ___Item2_1; }
	inline NetOutgoingMessage_t2016542980 ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(NetOutgoingMessage_t2016542980 * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier(&___Item2_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
