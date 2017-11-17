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

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2152133263.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.CreaseShading
struct  CreaseShading_t3095868303  : public PostEffectsBase_t2152133263
{
public:
	// System.Single UnityStandardAssets.ImageEffects.CreaseShading::intensity
	float ___intensity_6;
	// System.Int32 UnityStandardAssets.ImageEffects.CreaseShading::softness
	int32_t ___softness_7;
	// System.Single UnityStandardAssets.ImageEffects.CreaseShading::spread
	float ___spread_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::blurShader
	Shader_t2430389951 * ___blurShader_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::blurMaterial
	Material_t193706927 * ___blurMaterial_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::depthFetchShader
	Shader_t2430389951 * ___depthFetchShader_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::depthFetchMaterial
	Material_t193706927 * ___depthFetchMaterial_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::creaseApplyShader
	Shader_t2430389951 * ___creaseApplyShader_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::creaseApplyMaterial
	Material_t193706927 * ___creaseApplyMaterial_14;

public:
	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(CreaseShading_t3095868303, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}

	inline static int32_t get_offset_of_softness_7() { return static_cast<int32_t>(offsetof(CreaseShading_t3095868303, ___softness_7)); }
	inline int32_t get_softness_7() const { return ___softness_7; }
	inline int32_t* get_address_of_softness_7() { return &___softness_7; }
	inline void set_softness_7(int32_t value)
	{
		___softness_7 = value;
	}

	inline static int32_t get_offset_of_spread_8() { return static_cast<int32_t>(offsetof(CreaseShading_t3095868303, ___spread_8)); }
	inline float get_spread_8() const { return ___spread_8; }
	inline float* get_address_of_spread_8() { return &___spread_8; }
	inline void set_spread_8(float value)
	{
		___spread_8 = value;
	}

	inline static int32_t get_offset_of_blurShader_9() { return static_cast<int32_t>(offsetof(CreaseShading_t3095868303, ___blurShader_9)); }
	inline Shader_t2430389951 * get_blurShader_9() const { return ___blurShader_9; }
	inline Shader_t2430389951 ** get_address_of_blurShader_9() { return &___blurShader_9; }
	inline void set_blurShader_9(Shader_t2430389951 * value)
	{
		___blurShader_9 = value;
		Il2CppCodeGenWriteBarrier(&___blurShader_9, value);
	}

	inline static int32_t get_offset_of_blurMaterial_10() { return static_cast<int32_t>(offsetof(CreaseShading_t3095868303, ___blurMaterial_10)); }
	inline Material_t193706927 * get_blurMaterial_10() const { return ___blurMaterial_10; }
	inline Material_t193706927 ** get_address_of_blurMaterial_10() { return &___blurMaterial_10; }
	inline void set_blurMaterial_10(Material_t193706927 * value)
	{
		___blurMaterial_10 = value;
		Il2CppCodeGenWriteBarrier(&___blurMaterial_10, value);
	}

	inline static int32_t get_offset_of_depthFetchShader_11() { return static_cast<int32_t>(offsetof(CreaseShading_t3095868303, ___depthFetchShader_11)); }
	inline Shader_t2430389951 * get_depthFetchShader_11() const { return ___depthFetchShader_11; }
	inline Shader_t2430389951 ** get_address_of_depthFetchShader_11() { return &___depthFetchShader_11; }
	inline void set_depthFetchShader_11(Shader_t2430389951 * value)
	{
		___depthFetchShader_11 = value;
		Il2CppCodeGenWriteBarrier(&___depthFetchShader_11, value);
	}

	inline static int32_t get_offset_of_depthFetchMaterial_12() { return static_cast<int32_t>(offsetof(CreaseShading_t3095868303, ___depthFetchMaterial_12)); }
	inline Material_t193706927 * get_depthFetchMaterial_12() const { return ___depthFetchMaterial_12; }
	inline Material_t193706927 ** get_address_of_depthFetchMaterial_12() { return &___depthFetchMaterial_12; }
	inline void set_depthFetchMaterial_12(Material_t193706927 * value)
	{
		___depthFetchMaterial_12 = value;
		Il2CppCodeGenWriteBarrier(&___depthFetchMaterial_12, value);
	}

	inline static int32_t get_offset_of_creaseApplyShader_13() { return static_cast<int32_t>(offsetof(CreaseShading_t3095868303, ___creaseApplyShader_13)); }
	inline Shader_t2430389951 * get_creaseApplyShader_13() const { return ___creaseApplyShader_13; }
	inline Shader_t2430389951 ** get_address_of_creaseApplyShader_13() { return &___creaseApplyShader_13; }
	inline void set_creaseApplyShader_13(Shader_t2430389951 * value)
	{
		___creaseApplyShader_13 = value;
		Il2CppCodeGenWriteBarrier(&___creaseApplyShader_13, value);
	}

	inline static int32_t get_offset_of_creaseApplyMaterial_14() { return static_cast<int32_t>(offsetof(CreaseShading_t3095868303, ___creaseApplyMaterial_14)); }
	inline Material_t193706927 * get_creaseApplyMaterial_14() const { return ___creaseApplyMaterial_14; }
	inline Material_t193706927 ** get_address_of_creaseApplyMaterial_14() { return &___creaseApplyMaterial_14; }
	inline void set_creaseApplyMaterial_14(Material_t193706927 * value)
	{
		___creaseApplyMaterial_14 = value;
		Il2CppCodeGenWriteBarrier(&___creaseApplyMaterial_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
