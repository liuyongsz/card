#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIToggle
struct UIToggle_t3036740318;
// UILabel
struct UILabel_t1795115428;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SetTextColor
struct  SetTextColor_t674567602  : public MonoBehaviour_t1158329972
{
public:
	// UIToggle SetTextColor::toggle
	UIToggle_t3036740318 * ___toggle_2;
	// UILabel SetTextColor::label
	UILabel_t1795115428 * ___label_3;

public:
	inline static int32_t get_offset_of_toggle_2() { return static_cast<int32_t>(offsetof(SetTextColor_t674567602, ___toggle_2)); }
	inline UIToggle_t3036740318 * get_toggle_2() const { return ___toggle_2; }
	inline UIToggle_t3036740318 ** get_address_of_toggle_2() { return &___toggle_2; }
	inline void set_toggle_2(UIToggle_t3036740318 * value)
	{
		___toggle_2 = value;
		Il2CppCodeGenWriteBarrier(&___toggle_2, value);
	}

	inline static int32_t get_offset_of_label_3() { return static_cast<int32_t>(offsetof(SetTextColor_t674567602, ___label_3)); }
	inline UILabel_t1795115428 * get_label_3() const { return ___label_3; }
	inline UILabel_t1795115428 ** get_address_of_label_3() { return &___label_3; }
	inline void set_label_3(UILabel_t1795115428 * value)
	{
		___label_3 = value;
		Il2CppCodeGenWriteBarrier(&___label_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
