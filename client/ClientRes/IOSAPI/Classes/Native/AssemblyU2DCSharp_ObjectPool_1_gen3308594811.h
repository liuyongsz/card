#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// QuickList`1<GameEventManager/GameEvent>
struct QuickList_1_t419740369;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPool`1<GameEventManager/GameEvent>
struct  ObjectPool_1_t3308594811  : public Il2CppObject
{
public:
	// System.Int32 ObjectPool`1::poolSize
	int32_t ___poolSize_0;
	// QuickList`1<T> ObjectPool`1::pool
	QuickList_1_t419740369 * ___pool_1;

public:
	inline static int32_t get_offset_of_poolSize_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3308594811, ___poolSize_0)); }
	inline int32_t get_poolSize_0() const { return ___poolSize_0; }
	inline int32_t* get_address_of_poolSize_0() { return &___poolSize_0; }
	inline void set_poolSize_0(int32_t value)
	{
		___poolSize_0 = value;
	}

	inline static int32_t get_offset_of_pool_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3308594811, ___pool_1)); }
	inline QuickList_1_t419740369 * get_pool_1() const { return ___pool_1; }
	inline QuickList_1_t419740369 ** get_address_of_pool_1() { return &___pool_1; }
	inline void set_pool_1(QuickList_1_t419740369 * value)
	{
		___pool_1 = value;
		Il2CppCodeGenWriteBarrier(&___pool_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
