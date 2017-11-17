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
// UIWidget
struct UIWidget_t1453041918;

#include "AssemblyU2DCSharp_UIWidgetContainer701016325.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_UIButtonColor_State1377781065.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIButtonColor
struct  UIButtonColor_t3793385709  : public UIWidgetContainer_t701016325
{
public:
	// UnityEngine.GameObject UIButtonColor::tweenTarget
	GameObject_t1756533147 * ___tweenTarget_2;
	// UnityEngine.Color UIButtonColor::hover
	Color_t2020392075  ___hover_3;
	// UnityEngine.Color UIButtonColor::pressed
	Color_t2020392075  ___pressed_4;
	// UnityEngine.Color UIButtonColor::disabledColor
	Color_t2020392075  ___disabledColor_5;
	// System.Single UIButtonColor::duration
	float ___duration_6;
	// UnityEngine.Color UIButtonColor::mColor
	Color_t2020392075  ___mColor_7;
	// System.Boolean UIButtonColor::mInitDone
	bool ___mInitDone_8;
	// UIWidget UIButtonColor::mWidget
	UIWidget_t1453041918 * ___mWidget_9;
	// UIButtonColor/State UIButtonColor::mState
	int32_t ___mState_10;

public:
	inline static int32_t get_offset_of_tweenTarget_2() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___tweenTarget_2)); }
	inline GameObject_t1756533147 * get_tweenTarget_2() const { return ___tweenTarget_2; }
	inline GameObject_t1756533147 ** get_address_of_tweenTarget_2() { return &___tweenTarget_2; }
	inline void set_tweenTarget_2(GameObject_t1756533147 * value)
	{
		___tweenTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___tweenTarget_2, value);
	}

	inline static int32_t get_offset_of_hover_3() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___hover_3)); }
	inline Color_t2020392075  get_hover_3() const { return ___hover_3; }
	inline Color_t2020392075 * get_address_of_hover_3() { return &___hover_3; }
	inline void set_hover_3(Color_t2020392075  value)
	{
		___hover_3 = value;
	}

	inline static int32_t get_offset_of_pressed_4() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___pressed_4)); }
	inline Color_t2020392075  get_pressed_4() const { return ___pressed_4; }
	inline Color_t2020392075 * get_address_of_pressed_4() { return &___pressed_4; }
	inline void set_pressed_4(Color_t2020392075  value)
	{
		___pressed_4 = value;
	}

	inline static int32_t get_offset_of_disabledColor_5() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___disabledColor_5)); }
	inline Color_t2020392075  get_disabledColor_5() const { return ___disabledColor_5; }
	inline Color_t2020392075 * get_address_of_disabledColor_5() { return &___disabledColor_5; }
	inline void set_disabledColor_5(Color_t2020392075  value)
	{
		___disabledColor_5 = value;
	}

	inline static int32_t get_offset_of_duration_6() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___duration_6)); }
	inline float get_duration_6() const { return ___duration_6; }
	inline float* get_address_of_duration_6() { return &___duration_6; }
	inline void set_duration_6(float value)
	{
		___duration_6 = value;
	}

	inline static int32_t get_offset_of_mColor_7() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___mColor_7)); }
	inline Color_t2020392075  get_mColor_7() const { return ___mColor_7; }
	inline Color_t2020392075 * get_address_of_mColor_7() { return &___mColor_7; }
	inline void set_mColor_7(Color_t2020392075  value)
	{
		___mColor_7 = value;
	}

	inline static int32_t get_offset_of_mInitDone_8() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___mInitDone_8)); }
	inline bool get_mInitDone_8() const { return ___mInitDone_8; }
	inline bool* get_address_of_mInitDone_8() { return &___mInitDone_8; }
	inline void set_mInitDone_8(bool value)
	{
		___mInitDone_8 = value;
	}

	inline static int32_t get_offset_of_mWidget_9() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___mWidget_9)); }
	inline UIWidget_t1453041918 * get_mWidget_9() const { return ___mWidget_9; }
	inline UIWidget_t1453041918 ** get_address_of_mWidget_9() { return &___mWidget_9; }
	inline void set_mWidget_9(UIWidget_t1453041918 * value)
	{
		___mWidget_9 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_9, value);
	}

	inline static int32_t get_offset_of_mState_10() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___mState_10)); }
	inline int32_t get_mState_10() const { return ___mState_10; }
	inline int32_t* get_address_of_mState_10() { return &___mState_10; }
	inline void set_mState_10(int32_t value)
	{
		___mState_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
