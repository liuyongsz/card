#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "AssemblyU2DCSharp_AssetBundles_NormalRes3181316491.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundles.AudioClipRes
struct  AudioClipRes_t4041500634  : public NormalRes_t3181316491
{
public:
	// UnityEngine.AudioClip AssetBundles.AudioClipRes::m_clip
	AudioClip_t1932558630 * ___m_clip_1;

public:
	inline static int32_t get_offset_of_m_clip_1() { return static_cast<int32_t>(offsetof(AudioClipRes_t4041500634, ___m_clip_1)); }
	inline AudioClip_t1932558630 * get_m_clip_1() const { return ___m_clip_1; }
	inline AudioClip_t1932558630 ** get_address_of_m_clip_1() { return &___m_clip_1; }
	inline void set_m_clip_1(AudioClip_t1932558630 * value)
	{
		___m_clip_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_clip_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
