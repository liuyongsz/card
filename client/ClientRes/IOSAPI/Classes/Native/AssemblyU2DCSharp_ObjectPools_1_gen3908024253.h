#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2509106130;

#include "AssemblyU2DCSharp_Pools3958886609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPools`1<System.Object>
struct  ObjectPools_1_t3908024253  : public Pools_t3958886609
{
public:
	// System.Collections.Generic.Queue`1<T> ObjectPools`1::mPools
	Queue_1_t2509106130 * ___mPools_1;

public:
	inline static int32_t get_offset_of_mPools_1() { return static_cast<int32_t>(offsetof(ObjectPools_1_t3908024253, ___mPools_1)); }
	inline Queue_1_t2509106130 * get_mPools_1() const { return ___mPools_1; }
	inline Queue_1_t2509106130 ** get_address_of_mPools_1() { return &___mPools_1; }
	inline void set_mPools_1(Queue_1_t2509106130 * value)
	{
		___mPools_1 = value;
		Il2CppCodeGenWriteBarrier(&___mPools_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
