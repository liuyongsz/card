#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIButtonScale
struct  UIButtonScale_t627477860  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UIButtonScale::tweenTarget
	Transform_t3275118058 * ___tweenTarget_2;
	// UnityEngine.Vector3 UIButtonScale::hover
	Vector3_t2243707580  ___hover_3;
	// UnityEngine.Vector3 UIButtonScale::pressed
	Vector3_t2243707580  ___pressed_4;
	// System.Single UIButtonScale::duration
	float ___duration_5;
	// UnityEngine.Vector3 UIButtonScale::mScale
	Vector3_t2243707580  ___mScale_6;
	// System.Boolean UIButtonScale::mStarted
	bool ___mStarted_7;

public:
	inline static int32_t get_offset_of_tweenTarget_2() { return static_cast<int32_t>(offsetof(UIButtonScale_t627477860, ___tweenTarget_2)); }
	inline Transform_t3275118058 * get_tweenTarget_2() const { return ___tweenTarget_2; }
	inline Transform_t3275118058 ** get_address_of_tweenTarget_2() { return &___tweenTarget_2; }
	inline void set_tweenTarget_2(Transform_t3275118058 * value)
	{
		___tweenTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___tweenTarget_2, value);
	}

	inline static int32_t get_offset_of_hover_3() { return static_cast<int32_t>(offsetof(UIButtonScale_t627477860, ___hover_3)); }
	inline Vector3_t2243707580  get_hover_3() const { return ___hover_3; }
	inline Vector3_t2243707580 * get_address_of_hover_3() { return &___hover_3; }
	inline void set_hover_3(Vector3_t2243707580  value)
	{
		___hover_3 = value;
	}

	inline static int32_t get_offset_of_pressed_4() { return static_cast<int32_t>(offsetof(UIButtonScale_t627477860, ___pressed_4)); }
	inline Vector3_t2243707580  get_pressed_4() const { return ___pressed_4; }
	inline Vector3_t2243707580 * get_address_of_pressed_4() { return &___pressed_4; }
	inline void set_pressed_4(Vector3_t2243707580  value)
	{
		___pressed_4 = value;
	}

	inline static int32_t get_offset_of_duration_5() { return static_cast<int32_t>(offsetof(UIButtonScale_t627477860, ___duration_5)); }
	inline float get_duration_5() const { return ___duration_5; }
	inline float* get_address_of_duration_5() { return &___duration_5; }
	inline void set_duration_5(float value)
	{
		___duration_5 = value;
	}

	inline static int32_t get_offset_of_mScale_6() { return static_cast<int32_t>(offsetof(UIButtonScale_t627477860, ___mScale_6)); }
	inline Vector3_t2243707580  get_mScale_6() const { return ___mScale_6; }
	inline Vector3_t2243707580 * get_address_of_mScale_6() { return &___mScale_6; }
	inline void set_mScale_6(Vector3_t2243707580  value)
	{
		___mScale_6 = value;
	}

	inline static int32_t get_offset_of_mStarted_7() { return static_cast<int32_t>(offsetof(UIButtonScale_t627477860, ___mStarted_7)); }
	inline bool get_mStarted_7() const { return ___mStarted_7; }
	inline bool* get_address_of_mStarted_7() { return &___mStarted_7; }
	inline void set_mStarted_7(bool value)
	{
		___mStarted_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
