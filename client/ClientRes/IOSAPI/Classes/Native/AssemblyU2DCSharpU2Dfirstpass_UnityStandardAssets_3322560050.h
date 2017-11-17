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
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3949418959.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct  VignetteAndChromaticAberration_t3322560050  : public PostEffectsBase_t2152133263
{
public:
	// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::mode
	int32_t ___mode_6;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::intensity
	float ___intensity_7;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromaticAberration
	float ___chromaticAberration_8;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::axialAberration
	float ___axialAberration_9;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blur
	float ___blur_10;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurSpread
	float ___blurSpread_11;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::luminanceDependency
	float ___luminanceDependency_12;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurDistance
	float ___blurDistance_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::vignetteShader
	Shader_t2430389951 * ___vignetteShader_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::separableBlurShader
	Shader_t2430389951 * ___separableBlurShader_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromAberrationShader
	Shader_t2430389951 * ___chromAberrationShader_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_VignetteMaterial
	Material_t193706927 * ___m_VignetteMaterial_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_SeparableBlurMaterial
	Material_t193706927 * ___m_SeparableBlurMaterial_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_ChromAberrationMaterial
	Material_t193706927 * ___m_ChromAberrationMaterial_19;

public:
	inline static int32_t get_offset_of_mode_6() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3322560050, ___mode_6)); }
	inline int32_t get_mode_6() const { return ___mode_6; }
	inline int32_t* get_address_of_mode_6() { return &___mode_6; }
	inline void set_mode_6(int32_t value)
	{
		___mode_6 = value;
	}

	inline static int32_t get_offset_of_intensity_7() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3322560050, ___intensity_7)); }
	inline float get_intensity_7() const { return ___intensity_7; }
	inline float* get_address_of_intensity_7() { return &___intensity_7; }
	inline void set_intensity_7(float value)
	{
		___intensity_7 = value;
	}

	inline static int32_t get_offset_of_chromaticAberration_8() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3322560050, ___chromaticAberration_8)); }
	inline float get_chromaticAberration_8() const { return ___chromaticAberration_8; }
	inline float* get_address_of_chromaticAberration_8() { return &___chromaticAberration_8; }
	inline void set_chromaticAberration_8(float value)
	{
		___chromaticAberration_8 = value;
	}

	inline static int32_t get_offset_of_axialAberration_9() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3322560050, ___axialAberration_9)); }
	inline float get_axialAberration_9() const { return ___axialAberration_9; }
	inline float* get_address_of_axialAberration_9() { return &___axialAberration_9; }
	inline void set_axialAberration_9(float value)
	{
		___axialAberration_9 = value;
	}

	inline static int32_t get_offset_of_blur_10() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3322560050, ___blur_10)); }
	inline float get_blur_10() const { return ___blur_10; }
	inline float* get_address_of_blur_10() { return &___blur_10; }
	inline void set_blur_10(float value)
	{
		___blur_10 = value;
	}

	inline static int32_t get_offset_of_blurSpread_11() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3322560050, ___blurSpread_11)); }
	inline float get_blurSpread_11() const { return ___blurSpread_11; }
	inline float* get_address_of_blurSpread_11() { return &___blurSpread_11; }
	inline void set_blurSpread_11(float value)
	{
		___blurSpread_11 = value;
	}

	inline static int32_t get_offset_of_luminanceDependency_12() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3322560050, ___luminanceDependency_12)); }
	inline float get_luminanceDependency_12() const { return ___luminanceDependency_12; }
	inline float* get_address_of_luminanceDependency_12() { return &___luminanceDependency_12; }
	inline void set_luminanceDependency_12(float value)
	{
		___luminanceDependency_12 = value;
	}

	inline static int32_t get_offset_of_blurDistance_13() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3322560050, ___blurDistance_13)); }
	inline float get_blurDistance_13() const { return ___blurDistance_13; }
	inline float* get_address_of_blurDistance_13() { return &___blurDistance_13; }
	inline void set_blurDistance_13(float value)
	{
		___blurDistance_13 = value;
	}

	inline static int32_t get_offset_of_vignetteShader_14() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3322560050, ___vignetteShader_14)); }
	inline Shader_t2430389951 * get_vignetteShader_14() const { return ___vignetteShader_14; }
	inline Shader_t2430389951 ** get_address_of_vignetteShader_14() { return &___vignetteShader_14; }
	inline void set_vignetteShader_14(Shader_t2430389951 * value)
	{
		___vignetteShader_14 = value;
		Il2CppCodeGenWriteBarrier(&___vignetteShader_14, value);
	}

	inline static int32_t get_offset_of_separableBlurShader_15() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3322560050, ___separableBlurShader_15)); }
	inline Shader_t2430389951 * get_separableBlurShader_15() const { return ___separableBlurShader_15; }
	inline Shader_t2430389951 ** get_address_of_separableBlurShader_15() { return &___separableBlurShader_15; }
	inline void set_separableBlurShader_15(Shader_t2430389951 * value)
	{
		___separableBlurShader_15 = value;
		Il2CppCodeGenWriteBarrier(&___separableBlurShader_15, value);
	}

	inline static int32_t get_offset_of_chromAberrationShader_16() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3322560050, ___chromAberrationShader_16)); }
	inline Shader_t2430389951 * get_chromAberrationShader_16() const { return ___chromAberrationShader_16; }
	inline Shader_t2430389951 ** get_address_of_chromAberrationShader_16() { return &___chromAberrationShader_16; }
	inline void set_chromAberrationShader_16(Shader_t2430389951 * value)
	{
		___chromAberrationShader_16 = value;
		Il2CppCodeGenWriteBarrier(&___chromAberrationShader_16, value);
	}

	inline static int32_t get_offset_of_m_VignetteMaterial_17() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3322560050, ___m_VignetteMaterial_17)); }
	inline Material_t193706927 * get_m_VignetteMaterial_17() const { return ___m_VignetteMaterial_17; }
	inline Material_t193706927 ** get_address_of_m_VignetteMaterial_17() { return &___m_VignetteMaterial_17; }
	inline void set_m_VignetteMaterial_17(Material_t193706927 * value)
	{
		___m_VignetteMaterial_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_VignetteMaterial_17, value);
	}

	inline static int32_t get_offset_of_m_SeparableBlurMaterial_18() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3322560050, ___m_SeparableBlurMaterial_18)); }
	inline Material_t193706927 * get_m_SeparableBlurMaterial_18() const { return ___m_SeparableBlurMaterial_18; }
	inline Material_t193706927 ** get_address_of_m_SeparableBlurMaterial_18() { return &___m_SeparableBlurMaterial_18; }
	inline void set_m_SeparableBlurMaterial_18(Material_t193706927 * value)
	{
		___m_SeparableBlurMaterial_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_SeparableBlurMaterial_18, value);
	}

	inline static int32_t get_offset_of_m_ChromAberrationMaterial_19() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3322560050, ___m_ChromAberrationMaterial_19)); }
	inline Material_t193706927 * get_m_ChromAberrationMaterial_19() const { return ___m_ChromAberrationMaterial_19; }
	inline Material_t193706927 ** get_address_of_m_ChromAberrationMaterial_19() { return &___m_ChromAberrationMaterial_19; }
	inline void set_m_ChromAberrationMaterial_19(Material_t193706927 * value)
	{
		___m_ChromAberrationMaterial_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_ChromAberrationMaterial_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
