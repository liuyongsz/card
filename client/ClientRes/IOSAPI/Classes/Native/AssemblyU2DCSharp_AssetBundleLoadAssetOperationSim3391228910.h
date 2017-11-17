#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Object
struct Object_t1021602117;

#include "AssemblyU2DCSharp_AMLoadAssetOperation2496313085.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundleLoadAssetOperationSimulation
struct  AssetBundleLoadAssetOperationSimulation_t3391228910  : public AMLoadAssetOperation_t2496313085
{
public:
	// UnityEngine.Object AssetBundleLoadAssetOperationSimulation::simulatedObject
	Object_t1021602117 * ___simulatedObject_0;

public:
	inline static int32_t get_offset_of_simulatedObject_0() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationSimulation_t3391228910, ___simulatedObject_0)); }
	inline Object_t1021602117 * get_simulatedObject_0() const { return ___simulatedObject_0; }
	inline Object_t1021602117 ** get_address_of_simulatedObject_0() { return &___simulatedObject_0; }
	inline void set_simulatedObject_0(Object_t1021602117 * value)
	{
		___simulatedObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___simulatedObject_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
