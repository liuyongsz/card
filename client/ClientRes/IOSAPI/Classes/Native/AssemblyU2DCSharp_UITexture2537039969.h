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
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Shader
struct Shader_t2430389951;

#include "AssemblyU2DCSharp_UIWidget1453041918.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITexture
struct  UITexture_t2537039969  : public UIWidget_t1453041918
{
public:
	// UnityEngine.Rect UITexture::mRect
	Rect_t3681755626  ___mRect_51;
	// UnityEngine.Texture UITexture::mTexture
	Texture_t2243626319 * ___mTexture_52;
	// UnityEngine.Material UITexture::mMat
	Material_t193706927 * ___mMat_53;
	// UnityEngine.Shader UITexture::mShader
	Shader_t2430389951 * ___mShader_54;
	// System.Boolean UITexture::mMirrorHorizontal
	bool ___mMirrorHorizontal_55;
	// System.Boolean UITexture::mMirrorVertical
	bool ___mMirrorVertical_56;
	// System.Int32 UITexture::mPMA
	int32_t ___mPMA_57;

public:
	inline static int32_t get_offset_of_mRect_51() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mRect_51)); }
	inline Rect_t3681755626  get_mRect_51() const { return ___mRect_51; }
	inline Rect_t3681755626 * get_address_of_mRect_51() { return &___mRect_51; }
	inline void set_mRect_51(Rect_t3681755626  value)
	{
		___mRect_51 = value;
	}

	inline static int32_t get_offset_of_mTexture_52() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mTexture_52)); }
	inline Texture_t2243626319 * get_mTexture_52() const { return ___mTexture_52; }
	inline Texture_t2243626319 ** get_address_of_mTexture_52() { return &___mTexture_52; }
	inline void set_mTexture_52(Texture_t2243626319 * value)
	{
		___mTexture_52 = value;
		Il2CppCodeGenWriteBarrier(&___mTexture_52, value);
	}

	inline static int32_t get_offset_of_mMat_53() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mMat_53)); }
	inline Material_t193706927 * get_mMat_53() const { return ___mMat_53; }
	inline Material_t193706927 ** get_address_of_mMat_53() { return &___mMat_53; }
	inline void set_mMat_53(Material_t193706927 * value)
	{
		___mMat_53 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_53, value);
	}

	inline static int32_t get_offset_of_mShader_54() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mShader_54)); }
	inline Shader_t2430389951 * get_mShader_54() const { return ___mShader_54; }
	inline Shader_t2430389951 ** get_address_of_mShader_54() { return &___mShader_54; }
	inline void set_mShader_54(Shader_t2430389951 * value)
	{
		___mShader_54 = value;
		Il2CppCodeGenWriteBarrier(&___mShader_54, value);
	}

	inline static int32_t get_offset_of_mMirrorHorizontal_55() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mMirrorHorizontal_55)); }
	inline bool get_mMirrorHorizontal_55() const { return ___mMirrorHorizontal_55; }
	inline bool* get_address_of_mMirrorHorizontal_55() { return &___mMirrorHorizontal_55; }
	inline void set_mMirrorHorizontal_55(bool value)
	{
		___mMirrorHorizontal_55 = value;
	}

	inline static int32_t get_offset_of_mMirrorVertical_56() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mMirrorVertical_56)); }
	inline bool get_mMirrorVertical_56() const { return ___mMirrorVertical_56; }
	inline bool* get_address_of_mMirrorVertical_56() { return &___mMirrorVertical_56; }
	inline void set_mMirrorVertical_56(bool value)
	{
		___mMirrorVertical_56 = value;
	}

	inline static int32_t get_offset_of_mPMA_57() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mPMA_57)); }
	inline int32_t get_mPMA_57() const { return ___mPMA_57; }
	inline int32_t* get_address_of_mPMA_57() { return &___mPMA_57; }
	inline void set_mPMA_57(int32_t value)
	{
		___mPMA_57 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
