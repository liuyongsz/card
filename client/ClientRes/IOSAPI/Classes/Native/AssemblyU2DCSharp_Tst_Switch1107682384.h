#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;
// TweenLayerUtil
struct TweenLayerUtil_t1100282932;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tst_Switch
struct  Tst_Switch_t1107682384  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera Tst_Switch::camera3D
	Camera_t189460977 * ___camera3D_2;
	// UnityEngine.Camera Tst_Switch::camera2D
	Camera_t189460977 * ___camera2D_3;
	// UnityEngine.Vector3 Tst_Switch::mOldScale
	Vector3_t2243707580  ___mOldScale_4;
	// UnityEngine.Vector3 Tst_Switch::mOldPosition
	Vector3_t2243707580  ___mOldPosition_5;
	// UnityEngine.Transform Tst_Switch::testTarget
	Transform_t3275118058 * ___testTarget_6;
	// System.Single Tst_Switch::AdaptScale
	float ___AdaptScale_7;
	// UnityEngine.Vector3 Tst_Switch::scaleB
	Vector3_t2243707580  ___scaleB_8;
	// UnityEngine.Vector3 Tst_Switch::tweenB
	Vector3_t2243707580  ___tweenB_9;
	// TweenLayerUtil Tst_Switch::mTween
	TweenLayerUtil_t1100282932 * ___mTween_10;

public:
	inline static int32_t get_offset_of_camera3D_2() { return static_cast<int32_t>(offsetof(Tst_Switch_t1107682384, ___camera3D_2)); }
	inline Camera_t189460977 * get_camera3D_2() const { return ___camera3D_2; }
	inline Camera_t189460977 ** get_address_of_camera3D_2() { return &___camera3D_2; }
	inline void set_camera3D_2(Camera_t189460977 * value)
	{
		___camera3D_2 = value;
		Il2CppCodeGenWriteBarrier(&___camera3D_2, value);
	}

	inline static int32_t get_offset_of_camera2D_3() { return static_cast<int32_t>(offsetof(Tst_Switch_t1107682384, ___camera2D_3)); }
	inline Camera_t189460977 * get_camera2D_3() const { return ___camera2D_3; }
	inline Camera_t189460977 ** get_address_of_camera2D_3() { return &___camera2D_3; }
	inline void set_camera2D_3(Camera_t189460977 * value)
	{
		___camera2D_3 = value;
		Il2CppCodeGenWriteBarrier(&___camera2D_3, value);
	}

	inline static int32_t get_offset_of_mOldScale_4() { return static_cast<int32_t>(offsetof(Tst_Switch_t1107682384, ___mOldScale_4)); }
	inline Vector3_t2243707580  get_mOldScale_4() const { return ___mOldScale_4; }
	inline Vector3_t2243707580 * get_address_of_mOldScale_4() { return &___mOldScale_4; }
	inline void set_mOldScale_4(Vector3_t2243707580  value)
	{
		___mOldScale_4 = value;
	}

	inline static int32_t get_offset_of_mOldPosition_5() { return static_cast<int32_t>(offsetof(Tst_Switch_t1107682384, ___mOldPosition_5)); }
	inline Vector3_t2243707580  get_mOldPosition_5() const { return ___mOldPosition_5; }
	inline Vector3_t2243707580 * get_address_of_mOldPosition_5() { return &___mOldPosition_5; }
	inline void set_mOldPosition_5(Vector3_t2243707580  value)
	{
		___mOldPosition_5 = value;
	}

	inline static int32_t get_offset_of_testTarget_6() { return static_cast<int32_t>(offsetof(Tst_Switch_t1107682384, ___testTarget_6)); }
	inline Transform_t3275118058 * get_testTarget_6() const { return ___testTarget_6; }
	inline Transform_t3275118058 ** get_address_of_testTarget_6() { return &___testTarget_6; }
	inline void set_testTarget_6(Transform_t3275118058 * value)
	{
		___testTarget_6 = value;
		Il2CppCodeGenWriteBarrier(&___testTarget_6, value);
	}

	inline static int32_t get_offset_of_AdaptScale_7() { return static_cast<int32_t>(offsetof(Tst_Switch_t1107682384, ___AdaptScale_7)); }
	inline float get_AdaptScale_7() const { return ___AdaptScale_7; }
	inline float* get_address_of_AdaptScale_7() { return &___AdaptScale_7; }
	inline void set_AdaptScale_7(float value)
	{
		___AdaptScale_7 = value;
	}

	inline static int32_t get_offset_of_scaleB_8() { return static_cast<int32_t>(offsetof(Tst_Switch_t1107682384, ___scaleB_8)); }
	inline Vector3_t2243707580  get_scaleB_8() const { return ___scaleB_8; }
	inline Vector3_t2243707580 * get_address_of_scaleB_8() { return &___scaleB_8; }
	inline void set_scaleB_8(Vector3_t2243707580  value)
	{
		___scaleB_8 = value;
	}

	inline static int32_t get_offset_of_tweenB_9() { return static_cast<int32_t>(offsetof(Tst_Switch_t1107682384, ___tweenB_9)); }
	inline Vector3_t2243707580  get_tweenB_9() const { return ___tweenB_9; }
	inline Vector3_t2243707580 * get_address_of_tweenB_9() { return &___tweenB_9; }
	inline void set_tweenB_9(Vector3_t2243707580  value)
	{
		___tweenB_9 = value;
	}

	inline static int32_t get_offset_of_mTween_10() { return static_cast<int32_t>(offsetof(Tst_Switch_t1107682384, ___mTween_10)); }
	inline TweenLayerUtil_t1100282932 * get_mTween_10() const { return ___mTween_10; }
	inline TweenLayerUtil_t1100282932 ** get_address_of_mTween_10() { return &___mTween_10; }
	inline void set_mTween_10(TweenLayerUtil_t1100282932 * value)
	{
		___mTween_10 = value;
		Il2CppCodeGenWriteBarrier(&___mTween_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
