#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Type>
struct List_1_t672924358;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<HighlightingSystem.Highlighter/RendererCache>
struct List_1_t1407519224;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.Highlighter
struct  Highlighter_t958778585  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color HighlightingSystem.Highlighter::occluderColor
	Color_t2020392075  ___occluderColor_10;
	// UnityEngine.Transform HighlightingSystem.Highlighter::tr
	Transform_t3275118058 * ___tr_14;
	// System.Collections.Generic.List`1<HighlightingSystem.Highlighter/RendererCache> HighlightingSystem.Highlighter::highlightableRenderers
	List_1_t1407519224 * ___highlightableRenderers_15;
	// System.Int32 HighlightingSystem.Highlighter::visibilityCheckFrame
	int32_t ___visibilityCheckFrame_16;
	// System.Boolean HighlightingSystem.Highlighter::visibilityChanged
	bool ___visibilityChanged_17;
	// System.Boolean HighlightingSystem.Highlighter::visible
	bool ___visible_18;
	// System.Boolean HighlightingSystem.Highlighter::renderersDirty
	bool ___renderersDirty_19;
	// UnityEngine.Color HighlightingSystem.Highlighter::currentColor
	Color_t2020392075  ___currentColor_20;
	// System.Boolean HighlightingSystem.Highlighter::transitionActive
	bool ___transitionActive_21;
	// System.Single HighlightingSystem.Highlighter::transitionValue
	float ___transitionValue_22;
	// System.Single HighlightingSystem.Highlighter::flashingFreq
	float ___flashingFreq_23;
	// System.Int32 HighlightingSystem.Highlighter::_once
	int32_t ____once_24;
	// UnityEngine.Color HighlightingSystem.Highlighter::onceColor
	Color_t2020392075  ___onceColor_25;
	// System.Boolean HighlightingSystem.Highlighter::flashing
	bool ___flashing_26;
	// UnityEngine.Color HighlightingSystem.Highlighter::flashingColorMin
	Color_t2020392075  ___flashingColorMin_27;
	// UnityEngine.Color HighlightingSystem.Highlighter::flashingColorMax
	Color_t2020392075  ___flashingColorMax_28;
	// System.Boolean HighlightingSystem.Highlighter::constantly
	bool ___constantly_29;
	// UnityEngine.Color HighlightingSystem.Highlighter::constantColor
	Color_t2020392075  ___constantColor_30;
	// System.Boolean HighlightingSystem.Highlighter::occluder
	bool ___occluder_31;
	// System.Boolean HighlightingSystem.Highlighter::seeThrough
	bool ___seeThrough_32;
	// System.Boolean HighlightingSystem.Highlighter::renderQueue
	bool ___renderQueue_33;
	// System.Boolean HighlightingSystem.Highlighter::zTest
	bool ___zTest_34;
	// System.Boolean HighlightingSystem.Highlighter::stencilRef
	bool ___stencilRef_35;
	// UnityEngine.Material HighlightingSystem.Highlighter::_opaqueMaterial
	Material_t193706927 * ____opaqueMaterial_38;
	// System.Boolean HighlightingSystem.Highlighter::<highlighted>k__BackingField
	bool ___U3ChighlightedU3Ek__BackingField_39;

public:
	inline static int32_t get_offset_of_occluderColor_10() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___occluderColor_10)); }
	inline Color_t2020392075  get_occluderColor_10() const { return ___occluderColor_10; }
	inline Color_t2020392075 * get_address_of_occluderColor_10() { return &___occluderColor_10; }
	inline void set_occluderColor_10(Color_t2020392075  value)
	{
		___occluderColor_10 = value;
	}

	inline static int32_t get_offset_of_tr_14() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___tr_14)); }
	inline Transform_t3275118058 * get_tr_14() const { return ___tr_14; }
	inline Transform_t3275118058 ** get_address_of_tr_14() { return &___tr_14; }
	inline void set_tr_14(Transform_t3275118058 * value)
	{
		___tr_14 = value;
		Il2CppCodeGenWriteBarrier(&___tr_14, value);
	}

	inline static int32_t get_offset_of_highlightableRenderers_15() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___highlightableRenderers_15)); }
	inline List_1_t1407519224 * get_highlightableRenderers_15() const { return ___highlightableRenderers_15; }
	inline List_1_t1407519224 ** get_address_of_highlightableRenderers_15() { return &___highlightableRenderers_15; }
	inline void set_highlightableRenderers_15(List_1_t1407519224 * value)
	{
		___highlightableRenderers_15 = value;
		Il2CppCodeGenWriteBarrier(&___highlightableRenderers_15, value);
	}

	inline static int32_t get_offset_of_visibilityCheckFrame_16() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___visibilityCheckFrame_16)); }
	inline int32_t get_visibilityCheckFrame_16() const { return ___visibilityCheckFrame_16; }
	inline int32_t* get_address_of_visibilityCheckFrame_16() { return &___visibilityCheckFrame_16; }
	inline void set_visibilityCheckFrame_16(int32_t value)
	{
		___visibilityCheckFrame_16 = value;
	}

	inline static int32_t get_offset_of_visibilityChanged_17() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___visibilityChanged_17)); }
	inline bool get_visibilityChanged_17() const { return ___visibilityChanged_17; }
	inline bool* get_address_of_visibilityChanged_17() { return &___visibilityChanged_17; }
	inline void set_visibilityChanged_17(bool value)
	{
		___visibilityChanged_17 = value;
	}

	inline static int32_t get_offset_of_visible_18() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___visible_18)); }
	inline bool get_visible_18() const { return ___visible_18; }
	inline bool* get_address_of_visible_18() { return &___visible_18; }
	inline void set_visible_18(bool value)
	{
		___visible_18 = value;
	}

	inline static int32_t get_offset_of_renderersDirty_19() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___renderersDirty_19)); }
	inline bool get_renderersDirty_19() const { return ___renderersDirty_19; }
	inline bool* get_address_of_renderersDirty_19() { return &___renderersDirty_19; }
	inline void set_renderersDirty_19(bool value)
	{
		___renderersDirty_19 = value;
	}

	inline static int32_t get_offset_of_currentColor_20() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___currentColor_20)); }
	inline Color_t2020392075  get_currentColor_20() const { return ___currentColor_20; }
	inline Color_t2020392075 * get_address_of_currentColor_20() { return &___currentColor_20; }
	inline void set_currentColor_20(Color_t2020392075  value)
	{
		___currentColor_20 = value;
	}

	inline static int32_t get_offset_of_transitionActive_21() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___transitionActive_21)); }
	inline bool get_transitionActive_21() const { return ___transitionActive_21; }
	inline bool* get_address_of_transitionActive_21() { return &___transitionActive_21; }
	inline void set_transitionActive_21(bool value)
	{
		___transitionActive_21 = value;
	}

	inline static int32_t get_offset_of_transitionValue_22() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___transitionValue_22)); }
	inline float get_transitionValue_22() const { return ___transitionValue_22; }
	inline float* get_address_of_transitionValue_22() { return &___transitionValue_22; }
	inline void set_transitionValue_22(float value)
	{
		___transitionValue_22 = value;
	}

	inline static int32_t get_offset_of_flashingFreq_23() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___flashingFreq_23)); }
	inline float get_flashingFreq_23() const { return ___flashingFreq_23; }
	inline float* get_address_of_flashingFreq_23() { return &___flashingFreq_23; }
	inline void set_flashingFreq_23(float value)
	{
		___flashingFreq_23 = value;
	}

	inline static int32_t get_offset_of__once_24() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ____once_24)); }
	inline int32_t get__once_24() const { return ____once_24; }
	inline int32_t* get_address_of__once_24() { return &____once_24; }
	inline void set__once_24(int32_t value)
	{
		____once_24 = value;
	}

	inline static int32_t get_offset_of_onceColor_25() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___onceColor_25)); }
	inline Color_t2020392075  get_onceColor_25() const { return ___onceColor_25; }
	inline Color_t2020392075 * get_address_of_onceColor_25() { return &___onceColor_25; }
	inline void set_onceColor_25(Color_t2020392075  value)
	{
		___onceColor_25 = value;
	}

	inline static int32_t get_offset_of_flashing_26() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___flashing_26)); }
	inline bool get_flashing_26() const { return ___flashing_26; }
	inline bool* get_address_of_flashing_26() { return &___flashing_26; }
	inline void set_flashing_26(bool value)
	{
		___flashing_26 = value;
	}

	inline static int32_t get_offset_of_flashingColorMin_27() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___flashingColorMin_27)); }
	inline Color_t2020392075  get_flashingColorMin_27() const { return ___flashingColorMin_27; }
	inline Color_t2020392075 * get_address_of_flashingColorMin_27() { return &___flashingColorMin_27; }
	inline void set_flashingColorMin_27(Color_t2020392075  value)
	{
		___flashingColorMin_27 = value;
	}

	inline static int32_t get_offset_of_flashingColorMax_28() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___flashingColorMax_28)); }
	inline Color_t2020392075  get_flashingColorMax_28() const { return ___flashingColorMax_28; }
	inline Color_t2020392075 * get_address_of_flashingColorMax_28() { return &___flashingColorMax_28; }
	inline void set_flashingColorMax_28(Color_t2020392075  value)
	{
		___flashingColorMax_28 = value;
	}

	inline static int32_t get_offset_of_constantly_29() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___constantly_29)); }
	inline bool get_constantly_29() const { return ___constantly_29; }
	inline bool* get_address_of_constantly_29() { return &___constantly_29; }
	inline void set_constantly_29(bool value)
	{
		___constantly_29 = value;
	}

	inline static int32_t get_offset_of_constantColor_30() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___constantColor_30)); }
	inline Color_t2020392075  get_constantColor_30() const { return ___constantColor_30; }
	inline Color_t2020392075 * get_address_of_constantColor_30() { return &___constantColor_30; }
	inline void set_constantColor_30(Color_t2020392075  value)
	{
		___constantColor_30 = value;
	}

	inline static int32_t get_offset_of_occluder_31() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___occluder_31)); }
	inline bool get_occluder_31() const { return ___occluder_31; }
	inline bool* get_address_of_occluder_31() { return &___occluder_31; }
	inline void set_occluder_31(bool value)
	{
		___occluder_31 = value;
	}

	inline static int32_t get_offset_of_seeThrough_32() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___seeThrough_32)); }
	inline bool get_seeThrough_32() const { return ___seeThrough_32; }
	inline bool* get_address_of_seeThrough_32() { return &___seeThrough_32; }
	inline void set_seeThrough_32(bool value)
	{
		___seeThrough_32 = value;
	}

	inline static int32_t get_offset_of_renderQueue_33() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___renderQueue_33)); }
	inline bool get_renderQueue_33() const { return ___renderQueue_33; }
	inline bool* get_address_of_renderQueue_33() { return &___renderQueue_33; }
	inline void set_renderQueue_33(bool value)
	{
		___renderQueue_33 = value;
	}

	inline static int32_t get_offset_of_zTest_34() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___zTest_34)); }
	inline bool get_zTest_34() const { return ___zTest_34; }
	inline bool* get_address_of_zTest_34() { return &___zTest_34; }
	inline void set_zTest_34(bool value)
	{
		___zTest_34 = value;
	}

	inline static int32_t get_offset_of_stencilRef_35() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___stencilRef_35)); }
	inline bool get_stencilRef_35() const { return ___stencilRef_35; }
	inline bool* get_address_of_stencilRef_35() { return &___stencilRef_35; }
	inline void set_stencilRef_35(bool value)
	{
		___stencilRef_35 = value;
	}

	inline static int32_t get_offset_of__opaqueMaterial_38() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ____opaqueMaterial_38)); }
	inline Material_t193706927 * get__opaqueMaterial_38() const { return ____opaqueMaterial_38; }
	inline Material_t193706927 ** get_address_of__opaqueMaterial_38() { return &____opaqueMaterial_38; }
	inline void set__opaqueMaterial_38(Material_t193706927 * value)
	{
		____opaqueMaterial_38 = value;
		Il2CppCodeGenWriteBarrier(&____opaqueMaterial_38, value);
	}

	inline static int32_t get_offset_of_U3ChighlightedU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Highlighter_t958778585, ___U3ChighlightedU3Ek__BackingField_39)); }
	inline bool get_U3ChighlightedU3Ek__BackingField_39() const { return ___U3ChighlightedU3Ek__BackingField_39; }
	inline bool* get_address_of_U3ChighlightedU3Ek__BackingField_39() { return &___U3ChighlightedU3Ek__BackingField_39; }
	inline void set_U3ChighlightedU3Ek__BackingField_39(bool value)
	{
		___U3ChighlightedU3Ek__BackingField_39 = value;
	}
};

struct Highlighter_t958778585_StaticFields
{
public:
	// System.Single HighlightingSystem.Highlighter::constantOnSpeed
	float ___constantOnSpeed_6;
	// System.Single HighlightingSystem.Highlighter::constantOffSpeed
	float ___constantOffSpeed_7;
	// System.Single HighlightingSystem.Highlighter::transparentCutoff
	float ___transparentCutoff_8;
	// System.Collections.Generic.List`1<System.Type> HighlightingSystem.Highlighter::types
	List_1_t672924358 * ___types_9;
	// System.Single HighlightingSystem.Highlighter::zWrite
	float ___zWrite_11;
	// System.Single HighlightingSystem.Highlighter::offsetFactor
	float ___offsetFactor_12;
	// System.Single HighlightingSystem.Highlighter::offsetUnits
	float ___offsetUnits_13;
	// UnityEngine.Shader HighlightingSystem.Highlighter::_opaqueShader
	Shader_t2430389951 * ____opaqueShader_36;
	// UnityEngine.Shader HighlightingSystem.Highlighter::_transparentShader
	Shader_t2430389951 * ____transparentShader_37;

public:
	inline static int32_t get_offset_of_constantOnSpeed_6() { return static_cast<int32_t>(offsetof(Highlighter_t958778585_StaticFields, ___constantOnSpeed_6)); }
	inline float get_constantOnSpeed_6() const { return ___constantOnSpeed_6; }
	inline float* get_address_of_constantOnSpeed_6() { return &___constantOnSpeed_6; }
	inline void set_constantOnSpeed_6(float value)
	{
		___constantOnSpeed_6 = value;
	}

	inline static int32_t get_offset_of_constantOffSpeed_7() { return static_cast<int32_t>(offsetof(Highlighter_t958778585_StaticFields, ___constantOffSpeed_7)); }
	inline float get_constantOffSpeed_7() const { return ___constantOffSpeed_7; }
	inline float* get_address_of_constantOffSpeed_7() { return &___constantOffSpeed_7; }
	inline void set_constantOffSpeed_7(float value)
	{
		___constantOffSpeed_7 = value;
	}

	inline static int32_t get_offset_of_transparentCutoff_8() { return static_cast<int32_t>(offsetof(Highlighter_t958778585_StaticFields, ___transparentCutoff_8)); }
	inline float get_transparentCutoff_8() const { return ___transparentCutoff_8; }
	inline float* get_address_of_transparentCutoff_8() { return &___transparentCutoff_8; }
	inline void set_transparentCutoff_8(float value)
	{
		___transparentCutoff_8 = value;
	}

	inline static int32_t get_offset_of_types_9() { return static_cast<int32_t>(offsetof(Highlighter_t958778585_StaticFields, ___types_9)); }
	inline List_1_t672924358 * get_types_9() const { return ___types_9; }
	inline List_1_t672924358 ** get_address_of_types_9() { return &___types_9; }
	inline void set_types_9(List_1_t672924358 * value)
	{
		___types_9 = value;
		Il2CppCodeGenWriteBarrier(&___types_9, value);
	}

	inline static int32_t get_offset_of_zWrite_11() { return static_cast<int32_t>(offsetof(Highlighter_t958778585_StaticFields, ___zWrite_11)); }
	inline float get_zWrite_11() const { return ___zWrite_11; }
	inline float* get_address_of_zWrite_11() { return &___zWrite_11; }
	inline void set_zWrite_11(float value)
	{
		___zWrite_11 = value;
	}

	inline static int32_t get_offset_of_offsetFactor_12() { return static_cast<int32_t>(offsetof(Highlighter_t958778585_StaticFields, ___offsetFactor_12)); }
	inline float get_offsetFactor_12() const { return ___offsetFactor_12; }
	inline float* get_address_of_offsetFactor_12() { return &___offsetFactor_12; }
	inline void set_offsetFactor_12(float value)
	{
		___offsetFactor_12 = value;
	}

	inline static int32_t get_offset_of_offsetUnits_13() { return static_cast<int32_t>(offsetof(Highlighter_t958778585_StaticFields, ___offsetUnits_13)); }
	inline float get_offsetUnits_13() const { return ___offsetUnits_13; }
	inline float* get_address_of_offsetUnits_13() { return &___offsetUnits_13; }
	inline void set_offsetUnits_13(float value)
	{
		___offsetUnits_13 = value;
	}

	inline static int32_t get_offset_of__opaqueShader_36() { return static_cast<int32_t>(offsetof(Highlighter_t958778585_StaticFields, ____opaqueShader_36)); }
	inline Shader_t2430389951 * get__opaqueShader_36() const { return ____opaqueShader_36; }
	inline Shader_t2430389951 ** get_address_of__opaqueShader_36() { return &____opaqueShader_36; }
	inline void set__opaqueShader_36(Shader_t2430389951 * value)
	{
		____opaqueShader_36 = value;
		Il2CppCodeGenWriteBarrier(&____opaqueShader_36, value);
	}

	inline static int32_t get_offset_of__transparentShader_37() { return static_cast<int32_t>(offsetof(Highlighter_t958778585_StaticFields, ____transparentShader_37)); }
	inline Shader_t2430389951 * get__transparentShader_37() const { return ____transparentShader_37; }
	inline Shader_t2430389951 ** get_address_of__transparentShader_37() { return &____transparentShader_37; }
	inline void set__transparentShader_37(Shader_t2430389951 * value)
	{
		____transparentShader_37 = value;
		Il2CppCodeGenWriteBarrier(&____transparentShader_37, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
