#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadSprite/<Change>c__AnonStorey1F
struct  U3CChangeU3Ec__AnonStorey1F_t3887207522  : public Il2CppObject
{
public:
	// UnityEngine.UI.Image LoadSprite/<Change>c__AnonStorey1F::img
	Image_t2042527209 * ___img_0;
	// System.String LoadSprite/<Change>c__AnonStorey1F::spriteName
	String_t* ___spriteName_1;

public:
	inline static int32_t get_offset_of_img_0() { return static_cast<int32_t>(offsetof(U3CChangeU3Ec__AnonStorey1F_t3887207522, ___img_0)); }
	inline Image_t2042527209 * get_img_0() const { return ___img_0; }
	inline Image_t2042527209 ** get_address_of_img_0() { return &___img_0; }
	inline void set_img_0(Image_t2042527209 * value)
	{
		___img_0 = value;
		Il2CppCodeGenWriteBarrier(&___img_0, value);
	}

	inline static int32_t get_offset_of_spriteName_1() { return static_cast<int32_t>(offsetof(U3CChangeU3Ec__AnonStorey1F_t3887207522, ___spriteName_1)); }
	inline String_t* get_spriteName_1() const { return ___spriteName_1; }
	inline String_t** get_address_of_spriteName_1() { return &___spriteName_1; }
	inline void set_spriteName_1(String_t* value)
	{
		___spriteName_1 = value;
		Il2CppCodeGenWriteBarrier(&___spriteName_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
