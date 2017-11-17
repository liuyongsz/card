#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UITweener
struct UITweener_t2986641582;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2865430313;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UITweener_Method1694901606.h"
#include "AssemblyU2DCSharp_UITweener_Style4221671544.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITweener
struct  UITweener_t2986641582  : public MonoBehaviour_t1158329972
{
public:
	// UITweener/Method UITweener::method
	int32_t ___method_3;
	// UITweener/Style UITweener::style
	int32_t ___style_4;
	// UnityEngine.AnimationCurve UITweener::animationCurve
	AnimationCurve_t3306541151 * ___animationCurve_5;
	// System.Boolean UITweener::ignoreTimeScale
	bool ___ignoreTimeScale_6;
	// System.Single UITweener::delay
	float ___delay_7;
	// System.Single UITweener::duration
	float ___duration_8;
	// System.Boolean UITweener::steeperCurves
	bool ___steeperCurves_9;
	// System.Int32 UITweener::tweenGroup
	int32_t ___tweenGroup_10;
	// System.Collections.Generic.List`1<EventDelegate> UITweener::onFinished
	List_1_t2865430313 * ___onFinished_11;
	// UnityEngine.GameObject UITweener::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_12;
	// System.String UITweener::callWhenFinished
	String_t* ___callWhenFinished_13;
	// System.Boolean UITweener::mStarted
	bool ___mStarted_14;
	// System.Single UITweener::mStartTime
	float ___mStartTime_15;
	// System.Single UITweener::mDuration
	float ___mDuration_16;
	// System.Single UITweener::mAmountPerDelta
	float ___mAmountPerDelta_17;
	// System.Single UITweener::mFactor
	float ___mFactor_18;
	// System.Collections.Generic.List`1<EventDelegate> UITweener::mTemp
	List_1_t2865430313 * ___mTemp_19;

public:
	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___method_3)); }
	inline int32_t get_method_3() const { return ___method_3; }
	inline int32_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(int32_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_style_4() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___style_4)); }
	inline int32_t get_style_4() const { return ___style_4; }
	inline int32_t* get_address_of_style_4() { return &___style_4; }
	inline void set_style_4(int32_t value)
	{
		___style_4 = value;
	}

	inline static int32_t get_offset_of_animationCurve_5() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___animationCurve_5)); }
	inline AnimationCurve_t3306541151 * get_animationCurve_5() const { return ___animationCurve_5; }
	inline AnimationCurve_t3306541151 ** get_address_of_animationCurve_5() { return &___animationCurve_5; }
	inline void set_animationCurve_5(AnimationCurve_t3306541151 * value)
	{
		___animationCurve_5 = value;
		Il2CppCodeGenWriteBarrier(&___animationCurve_5, value);
	}

	inline static int32_t get_offset_of_ignoreTimeScale_6() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___ignoreTimeScale_6)); }
	inline bool get_ignoreTimeScale_6() const { return ___ignoreTimeScale_6; }
	inline bool* get_address_of_ignoreTimeScale_6() { return &___ignoreTimeScale_6; }
	inline void set_ignoreTimeScale_6(bool value)
	{
		___ignoreTimeScale_6 = value;
	}

	inline static int32_t get_offset_of_delay_7() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___delay_7)); }
	inline float get_delay_7() const { return ___delay_7; }
	inline float* get_address_of_delay_7() { return &___delay_7; }
	inline void set_delay_7(float value)
	{
		___delay_7 = value;
	}

	inline static int32_t get_offset_of_duration_8() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___duration_8)); }
	inline float get_duration_8() const { return ___duration_8; }
	inline float* get_address_of_duration_8() { return &___duration_8; }
	inline void set_duration_8(float value)
	{
		___duration_8 = value;
	}

	inline static int32_t get_offset_of_steeperCurves_9() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___steeperCurves_9)); }
	inline bool get_steeperCurves_9() const { return ___steeperCurves_9; }
	inline bool* get_address_of_steeperCurves_9() { return &___steeperCurves_9; }
	inline void set_steeperCurves_9(bool value)
	{
		___steeperCurves_9 = value;
	}

	inline static int32_t get_offset_of_tweenGroup_10() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___tweenGroup_10)); }
	inline int32_t get_tweenGroup_10() const { return ___tweenGroup_10; }
	inline int32_t* get_address_of_tweenGroup_10() { return &___tweenGroup_10; }
	inline void set_tweenGroup_10(int32_t value)
	{
		___tweenGroup_10 = value;
	}

	inline static int32_t get_offset_of_onFinished_11() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___onFinished_11)); }
	inline List_1_t2865430313 * get_onFinished_11() const { return ___onFinished_11; }
	inline List_1_t2865430313 ** get_address_of_onFinished_11() { return &___onFinished_11; }
	inline void set_onFinished_11(List_1_t2865430313 * value)
	{
		___onFinished_11 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_11, value);
	}

	inline static int32_t get_offset_of_eventReceiver_12() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___eventReceiver_12)); }
	inline GameObject_t1756533147 * get_eventReceiver_12() const { return ___eventReceiver_12; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_12() { return &___eventReceiver_12; }
	inline void set_eventReceiver_12(GameObject_t1756533147 * value)
	{
		___eventReceiver_12 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_12, value);
	}

	inline static int32_t get_offset_of_callWhenFinished_13() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___callWhenFinished_13)); }
	inline String_t* get_callWhenFinished_13() const { return ___callWhenFinished_13; }
	inline String_t** get_address_of_callWhenFinished_13() { return &___callWhenFinished_13; }
	inline void set_callWhenFinished_13(String_t* value)
	{
		___callWhenFinished_13 = value;
		Il2CppCodeGenWriteBarrier(&___callWhenFinished_13, value);
	}

	inline static int32_t get_offset_of_mStarted_14() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___mStarted_14)); }
	inline bool get_mStarted_14() const { return ___mStarted_14; }
	inline bool* get_address_of_mStarted_14() { return &___mStarted_14; }
	inline void set_mStarted_14(bool value)
	{
		___mStarted_14 = value;
	}

	inline static int32_t get_offset_of_mStartTime_15() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___mStartTime_15)); }
	inline float get_mStartTime_15() const { return ___mStartTime_15; }
	inline float* get_address_of_mStartTime_15() { return &___mStartTime_15; }
	inline void set_mStartTime_15(float value)
	{
		___mStartTime_15 = value;
	}

	inline static int32_t get_offset_of_mDuration_16() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___mDuration_16)); }
	inline float get_mDuration_16() const { return ___mDuration_16; }
	inline float* get_address_of_mDuration_16() { return &___mDuration_16; }
	inline void set_mDuration_16(float value)
	{
		___mDuration_16 = value;
	}

	inline static int32_t get_offset_of_mAmountPerDelta_17() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___mAmountPerDelta_17)); }
	inline float get_mAmountPerDelta_17() const { return ___mAmountPerDelta_17; }
	inline float* get_address_of_mAmountPerDelta_17() { return &___mAmountPerDelta_17; }
	inline void set_mAmountPerDelta_17(float value)
	{
		___mAmountPerDelta_17 = value;
	}

	inline static int32_t get_offset_of_mFactor_18() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___mFactor_18)); }
	inline float get_mFactor_18() const { return ___mFactor_18; }
	inline float* get_address_of_mFactor_18() { return &___mFactor_18; }
	inline void set_mFactor_18(float value)
	{
		___mFactor_18 = value;
	}

	inline static int32_t get_offset_of_mTemp_19() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___mTemp_19)); }
	inline List_1_t2865430313 * get_mTemp_19() const { return ___mTemp_19; }
	inline List_1_t2865430313 ** get_address_of_mTemp_19() { return &___mTemp_19; }
	inline void set_mTemp_19(List_1_t2865430313 * value)
	{
		___mTemp_19 = value;
		Il2CppCodeGenWriteBarrier(&___mTemp_19, value);
	}
};

struct UITweener_t2986641582_StaticFields
{
public:
	// UITweener UITweener::current
	UITweener_t2986641582 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(UITweener_t2986641582_StaticFields, ___current_2)); }
	inline UITweener_t2986641582 * get_current_2() const { return ___current_2; }
	inline UITweener_t2986641582 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(UITweener_t2986641582 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
