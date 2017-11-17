#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t1827099467;
// UnityEngine.Camera
struct Camera_t189460977;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2152133263.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2459464934.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3059663215.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.DepthOfField
struct  DepthOfField_t3961919654  : public PostEffectsBase_t2152133263
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::visualizeFocus
	bool ___visualizeFocus_6;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalLength
	float ___focalLength_7;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalSize
	float ___focalSize_8;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::aperture
	float ___aperture_9;
	// UnityEngine.Transform UnityStandardAssets.ImageEffects.DepthOfField::focalTransform
	Transform_t3275118058 * ___focalTransform_10;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::maxBlurSize
	float ___maxBlurSize_11;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::highResolution
	bool ___highResolution_12;
	// UnityStandardAssets.ImageEffects.DepthOfField/BlurType UnityStandardAssets.ImageEffects.DepthOfField::blurType
	int32_t ___blurType_13;
	// UnityStandardAssets.ImageEffects.DepthOfField/BlurSampleCount UnityStandardAssets.ImageEffects.DepthOfField::blurSampleCount
	int32_t ___blurSampleCount_14;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::nearBlur
	bool ___nearBlur_15;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::foregroundOverlap
	float ___foregroundOverlap_16;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfField::dofHdrShader
	Shader_t2430389951 * ___dofHdrShader_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfField::dofHdrMaterial
	Material_t193706927 * ___dofHdrMaterial_18;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehShader
	Shader_t2430389951 * ___dx11BokehShader_19;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfField::dx11bokehMaterial
	Material_t193706927 * ___dx11bokehMaterial_20;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehThreshold
	float ___dx11BokehThreshold_21;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11SpawnHeuristic
	float ___dx11SpawnHeuristic_22;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehTexture
	Texture2D_t3542995729 * ___dx11BokehTexture_23;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehScale
	float ___dx11BokehScale_24;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehIntensity
	float ___dx11BokehIntensity_25;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalDistance01
	float ___focalDistance01_26;
	// UnityEngine.ComputeBuffer UnityStandardAssets.ImageEffects.DepthOfField::cbDrawArgs
	ComputeBuffer_t1827099467 * ___cbDrawArgs_27;
	// UnityEngine.ComputeBuffer UnityStandardAssets.ImageEffects.DepthOfField::cbPoints
	ComputeBuffer_t1827099467 * ___cbPoints_28;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::internalBlurWidth
	float ___internalBlurWidth_29;
	// UnityEngine.Camera UnityStandardAssets.ImageEffects.DepthOfField::cachedCamera
	Camera_t189460977 * ___cachedCamera_30;

public:
	inline static int32_t get_offset_of_visualizeFocus_6() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___visualizeFocus_6)); }
	inline bool get_visualizeFocus_6() const { return ___visualizeFocus_6; }
	inline bool* get_address_of_visualizeFocus_6() { return &___visualizeFocus_6; }
	inline void set_visualizeFocus_6(bool value)
	{
		___visualizeFocus_6 = value;
	}

	inline static int32_t get_offset_of_focalLength_7() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___focalLength_7)); }
	inline float get_focalLength_7() const { return ___focalLength_7; }
	inline float* get_address_of_focalLength_7() { return &___focalLength_7; }
	inline void set_focalLength_7(float value)
	{
		___focalLength_7 = value;
	}

	inline static int32_t get_offset_of_focalSize_8() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___focalSize_8)); }
	inline float get_focalSize_8() const { return ___focalSize_8; }
	inline float* get_address_of_focalSize_8() { return &___focalSize_8; }
	inline void set_focalSize_8(float value)
	{
		___focalSize_8 = value;
	}

	inline static int32_t get_offset_of_aperture_9() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___aperture_9)); }
	inline float get_aperture_9() const { return ___aperture_9; }
	inline float* get_address_of_aperture_9() { return &___aperture_9; }
	inline void set_aperture_9(float value)
	{
		___aperture_9 = value;
	}

	inline static int32_t get_offset_of_focalTransform_10() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___focalTransform_10)); }
	inline Transform_t3275118058 * get_focalTransform_10() const { return ___focalTransform_10; }
	inline Transform_t3275118058 ** get_address_of_focalTransform_10() { return &___focalTransform_10; }
	inline void set_focalTransform_10(Transform_t3275118058 * value)
	{
		___focalTransform_10 = value;
		Il2CppCodeGenWriteBarrier(&___focalTransform_10, value);
	}

	inline static int32_t get_offset_of_maxBlurSize_11() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___maxBlurSize_11)); }
	inline float get_maxBlurSize_11() const { return ___maxBlurSize_11; }
	inline float* get_address_of_maxBlurSize_11() { return &___maxBlurSize_11; }
	inline void set_maxBlurSize_11(float value)
	{
		___maxBlurSize_11 = value;
	}

	inline static int32_t get_offset_of_highResolution_12() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___highResolution_12)); }
	inline bool get_highResolution_12() const { return ___highResolution_12; }
	inline bool* get_address_of_highResolution_12() { return &___highResolution_12; }
	inline void set_highResolution_12(bool value)
	{
		___highResolution_12 = value;
	}

	inline static int32_t get_offset_of_blurType_13() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___blurType_13)); }
	inline int32_t get_blurType_13() const { return ___blurType_13; }
	inline int32_t* get_address_of_blurType_13() { return &___blurType_13; }
	inline void set_blurType_13(int32_t value)
	{
		___blurType_13 = value;
	}

	inline static int32_t get_offset_of_blurSampleCount_14() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___blurSampleCount_14)); }
	inline int32_t get_blurSampleCount_14() const { return ___blurSampleCount_14; }
	inline int32_t* get_address_of_blurSampleCount_14() { return &___blurSampleCount_14; }
	inline void set_blurSampleCount_14(int32_t value)
	{
		___blurSampleCount_14 = value;
	}

	inline static int32_t get_offset_of_nearBlur_15() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___nearBlur_15)); }
	inline bool get_nearBlur_15() const { return ___nearBlur_15; }
	inline bool* get_address_of_nearBlur_15() { return &___nearBlur_15; }
	inline void set_nearBlur_15(bool value)
	{
		___nearBlur_15 = value;
	}

	inline static int32_t get_offset_of_foregroundOverlap_16() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___foregroundOverlap_16)); }
	inline float get_foregroundOverlap_16() const { return ___foregroundOverlap_16; }
	inline float* get_address_of_foregroundOverlap_16() { return &___foregroundOverlap_16; }
	inline void set_foregroundOverlap_16(float value)
	{
		___foregroundOverlap_16 = value;
	}

	inline static int32_t get_offset_of_dofHdrShader_17() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___dofHdrShader_17)); }
	inline Shader_t2430389951 * get_dofHdrShader_17() const { return ___dofHdrShader_17; }
	inline Shader_t2430389951 ** get_address_of_dofHdrShader_17() { return &___dofHdrShader_17; }
	inline void set_dofHdrShader_17(Shader_t2430389951 * value)
	{
		___dofHdrShader_17 = value;
		Il2CppCodeGenWriteBarrier(&___dofHdrShader_17, value);
	}

	inline static int32_t get_offset_of_dofHdrMaterial_18() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___dofHdrMaterial_18)); }
	inline Material_t193706927 * get_dofHdrMaterial_18() const { return ___dofHdrMaterial_18; }
	inline Material_t193706927 ** get_address_of_dofHdrMaterial_18() { return &___dofHdrMaterial_18; }
	inline void set_dofHdrMaterial_18(Material_t193706927 * value)
	{
		___dofHdrMaterial_18 = value;
		Il2CppCodeGenWriteBarrier(&___dofHdrMaterial_18, value);
	}

	inline static int32_t get_offset_of_dx11BokehShader_19() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___dx11BokehShader_19)); }
	inline Shader_t2430389951 * get_dx11BokehShader_19() const { return ___dx11BokehShader_19; }
	inline Shader_t2430389951 ** get_address_of_dx11BokehShader_19() { return &___dx11BokehShader_19; }
	inline void set_dx11BokehShader_19(Shader_t2430389951 * value)
	{
		___dx11BokehShader_19 = value;
		Il2CppCodeGenWriteBarrier(&___dx11BokehShader_19, value);
	}

	inline static int32_t get_offset_of_dx11bokehMaterial_20() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___dx11bokehMaterial_20)); }
	inline Material_t193706927 * get_dx11bokehMaterial_20() const { return ___dx11bokehMaterial_20; }
	inline Material_t193706927 ** get_address_of_dx11bokehMaterial_20() { return &___dx11bokehMaterial_20; }
	inline void set_dx11bokehMaterial_20(Material_t193706927 * value)
	{
		___dx11bokehMaterial_20 = value;
		Il2CppCodeGenWriteBarrier(&___dx11bokehMaterial_20, value);
	}

	inline static int32_t get_offset_of_dx11BokehThreshold_21() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___dx11BokehThreshold_21)); }
	inline float get_dx11BokehThreshold_21() const { return ___dx11BokehThreshold_21; }
	inline float* get_address_of_dx11BokehThreshold_21() { return &___dx11BokehThreshold_21; }
	inline void set_dx11BokehThreshold_21(float value)
	{
		___dx11BokehThreshold_21 = value;
	}

	inline static int32_t get_offset_of_dx11SpawnHeuristic_22() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___dx11SpawnHeuristic_22)); }
	inline float get_dx11SpawnHeuristic_22() const { return ___dx11SpawnHeuristic_22; }
	inline float* get_address_of_dx11SpawnHeuristic_22() { return &___dx11SpawnHeuristic_22; }
	inline void set_dx11SpawnHeuristic_22(float value)
	{
		___dx11SpawnHeuristic_22 = value;
	}

	inline static int32_t get_offset_of_dx11BokehTexture_23() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___dx11BokehTexture_23)); }
	inline Texture2D_t3542995729 * get_dx11BokehTexture_23() const { return ___dx11BokehTexture_23; }
	inline Texture2D_t3542995729 ** get_address_of_dx11BokehTexture_23() { return &___dx11BokehTexture_23; }
	inline void set_dx11BokehTexture_23(Texture2D_t3542995729 * value)
	{
		___dx11BokehTexture_23 = value;
		Il2CppCodeGenWriteBarrier(&___dx11BokehTexture_23, value);
	}

	inline static int32_t get_offset_of_dx11BokehScale_24() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___dx11BokehScale_24)); }
	inline float get_dx11BokehScale_24() const { return ___dx11BokehScale_24; }
	inline float* get_address_of_dx11BokehScale_24() { return &___dx11BokehScale_24; }
	inline void set_dx11BokehScale_24(float value)
	{
		___dx11BokehScale_24 = value;
	}

	inline static int32_t get_offset_of_dx11BokehIntensity_25() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___dx11BokehIntensity_25)); }
	inline float get_dx11BokehIntensity_25() const { return ___dx11BokehIntensity_25; }
	inline float* get_address_of_dx11BokehIntensity_25() { return &___dx11BokehIntensity_25; }
	inline void set_dx11BokehIntensity_25(float value)
	{
		___dx11BokehIntensity_25 = value;
	}

	inline static int32_t get_offset_of_focalDistance01_26() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___focalDistance01_26)); }
	inline float get_focalDistance01_26() const { return ___focalDistance01_26; }
	inline float* get_address_of_focalDistance01_26() { return &___focalDistance01_26; }
	inline void set_focalDistance01_26(float value)
	{
		___focalDistance01_26 = value;
	}

	inline static int32_t get_offset_of_cbDrawArgs_27() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___cbDrawArgs_27)); }
	inline ComputeBuffer_t1827099467 * get_cbDrawArgs_27() const { return ___cbDrawArgs_27; }
	inline ComputeBuffer_t1827099467 ** get_address_of_cbDrawArgs_27() { return &___cbDrawArgs_27; }
	inline void set_cbDrawArgs_27(ComputeBuffer_t1827099467 * value)
	{
		___cbDrawArgs_27 = value;
		Il2CppCodeGenWriteBarrier(&___cbDrawArgs_27, value);
	}

	inline static int32_t get_offset_of_cbPoints_28() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___cbPoints_28)); }
	inline ComputeBuffer_t1827099467 * get_cbPoints_28() const { return ___cbPoints_28; }
	inline ComputeBuffer_t1827099467 ** get_address_of_cbPoints_28() { return &___cbPoints_28; }
	inline void set_cbPoints_28(ComputeBuffer_t1827099467 * value)
	{
		___cbPoints_28 = value;
		Il2CppCodeGenWriteBarrier(&___cbPoints_28, value);
	}

	inline static int32_t get_offset_of_internalBlurWidth_29() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___internalBlurWidth_29)); }
	inline float get_internalBlurWidth_29() const { return ___internalBlurWidth_29; }
	inline float* get_address_of_internalBlurWidth_29() { return &___internalBlurWidth_29; }
	inline void set_internalBlurWidth_29(float value)
	{
		___internalBlurWidth_29 = value;
	}

	inline static int32_t get_offset_of_cachedCamera_30() { return static_cast<int32_t>(offsetof(DepthOfField_t3961919654, ___cachedCamera_30)); }
	inline Camera_t189460977 * get_cachedCamera_30() const { return ___cachedCamera_30; }
	inline Camera_t189460977 ** get_address_of_cachedCamera_30() { return &___cachedCamera_30; }
	inline void set_cachedCamera_30(Camera_t189460977 * value)
	{
		___cachedCamera_30 = value;
		Il2CppCodeGenWriteBarrier(&___cachedCamera_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
