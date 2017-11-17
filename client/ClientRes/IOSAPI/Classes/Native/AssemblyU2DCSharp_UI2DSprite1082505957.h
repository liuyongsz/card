#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Shader
struct Shader_t2430389951;

#include "AssemblyU2DCSharp_UIWidget1453041918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UI2DSprite
struct  UI2DSprite_t1082505957  : public UIWidget_t1453041918
{
public:
	// UnityEngine.Sprite UI2DSprite::mSprite
	Sprite_t309593783 * ___mSprite_51;
	// UnityEngine.Material UI2DSprite::mMat
	Material_t193706927 * ___mMat_52;
	// UnityEngine.Shader UI2DSprite::mShader
	Shader_t2430389951 * ___mShader_53;
	// UnityEngine.Sprite UI2DSprite::nextSprite
	Sprite_t309593783 * ___nextSprite_54;
	// System.Int32 UI2DSprite::mPMA
	int32_t ___mPMA_55;

public:
	inline static int32_t get_offset_of_mSprite_51() { return static_cast<int32_t>(offsetof(UI2DSprite_t1082505957, ___mSprite_51)); }
	inline Sprite_t309593783 * get_mSprite_51() const { return ___mSprite_51; }
	inline Sprite_t309593783 ** get_address_of_mSprite_51() { return &___mSprite_51; }
	inline void set_mSprite_51(Sprite_t309593783 * value)
	{
		___mSprite_51 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_51, value);
	}

	inline static int32_t get_offset_of_mMat_52() { return static_cast<int32_t>(offsetof(UI2DSprite_t1082505957, ___mMat_52)); }
	inline Material_t193706927 * get_mMat_52() const { return ___mMat_52; }
	inline Material_t193706927 ** get_address_of_mMat_52() { return &___mMat_52; }
	inline void set_mMat_52(Material_t193706927 * value)
	{
		___mMat_52 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_52, value);
	}

	inline static int32_t get_offset_of_mShader_53() { return static_cast<int32_t>(offsetof(UI2DSprite_t1082505957, ___mShader_53)); }
	inline Shader_t2430389951 * get_mShader_53() const { return ___mShader_53; }
	inline Shader_t2430389951 ** get_address_of_mShader_53() { return &___mShader_53; }
	inline void set_mShader_53(Shader_t2430389951 * value)
	{
		___mShader_53 = value;
		Il2CppCodeGenWriteBarrier(&___mShader_53, value);
	}

	inline static int32_t get_offset_of_nextSprite_54() { return static_cast<int32_t>(offsetof(UI2DSprite_t1082505957, ___nextSprite_54)); }
	inline Sprite_t309593783 * get_nextSprite_54() const { return ___nextSprite_54; }
	inline Sprite_t309593783 ** get_address_of_nextSprite_54() { return &___nextSprite_54; }
	inline void set_nextSprite_54(Sprite_t309593783 * value)
	{
		___nextSprite_54 = value;
		Il2CppCodeGenWriteBarrier(&___nextSprite_54, value);
	}

	inline static int32_t get_offset_of_mPMA_55() { return static_cast<int32_t>(offsetof(UI2DSprite_t1082505957, ___mPMA_55)); }
	inline int32_t get_mPMA_55() const { return ___mPMA_55; }
	inline int32_t* get_address_of_mPMA_55() { return &___mPMA_55; }
	inline void set_mPMA_55(int32_t value)
	{
		___mPMA_55 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
