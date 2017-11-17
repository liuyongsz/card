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

// UnityStandardAssets.ImageEffects.Fisheye
struct  Fisheye_t863619287  : public PostEffectsBase_t2152133263
{
public:
	// System.Single UnityStandardAssets.ImageEffects.Fisheye::strengthX
	float ___strengthX_6;
	// System.Single UnityStandardAssets.ImageEffects.Fisheye::strengthY
	float ___strengthY_7;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Fisheye::fishEyeShader
	Shader_t2430389951 * ___fishEyeShader_8;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Fisheye::fisheyeMaterial
	Material_t193706927 * ___fisheyeMaterial_9;

public:
	inline static int32_t get_offset_of_strengthX_6() { return static_cast<int32_t>(offsetof(Fisheye_t863619287, ___strengthX_6)); }
	inline float get_strengthX_6() const { return ___strengthX_6; }
	inline float* get_address_of_strengthX_6() { return &___strengthX_6; }
	inline void set_strengthX_6(float value)
	{
		___strengthX_6 = value;
	}

	inline static int32_t get_offset_of_strengthY_7() { return static_cast<int32_t>(offsetof(Fisheye_t863619287, ___strengthY_7)); }
	inline float get_strengthY_7() const { return ___strengthY_7; }
	inline float* get_address_of_strengthY_7() { return &___strengthY_7; }
	inline void set_strengthY_7(float value)
	{
		___strengthY_7 = value;
	}

	inline static int32_t get_offset_of_fishEyeShader_8() { return static_cast<int32_t>(offsetof(Fisheye_t863619287, ___fishEyeShader_8)); }
	inline Shader_t2430389951 * get_fishEyeShader_8() const { return ___fishEyeShader_8; }
	inline Shader_t2430389951 ** get_address_of_fishEyeShader_8() { return &___fishEyeShader_8; }
	inline void set_fishEyeShader_8(Shader_t2430389951 * value)
	{
		___fishEyeShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___fishEyeShader_8, value);
	}

	inline static int32_t get_offset_of_fisheyeMaterial_9() { return static_cast<int32_t>(offsetof(Fisheye_t863619287, ___fisheyeMaterial_9)); }
	inline Material_t193706927 * get_fisheyeMaterial_9() const { return ___fisheyeMaterial_9; }
	inline Material_t193706927 ** get_address_of_fisheyeMaterial_9() { return &___fisheyeMaterial_9; }
	inline void set_fisheyeMaterial_9(Material_t193706927 * value)
	{
		___fisheyeMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___fisheyeMaterial_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
