#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_ObjectPools_1_gen2975108105.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PrefabPools
struct  PrefabPools_t510575319  : public ObjectPools_1_t2975108105
{
public:
	// UnityEngine.GameObject PrefabPools::mPrefab
	GameObject_t1756533147 * ___mPrefab_2;

public:
	inline static int32_t get_offset_of_mPrefab_2() { return static_cast<int32_t>(offsetof(PrefabPools_t510575319, ___mPrefab_2)); }
	inline GameObject_t1756533147 * get_mPrefab_2() const { return ___mPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_mPrefab_2() { return &___mPrefab_2; }
	inline void set_mPrefab_2(GameObject_t1756533147 * value)
	{
		___mPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___mPrefab_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
