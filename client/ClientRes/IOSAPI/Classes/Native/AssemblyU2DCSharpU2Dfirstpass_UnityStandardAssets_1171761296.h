#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2152133263.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3310062628.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1008153775.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat3360518468.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Tonemapping
struct  Tonemapping_t1171761296  : public PostEffectsBase_t2152133263
{
public:
	// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType UnityStandardAssets.ImageEffects.Tonemapping::type
	int32_t ___type_6;
	// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize UnityStandardAssets.ImageEffects.Tonemapping::adaptiveTextureSize
	int32_t ___adaptiveTextureSize_7;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.Tonemapping::remapCurve
	AnimationCurve_t3306541151 * ___remapCurve_8;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Tonemapping::curveTex
	Texture2D_t3542995729 * ___curveTex_9;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::exposureAdjustment
	float ___exposureAdjustment_10;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::middleGrey
	float ___middleGrey_11;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::white
	float ___white_12;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::adaptionSpeed
	float ___adaptionSpeed_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Tonemapping::tonemapper
	Shader_t2430389951 * ___tonemapper_14;
	// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::validRenderTextureFormat
	bool ___validRenderTextureFormat_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Tonemapping::tonemapMaterial
	Material_t193706927 * ___tonemapMaterial_16;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.Tonemapping::rt
	RenderTexture_t2666733923 * ___rt_17;
	// UnityEngine.RenderTextureFormat UnityStandardAssets.ImageEffects.Tonemapping::rtFormat
	int32_t ___rtFormat_18;

public:
	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}

	inline static int32_t get_offset_of_adaptiveTextureSize_7() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___adaptiveTextureSize_7)); }
	inline int32_t get_adaptiveTextureSize_7() const { return ___adaptiveTextureSize_7; }
	inline int32_t* get_address_of_adaptiveTextureSize_7() { return &___adaptiveTextureSize_7; }
	inline void set_adaptiveTextureSize_7(int32_t value)
	{
		___adaptiveTextureSize_7 = value;
	}

	inline static int32_t get_offset_of_remapCurve_8() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___remapCurve_8)); }
	inline AnimationCurve_t3306541151 * get_remapCurve_8() const { return ___remapCurve_8; }
	inline AnimationCurve_t3306541151 ** get_address_of_remapCurve_8() { return &___remapCurve_8; }
	inline void set_remapCurve_8(AnimationCurve_t3306541151 * value)
	{
		___remapCurve_8 = value;
		Il2CppCodeGenWriteBarrier(&___remapCurve_8, value);
	}

	inline static int32_t get_offset_of_curveTex_9() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___curveTex_9)); }
	inline Texture2D_t3542995729 * get_curveTex_9() const { return ___curveTex_9; }
	inline Texture2D_t3542995729 ** get_address_of_curveTex_9() { return &___curveTex_9; }
	inline void set_curveTex_9(Texture2D_t3542995729 * value)
	{
		___curveTex_9 = value;
		Il2CppCodeGenWriteBarrier(&___curveTex_9, value);
	}

	inline static int32_t get_offset_of_exposureAdjustment_10() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___exposureAdjustment_10)); }
	inline float get_exposureAdjustment_10() const { return ___exposureAdjustment_10; }
	inline float* get_address_of_exposureAdjustment_10() { return &___exposureAdjustment_10; }
	inline void set_exposureAdjustment_10(float value)
	{
		___exposureAdjustment_10 = value;
	}

	inline static int32_t get_offset_of_middleGrey_11() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___middleGrey_11)); }
	inline float get_middleGrey_11() const { return ___middleGrey_11; }
	inline float* get_address_of_middleGrey_11() { return &___middleGrey_11; }
	inline void set_middleGrey_11(float value)
	{
		___middleGrey_11 = value;
	}

	inline static int32_t get_offset_of_white_12() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___white_12)); }
	inline float get_white_12() const { return ___white_12; }
	inline float* get_address_of_white_12() { return &___white_12; }
	inline void set_white_12(float value)
	{
		___white_12 = value;
	}

	inline static int32_t get_offset_of_adaptionSpeed_13() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___adaptionSpeed_13)); }
	inline float get_adaptionSpeed_13() const { return ___adaptionSpeed_13; }
	inline float* get_address_of_adaptionSpeed_13() { return &___adaptionSpeed_13; }
	inline void set_adaptionSpeed_13(float value)
	{
		___adaptionSpeed_13 = value;
	}

	inline static int32_t get_offset_of_tonemapper_14() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___tonemapper_14)); }
	inline Shader_t2430389951 * get_tonemapper_14() const { return ___tonemapper_14; }
	inline Shader_t2430389951 ** get_address_of_tonemapper_14() { return &___tonemapper_14; }
	inline void set_tonemapper_14(Shader_t2430389951 * value)
	{
		___tonemapper_14 = value;
		Il2CppCodeGenWriteBarrier(&___tonemapper_14, value);
	}

	inline static int32_t get_offset_of_validRenderTextureFormat_15() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___validRenderTextureFormat_15)); }
	inline bool get_validRenderTextureFormat_15() const { return ___validRenderTextureFormat_15; }
	inline bool* get_address_of_validRenderTextureFormat_15() { return &___validRenderTextureFormat_15; }
	inline void set_validRenderTextureFormat_15(bool value)
	{
		___validRenderTextureFormat_15 = value;
	}

	inline static int32_t get_offset_of_tonemapMaterial_16() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___tonemapMaterial_16)); }
	inline Material_t193706927 * get_tonemapMaterial_16() const { return ___tonemapMaterial_16; }
	inline Material_t193706927 ** get_address_of_tonemapMaterial_16() { return &___tonemapMaterial_16; }
	inline void set_tonemapMaterial_16(Material_t193706927 * value)
	{
		___tonemapMaterial_16 = value;
		Il2CppCodeGenWriteBarrier(&___tonemapMaterial_16, value);
	}

	inline static int32_t get_offset_of_rt_17() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___rt_17)); }
	inline RenderTexture_t2666733923 * get_rt_17() const { return ___rt_17; }
	inline RenderTexture_t2666733923 ** get_address_of_rt_17() { return &___rt_17; }
	inline void set_rt_17(RenderTexture_t2666733923 * value)
	{
		___rt_17 = value;
		Il2CppCodeGenWriteBarrier(&___rt_17, value);
	}

	inline static int32_t get_offset_of_rtFormat_18() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___rtFormat_18)); }
	inline int32_t get_rtFormat_18() const { return ___rtFormat_18; }
	inline int32_t* get_address_of_rtFormat_18() { return &___rtFormat_18; }
	inline void set_rtFormat_18(int32_t value)
	{
		___rtFormat_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
