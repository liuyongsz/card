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

#include "AssemblyU2DCSharp_AssetBundles_AssetBundleLoadAsset108400409.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundles.AssetBundleLoadAssetOperationSimulation
struct  AssetBundleLoadAssetOperationSimulation_t3418049534  : public AssetBundleLoadAssetOperation_t108400409
{
public:
	// UnityEngine.Object AssetBundles.AssetBundleLoadAssetOperationSimulation::m_SimulatedObject
	Object_t1021602117 * ___m_SimulatedObject_0;

public:
	inline static int32_t get_offset_of_m_SimulatedObject_0() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationSimulation_t3418049534, ___m_SimulatedObject_0)); }
	inline Object_t1021602117 * get_m_SimulatedObject_0() const { return ___m_SimulatedObject_0; }
	inline Object_t1021602117 ** get_address_of_m_SimulatedObject_0() { return &___m_SimulatedObject_0; }
	inline void set_m_SimulatedObject_0(Object_t1021602117 * value)
	{
		___m_SimulatedObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_SimulatedObject_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
