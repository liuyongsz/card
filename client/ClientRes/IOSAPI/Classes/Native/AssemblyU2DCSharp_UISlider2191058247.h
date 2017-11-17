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

#include "AssemblyU2DCSharp_UIProgressBar3824507790.h"
#include "AssemblyU2DCSharp_UISlider_Direction3287923381.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISlider
struct  UISlider_t2191058247  : public UIProgressBar_t3824507790
{
public:
	// UnityEngine.Transform UISlider::foreground
	Transform_t3275118058 * ___foreground_16;
	// System.Single UISlider::rawValue
	float ___rawValue_17;
	// UISlider/Direction UISlider::direction
	int32_t ___direction_18;
	// System.Boolean UISlider::mInverted
	bool ___mInverted_19;

public:
	inline static int32_t get_offset_of_foreground_16() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___foreground_16)); }
	inline Transform_t3275118058 * get_foreground_16() const { return ___foreground_16; }
	inline Transform_t3275118058 ** get_address_of_foreground_16() { return &___foreground_16; }
	inline void set_foreground_16(Transform_t3275118058 * value)
	{
		___foreground_16 = value;
		Il2CppCodeGenWriteBarrier(&___foreground_16, value);
	}

	inline static int32_t get_offset_of_rawValue_17() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___rawValue_17)); }
	inline float get_rawValue_17() const { return ___rawValue_17; }
	inline float* get_address_of_rawValue_17() { return &___rawValue_17; }
	inline void set_rawValue_17(float value)
	{
		___rawValue_17 = value;
	}

	inline static int32_t get_offset_of_direction_18() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___direction_18)); }
	inline int32_t get_direction_18() const { return ___direction_18; }
	inline int32_t* get_address_of_direction_18() { return &___direction_18; }
	inline void set_direction_18(int32_t value)
	{
		___direction_18 = value;
	}

	inline static int32_t get_offset_of_mInverted_19() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___mInverted_19)); }
	inline bool get_mInverted_19() const { return ___mInverted_19; }
	inline bool* get_address_of_mInverted_19() { return &___mInverted_19; }
	inline void set_mInverted_19(bool value)
	{
		___mInverted_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
