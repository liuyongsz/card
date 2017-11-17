#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ImageEffect_BlurBox
struct  ImageEffect_BlurBox_t1595013249  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Shader ImageEffect_BlurBox::BlurBoxShader
	Shader_t2430389951 * ___BlurBoxShader_2;
	// UnityEngine.Material ImageEffect_BlurBox::BlurBoxMaterial
	Material_t193706927 * ___BlurBoxMaterial_3;
	// UnityEngine.RenderTexture ImageEffect_BlurBox::SourceTexture
	RenderTexture_t2666733923 * ___SourceTexture_4;
	// UnityEngine.RenderTexture ImageEffect_BlurBox::DestTexture
	RenderTexture_t2666733923 * ___DestTexture_5;
	// System.Single ImageEffect_BlurBox::BlurSize
	float ___BlurSize_6;
	// System.String ImageEffect_BlurBox::mShader
	String_t* ___mShader_7;

public:
	inline static int32_t get_offset_of_BlurBoxShader_2() { return static_cast<int32_t>(offsetof(ImageEffect_BlurBox_t1595013249, ___BlurBoxShader_2)); }
	inline Shader_t2430389951 * get_BlurBoxShader_2() const { return ___BlurBoxShader_2; }
	inline Shader_t2430389951 ** get_address_of_BlurBoxShader_2() { return &___BlurBoxShader_2; }
	inline void set_BlurBoxShader_2(Shader_t2430389951 * value)
	{
		___BlurBoxShader_2 = value;
		Il2CppCodeGenWriteBarrier(&___BlurBoxShader_2, value);
	}

	inline static int32_t get_offset_of_BlurBoxMaterial_3() { return static_cast<int32_t>(offsetof(ImageEffect_BlurBox_t1595013249, ___BlurBoxMaterial_3)); }
	inline Material_t193706927 * get_BlurBoxMaterial_3() const { return ___BlurBoxMaterial_3; }
	inline Material_t193706927 ** get_address_of_BlurBoxMaterial_3() { return &___BlurBoxMaterial_3; }
	inline void set_BlurBoxMaterial_3(Material_t193706927 * value)
	{
		___BlurBoxMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___BlurBoxMaterial_3, value);
	}

	inline static int32_t get_offset_of_SourceTexture_4() { return static_cast<int32_t>(offsetof(ImageEffect_BlurBox_t1595013249, ___SourceTexture_4)); }
	inline RenderTexture_t2666733923 * get_SourceTexture_4() const { return ___SourceTexture_4; }
	inline RenderTexture_t2666733923 ** get_address_of_SourceTexture_4() { return &___SourceTexture_4; }
	inline void set_SourceTexture_4(RenderTexture_t2666733923 * value)
	{
		___SourceTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___SourceTexture_4, value);
	}

	inline static int32_t get_offset_of_DestTexture_5() { return static_cast<int32_t>(offsetof(ImageEffect_BlurBox_t1595013249, ___DestTexture_5)); }
	inline RenderTexture_t2666733923 * get_DestTexture_5() const { return ___DestTexture_5; }
	inline RenderTexture_t2666733923 ** get_address_of_DestTexture_5() { return &___DestTexture_5; }
	inline void set_DestTexture_5(RenderTexture_t2666733923 * value)
	{
		___DestTexture_5 = value;
		Il2CppCodeGenWriteBarrier(&___DestTexture_5, value);
	}

	inline static int32_t get_offset_of_BlurSize_6() { return static_cast<int32_t>(offsetof(ImageEffect_BlurBox_t1595013249, ___BlurSize_6)); }
	inline float get_BlurSize_6() const { return ___BlurSize_6; }
	inline float* get_address_of_BlurSize_6() { return &___BlurSize_6; }
	inline void set_BlurSize_6(float value)
	{
		___BlurSize_6 = value;
	}

	inline static int32_t get_offset_of_mShader_7() { return static_cast<int32_t>(offsetof(ImageEffect_BlurBox_t1595013249, ___mShader_7)); }
	inline String_t* get_mShader_7() const { return ___mShader_7; }
	inline String_t** get_address_of_mShader_7() { return &___mShader_7; }
	inline void set_mShader_7(String_t* value)
	{
		___mShader_7 = value;
		Il2CppCodeGenWriteBarrier(&___mShader_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
