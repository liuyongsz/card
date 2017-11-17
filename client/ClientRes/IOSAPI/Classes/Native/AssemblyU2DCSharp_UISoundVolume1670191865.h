#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UISlider
struct UISlider_t2191058247;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISoundVolume
struct  UISoundVolume_t1670191865  : public MonoBehaviour_t1158329972
{
public:
	// UISlider UISoundVolume::mSlider
	UISlider_t2191058247 * ___mSlider_2;

public:
	inline static int32_t get_offset_of_mSlider_2() { return static_cast<int32_t>(offsetof(UISoundVolume_t1670191865, ___mSlider_2)); }
	inline UISlider_t2191058247 * get_mSlider_2() const { return ___mSlider_2; }
	inline UISlider_t2191058247 ** get_address_of_mSlider_2() { return &___mSlider_2; }
	inline void set_mSlider_2(UISlider_t2191058247 * value)
	{
		___mSlider_2 = value;
		Il2CppCodeGenWriteBarrier(&___mSlider_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
