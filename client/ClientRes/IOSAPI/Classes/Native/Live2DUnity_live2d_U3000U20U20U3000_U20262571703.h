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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.　  　/ 
struct  U20_t262571703  : public Il2CppObject
{
public:
	// UnityEngine.RenderTexture live2d.　  　/ ::tex
	RenderTexture_t2666733923 * ___tex_0;
	// System.Int32 live2d.　  　/ ::frameNo
	int32_t ___frameNo_1;

public:
	inline static int32_t get_offset_of_tex_0() { return static_cast<int32_t>(offsetof(U20_t262571703, ___tex_0)); }
	inline RenderTexture_t2666733923 * get_tex_0() const { return ___tex_0; }
	inline RenderTexture_t2666733923 ** get_address_of_tex_0() { return &___tex_0; }
	inline void set_tex_0(RenderTexture_t2666733923 * value)
	{
		___tex_0 = value;
		Il2CppCodeGenWriteBarrier(&___tex_0, value);
	}

	inline static int32_t get_offset_of_frameNo_1() { return static_cast<int32_t>(offsetof(U20_t262571703, ___frameNo_1)); }
	inline int32_t get_frameNo_1() const { return ___frameNo_1; }
	inline int32_t* get_address_of_frameNo_1() { return &___frameNo_1; }
	inline void set_frameNo_1(int32_t value)
	{
		___frameNo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
