#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "Lidgren_Network_Lidgren_Network_NetMessageType191235414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetTuple`2<Lidgren.Network.NetMessageType,System.Int32>
struct  NetTuple_2_t3234296172 
{
public:
	// A Lidgren.Network.NetTuple`2::Item1
	uint8_t ___Item1_0;
	// B Lidgren.Network.NetTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(NetTuple_2_t3234296172, ___Item1_0)); }
	inline uint8_t get_Item1_0() const { return ___Item1_0; }
	inline uint8_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(uint8_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(NetTuple_2_t3234296172, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
