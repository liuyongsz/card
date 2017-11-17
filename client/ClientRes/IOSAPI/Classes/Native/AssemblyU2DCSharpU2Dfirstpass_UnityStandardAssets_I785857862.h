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
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_I859433922.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.EdgeDetection
struct  EdgeDetection_t785857862  : public PostEffectsBase_t2152133263
{
public:
	// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode UnityStandardAssets.ImageEffects.EdgeDetection::mode
	int32_t ___mode_6;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sensitivityDepth
	float ___sensitivityDepth_7;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sensitivityNormals
	float ___sensitivityNormals_8;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::lumThreshold
	float ___lumThreshold_9;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::edgeExp
	float ___edgeExp_10;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sampleDist
	float ___sampleDist_11;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::edgesOnly
	float ___edgesOnly_12;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.EdgeDetection::edgesOnlyBgColor
	Color_t2020392075  ___edgesOnlyBgColor_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.EdgeDetection::edgeDetectShader
	Shader_t2430389951 * ___edgeDetectShader_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.EdgeDetection::edgeDetectMaterial
	Material_t193706927 * ___edgeDetectMaterial_15;
	// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode UnityStandardAssets.ImageEffects.EdgeDetection::oldMode
	int32_t ___oldMode_16;

public:
	inline static int32_t get_offset_of_mode_6() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___mode_6)); }
	inline int32_t get_mode_6() const { return ___mode_6; }
	inline int32_t* get_address_of_mode_6() { return &___mode_6; }
	inline void set_mode_6(int32_t value)
	{
		___mode_6 = value;
	}

	inline static int32_t get_offset_of_sensitivityDepth_7() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___sensitivityDepth_7)); }
	inline float get_sensitivityDepth_7() const { return ___sensitivityDepth_7; }
	inline float* get_address_of_sensitivityDepth_7() { return &___sensitivityDepth_7; }
	inline void set_sensitivityDepth_7(float value)
	{
		___sensitivityDepth_7 = value;
	}

	inline static int32_t get_offset_of_sensitivityNormals_8() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___sensitivityNormals_8)); }
	inline float get_sensitivityNormals_8() const { return ___sensitivityNormals_8; }
	inline float* get_address_of_sensitivityNormals_8() { return &___sensitivityNormals_8; }
	inline void set_sensitivityNormals_8(float value)
	{
		___sensitivityNormals_8 = value;
	}

	inline static int32_t get_offset_of_lumThreshold_9() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___lumThreshold_9)); }
	inline float get_lumThreshold_9() const { return ___lumThreshold_9; }
	inline float* get_address_of_lumThreshold_9() { return &___lumThreshold_9; }
	inline void set_lumThreshold_9(float value)
	{
		___lumThreshold_9 = value;
	}

	inline static int32_t get_offset_of_edgeExp_10() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___edgeExp_10)); }
	inline float get_edgeExp_10() const { return ___edgeExp_10; }
	inline float* get_address_of_edgeExp_10() { return &___edgeExp_10; }
	inline void set_edgeExp_10(float value)
	{
		___edgeExp_10 = value;
	}

	inline static int32_t get_offset_of_sampleDist_11() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___sampleDist_11)); }
	inline float get_sampleDist_11() const { return ___sampleDist_11; }
	inline float* get_address_of_sampleDist_11() { return &___sampleDist_11; }
	inline void set_sampleDist_11(float value)
	{
		___sampleDist_11 = value;
	}

	inline static int32_t get_offset_of_edgesOnly_12() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___edgesOnly_12)); }
	inline float get_edgesOnly_12() const { return ___edgesOnly_12; }
	inline float* get_address_of_edgesOnly_12() { return &___edgesOnly_12; }
	inline void set_edgesOnly_12(float value)
	{
		___edgesOnly_12 = value;
	}

	inline static int32_t get_offset_of_edgesOnlyBgColor_13() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___edgesOnlyBgColor_13)); }
	inline Color_t2020392075  get_edgesOnlyBgColor_13() const { return ___edgesOnlyBgColor_13; }
	inline Color_t2020392075 * get_address_of_edgesOnlyBgColor_13() { return &___edgesOnlyBgColor_13; }
	inline void set_edgesOnlyBgColor_13(Color_t2020392075  value)
	{
		___edgesOnlyBgColor_13 = value;
	}

	inline static int32_t get_offset_of_edgeDetectShader_14() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___edgeDetectShader_14)); }
	inline Shader_t2430389951 * get_edgeDetectShader_14() const { return ___edgeDetectShader_14; }
	inline Shader_t2430389951 ** get_address_of_edgeDetectShader_14() { return &___edgeDetectShader_14; }
	inline void set_edgeDetectShader_14(Shader_t2430389951 * value)
	{
		___edgeDetectShader_14 = value;
		Il2CppCodeGenWriteBarrier(&___edgeDetectShader_14, value);
	}

	inline static int32_t get_offset_of_edgeDetectMaterial_15() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___edgeDetectMaterial_15)); }
	inline Material_t193706927 * get_edgeDetectMaterial_15() const { return ___edgeDetectMaterial_15; }
	inline Material_t193706927 ** get_address_of_edgeDetectMaterial_15() { return &___edgeDetectMaterial_15; }
	inline void set_edgeDetectMaterial_15(Material_t193706927 * value)
	{
		___edgeDetectMaterial_15 = value;
		Il2CppCodeGenWriteBarrier(&___edgeDetectMaterial_15, value);
	}

	inline static int32_t get_offset_of_oldMode_16() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___oldMode_16)); }
	inline int32_t get_oldMode_16() const { return ___oldMode_16; }
	inline int32_t* get_address_of_oldMode_16() { return &___oldMode_16; }
	inline void set_oldMode_16(int32_t value)
	{
		___oldMode_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
