#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "AssemblyU2DCSharp_AssetBundles_NormalRes3181316491.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundles.TextureRes
struct  TextureRes_t1918295525  : public NormalRes_t3181316491
{
public:
	// UnityEngine.Texture2D AssetBundles.TextureRes::m_texture
	Texture2D_t3542995729 * ___m_texture_1;

public:
	inline static int32_t get_offset_of_m_texture_1() { return static_cast<int32_t>(offsetof(TextureRes_t1918295525, ___m_texture_1)); }
	inline Texture2D_t3542995729 * get_m_texture_1() const { return ___m_texture_1; }
	inline Texture2D_t3542995729 ** get_address_of_m_texture_1() { return &___m_texture_1; }
	inline void set_m_texture_1(Texture2D_t3542995729 * value)
	{
		___m_texture_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_texture_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
