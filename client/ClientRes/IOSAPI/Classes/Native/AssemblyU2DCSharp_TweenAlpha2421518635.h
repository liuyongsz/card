#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIRect
struct UIRect_t4127168124;

#include "AssemblyU2DCSharp_UITweener2986641582.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenAlpha
struct  TweenAlpha_t2421518635  : public UITweener_t2986641582
{
public:
	// System.Single TweenAlpha::from
	float ___from_20;
	// System.Single TweenAlpha::to
	float ___to_21;
	// UIRect TweenAlpha::mRect
	UIRect_t4127168124 * ___mRect_22;

public:
	inline static int32_t get_offset_of_from_20() { return static_cast<int32_t>(offsetof(TweenAlpha_t2421518635, ___from_20)); }
	inline float get_from_20() const { return ___from_20; }
	inline float* get_address_of_from_20() { return &___from_20; }
	inline void set_from_20(float value)
	{
		___from_20 = value;
	}

	inline static int32_t get_offset_of_to_21() { return static_cast<int32_t>(offsetof(TweenAlpha_t2421518635, ___to_21)); }
	inline float get_to_21() const { return ___to_21; }
	inline float* get_address_of_to_21() { return &___to_21; }
	inline void set_to_21(float value)
	{
		___to_21 = value;
	}

	inline static int32_t get_offset_of_mRect_22() { return static_cast<int32_t>(offsetof(TweenAlpha_t2421518635, ___mRect_22)); }
	inline UIRect_t4127168124 * get_mRect_22() const { return ___mRect_22; }
	inline UIRect_t4127168124 ** get_address_of_mRect_22() { return &___mRect_22; }
	inline void set_mRect_22(UIRect_t4127168124 * value)
	{
		___mRect_22 = value;
		Il2CppCodeGenWriteBarrier(&___mRect_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
