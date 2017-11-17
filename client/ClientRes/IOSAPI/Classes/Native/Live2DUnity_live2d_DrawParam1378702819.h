#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Collections.Generic.List`1<live2d.DrawParam/TextureInfo>
struct List_1_t703038525;
// System.Collections.Generic.Dictionary`2<System.Int32,live2d.ColorConverter>
struct Dictionary_2_t4059842336;

#include "mscorlib_System_Object2689449295.h"
#include "Live2DUnity_live2d_DrawParam_ClippingMethod144698581.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.DrawParam
struct  DrawParam_t1378702819  : public Il2CppObject
{
public:
	// System.Int32 live2d.DrawParam::clippingProcess
	int32_t ___clippingProcess_7;
	// System.Int32 live2d.DrawParam::fixedTexureCount
	int32_t ___fixedTexureCount_8;
	// System.Single live2d.DrawParam::baseAlpha
	float ___baseAlpha_9;
	// System.Single live2d.DrawParam::baseRed
	float ___baseRed_10;
	// System.Single live2d.DrawParam::baseGreen
	float ___baseGreen_11;
	// System.Single live2d.DrawParam::baseBlue
	float ___baseBlue_12;
	// System.Boolean live2d.DrawParam::isTextureColorDirty
	bool ___isTextureColorDirty_13;
	// System.Boolean live2d.DrawParam::culling
	bool ___culling_14;
	// System.Boolean live2d.DrawParam::lockCulling
	bool ___lockCulling_15;
	// System.Single[] live2d.DrawParam::matrix
	SingleU5BU5D_t577127397* ___matrix_16;
	// System.Int32 live2d.DrawParam::anisotropy
	int32_t ___anisotropy_17;
	// System.Collections.Generic.List`1<live2d.DrawParam/TextureInfo> live2d.DrawParam::texturesInfo
	List_1_t703038525 * ___texturesInfo_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,live2d.ColorConverter> live2d.DrawParam::colorConverterList
	Dictionary_2_t4059842336 * ___colorConverterList_19;
	// System.Int32 live2d.DrawParam::colorGroupNo
	int32_t ___colorGroupNo_20;
	// System.Int32 live2d.DrawParam::drawStep
	int32_t ___drawStep_21;
	// System.Int32 live2d.DrawParam::drawStepLimit
	int32_t ___drawStepLimit_22;
	// System.Boolean live2d.DrawParam::premultipliedAlpha
	bool ___premultipliedAlpha_23;

public:
	inline static int32_t get_offset_of_clippingProcess_7() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___clippingProcess_7)); }
	inline int32_t get_clippingProcess_7() const { return ___clippingProcess_7; }
	inline int32_t* get_address_of_clippingProcess_7() { return &___clippingProcess_7; }
	inline void set_clippingProcess_7(int32_t value)
	{
		___clippingProcess_7 = value;
	}

	inline static int32_t get_offset_of_fixedTexureCount_8() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___fixedTexureCount_8)); }
	inline int32_t get_fixedTexureCount_8() const { return ___fixedTexureCount_8; }
	inline int32_t* get_address_of_fixedTexureCount_8() { return &___fixedTexureCount_8; }
	inline void set_fixedTexureCount_8(int32_t value)
	{
		___fixedTexureCount_8 = value;
	}

	inline static int32_t get_offset_of_baseAlpha_9() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___baseAlpha_9)); }
	inline float get_baseAlpha_9() const { return ___baseAlpha_9; }
	inline float* get_address_of_baseAlpha_9() { return &___baseAlpha_9; }
	inline void set_baseAlpha_9(float value)
	{
		___baseAlpha_9 = value;
	}

	inline static int32_t get_offset_of_baseRed_10() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___baseRed_10)); }
	inline float get_baseRed_10() const { return ___baseRed_10; }
	inline float* get_address_of_baseRed_10() { return &___baseRed_10; }
	inline void set_baseRed_10(float value)
	{
		___baseRed_10 = value;
	}

	inline static int32_t get_offset_of_baseGreen_11() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___baseGreen_11)); }
	inline float get_baseGreen_11() const { return ___baseGreen_11; }
	inline float* get_address_of_baseGreen_11() { return &___baseGreen_11; }
	inline void set_baseGreen_11(float value)
	{
		___baseGreen_11 = value;
	}

	inline static int32_t get_offset_of_baseBlue_12() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___baseBlue_12)); }
	inline float get_baseBlue_12() const { return ___baseBlue_12; }
	inline float* get_address_of_baseBlue_12() { return &___baseBlue_12; }
	inline void set_baseBlue_12(float value)
	{
		___baseBlue_12 = value;
	}

	inline static int32_t get_offset_of_isTextureColorDirty_13() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___isTextureColorDirty_13)); }
	inline bool get_isTextureColorDirty_13() const { return ___isTextureColorDirty_13; }
	inline bool* get_address_of_isTextureColorDirty_13() { return &___isTextureColorDirty_13; }
	inline void set_isTextureColorDirty_13(bool value)
	{
		___isTextureColorDirty_13 = value;
	}

	inline static int32_t get_offset_of_culling_14() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___culling_14)); }
	inline bool get_culling_14() const { return ___culling_14; }
	inline bool* get_address_of_culling_14() { return &___culling_14; }
	inline void set_culling_14(bool value)
	{
		___culling_14 = value;
	}

	inline static int32_t get_offset_of_lockCulling_15() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___lockCulling_15)); }
	inline bool get_lockCulling_15() const { return ___lockCulling_15; }
	inline bool* get_address_of_lockCulling_15() { return &___lockCulling_15; }
	inline void set_lockCulling_15(bool value)
	{
		___lockCulling_15 = value;
	}

	inline static int32_t get_offset_of_matrix_16() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___matrix_16)); }
	inline SingleU5BU5D_t577127397* get_matrix_16() const { return ___matrix_16; }
	inline SingleU5BU5D_t577127397** get_address_of_matrix_16() { return &___matrix_16; }
	inline void set_matrix_16(SingleU5BU5D_t577127397* value)
	{
		___matrix_16 = value;
		Il2CppCodeGenWriteBarrier(&___matrix_16, value);
	}

	inline static int32_t get_offset_of_anisotropy_17() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___anisotropy_17)); }
	inline int32_t get_anisotropy_17() const { return ___anisotropy_17; }
	inline int32_t* get_address_of_anisotropy_17() { return &___anisotropy_17; }
	inline void set_anisotropy_17(int32_t value)
	{
		___anisotropy_17 = value;
	}

	inline static int32_t get_offset_of_texturesInfo_18() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___texturesInfo_18)); }
	inline List_1_t703038525 * get_texturesInfo_18() const { return ___texturesInfo_18; }
	inline List_1_t703038525 ** get_address_of_texturesInfo_18() { return &___texturesInfo_18; }
	inline void set_texturesInfo_18(List_1_t703038525 * value)
	{
		___texturesInfo_18 = value;
		Il2CppCodeGenWriteBarrier(&___texturesInfo_18, value);
	}

	inline static int32_t get_offset_of_colorConverterList_19() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___colorConverterList_19)); }
	inline Dictionary_2_t4059842336 * get_colorConverterList_19() const { return ___colorConverterList_19; }
	inline Dictionary_2_t4059842336 ** get_address_of_colorConverterList_19() { return &___colorConverterList_19; }
	inline void set_colorConverterList_19(Dictionary_2_t4059842336 * value)
	{
		___colorConverterList_19 = value;
		Il2CppCodeGenWriteBarrier(&___colorConverterList_19, value);
	}

	inline static int32_t get_offset_of_colorGroupNo_20() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___colorGroupNo_20)); }
	inline int32_t get_colorGroupNo_20() const { return ___colorGroupNo_20; }
	inline int32_t* get_address_of_colorGroupNo_20() { return &___colorGroupNo_20; }
	inline void set_colorGroupNo_20(int32_t value)
	{
		___colorGroupNo_20 = value;
	}

	inline static int32_t get_offset_of_drawStep_21() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___drawStep_21)); }
	inline int32_t get_drawStep_21() const { return ___drawStep_21; }
	inline int32_t* get_address_of_drawStep_21() { return &___drawStep_21; }
	inline void set_drawStep_21(int32_t value)
	{
		___drawStep_21 = value;
	}

	inline static int32_t get_offset_of_drawStepLimit_22() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___drawStepLimit_22)); }
	inline int32_t get_drawStepLimit_22() const { return ___drawStepLimit_22; }
	inline int32_t* get_address_of_drawStepLimit_22() { return &___drawStepLimit_22; }
	inline void set_drawStepLimit_22(int32_t value)
	{
		___drawStepLimit_22 = value;
	}

	inline static int32_t get_offset_of_premultipliedAlpha_23() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819, ___premultipliedAlpha_23)); }
	inline bool get_premultipliedAlpha_23() const { return ___premultipliedAlpha_23; }
	inline bool* get_address_of_premultipliedAlpha_23() { return &___premultipliedAlpha_23; }
	inline void set_premultipliedAlpha_23(bool value)
	{
		___premultipliedAlpha_23 = value;
	}
};

struct DrawParam_t1378702819_StaticFields
{
public:
	// live2d.DrawParam/ClippingMethod live2d.DrawParam::CLIP_METHOD
	int32_t ___CLIP_METHOD_1;

public:
	inline static int32_t get_offset_of_CLIP_METHOD_1() { return static_cast<int32_t>(offsetof(DrawParam_t1378702819_StaticFields, ___CLIP_METHOD_1)); }
	inline int32_t get_CLIP_METHOD_1() const { return ___CLIP_METHOD_1; }
	inline int32_t* get_address_of_CLIP_METHOD_1() { return &___CLIP_METHOD_1; }
	inline void set_CLIP_METHOD_1(int32_t value)
	{
		___CLIP_METHOD_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
