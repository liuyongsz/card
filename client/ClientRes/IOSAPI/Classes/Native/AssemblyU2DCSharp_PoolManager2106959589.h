#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<PoolManager/PoolKey,Pools>
struct Dictionary_2_t2709713963;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PoolManager
struct  PoolManager_t2106959589  : public Il2CppObject
{
public:

public:
};

struct PoolManager_t2106959589_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<PoolManager/PoolKey,Pools> PoolManager::mPools
	Dictionary_2_t2709713963 * ___mPools_0;
	// UnityEngine.GameObject PoolManager::poolmanager
	GameObject_t1756533147 * ___poolmanager_1;

public:
	inline static int32_t get_offset_of_mPools_0() { return static_cast<int32_t>(offsetof(PoolManager_t2106959589_StaticFields, ___mPools_0)); }
	inline Dictionary_2_t2709713963 * get_mPools_0() const { return ___mPools_0; }
	inline Dictionary_2_t2709713963 ** get_address_of_mPools_0() { return &___mPools_0; }
	inline void set_mPools_0(Dictionary_2_t2709713963 * value)
	{
		___mPools_0 = value;
		Il2CppCodeGenWriteBarrier(&___mPools_0, value);
	}

	inline static int32_t get_offset_of_poolmanager_1() { return static_cast<int32_t>(offsetof(PoolManager_t2106959589_StaticFields, ___poolmanager_1)); }
	inline GameObject_t1756533147 * get_poolmanager_1() const { return ___poolmanager_1; }
	inline GameObject_t1756533147 ** get_address_of_poolmanager_1() { return &___poolmanager_1; }
	inline void set_poolmanager_1(GameObject_t1756533147 * value)
	{
		___poolmanager_1 = value;
		Il2CppCodeGenWriteBarrier(&___poolmanager_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
