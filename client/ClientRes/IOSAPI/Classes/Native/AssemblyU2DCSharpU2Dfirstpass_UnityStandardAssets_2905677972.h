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
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2925629392.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.BlurOptimized
struct  BlurOptimized_t2905677972  : public PostEffectsBase_t2152133263
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.BlurOptimized::downsample
	int32_t ___downsample_6;
	// System.Single UnityStandardAssets.ImageEffects.BlurOptimized::blurSize
	float ___blurSize_7;
	// System.Int32 UnityStandardAssets.ImageEffects.BlurOptimized::blurIterations
	int32_t ___blurIterations_8;
	// UnityStandardAssets.ImageEffects.BlurOptimized/BlurType UnityStandardAssets.ImageEffects.BlurOptimized::blurType
	int32_t ___blurType_9;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BlurOptimized::blurShader
	Shader_t2430389951 * ___blurShader_10;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BlurOptimized::blurMaterial
	Material_t193706927 * ___blurMaterial_11;

public:
	inline static int32_t get_offset_of_downsample_6() { return static_cast<int32_t>(offsetof(BlurOptimized_t2905677972, ___downsample_6)); }
	inline int32_t get_downsample_6() const { return ___downsample_6; }
	inline int32_t* get_address_of_downsample_6() { return &___downsample_6; }
	inline void set_downsample_6(int32_t value)
	{
		___downsample_6 = value;
	}

	inline static int32_t get_offset_of_blurSize_7() { return static_cast<int32_t>(offsetof(BlurOptimized_t2905677972, ___blurSize_7)); }
	inline float get_blurSize_7() const { return ___blurSize_7; }
	inline float* get_address_of_blurSize_7() { return &___blurSize_7; }
	inline void set_blurSize_7(float value)
	{
		___blurSize_7 = value;
	}

	inline static int32_t get_offset_of_blurIterations_8() { return static_cast<int32_t>(offsetof(BlurOptimized_t2905677972, ___blurIterations_8)); }
	inline int32_t get_blurIterations_8() const { return ___blurIterations_8; }
	inline int32_t* get_address_of_blurIterations_8() { return &___blurIterations_8; }
	inline void set_blurIterations_8(int32_t value)
	{
		___blurIterations_8 = value;
	}

	inline static int32_t get_offset_of_blurType_9() { return static_cast<int32_t>(offsetof(BlurOptimized_t2905677972, ___blurType_9)); }
	inline int32_t get_blurType_9() const { return ___blurType_9; }
	inline int32_t* get_address_of_blurType_9() { return &___blurType_9; }
	inline void set_blurType_9(int32_t value)
	{
		___blurType_9 = value;
	}

	inline static int32_t get_offset_of_blurShader_10() { return static_cast<int32_t>(offsetof(BlurOptimized_t2905677972, ___blurShader_10)); }
	inline Shader_t2430389951 * get_blurShader_10() const { return ___blurShader_10; }
	inline Shader_t2430389951 ** get_address_of_blurShader_10() { return &___blurShader_10; }
	inline void set_blurShader_10(Shader_t2430389951 * value)
	{
		___blurShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___blurShader_10, value);
	}

	inline static int32_t get_offset_of_blurMaterial_11() { return static_cast<int32_t>(offsetof(BlurOptimized_t2905677972, ___blurMaterial_11)); }
	inline Material_t193706927 * get_blurMaterial_11() const { return ___blurMaterial_11; }
	inline Material_t193706927 ** get_address_of_blurMaterial_11() { return &___blurMaterial_11; }
	inline void set_blurMaterial_11(Material_t193706927 * value)
	{
		___blurMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___blurMaterial_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
