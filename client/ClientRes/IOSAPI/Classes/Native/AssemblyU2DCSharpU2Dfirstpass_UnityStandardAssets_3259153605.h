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
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2152133263.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_4077469257.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3629569411.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1274006168.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1989801646.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2543710313.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Bloom
struct  Bloom_t3259153605  : public PostEffectsBase_t2152133263
{
public:
	// UnityStandardAssets.ImageEffects.Bloom/TweakMode UnityStandardAssets.ImageEffects.Bloom::tweakMode
	int32_t ___tweakMode_6;
	// UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode UnityStandardAssets.ImageEffects.Bloom::screenBlendMode
	int32_t ___screenBlendMode_7;
	// UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode UnityStandardAssets.ImageEffects.Bloom::hdr
	int32_t ___hdr_8;
	// System.Boolean UnityStandardAssets.ImageEffects.Bloom::doHdr
	bool ___doHdr_9;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::sepBlurSpread
	float ___sepBlurSpread_10;
	// UnityStandardAssets.ImageEffects.Bloom/BloomQuality UnityStandardAssets.ImageEffects.Bloom::quality
	int32_t ___quality_11;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::bloomIntensity
	float ___bloomIntensity_12;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::bloomThreshold
	float ___bloomThreshold_13;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::bloomThresholdColor
	Color_t2020392075  ___bloomThresholdColor_14;
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom::bloomBlurIterations
	int32_t ___bloomBlurIterations_15;
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_16;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::flareRotation
	float ___flareRotation_17;
	// UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle UnityStandardAssets.ImageEffects.Bloom::lensflareMode
	int32_t ___lensflareMode_18;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::hollyStretchWidth
	float ___hollyStretchWidth_19;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensflareIntensity
	float ___lensflareIntensity_20;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensflareThreshold
	float ___lensflareThreshold_21;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensFlareSaturation
	float ___lensFlareSaturation_22;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorA
	Color_t2020392075  ___flareColorA_23;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorB
	Color_t2020392075  ___flareColorB_24;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorC
	Color_t2020392075  ___flareColorC_25;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorD
	Color_t2020392075  ___flareColorD_26;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Bloom::lensFlareVignetteMask
	Texture2D_t3542995729 * ___lensFlareVignetteMask_27;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::lensFlareShader
	Shader_t2430389951 * ___lensFlareShader_28;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::lensFlareMaterial
	Material_t193706927 * ___lensFlareMaterial_29;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::screenBlendShader
	Shader_t2430389951 * ___screenBlendShader_30;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::screenBlend
	Material_t193706927 * ___screenBlend_31;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::blurAndFlaresShader
	Shader_t2430389951 * ___blurAndFlaresShader_32;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::blurAndFlaresMaterial
	Material_t193706927 * ___blurAndFlaresMaterial_33;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::brightPassFilterShader
	Shader_t2430389951 * ___brightPassFilterShader_34;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::brightPassFilterMaterial
	Material_t193706927 * ___brightPassFilterMaterial_35;

public:
	inline static int32_t get_offset_of_tweakMode_6() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___tweakMode_6)); }
	inline int32_t get_tweakMode_6() const { return ___tweakMode_6; }
	inline int32_t* get_address_of_tweakMode_6() { return &___tweakMode_6; }
	inline void set_tweakMode_6(int32_t value)
	{
		___tweakMode_6 = value;
	}

	inline static int32_t get_offset_of_screenBlendMode_7() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___screenBlendMode_7)); }
	inline int32_t get_screenBlendMode_7() const { return ___screenBlendMode_7; }
	inline int32_t* get_address_of_screenBlendMode_7() { return &___screenBlendMode_7; }
	inline void set_screenBlendMode_7(int32_t value)
	{
		___screenBlendMode_7 = value;
	}

	inline static int32_t get_offset_of_hdr_8() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___hdr_8)); }
	inline int32_t get_hdr_8() const { return ___hdr_8; }
	inline int32_t* get_address_of_hdr_8() { return &___hdr_8; }
	inline void set_hdr_8(int32_t value)
	{
		___hdr_8 = value;
	}

	inline static int32_t get_offset_of_doHdr_9() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___doHdr_9)); }
	inline bool get_doHdr_9() const { return ___doHdr_9; }
	inline bool* get_address_of_doHdr_9() { return &___doHdr_9; }
	inline void set_doHdr_9(bool value)
	{
		___doHdr_9 = value;
	}

	inline static int32_t get_offset_of_sepBlurSpread_10() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___sepBlurSpread_10)); }
	inline float get_sepBlurSpread_10() const { return ___sepBlurSpread_10; }
	inline float* get_address_of_sepBlurSpread_10() { return &___sepBlurSpread_10; }
	inline void set_sepBlurSpread_10(float value)
	{
		___sepBlurSpread_10 = value;
	}

	inline static int32_t get_offset_of_quality_11() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___quality_11)); }
	inline int32_t get_quality_11() const { return ___quality_11; }
	inline int32_t* get_address_of_quality_11() { return &___quality_11; }
	inline void set_quality_11(int32_t value)
	{
		___quality_11 = value;
	}

	inline static int32_t get_offset_of_bloomIntensity_12() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___bloomIntensity_12)); }
	inline float get_bloomIntensity_12() const { return ___bloomIntensity_12; }
	inline float* get_address_of_bloomIntensity_12() { return &___bloomIntensity_12; }
	inline void set_bloomIntensity_12(float value)
	{
		___bloomIntensity_12 = value;
	}

	inline static int32_t get_offset_of_bloomThreshold_13() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___bloomThreshold_13)); }
	inline float get_bloomThreshold_13() const { return ___bloomThreshold_13; }
	inline float* get_address_of_bloomThreshold_13() { return &___bloomThreshold_13; }
	inline void set_bloomThreshold_13(float value)
	{
		___bloomThreshold_13 = value;
	}

	inline static int32_t get_offset_of_bloomThresholdColor_14() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___bloomThresholdColor_14)); }
	inline Color_t2020392075  get_bloomThresholdColor_14() const { return ___bloomThresholdColor_14; }
	inline Color_t2020392075 * get_address_of_bloomThresholdColor_14() { return &___bloomThresholdColor_14; }
	inline void set_bloomThresholdColor_14(Color_t2020392075  value)
	{
		___bloomThresholdColor_14 = value;
	}

	inline static int32_t get_offset_of_bloomBlurIterations_15() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___bloomBlurIterations_15)); }
	inline int32_t get_bloomBlurIterations_15() const { return ___bloomBlurIterations_15; }
	inline int32_t* get_address_of_bloomBlurIterations_15() { return &___bloomBlurIterations_15; }
	inline void set_bloomBlurIterations_15(int32_t value)
	{
		___bloomBlurIterations_15 = value;
	}

	inline static int32_t get_offset_of_hollywoodFlareBlurIterations_16() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___hollywoodFlareBlurIterations_16)); }
	inline int32_t get_hollywoodFlareBlurIterations_16() const { return ___hollywoodFlareBlurIterations_16; }
	inline int32_t* get_address_of_hollywoodFlareBlurIterations_16() { return &___hollywoodFlareBlurIterations_16; }
	inline void set_hollywoodFlareBlurIterations_16(int32_t value)
	{
		___hollywoodFlareBlurIterations_16 = value;
	}

	inline static int32_t get_offset_of_flareRotation_17() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___flareRotation_17)); }
	inline float get_flareRotation_17() const { return ___flareRotation_17; }
	inline float* get_address_of_flareRotation_17() { return &___flareRotation_17; }
	inline void set_flareRotation_17(float value)
	{
		___flareRotation_17 = value;
	}

	inline static int32_t get_offset_of_lensflareMode_18() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___lensflareMode_18)); }
	inline int32_t get_lensflareMode_18() const { return ___lensflareMode_18; }
	inline int32_t* get_address_of_lensflareMode_18() { return &___lensflareMode_18; }
	inline void set_lensflareMode_18(int32_t value)
	{
		___lensflareMode_18 = value;
	}

	inline static int32_t get_offset_of_hollyStretchWidth_19() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___hollyStretchWidth_19)); }
	inline float get_hollyStretchWidth_19() const { return ___hollyStretchWidth_19; }
	inline float* get_address_of_hollyStretchWidth_19() { return &___hollyStretchWidth_19; }
	inline void set_hollyStretchWidth_19(float value)
	{
		___hollyStretchWidth_19 = value;
	}

	inline static int32_t get_offset_of_lensflareIntensity_20() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___lensflareIntensity_20)); }
	inline float get_lensflareIntensity_20() const { return ___lensflareIntensity_20; }
	inline float* get_address_of_lensflareIntensity_20() { return &___lensflareIntensity_20; }
	inline void set_lensflareIntensity_20(float value)
	{
		___lensflareIntensity_20 = value;
	}

	inline static int32_t get_offset_of_lensflareThreshold_21() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___lensflareThreshold_21)); }
	inline float get_lensflareThreshold_21() const { return ___lensflareThreshold_21; }
	inline float* get_address_of_lensflareThreshold_21() { return &___lensflareThreshold_21; }
	inline void set_lensflareThreshold_21(float value)
	{
		___lensflareThreshold_21 = value;
	}

	inline static int32_t get_offset_of_lensFlareSaturation_22() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___lensFlareSaturation_22)); }
	inline float get_lensFlareSaturation_22() const { return ___lensFlareSaturation_22; }
	inline float* get_address_of_lensFlareSaturation_22() { return &___lensFlareSaturation_22; }
	inline void set_lensFlareSaturation_22(float value)
	{
		___lensFlareSaturation_22 = value;
	}

	inline static int32_t get_offset_of_flareColorA_23() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___flareColorA_23)); }
	inline Color_t2020392075  get_flareColorA_23() const { return ___flareColorA_23; }
	inline Color_t2020392075 * get_address_of_flareColorA_23() { return &___flareColorA_23; }
	inline void set_flareColorA_23(Color_t2020392075  value)
	{
		___flareColorA_23 = value;
	}

	inline static int32_t get_offset_of_flareColorB_24() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___flareColorB_24)); }
	inline Color_t2020392075  get_flareColorB_24() const { return ___flareColorB_24; }
	inline Color_t2020392075 * get_address_of_flareColorB_24() { return &___flareColorB_24; }
	inline void set_flareColorB_24(Color_t2020392075  value)
	{
		___flareColorB_24 = value;
	}

	inline static int32_t get_offset_of_flareColorC_25() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___flareColorC_25)); }
	inline Color_t2020392075  get_flareColorC_25() const { return ___flareColorC_25; }
	inline Color_t2020392075 * get_address_of_flareColorC_25() { return &___flareColorC_25; }
	inline void set_flareColorC_25(Color_t2020392075  value)
	{
		___flareColorC_25 = value;
	}

	inline static int32_t get_offset_of_flareColorD_26() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___flareColorD_26)); }
	inline Color_t2020392075  get_flareColorD_26() const { return ___flareColorD_26; }
	inline Color_t2020392075 * get_address_of_flareColorD_26() { return &___flareColorD_26; }
	inline void set_flareColorD_26(Color_t2020392075  value)
	{
		___flareColorD_26 = value;
	}

	inline static int32_t get_offset_of_lensFlareVignetteMask_27() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___lensFlareVignetteMask_27)); }
	inline Texture2D_t3542995729 * get_lensFlareVignetteMask_27() const { return ___lensFlareVignetteMask_27; }
	inline Texture2D_t3542995729 ** get_address_of_lensFlareVignetteMask_27() { return &___lensFlareVignetteMask_27; }
	inline void set_lensFlareVignetteMask_27(Texture2D_t3542995729 * value)
	{
		___lensFlareVignetteMask_27 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareVignetteMask_27, value);
	}

	inline static int32_t get_offset_of_lensFlareShader_28() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___lensFlareShader_28)); }
	inline Shader_t2430389951 * get_lensFlareShader_28() const { return ___lensFlareShader_28; }
	inline Shader_t2430389951 ** get_address_of_lensFlareShader_28() { return &___lensFlareShader_28; }
	inline void set_lensFlareShader_28(Shader_t2430389951 * value)
	{
		___lensFlareShader_28 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareShader_28, value);
	}

	inline static int32_t get_offset_of_lensFlareMaterial_29() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___lensFlareMaterial_29)); }
	inline Material_t193706927 * get_lensFlareMaterial_29() const { return ___lensFlareMaterial_29; }
	inline Material_t193706927 ** get_address_of_lensFlareMaterial_29() { return &___lensFlareMaterial_29; }
	inline void set_lensFlareMaterial_29(Material_t193706927 * value)
	{
		___lensFlareMaterial_29 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareMaterial_29, value);
	}

	inline static int32_t get_offset_of_screenBlendShader_30() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___screenBlendShader_30)); }
	inline Shader_t2430389951 * get_screenBlendShader_30() const { return ___screenBlendShader_30; }
	inline Shader_t2430389951 ** get_address_of_screenBlendShader_30() { return &___screenBlendShader_30; }
	inline void set_screenBlendShader_30(Shader_t2430389951 * value)
	{
		___screenBlendShader_30 = value;
		Il2CppCodeGenWriteBarrier(&___screenBlendShader_30, value);
	}

	inline static int32_t get_offset_of_screenBlend_31() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___screenBlend_31)); }
	inline Material_t193706927 * get_screenBlend_31() const { return ___screenBlend_31; }
	inline Material_t193706927 ** get_address_of_screenBlend_31() { return &___screenBlend_31; }
	inline void set_screenBlend_31(Material_t193706927 * value)
	{
		___screenBlend_31 = value;
		Il2CppCodeGenWriteBarrier(&___screenBlend_31, value);
	}

	inline static int32_t get_offset_of_blurAndFlaresShader_32() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___blurAndFlaresShader_32)); }
	inline Shader_t2430389951 * get_blurAndFlaresShader_32() const { return ___blurAndFlaresShader_32; }
	inline Shader_t2430389951 ** get_address_of_blurAndFlaresShader_32() { return &___blurAndFlaresShader_32; }
	inline void set_blurAndFlaresShader_32(Shader_t2430389951 * value)
	{
		___blurAndFlaresShader_32 = value;
		Il2CppCodeGenWriteBarrier(&___blurAndFlaresShader_32, value);
	}

	inline static int32_t get_offset_of_blurAndFlaresMaterial_33() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___blurAndFlaresMaterial_33)); }
	inline Material_t193706927 * get_blurAndFlaresMaterial_33() const { return ___blurAndFlaresMaterial_33; }
	inline Material_t193706927 ** get_address_of_blurAndFlaresMaterial_33() { return &___blurAndFlaresMaterial_33; }
	inline void set_blurAndFlaresMaterial_33(Material_t193706927 * value)
	{
		___blurAndFlaresMaterial_33 = value;
		Il2CppCodeGenWriteBarrier(&___blurAndFlaresMaterial_33, value);
	}

	inline static int32_t get_offset_of_brightPassFilterShader_34() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___brightPassFilterShader_34)); }
	inline Shader_t2430389951 * get_brightPassFilterShader_34() const { return ___brightPassFilterShader_34; }
	inline Shader_t2430389951 ** get_address_of_brightPassFilterShader_34() { return &___brightPassFilterShader_34; }
	inline void set_brightPassFilterShader_34(Shader_t2430389951 * value)
	{
		___brightPassFilterShader_34 = value;
		Il2CppCodeGenWriteBarrier(&___brightPassFilterShader_34, value);
	}

	inline static int32_t get_offset_of_brightPassFilterMaterial_35() { return static_cast<int32_t>(offsetof(Bloom_t3259153605, ___brightPassFilterMaterial_35)); }
	inline Material_t193706927 * get_brightPassFilterMaterial_35() const { return ___brightPassFilterMaterial_35; }
	inline Material_t193706927 ** get_address_of_brightPassFilterMaterial_35() { return &___brightPassFilterMaterial_35; }
	inline void set_brightPassFilterMaterial_35(Material_t193706927 * value)
	{
		___brightPassFilterMaterial_35 = value;
		Il2CppCodeGenWriteBarrier(&___brightPassFilterMaterial_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
