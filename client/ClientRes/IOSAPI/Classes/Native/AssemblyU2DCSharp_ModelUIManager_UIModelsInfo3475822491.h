#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "AssemblyU2DCSharp_ModelUIManager_UIModelInfo2926380586.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModelUIManager/UIModelsInfo
struct  UIModelsInfo_t3475822491  : public UIModelInfo_t2926380586
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ModelUIManager/UIModelsInfo::mModels
	List_1_t1125654279 * ___mModels_12;

public:
	inline static int32_t get_offset_of_mModels_12() { return static_cast<int32_t>(offsetof(UIModelsInfo_t3475822491, ___mModels_12)); }
	inline List_1_t1125654279 * get_mModels_12() const { return ___mModels_12; }
	inline List_1_t1125654279 ** get_address_of_mModels_12() { return &___mModels_12; }
	inline void set_mModels_12(List_1_t1125654279 * value)
	{
		___mModels_12 = value;
		Il2CppCodeGenWriteBarrier(&___mModels_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
