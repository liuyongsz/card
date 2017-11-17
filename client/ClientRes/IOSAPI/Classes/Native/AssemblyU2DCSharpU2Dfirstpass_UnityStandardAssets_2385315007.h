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
// UnityEngine.Texture3D
struct Texture3D_t814112374;
// System.String
struct String_t;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2152133263.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
struct  ColorCorrectionLookup_t2385315007  : public PostEffectsBase_t2152133263
{
public:
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionLookup::shader
	Shader_t2430389951 * ___shader_6;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionLookup::material
	Material_t193706927 * ___material_7;
	// UnityEngine.Texture3D UnityStandardAssets.ImageEffects.ColorCorrectionLookup::converted3DLut
	Texture3D_t814112374 * ___converted3DLut_8;
	// System.String UnityStandardAssets.ImageEffects.ColorCorrectionLookup::basedOnTempTex
	String_t* ___basedOnTempTex_9;

public:
	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t2385315007, ___shader_6)); }
	inline Shader_t2430389951 * get_shader_6() const { return ___shader_6; }
	inline Shader_t2430389951 ** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(Shader_t2430389951 * value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier(&___shader_6, value);
	}

	inline static int32_t get_offset_of_material_7() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t2385315007, ___material_7)); }
	inline Material_t193706927 * get_material_7() const { return ___material_7; }
	inline Material_t193706927 ** get_address_of_material_7() { return &___material_7; }
	inline void set_material_7(Material_t193706927 * value)
	{
		___material_7 = value;
		Il2CppCodeGenWriteBarrier(&___material_7, value);
	}

	inline static int32_t get_offset_of_converted3DLut_8() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t2385315007, ___converted3DLut_8)); }
	inline Texture3D_t814112374 * get_converted3DLut_8() const { return ___converted3DLut_8; }
	inline Texture3D_t814112374 ** get_address_of_converted3DLut_8() { return &___converted3DLut_8; }
	inline void set_converted3DLut_8(Texture3D_t814112374 * value)
	{
		___converted3DLut_8 = value;
		Il2CppCodeGenWriteBarrier(&___converted3DLut_8, value);
	}

	inline static int32_t get_offset_of_basedOnTempTex_9() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t2385315007, ___basedOnTempTex_9)); }
	inline String_t* get_basedOnTempTex_9() const { return ___basedOnTempTex_9; }
	inline String_t** get_address_of_basedOnTempTex_9() { return &___basedOnTempTex_9; }
	inline void set_basedOnTempTex_9(String_t* value)
	{
		___basedOnTempTex_9 = value;
		Il2CppCodeGenWriteBarrier(&___basedOnTempTex_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
