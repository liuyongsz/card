#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWidget
struct UIWidget_t1453041918;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimatedColor
struct  AnimatedColor_t1057752172  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color AnimatedColor::color
	Color_t2020392075  ___color_2;
	// UIWidget AnimatedColor::mWidget
	UIWidget_t1453041918 * ___mWidget_3;

public:
	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(AnimatedColor_t1057752172, ___color_2)); }
	inline Color_t2020392075  get_color_2() const { return ___color_2; }
	inline Color_t2020392075 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_t2020392075  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_mWidget_3() { return static_cast<int32_t>(offsetof(AnimatedColor_t1057752172, ___mWidget_3)); }
	inline UIWidget_t1453041918 * get_mWidget_3() const { return ___mWidget_3; }
	inline UIWidget_t1453041918 ** get_address_of_mWidget_3() { return &___mWidget_3; }
	inline void set_mWidget_3(UIWidget_t1453041918 * value)
	{
		___mWidget_3 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
