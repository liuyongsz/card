#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Shader
struct Shader_t2430389951;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2152133263.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3694918262.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ColorCorrectionCurves
struct  ColorCorrectionCurves_t3523901841  : public PostEffectsBase_t2152133263
{
public:
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::redChannel
	AnimationCurve_t3306541151 * ___redChannel_6;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::greenChannel
	AnimationCurve_t3306541151 * ___greenChannel_7;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::blueChannel
	AnimationCurve_t3306541151 * ___blueChannel_8;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::useDepthCorrection
	bool ___useDepthCorrection_9;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::zCurve
	AnimationCurve_t3306541151 * ___zCurve_10;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthRedChannel
	AnimationCurve_t3306541151 * ___depthRedChannel_11;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthGreenChannel
	AnimationCurve_t3306541151 * ___depthGreenChannel_12;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthBlueChannel
	AnimationCurve_t3306541151 * ___depthBlueChannel_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::ccMaterial
	Material_t193706927 * ___ccMaterial_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::ccDepthMaterial
	Material_t193706927 * ___ccDepthMaterial_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveCcMaterial
	Material_t193706927 * ___selectiveCcMaterial_16;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::rgbChannelTex
	Texture2D_t3542995729 * ___rgbChannelTex_17;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::rgbDepthChannelTex
	Texture2D_t3542995729 * ___rgbDepthChannelTex_18;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::zCurveTex
	Texture2D_t3542995729 * ___zCurveTex_19;
	// System.Single UnityStandardAssets.ImageEffects.ColorCorrectionCurves::saturation
	float ___saturation_20;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveCc
	bool ___selectiveCc_21;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveFromColor
	Color_t2020392075  ___selectiveFromColor_22;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveToColor
	Color_t2020392075  ___selectiveToColor_23;
	// UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode UnityStandardAssets.ImageEffects.ColorCorrectionCurves::mode
	int32_t ___mode_24;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::updateTextures
	bool ___updateTextures_25;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::colorCorrectionCurvesShader
	Shader_t2430389951 * ___colorCorrectionCurvesShader_26;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::simpleColorCorrectionCurvesShader
	Shader_t2430389951 * ___simpleColorCorrectionCurvesShader_27;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::colorCorrectionSelectiveShader
	Shader_t2430389951 * ___colorCorrectionSelectiveShader_28;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::updateTexturesOnStartup
	bool ___updateTexturesOnStartup_29;

public:
	inline static int32_t get_offset_of_redChannel_6() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___redChannel_6)); }
	inline AnimationCurve_t3306541151 * get_redChannel_6() const { return ___redChannel_6; }
	inline AnimationCurve_t3306541151 ** get_address_of_redChannel_6() { return &___redChannel_6; }
	inline void set_redChannel_6(AnimationCurve_t3306541151 * value)
	{
		___redChannel_6 = value;
		Il2CppCodeGenWriteBarrier(&___redChannel_6, value);
	}

	inline static int32_t get_offset_of_greenChannel_7() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___greenChannel_7)); }
	inline AnimationCurve_t3306541151 * get_greenChannel_7() const { return ___greenChannel_7; }
	inline AnimationCurve_t3306541151 ** get_address_of_greenChannel_7() { return &___greenChannel_7; }
	inline void set_greenChannel_7(AnimationCurve_t3306541151 * value)
	{
		___greenChannel_7 = value;
		Il2CppCodeGenWriteBarrier(&___greenChannel_7, value);
	}

	inline static int32_t get_offset_of_blueChannel_8() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___blueChannel_8)); }
	inline AnimationCurve_t3306541151 * get_blueChannel_8() const { return ___blueChannel_8; }
	inline AnimationCurve_t3306541151 ** get_address_of_blueChannel_8() { return &___blueChannel_8; }
	inline void set_blueChannel_8(AnimationCurve_t3306541151 * value)
	{
		___blueChannel_8 = value;
		Il2CppCodeGenWriteBarrier(&___blueChannel_8, value);
	}

	inline static int32_t get_offset_of_useDepthCorrection_9() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___useDepthCorrection_9)); }
	inline bool get_useDepthCorrection_9() const { return ___useDepthCorrection_9; }
	inline bool* get_address_of_useDepthCorrection_9() { return &___useDepthCorrection_9; }
	inline void set_useDepthCorrection_9(bool value)
	{
		___useDepthCorrection_9 = value;
	}

	inline static int32_t get_offset_of_zCurve_10() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___zCurve_10)); }
	inline AnimationCurve_t3306541151 * get_zCurve_10() const { return ___zCurve_10; }
	inline AnimationCurve_t3306541151 ** get_address_of_zCurve_10() { return &___zCurve_10; }
	inline void set_zCurve_10(AnimationCurve_t3306541151 * value)
	{
		___zCurve_10 = value;
		Il2CppCodeGenWriteBarrier(&___zCurve_10, value);
	}

	inline static int32_t get_offset_of_depthRedChannel_11() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___depthRedChannel_11)); }
	inline AnimationCurve_t3306541151 * get_depthRedChannel_11() const { return ___depthRedChannel_11; }
	inline AnimationCurve_t3306541151 ** get_address_of_depthRedChannel_11() { return &___depthRedChannel_11; }
	inline void set_depthRedChannel_11(AnimationCurve_t3306541151 * value)
	{
		___depthRedChannel_11 = value;
		Il2CppCodeGenWriteBarrier(&___depthRedChannel_11, value);
	}

	inline static int32_t get_offset_of_depthGreenChannel_12() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___depthGreenChannel_12)); }
	inline AnimationCurve_t3306541151 * get_depthGreenChannel_12() const { return ___depthGreenChannel_12; }
	inline AnimationCurve_t3306541151 ** get_address_of_depthGreenChannel_12() { return &___depthGreenChannel_12; }
	inline void set_depthGreenChannel_12(AnimationCurve_t3306541151 * value)
	{
		___depthGreenChannel_12 = value;
		Il2CppCodeGenWriteBarrier(&___depthGreenChannel_12, value);
	}

	inline static int32_t get_offset_of_depthBlueChannel_13() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___depthBlueChannel_13)); }
	inline AnimationCurve_t3306541151 * get_depthBlueChannel_13() const { return ___depthBlueChannel_13; }
	inline AnimationCurve_t3306541151 ** get_address_of_depthBlueChannel_13() { return &___depthBlueChannel_13; }
	inline void set_depthBlueChannel_13(AnimationCurve_t3306541151 * value)
	{
		___depthBlueChannel_13 = value;
		Il2CppCodeGenWriteBarrier(&___depthBlueChannel_13, value);
	}

	inline static int32_t get_offset_of_ccMaterial_14() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___ccMaterial_14)); }
	inline Material_t193706927 * get_ccMaterial_14() const { return ___ccMaterial_14; }
	inline Material_t193706927 ** get_address_of_ccMaterial_14() { return &___ccMaterial_14; }
	inline void set_ccMaterial_14(Material_t193706927 * value)
	{
		___ccMaterial_14 = value;
		Il2CppCodeGenWriteBarrier(&___ccMaterial_14, value);
	}

	inline static int32_t get_offset_of_ccDepthMaterial_15() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___ccDepthMaterial_15)); }
	inline Material_t193706927 * get_ccDepthMaterial_15() const { return ___ccDepthMaterial_15; }
	inline Material_t193706927 ** get_address_of_ccDepthMaterial_15() { return &___ccDepthMaterial_15; }
	inline void set_ccDepthMaterial_15(Material_t193706927 * value)
	{
		___ccDepthMaterial_15 = value;
		Il2CppCodeGenWriteBarrier(&___ccDepthMaterial_15, value);
	}

	inline static int32_t get_offset_of_selectiveCcMaterial_16() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___selectiveCcMaterial_16)); }
	inline Material_t193706927 * get_selectiveCcMaterial_16() const { return ___selectiveCcMaterial_16; }
	inline Material_t193706927 ** get_address_of_selectiveCcMaterial_16() { return &___selectiveCcMaterial_16; }
	inline void set_selectiveCcMaterial_16(Material_t193706927 * value)
	{
		___selectiveCcMaterial_16 = value;
		Il2CppCodeGenWriteBarrier(&___selectiveCcMaterial_16, value);
	}

	inline static int32_t get_offset_of_rgbChannelTex_17() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___rgbChannelTex_17)); }
	inline Texture2D_t3542995729 * get_rgbChannelTex_17() const { return ___rgbChannelTex_17; }
	inline Texture2D_t3542995729 ** get_address_of_rgbChannelTex_17() { return &___rgbChannelTex_17; }
	inline void set_rgbChannelTex_17(Texture2D_t3542995729 * value)
	{
		___rgbChannelTex_17 = value;
		Il2CppCodeGenWriteBarrier(&___rgbChannelTex_17, value);
	}

	inline static int32_t get_offset_of_rgbDepthChannelTex_18() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___rgbDepthChannelTex_18)); }
	inline Texture2D_t3542995729 * get_rgbDepthChannelTex_18() const { return ___rgbDepthChannelTex_18; }
	inline Texture2D_t3542995729 ** get_address_of_rgbDepthChannelTex_18() { return &___rgbDepthChannelTex_18; }
	inline void set_rgbDepthChannelTex_18(Texture2D_t3542995729 * value)
	{
		___rgbDepthChannelTex_18 = value;
		Il2CppCodeGenWriteBarrier(&___rgbDepthChannelTex_18, value);
	}

	inline static int32_t get_offset_of_zCurveTex_19() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___zCurveTex_19)); }
	inline Texture2D_t3542995729 * get_zCurveTex_19() const { return ___zCurveTex_19; }
	inline Texture2D_t3542995729 ** get_address_of_zCurveTex_19() { return &___zCurveTex_19; }
	inline void set_zCurveTex_19(Texture2D_t3542995729 * value)
	{
		___zCurveTex_19 = value;
		Il2CppCodeGenWriteBarrier(&___zCurveTex_19, value);
	}

	inline static int32_t get_offset_of_saturation_20() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___saturation_20)); }
	inline float get_saturation_20() const { return ___saturation_20; }
	inline float* get_address_of_saturation_20() { return &___saturation_20; }
	inline void set_saturation_20(float value)
	{
		___saturation_20 = value;
	}

	inline static int32_t get_offset_of_selectiveCc_21() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___selectiveCc_21)); }
	inline bool get_selectiveCc_21() const { return ___selectiveCc_21; }
	inline bool* get_address_of_selectiveCc_21() { return &___selectiveCc_21; }
	inline void set_selectiveCc_21(bool value)
	{
		___selectiveCc_21 = value;
	}

	inline static int32_t get_offset_of_selectiveFromColor_22() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___selectiveFromColor_22)); }
	inline Color_t2020392075  get_selectiveFromColor_22() const { return ___selectiveFromColor_22; }
	inline Color_t2020392075 * get_address_of_selectiveFromColor_22() { return &___selectiveFromColor_22; }
	inline void set_selectiveFromColor_22(Color_t2020392075  value)
	{
		___selectiveFromColor_22 = value;
	}

	inline static int32_t get_offset_of_selectiveToColor_23() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___selectiveToColor_23)); }
	inline Color_t2020392075  get_selectiveToColor_23() const { return ___selectiveToColor_23; }
	inline Color_t2020392075 * get_address_of_selectiveToColor_23() { return &___selectiveToColor_23; }
	inline void set_selectiveToColor_23(Color_t2020392075  value)
	{
		___selectiveToColor_23 = value;
	}

	inline static int32_t get_offset_of_mode_24() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___mode_24)); }
	inline int32_t get_mode_24() const { return ___mode_24; }
	inline int32_t* get_address_of_mode_24() { return &___mode_24; }
	inline void set_mode_24(int32_t value)
	{
		___mode_24 = value;
	}

	inline static int32_t get_offset_of_updateTextures_25() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___updateTextures_25)); }
	inline bool get_updateTextures_25() const { return ___updateTextures_25; }
	inline bool* get_address_of_updateTextures_25() { return &___updateTextures_25; }
	inline void set_updateTextures_25(bool value)
	{
		___updateTextures_25 = value;
	}

	inline static int32_t get_offset_of_colorCorrectionCurvesShader_26() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___colorCorrectionCurvesShader_26)); }
	inline Shader_t2430389951 * get_colorCorrectionCurvesShader_26() const { return ___colorCorrectionCurvesShader_26; }
	inline Shader_t2430389951 ** get_address_of_colorCorrectionCurvesShader_26() { return &___colorCorrectionCurvesShader_26; }
	inline void set_colorCorrectionCurvesShader_26(Shader_t2430389951 * value)
	{
		___colorCorrectionCurvesShader_26 = value;
		Il2CppCodeGenWriteBarrier(&___colorCorrectionCurvesShader_26, value);
	}

	inline static int32_t get_offset_of_simpleColorCorrectionCurvesShader_27() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___simpleColorCorrectionCurvesShader_27)); }
	inline Shader_t2430389951 * get_simpleColorCorrectionCurvesShader_27() const { return ___simpleColorCorrectionCurvesShader_27; }
	inline Shader_t2430389951 ** get_address_of_simpleColorCorrectionCurvesShader_27() { return &___simpleColorCorrectionCurvesShader_27; }
	inline void set_simpleColorCorrectionCurvesShader_27(Shader_t2430389951 * value)
	{
		___simpleColorCorrectionCurvesShader_27 = value;
		Il2CppCodeGenWriteBarrier(&___simpleColorCorrectionCurvesShader_27, value);
	}

	inline static int32_t get_offset_of_colorCorrectionSelectiveShader_28() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___colorCorrectionSelectiveShader_28)); }
	inline Shader_t2430389951 * get_colorCorrectionSelectiveShader_28() const { return ___colorCorrectionSelectiveShader_28; }
	inline Shader_t2430389951 ** get_address_of_colorCorrectionSelectiveShader_28() { return &___colorCorrectionSelectiveShader_28; }
	inline void set_colorCorrectionSelectiveShader_28(Shader_t2430389951 * value)
	{
		___colorCorrectionSelectiveShader_28 = value;
		Il2CppCodeGenWriteBarrier(&___colorCorrectionSelectiveShader_28, value);
	}

	inline static int32_t get_offset_of_updateTexturesOnStartup_29() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3523901841, ___updateTexturesOnStartup_29)); }
	inline bool get_updateTexturesOnStartup_29() const { return ___updateTexturesOnStartup_29; }
	inline bool* get_address_of_updateTexturesOnStartup_29() { return &___updateTexturesOnStartup_29; }
	inline void set_updateTexturesOnStartup_29(bool value)
	{
		___updateTexturesOnStartup_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
