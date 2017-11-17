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
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1254291669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Antialiasing
struct  Antialiasing_t3706046914  : public PostEffectsBase_t2152133263
{
public:
	// UnityStandardAssets.ImageEffects.AAMode UnityStandardAssets.ImageEffects.Antialiasing::mode
	int32_t ___mode_6;
	// System.Boolean UnityStandardAssets.ImageEffects.Antialiasing::showGeneratedNormals
	bool ___showGeneratedNormals_7;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::offsetScale
	float ___offsetScale_8;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::blurRadius
	float ___blurRadius_9;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::edgeThresholdMin
	float ___edgeThresholdMin_10;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::edgeThreshold
	float ___edgeThreshold_11;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::edgeSharpness
	float ___edgeSharpness_12;
	// System.Boolean UnityStandardAssets.ImageEffects.Antialiasing::dlaaSharp
	bool ___dlaaSharp_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::ssaaShader
	Shader_t2430389951 * ___ssaaShader_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::ssaa
	Material_t193706927 * ___ssaa_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::dlaaShader
	Shader_t2430389951 * ___dlaaShader_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::dlaa
	Material_t193706927 * ___dlaa_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::nfaaShader
	Shader_t2430389951 * ___nfaaShader_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::nfaa
	Material_t193706927 * ___nfaa_19;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAPreset2
	Shader_t2430389951 * ___shaderFXAAPreset2_20;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAPreset2
	Material_t193706927 * ___materialFXAAPreset2_21;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAPreset3
	Shader_t2430389951 * ___shaderFXAAPreset3_22;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAPreset3
	Material_t193706927 * ___materialFXAAPreset3_23;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAII
	Shader_t2430389951 * ___shaderFXAAII_24;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAII
	Material_t193706927 * ___materialFXAAII_25;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAIII
	Shader_t2430389951 * ___shaderFXAAIII_26;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAIII
	Material_t193706927 * ___materialFXAAIII_27;

public:
	inline static int32_t get_offset_of_mode_6() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___mode_6)); }
	inline int32_t get_mode_6() const { return ___mode_6; }
	inline int32_t* get_address_of_mode_6() { return &___mode_6; }
	inline void set_mode_6(int32_t value)
	{
		___mode_6 = value;
	}

	inline static int32_t get_offset_of_showGeneratedNormals_7() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___showGeneratedNormals_7)); }
	inline bool get_showGeneratedNormals_7() const { return ___showGeneratedNormals_7; }
	inline bool* get_address_of_showGeneratedNormals_7() { return &___showGeneratedNormals_7; }
	inline void set_showGeneratedNormals_7(bool value)
	{
		___showGeneratedNormals_7 = value;
	}

	inline static int32_t get_offset_of_offsetScale_8() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___offsetScale_8)); }
	inline float get_offsetScale_8() const { return ___offsetScale_8; }
	inline float* get_address_of_offsetScale_8() { return &___offsetScale_8; }
	inline void set_offsetScale_8(float value)
	{
		___offsetScale_8 = value;
	}

	inline static int32_t get_offset_of_blurRadius_9() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___blurRadius_9)); }
	inline float get_blurRadius_9() const { return ___blurRadius_9; }
	inline float* get_address_of_blurRadius_9() { return &___blurRadius_9; }
	inline void set_blurRadius_9(float value)
	{
		___blurRadius_9 = value;
	}

	inline static int32_t get_offset_of_edgeThresholdMin_10() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___edgeThresholdMin_10)); }
	inline float get_edgeThresholdMin_10() const { return ___edgeThresholdMin_10; }
	inline float* get_address_of_edgeThresholdMin_10() { return &___edgeThresholdMin_10; }
	inline void set_edgeThresholdMin_10(float value)
	{
		___edgeThresholdMin_10 = value;
	}

	inline static int32_t get_offset_of_edgeThreshold_11() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___edgeThreshold_11)); }
	inline float get_edgeThreshold_11() const { return ___edgeThreshold_11; }
	inline float* get_address_of_edgeThreshold_11() { return &___edgeThreshold_11; }
	inline void set_edgeThreshold_11(float value)
	{
		___edgeThreshold_11 = value;
	}

	inline static int32_t get_offset_of_edgeSharpness_12() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___edgeSharpness_12)); }
	inline float get_edgeSharpness_12() const { return ___edgeSharpness_12; }
	inline float* get_address_of_edgeSharpness_12() { return &___edgeSharpness_12; }
	inline void set_edgeSharpness_12(float value)
	{
		___edgeSharpness_12 = value;
	}

	inline static int32_t get_offset_of_dlaaSharp_13() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___dlaaSharp_13)); }
	inline bool get_dlaaSharp_13() const { return ___dlaaSharp_13; }
	inline bool* get_address_of_dlaaSharp_13() { return &___dlaaSharp_13; }
	inline void set_dlaaSharp_13(bool value)
	{
		___dlaaSharp_13 = value;
	}

	inline static int32_t get_offset_of_ssaaShader_14() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___ssaaShader_14)); }
	inline Shader_t2430389951 * get_ssaaShader_14() const { return ___ssaaShader_14; }
	inline Shader_t2430389951 ** get_address_of_ssaaShader_14() { return &___ssaaShader_14; }
	inline void set_ssaaShader_14(Shader_t2430389951 * value)
	{
		___ssaaShader_14 = value;
		Il2CppCodeGenWriteBarrier(&___ssaaShader_14, value);
	}

	inline static int32_t get_offset_of_ssaa_15() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___ssaa_15)); }
	inline Material_t193706927 * get_ssaa_15() const { return ___ssaa_15; }
	inline Material_t193706927 ** get_address_of_ssaa_15() { return &___ssaa_15; }
	inline void set_ssaa_15(Material_t193706927 * value)
	{
		___ssaa_15 = value;
		Il2CppCodeGenWriteBarrier(&___ssaa_15, value);
	}

	inline static int32_t get_offset_of_dlaaShader_16() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___dlaaShader_16)); }
	inline Shader_t2430389951 * get_dlaaShader_16() const { return ___dlaaShader_16; }
	inline Shader_t2430389951 ** get_address_of_dlaaShader_16() { return &___dlaaShader_16; }
	inline void set_dlaaShader_16(Shader_t2430389951 * value)
	{
		___dlaaShader_16 = value;
		Il2CppCodeGenWriteBarrier(&___dlaaShader_16, value);
	}

	inline static int32_t get_offset_of_dlaa_17() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___dlaa_17)); }
	inline Material_t193706927 * get_dlaa_17() const { return ___dlaa_17; }
	inline Material_t193706927 ** get_address_of_dlaa_17() { return &___dlaa_17; }
	inline void set_dlaa_17(Material_t193706927 * value)
	{
		___dlaa_17 = value;
		Il2CppCodeGenWriteBarrier(&___dlaa_17, value);
	}

	inline static int32_t get_offset_of_nfaaShader_18() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___nfaaShader_18)); }
	inline Shader_t2430389951 * get_nfaaShader_18() const { return ___nfaaShader_18; }
	inline Shader_t2430389951 ** get_address_of_nfaaShader_18() { return &___nfaaShader_18; }
	inline void set_nfaaShader_18(Shader_t2430389951 * value)
	{
		___nfaaShader_18 = value;
		Il2CppCodeGenWriteBarrier(&___nfaaShader_18, value);
	}

	inline static int32_t get_offset_of_nfaa_19() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___nfaa_19)); }
	inline Material_t193706927 * get_nfaa_19() const { return ___nfaa_19; }
	inline Material_t193706927 ** get_address_of_nfaa_19() { return &___nfaa_19; }
	inline void set_nfaa_19(Material_t193706927 * value)
	{
		___nfaa_19 = value;
		Il2CppCodeGenWriteBarrier(&___nfaa_19, value);
	}

	inline static int32_t get_offset_of_shaderFXAAPreset2_20() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___shaderFXAAPreset2_20)); }
	inline Shader_t2430389951 * get_shaderFXAAPreset2_20() const { return ___shaderFXAAPreset2_20; }
	inline Shader_t2430389951 ** get_address_of_shaderFXAAPreset2_20() { return &___shaderFXAAPreset2_20; }
	inline void set_shaderFXAAPreset2_20(Shader_t2430389951 * value)
	{
		___shaderFXAAPreset2_20 = value;
		Il2CppCodeGenWriteBarrier(&___shaderFXAAPreset2_20, value);
	}

	inline static int32_t get_offset_of_materialFXAAPreset2_21() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___materialFXAAPreset2_21)); }
	inline Material_t193706927 * get_materialFXAAPreset2_21() const { return ___materialFXAAPreset2_21; }
	inline Material_t193706927 ** get_address_of_materialFXAAPreset2_21() { return &___materialFXAAPreset2_21; }
	inline void set_materialFXAAPreset2_21(Material_t193706927 * value)
	{
		___materialFXAAPreset2_21 = value;
		Il2CppCodeGenWriteBarrier(&___materialFXAAPreset2_21, value);
	}

	inline static int32_t get_offset_of_shaderFXAAPreset3_22() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___shaderFXAAPreset3_22)); }
	inline Shader_t2430389951 * get_shaderFXAAPreset3_22() const { return ___shaderFXAAPreset3_22; }
	inline Shader_t2430389951 ** get_address_of_shaderFXAAPreset3_22() { return &___shaderFXAAPreset3_22; }
	inline void set_shaderFXAAPreset3_22(Shader_t2430389951 * value)
	{
		___shaderFXAAPreset3_22 = value;
		Il2CppCodeGenWriteBarrier(&___shaderFXAAPreset3_22, value);
	}

	inline static int32_t get_offset_of_materialFXAAPreset3_23() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___materialFXAAPreset3_23)); }
	inline Material_t193706927 * get_materialFXAAPreset3_23() const { return ___materialFXAAPreset3_23; }
	inline Material_t193706927 ** get_address_of_materialFXAAPreset3_23() { return &___materialFXAAPreset3_23; }
	inline void set_materialFXAAPreset3_23(Material_t193706927 * value)
	{
		___materialFXAAPreset3_23 = value;
		Il2CppCodeGenWriteBarrier(&___materialFXAAPreset3_23, value);
	}

	inline static int32_t get_offset_of_shaderFXAAII_24() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___shaderFXAAII_24)); }
	inline Shader_t2430389951 * get_shaderFXAAII_24() const { return ___shaderFXAAII_24; }
	inline Shader_t2430389951 ** get_address_of_shaderFXAAII_24() { return &___shaderFXAAII_24; }
	inline void set_shaderFXAAII_24(Shader_t2430389951 * value)
	{
		___shaderFXAAII_24 = value;
		Il2CppCodeGenWriteBarrier(&___shaderFXAAII_24, value);
	}

	inline static int32_t get_offset_of_materialFXAAII_25() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___materialFXAAII_25)); }
	inline Material_t193706927 * get_materialFXAAII_25() const { return ___materialFXAAII_25; }
	inline Material_t193706927 ** get_address_of_materialFXAAII_25() { return &___materialFXAAII_25; }
	inline void set_materialFXAAII_25(Material_t193706927 * value)
	{
		___materialFXAAII_25 = value;
		Il2CppCodeGenWriteBarrier(&___materialFXAAII_25, value);
	}

	inline static int32_t get_offset_of_shaderFXAAIII_26() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___shaderFXAAIII_26)); }
	inline Shader_t2430389951 * get_shaderFXAAIII_26() const { return ___shaderFXAAIII_26; }
	inline Shader_t2430389951 ** get_address_of_shaderFXAAIII_26() { return &___shaderFXAAIII_26; }
	inline void set_shaderFXAAIII_26(Shader_t2430389951 * value)
	{
		___shaderFXAAIII_26 = value;
		Il2CppCodeGenWriteBarrier(&___shaderFXAAIII_26, value);
	}

	inline static int32_t get_offset_of_materialFXAAIII_27() { return static_cast<int32_t>(offsetof(Antialiasing_t3706046914, ___materialFXAAIII_27)); }
	inline Material_t193706927 * get_materialFXAAIII_27() const { return ___materialFXAAIII_27; }
	inline Material_t193706927 ** get_address_of_materialFXAAIII_27() { return &___materialFXAAIII_27; }
	inline void set_materialFXAAIII_27(Material_t193706927 * value)
	{
		___materialFXAAIII_27 = value;
		Il2CppCodeGenWriteBarrier(&___materialFXAAIII_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
