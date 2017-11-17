#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// T_Png
struct  T_Png_t1862420852  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RenderTexture T_Png::RenderTex
	RenderTexture_t2666733923 * ___RenderTex_2;

public:
	inline static int32_t get_offset_of_RenderTex_2() { return static_cast<int32_t>(offsetof(T_Png_t1862420852, ___RenderTex_2)); }
	inline RenderTexture_t2666733923 * get_RenderTex_2() const { return ___RenderTex_2; }
	inline RenderTexture_t2666733923 ** get_address_of_RenderTex_2() { return &___RenderTex_2; }
	inline void set_RenderTex_2(RenderTexture_t2666733923 * value)
	{
		___RenderTex_2 = value;
		Il2CppCodeGenWriteBarrier(&___RenderTex_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
