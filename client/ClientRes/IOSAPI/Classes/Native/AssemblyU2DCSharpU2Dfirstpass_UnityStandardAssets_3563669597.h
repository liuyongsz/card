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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance
struct  ScreenSpaceAmbientObscurance_t3563669597  : public PostEffectsBase_t2152133263
{
public:
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::intensity
	float ___intensity_6;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::radius
	float ___radius_7;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::blurIterations
	int32_t ___blurIterations_8;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::blurFilterDistance
	float ___blurFilterDistance_9;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::downsample
	int32_t ___downsample_10;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::rand
	Texture2D_t3542995729 * ___rand_11;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::aoShader
	Shader_t2430389951 * ___aoShader_12;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::aoMaterial
	Material_t193706927 * ___aoMaterial_13;

public:
	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t3563669597, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}

	inline static int32_t get_offset_of_radius_7() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t3563669597, ___radius_7)); }
	inline float get_radius_7() const { return ___radius_7; }
	inline float* get_address_of_radius_7() { return &___radius_7; }
	inline void set_radius_7(float value)
	{
		___radius_7 = value;
	}

	inline static int32_t get_offset_of_blurIterations_8() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t3563669597, ___blurIterations_8)); }
	inline int32_t get_blurIterations_8() const { return ___blurIterations_8; }
	inline int32_t* get_address_of_blurIterations_8() { return &___blurIterations_8; }
	inline void set_blurIterations_8(int32_t value)
	{
		___blurIterations_8 = value;
	}

	inline static int32_t get_offset_of_blurFilterDistance_9() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t3563669597, ___blurFilterDistance_9)); }
	inline float get_blurFilterDistance_9() const { return ___blurFilterDistance_9; }
	inline float* get_address_of_blurFilterDistance_9() { return &___blurFilterDistance_9; }
	inline void set_blurFilterDistance_9(float value)
	{
		___blurFilterDistance_9 = value;
	}

	inline static int32_t get_offset_of_downsample_10() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t3563669597, ___downsample_10)); }
	inline int32_t get_downsample_10() const { return ___downsample_10; }
	inline int32_t* get_address_of_downsample_10() { return &___downsample_10; }
	inline void set_downsample_10(int32_t value)
	{
		___downsample_10 = value;
	}

	inline static int32_t get_offset_of_rand_11() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t3563669597, ___rand_11)); }
	inline Texture2D_t3542995729 * get_rand_11() const { return ___rand_11; }
	inline Texture2D_t3542995729 ** get_address_of_rand_11() { return &___rand_11; }
	inline void set_rand_11(Texture2D_t3542995729 * value)
	{
		___rand_11 = value;
		Il2CppCodeGenWriteBarrier(&___rand_11, value);
	}

	inline static int32_t get_offset_of_aoShader_12() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t3563669597, ___aoShader_12)); }
	inline Shader_t2430389951 * get_aoShader_12() const { return ___aoShader_12; }
	inline Shader_t2430389951 ** get_address_of_aoShader_12() { return &___aoShader_12; }
	inline void set_aoShader_12(Shader_t2430389951 * value)
	{
		___aoShader_12 = value;
		Il2CppCodeGenWriteBarrier(&___aoShader_12, value);
	}

	inline static int32_t get_offset_of_aoMaterial_13() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t3563669597, ___aoMaterial_13)); }
	inline Material_t193706927 * get_aoMaterial_13() const { return ___aoMaterial_13; }
	inline Material_t193706927 ** get_address_of_aoMaterial_13() { return &___aoMaterial_13; }
	inline void set_aoMaterial_13(Material_t193706927 * value)
	{
		___aoMaterial_13 = value;
		Il2CppCodeGenWriteBarrier(&___aoMaterial_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
