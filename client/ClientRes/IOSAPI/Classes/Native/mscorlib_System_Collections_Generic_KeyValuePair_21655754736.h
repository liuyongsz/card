﻿#pragma once

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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Net.IPEndPoint,Lidgren.Network.NetConnection>
struct  KeyValuePair_2_t1655754736 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IPEndPoint_t2615413766 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	NetConnection_t3331492029 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1655754736, ___key_0)); }
	inline IPEndPoint_t2615413766 * get_key_0() const { return ___key_0; }
	inline IPEndPoint_t2615413766 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(IPEndPoint_t2615413766 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1655754736, ___value_1)); }
	inline NetConnection_t3331492029 * get_value_1() const { return ___value_1; }
	inline NetConnection_t3331492029 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(NetConnection_t3331492029 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
