#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "AssemblyU2DCSharp_UITweener2986641582.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenVolume
struct  TweenVolume_t1729630735  : public UITweener_t2986641582
{
public:
	// System.Single TweenVolume::from
	float ___from_20;
	// System.Single TweenVolume::to
	float ___to_21;
	// UnityEngine.AudioSource TweenVolume::mSource
	AudioSource_t1135106623 * ___mSource_22;

public:
	inline static int32_t get_offset_of_from_20() { return static_cast<int32_t>(offsetof(TweenVolume_t1729630735, ___from_20)); }
	inline float get_from_20() const { return ___from_20; }
	inline float* get_address_of_from_20() { return &___from_20; }
	inline void set_from_20(float value)
	{
		___from_20 = value;
	}

	inline static int32_t get_offset_of_to_21() { return static_cast<int32_t>(offsetof(TweenVolume_t1729630735, ___to_21)); }
	inline float get_to_21() const { return ___to_21; }
	inline float* get_address_of_to_21() { return &___to_21; }
	inline void set_to_21(float value)
	{
		___to_21 = value;
	}

	inline static int32_t get_offset_of_mSource_22() { return static_cast<int32_t>(offsetof(TweenVolume_t1729630735, ___mSource_22)); }
	inline AudioSource_t1135106623 * get_mSource_22() const { return ___mSource_22; }
	inline AudioSource_t1135106623 ** get_address_of_mSource_22() { return &___mSource_22; }
	inline void set_mSource_22(AudioSource_t1135106623 * value)
	{
		___mSource_22 = value;
		Il2CppCodeGenWriteBarrier(&___mSource_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
