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

#include "AssemblyU2DCSharp_UITweener2986641582.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenFOV
struct  TweenFOV_t612833154  : public UITweener_t2986641582
{
public:
	// System.Single TweenFOV::from
	float ___from_20;
	// System.Single TweenFOV::to
	float ___to_21;
	// UnityEngine.Camera TweenFOV::mCam
	Camera_t189460977 * ___mCam_22;

public:
	inline static int32_t get_offset_of_from_20() { return static_cast<int32_t>(offsetof(TweenFOV_t612833154, ___from_20)); }
	inline float get_from_20() const { return ___from_20; }
	inline float* get_address_of_from_20() { return &___from_20; }
	inline void set_from_20(float value)
	{
		___from_20 = value;
	}

	inline static int32_t get_offset_of_to_21() { return static_cast<int32_t>(offsetof(TweenFOV_t612833154, ___to_21)); }
	inline float get_to_21() const { return ___to_21; }
	inline float* get_address_of_to_21() { return &___to_21; }
	inline void set_to_21(float value)
	{
		___to_21 = value;
	}

	inline static int32_t get_offset_of_mCam_22() { return static_cast<int32_t>(offsetof(TweenFOV_t612833154, ___mCam_22)); }
	inline Camera_t189460977 * get_mCam_22() const { return ___mCam_22; }
	inline Camera_t189460977 ** get_address_of_mCam_22() { return &___mCam_22; }
	inline void set_mCam_22(Camera_t189460977 * value)
	{
		___mCam_22 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
