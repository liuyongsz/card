#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2243626319;
// System.String
struct String_t;
// UITexture
struct UITexture_t2537039969;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadSprite/<LoadChannelSeparationImage>c__AnonStorey23
struct  U3CLoadChannelSeparationImageU3Ec__AnonStorey23_t952458386  : public Il2CppObject
{
public:
	// UnityEngine.Texture LoadSprite/<LoadChannelSeparationImage>c__AnonStorey23::texture_rgb
	Texture_t2243626319 * ___texture_rgb_0;
	// System.String LoadSprite/<LoadChannelSeparationImage>c__AnonStorey23::url
	String_t* ___url_1;
	// UnityEngine.Texture LoadSprite/<LoadChannelSeparationImage>c__AnonStorey23::texture_alpha
	Texture_t2243626319 * ___texture_alpha_2;
	// UITexture LoadSprite/<LoadChannelSeparationImage>c__AnonStorey23::target
	UITexture_t2537039969 * ___target_3;

public:
	inline static int32_t get_offset_of_texture_rgb_0() { return static_cast<int32_t>(offsetof(U3CLoadChannelSeparationImageU3Ec__AnonStorey23_t952458386, ___texture_rgb_0)); }
	inline Texture_t2243626319 * get_texture_rgb_0() const { return ___texture_rgb_0; }
	inline Texture_t2243626319 ** get_address_of_texture_rgb_0() { return &___texture_rgb_0; }
	inline void set_texture_rgb_0(Texture_t2243626319 * value)
	{
		___texture_rgb_0 = value;
		Il2CppCodeGenWriteBarrier(&___texture_rgb_0, value);
	}

	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(U3CLoadChannelSeparationImageU3Ec__AnonStorey23_t952458386, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier(&___url_1, value);
	}

	inline static int32_t get_offset_of_texture_alpha_2() { return static_cast<int32_t>(offsetof(U3CLoadChannelSeparationImageU3Ec__AnonStorey23_t952458386, ___texture_alpha_2)); }
	inline Texture_t2243626319 * get_texture_alpha_2() const { return ___texture_alpha_2; }
	inline Texture_t2243626319 ** get_address_of_texture_alpha_2() { return &___texture_alpha_2; }
	inline void set_texture_alpha_2(Texture_t2243626319 * value)
	{
		___texture_alpha_2 = value;
		Il2CppCodeGenWriteBarrier(&___texture_alpha_2, value);
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(U3CLoadChannelSeparationImageU3Ec__AnonStorey23_t952458386, ___target_3)); }
	inline UITexture_t2537039969 * get_target_3() const { return ___target_3; }
	inline UITexture_t2537039969 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(UITexture_t2537039969 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
