#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.SynchronizationContext
struct SynchronizationContext_t3857790437;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t296893742;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetTuple`2<System.Threading.SynchronizationContext,System.Threading.SendOrPostCallback>
struct  NetTuple_2_t1886281639 
{
public:
	// A Lidgren.Network.NetTuple`2::Item1
	SynchronizationContext_t3857790437 * ___Item1_0;
	// B Lidgren.Network.NetTuple`2::Item2
	SendOrPostCallback_t296893742 * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(NetTuple_2_t1886281639, ___Item1_0)); }
	inline SynchronizationContext_t3857790437 * get_Item1_0() const { return ___Item1_0; }
	inline SynchronizationContext_t3857790437 ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(SynchronizationContext_t3857790437 * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier(&___Item1_0, value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(NetTuple_2_t1886281639, ___Item2_1)); }
	inline SendOrPostCallback_t296893742 * get_Item2_1() const { return ___Item2_1; }
	inline SendOrPostCallback_t296893742 ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(SendOrPostCallback_t296893742 * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier(&___Item2_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
