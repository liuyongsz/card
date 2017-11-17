#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadSprite/<LoaderBGTexture>c__AnonStorey20
struct  U3CLoaderBGTextureU3Ec__AnonStorey20_t1647634164  : public Il2CppObject
{
public:
	// UnityEngine.Material LoadSprite/<LoaderBGTexture>c__AnonStorey20::target
	Material_t193706927 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CLoaderBGTextureU3Ec__AnonStorey20_t1647634164, ___target_0)); }
	inline Material_t193706927 * get_target_0() const { return ___target_0; }
	inline Material_t193706927 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_t193706927 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
