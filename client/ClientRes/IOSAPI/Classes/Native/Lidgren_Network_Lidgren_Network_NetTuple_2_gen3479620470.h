#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetTuple`2<System.Object,System.Object>
struct  NetTuple_2_t3479620470 
{
public:
	// A Lidgren.Network.NetTuple`2::Item1
	Il2CppObject * ___Item1_0;
	// B Lidgren.Network.NetTuple`2::Item2
	Il2CppObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(NetTuple_2_t3479620470, ___Item1_0)); }
	inline Il2CppObject * get_Item1_0() const { return ___Item1_0; }
	inline Il2CppObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(Il2CppObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier(&___Item1_0, value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(NetTuple_2_t3479620470, ___Item2_1)); }
	inline Il2CppObject * get_Item2_1() const { return ___Item2_1; }
	inline Il2CppObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(Il2CppObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier(&___Item2_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
