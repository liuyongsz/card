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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIOrthoCamera
struct  UIOrthoCamera_t1890393437  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera UIOrthoCamera::mCam
	Camera_t189460977 * ___mCam_2;
	// UnityEngine.Transform UIOrthoCamera::mTrans
	Transform_t3275118058 * ___mTrans_3;

public:
	inline static int32_t get_offset_of_mCam_2() { return static_cast<int32_t>(offsetof(UIOrthoCamera_t1890393437, ___mCam_2)); }
	inline Camera_t189460977 * get_mCam_2() const { return ___mCam_2; }
	inline Camera_t189460977 ** get_address_of_mCam_2() { return &___mCam_2; }
	inline void set_mCam_2(Camera_t189460977 * value)
	{
		___mCam_2 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_2, value);
	}

	inline static int32_t get_offset_of_mTrans_3() { return static_cast<int32_t>(offsetof(UIOrthoCamera_t1890393437, ___mTrans_3)); }
	inline Transform_t3275118058 * get_mTrans_3() const { return ___mTrans_3; }
	inline Transform_t3275118058 ** get_address_of_mTrans_3() { return &___mTrans_3; }
	inline void set_mTrans_3(Transform_t3275118058 * value)
	{
		___mTrans_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
