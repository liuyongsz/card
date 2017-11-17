#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIAtlas
struct UIAtlas_t1304615221;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIAtlasAsset
struct  UIAtlasAsset_t3070834365  : public ScriptableObject_t1975622470
{
public:
	// UIAtlas UIAtlasAsset::uiAtlas
	UIAtlas_t1304615221 * ___uiAtlas_2;

public:
	inline static int32_t get_offset_of_uiAtlas_2() { return static_cast<int32_t>(offsetof(UIAtlasAsset_t3070834365, ___uiAtlas_2)); }
	inline UIAtlas_t1304615221 * get_uiAtlas_2() const { return ___uiAtlas_2; }
	inline UIAtlas_t1304615221 ** get_address_of_uiAtlas_2() { return &___uiAtlas_2; }
	inline void set_uiAtlas_2(UIAtlas_t1304615221 * value)
	{
		___uiAtlas_2 = value;
		Il2CppCodeGenWriteBarrier(&___uiAtlas_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
