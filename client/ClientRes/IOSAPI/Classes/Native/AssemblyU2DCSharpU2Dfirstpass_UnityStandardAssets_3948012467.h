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

// UnityStandardAssets.ImageEffects.GlobalFog
struct  GlobalFog_t3948012467  : public PostEffectsBase_t2152133263
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::distanceFog
	bool ___distanceFog_6;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::excludeFarPixels
	bool ___excludeFarPixels_7;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::useRadialDistance
	bool ___useRadialDistance_8;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::heightFog
	bool ___heightFog_9;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::height
	float ___height_10;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::heightDensity
	float ___heightDensity_11;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::startDistance
	float ___startDistance_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.GlobalFog::fogShader
	Shader_t2430389951 * ___fogShader_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.GlobalFog::fogMaterial
	Material_t193706927 * ___fogMaterial_14;

public:
	inline static int32_t get_offset_of_distanceFog_6() { return static_cast<int32_t>(offsetof(GlobalFog_t3948012467, ___distanceFog_6)); }
	inline bool get_distanceFog_6() const { return ___distanceFog_6; }
	inline bool* get_address_of_distanceFog_6() { return &___distanceFog_6; }
	inline void set_distanceFog_6(bool value)
	{
		___distanceFog_6 = value;
	}

	inline static int32_t get_offset_of_excludeFarPixels_7() { return static_cast<int32_t>(offsetof(GlobalFog_t3948012467, ___excludeFarPixels_7)); }
	inline bool get_excludeFarPixels_7() const { return ___excludeFarPixels_7; }
	inline bool* get_address_of_excludeFarPixels_7() { return &___excludeFarPixels_7; }
	inline void set_excludeFarPixels_7(bool value)
	{
		___excludeFarPixels_7 = value;
	}

	inline static int32_t get_offset_of_useRadialDistance_8() { return static_cast<int32_t>(offsetof(GlobalFog_t3948012467, ___useRadialDistance_8)); }
	inline bool get_useRadialDistance_8() const { return ___useRadialDistance_8; }
	inline bool* get_address_of_useRadialDistance_8() { return &___useRadialDistance_8; }
	inline void set_useRadialDistance_8(bool value)
	{
		___useRadialDistance_8 = value;
	}

	inline static int32_t get_offset_of_heightFog_9() { return static_cast<int32_t>(offsetof(GlobalFog_t3948012467, ___heightFog_9)); }
	inline bool get_heightFog_9() const { return ___heightFog_9; }
	inline bool* get_address_of_heightFog_9() { return &___heightFog_9; }
	inline void set_heightFog_9(bool value)
	{
		___heightFog_9 = value;
	}

	inline static int32_t get_offset_of_height_10() { return static_cast<int32_t>(offsetof(GlobalFog_t3948012467, ___height_10)); }
	inline float get_height_10() const { return ___height_10; }
	inline float* get_address_of_height_10() { return &___height_10; }
	inline void set_height_10(float value)
	{
		___height_10 = value;
	}

	inline static int32_t get_offset_of_heightDensity_11() { return static_cast<int32_t>(offsetof(GlobalFog_t3948012467, ___heightDensity_11)); }
	inline float get_heightDensity_11() const { return ___heightDensity_11; }
	inline float* get_address_of_heightDensity_11() { return &___heightDensity_11; }
	inline void set_heightDensity_11(float value)
	{
		___heightDensity_11 = value;
	}

	inline static int32_t get_offset_of_startDistance_12() { return static_cast<int32_t>(offsetof(GlobalFog_t3948012467, ___startDistance_12)); }
	inline float get_startDistance_12() const { return ___startDistance_12; }
	inline float* get_address_of_startDistance_12() { return &___startDistance_12; }
	inline void set_startDistance_12(float value)
	{
		___startDistance_12 = value;
	}

	inline static int32_t get_offset_of_fogShader_13() { return static_cast<int32_t>(offsetof(GlobalFog_t3948012467, ___fogShader_13)); }
	inline Shader_t2430389951 * get_fogShader_13() const { return ___fogShader_13; }
	inline Shader_t2430389951 ** get_address_of_fogShader_13() { return &___fogShader_13; }
	inline void set_fogShader_13(Shader_t2430389951 * value)
	{
		___fogShader_13 = value;
		Il2CppCodeGenWriteBarrier(&___fogShader_13, value);
	}

	inline static int32_t get_offset_of_fogMaterial_14() { return static_cast<int32_t>(offsetof(GlobalFog_t3948012467, ___fogMaterial_14)); }
	inline Material_t193706927 * get_fogMaterial_14() const { return ___fogMaterial_14; }
	inline Material_t193706927 ** get_address_of_fogMaterial_14() { return &___fogMaterial_14; }
	inline void set_fogMaterial_14(Material_t193706927 * value)
	{
		___fogMaterial_14 = value;
		Il2CppCodeGenWriteBarrier(&___fogMaterial_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
