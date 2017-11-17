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
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_I430511954.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2215595694.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.TiltShift
struct  TiltShift_t3401316463  : public PostEffectsBase_t2152133263
{
public:
	// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode UnityStandardAssets.ImageEffects.TiltShift::mode
	int32_t ___mode_6;
	// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality UnityStandardAssets.ImageEffects.TiltShift::quality
	int32_t ___quality_7;
	// System.Single UnityStandardAssets.ImageEffects.TiltShift::blurArea
	float ___blurArea_8;
	// System.Single UnityStandardAssets.ImageEffects.TiltShift::maxBlurSize
	float ___maxBlurSize_9;
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift::downsample
	int32_t ___downsample_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.TiltShift::tiltShiftShader
	Shader_t2430389951 * ___tiltShiftShader_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.TiltShift::tiltShiftMaterial
	Material_t193706927 * ___tiltShiftMaterial_12;

public:
	inline static int32_t get_offset_of_mode_6() { return static_cast<int32_t>(offsetof(TiltShift_t3401316463, ___mode_6)); }
	inline int32_t get_mode_6() const { return ___mode_6; }
	inline int32_t* get_address_of_mode_6() { return &___mode_6; }
	inline void set_mode_6(int32_t value)
	{
		___mode_6 = value;
	}

	inline static int32_t get_offset_of_quality_7() { return static_cast<int32_t>(offsetof(TiltShift_t3401316463, ___quality_7)); }
	inline int32_t get_quality_7() const { return ___quality_7; }
	inline int32_t* get_address_of_quality_7() { return &___quality_7; }
	inline void set_quality_7(int32_t value)
	{
		___quality_7 = value;
	}

	inline static int32_t get_offset_of_blurArea_8() { return static_cast<int32_t>(offsetof(TiltShift_t3401316463, ___blurArea_8)); }
	inline float get_blurArea_8() const { return ___blurArea_8; }
	inline float* get_address_of_blurArea_8() { return &___blurArea_8; }
	inline void set_blurArea_8(float value)
	{
		___blurArea_8 = value;
	}

	inline static int32_t get_offset_of_maxBlurSize_9() { return static_cast<int32_t>(offsetof(TiltShift_t3401316463, ___maxBlurSize_9)); }
	inline float get_maxBlurSize_9() const { return ___maxBlurSize_9; }
	inline float* get_address_of_maxBlurSize_9() { return &___maxBlurSize_9; }
	inline void set_maxBlurSize_9(float value)
	{
		___maxBlurSize_9 = value;
	}

	inline static int32_t get_offset_of_downsample_10() { return static_cast<int32_t>(offsetof(TiltShift_t3401316463, ___downsample_10)); }
	inline int32_t get_downsample_10() const { return ___downsample_10; }
	inline int32_t* get_address_of_downsample_10() { return &___downsample_10; }
	inline void set_downsample_10(int32_t value)
	{
		___downsample_10 = value;
	}

	inline static int32_t get_offset_of_tiltShiftShader_11() { return static_cast<int32_t>(offsetof(TiltShift_t3401316463, ___tiltShiftShader_11)); }
	inline Shader_t2430389951 * get_tiltShiftShader_11() const { return ___tiltShiftShader_11; }
	inline Shader_t2430389951 ** get_address_of_tiltShiftShader_11() { return &___tiltShiftShader_11; }
	inline void set_tiltShiftShader_11(Shader_t2430389951 * value)
	{
		___tiltShiftShader_11 = value;
		Il2CppCodeGenWriteBarrier(&___tiltShiftShader_11, value);
	}

	inline static int32_t get_offset_of_tiltShiftMaterial_12() { return static_cast<int32_t>(offsetof(TiltShift_t3401316463, ___tiltShiftMaterial_12)); }
	inline Material_t193706927 * get_tiltShiftMaterial_12() const { return ___tiltShiftMaterial_12; }
	inline Material_t193706927 ** get_address_of_tiltShiftMaterial_12() { return &___tiltShiftMaterial_12; }
	inline void set_tiltShiftMaterial_12(Material_t193706927 * value)
	{
		___tiltShiftMaterial_12 = value;
		Il2CppCodeGenWriteBarrier(&___tiltShiftMaterial_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
