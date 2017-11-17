#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UITexture
struct UITexture_t2537039969;

#include "AssemblyU2DCSharp_EnhanceItem1489569341.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MyNGUIEnhanceItem
struct  MyNGUIEnhanceItem_t376241328  : public EnhanceItem_t1489569341
{
public:
	// UITexture MyNGUIEnhanceItem::mTexture
	UITexture_t2537039969 * ___mTexture_6;

public:
	inline static int32_t get_offset_of_mTexture_6() { return static_cast<int32_t>(offsetof(MyNGUIEnhanceItem_t376241328, ___mTexture_6)); }
	inline UITexture_t2537039969 * get_mTexture_6() const { return ___mTexture_6; }
	inline UITexture_t2537039969 ** get_address_of_mTexture_6() { return &___mTexture_6; }
	inline void set_mTexture_6(UITexture_t2537039969 * value)
	{
		___mTexture_6 = value;
		Il2CppCodeGenWriteBarrier(&___mTexture_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
