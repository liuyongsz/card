#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIFont
struct UIFont_t389944949;
// UnityEngine.Font
struct Font_t4239498691;
// NGUIText/GlyphInfo
struct GlyphInfo_t3590955929;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t2240780717;
// BetterList`1<System.Single>
struct BetterList_1_t2296898574;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"
#include "AssemblyU2DCSharp_NGUIText_Alignment3620437664.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_NGUIText_SymbolStyle2170314704.h"
#include "UnityEngine_UnityEngine_CharacterInfo3919092135.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NGUIText
struct  NGUIText_t2042929214  : public Il2CppObject
{
public:

public:
};

struct NGUIText_t2042929214_StaticFields
{
public:
	// UIFont NGUIText::bitmapFont
	UIFont_t389944949 * ___bitmapFont_0;
	// UnityEngine.Font NGUIText::dynamicFont
	Font_t4239498691 * ___dynamicFont_1;
	// NGUIText/GlyphInfo NGUIText::glyph
	GlyphInfo_t3590955929 * ___glyph_2;
	// System.Int32 NGUIText::fontSize
	int32_t ___fontSize_3;
	// System.Single NGUIText::fontScale
	float ___fontScale_4;
	// System.Single NGUIText::pixelDensity
	float ___pixelDensity_5;
	// UnityEngine.FontStyle NGUIText::fontStyle
	int32_t ___fontStyle_6;
	// NGUIText/Alignment NGUIText::alignment
	int32_t ___alignment_7;
	// UnityEngine.Color NGUIText::tint
	Color_t2020392075  ___tint_8;
	// System.Int32 NGUIText::rectWidth
	int32_t ___rectWidth_9;
	// System.Int32 NGUIText::rectHeight
	int32_t ___rectHeight_10;
	// System.Int32 NGUIText::maxLines
	int32_t ___maxLines_11;
	// System.Boolean NGUIText::gradient
	bool ___gradient_12;
	// UnityEngine.Color NGUIText::gradientBottom
	Color_t2020392075  ___gradientBottom_13;
	// UnityEngine.Color NGUIText::gradientTop
	Color_t2020392075  ___gradientTop_14;
	// System.Boolean NGUIText::encoding
	bool ___encoding_15;
	// System.Single NGUIText::spacingX
	float ___spacingX_16;
	// System.Single NGUIText::spacingY
	float ___spacingY_17;
	// System.Boolean NGUIText::premultiply
	bool ___premultiply_18;
	// NGUIText/SymbolStyle NGUIText::symbolStyle
	int32_t ___symbolStyle_19;
	// System.Int32 NGUIText::finalSize
	int32_t ___finalSize_20;
	// System.Single NGUIText::finalSpacingX
	float ___finalSpacingX_21;
	// System.Single NGUIText::finalLineHeight
	float ___finalLineHeight_22;
	// System.Single NGUIText::baseline
	float ___baseline_23;
	// System.Boolean NGUIText::useSymbols
	bool ___useSymbols_24;
	// UnityEngine.Color NGUIText::mInvisible
	Color_t2020392075  ___mInvisible_25;
	// BetterList`1<UnityEngine.Color> NGUIText::mColors
	BetterList_1_t2240780717 * ___mColors_26;
	// UnityEngine.CharacterInfo NGUIText::mTempChar
	CharacterInfo_t3919092135  ___mTempChar_27;
	// BetterList`1<System.Single> NGUIText::mSizes
	BetterList_1_t2296898574 * ___mSizes_28;
	// UnityEngine.Color32 NGUIText::s_c0
	Color32_t874517518  ___s_c0_29;
	// UnityEngine.Color32 NGUIText::s_c1
	Color32_t874517518  ___s_c1_30;
	// System.Single[] NGUIText::mBoldOffset
	SingleU5BU5D_t577127397* ___mBoldOffset_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NGUIText::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NGUIText::<>f__switch$map1
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map1_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NGUIText::<>f__switch$map2
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map2_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NGUIText::<>f__switch$map3
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map3_35;

public:
	inline static int32_t get_offset_of_bitmapFont_0() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___bitmapFont_0)); }
	inline UIFont_t389944949 * get_bitmapFont_0() const { return ___bitmapFont_0; }
	inline UIFont_t389944949 ** get_address_of_bitmapFont_0() { return &___bitmapFont_0; }
	inline void set_bitmapFont_0(UIFont_t389944949 * value)
	{
		___bitmapFont_0 = value;
		Il2CppCodeGenWriteBarrier(&___bitmapFont_0, value);
	}

	inline static int32_t get_offset_of_dynamicFont_1() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___dynamicFont_1)); }
	inline Font_t4239498691 * get_dynamicFont_1() const { return ___dynamicFont_1; }
	inline Font_t4239498691 ** get_address_of_dynamicFont_1() { return &___dynamicFont_1; }
	inline void set_dynamicFont_1(Font_t4239498691 * value)
	{
		___dynamicFont_1 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicFont_1, value);
	}

	inline static int32_t get_offset_of_glyph_2() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___glyph_2)); }
	inline GlyphInfo_t3590955929 * get_glyph_2() const { return ___glyph_2; }
	inline GlyphInfo_t3590955929 ** get_address_of_glyph_2() { return &___glyph_2; }
	inline void set_glyph_2(GlyphInfo_t3590955929 * value)
	{
		___glyph_2 = value;
		Il2CppCodeGenWriteBarrier(&___glyph_2, value);
	}

	inline static int32_t get_offset_of_fontSize_3() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___fontSize_3)); }
	inline int32_t get_fontSize_3() const { return ___fontSize_3; }
	inline int32_t* get_address_of_fontSize_3() { return &___fontSize_3; }
	inline void set_fontSize_3(int32_t value)
	{
		___fontSize_3 = value;
	}

	inline static int32_t get_offset_of_fontScale_4() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___fontScale_4)); }
	inline float get_fontScale_4() const { return ___fontScale_4; }
	inline float* get_address_of_fontScale_4() { return &___fontScale_4; }
	inline void set_fontScale_4(float value)
	{
		___fontScale_4 = value;
	}

	inline static int32_t get_offset_of_pixelDensity_5() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___pixelDensity_5)); }
	inline float get_pixelDensity_5() const { return ___pixelDensity_5; }
	inline float* get_address_of_pixelDensity_5() { return &___pixelDensity_5; }
	inline void set_pixelDensity_5(float value)
	{
		___pixelDensity_5 = value;
	}

	inline static int32_t get_offset_of_fontStyle_6() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___fontStyle_6)); }
	inline int32_t get_fontStyle_6() const { return ___fontStyle_6; }
	inline int32_t* get_address_of_fontStyle_6() { return &___fontStyle_6; }
	inline void set_fontStyle_6(int32_t value)
	{
		___fontStyle_6 = value;
	}

	inline static int32_t get_offset_of_alignment_7() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___alignment_7)); }
	inline int32_t get_alignment_7() const { return ___alignment_7; }
	inline int32_t* get_address_of_alignment_7() { return &___alignment_7; }
	inline void set_alignment_7(int32_t value)
	{
		___alignment_7 = value;
	}

	inline static int32_t get_offset_of_tint_8() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___tint_8)); }
	inline Color_t2020392075  get_tint_8() const { return ___tint_8; }
	inline Color_t2020392075 * get_address_of_tint_8() { return &___tint_8; }
	inline void set_tint_8(Color_t2020392075  value)
	{
		___tint_8 = value;
	}

	inline static int32_t get_offset_of_rectWidth_9() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___rectWidth_9)); }
	inline int32_t get_rectWidth_9() const { return ___rectWidth_9; }
	inline int32_t* get_address_of_rectWidth_9() { return &___rectWidth_9; }
	inline void set_rectWidth_9(int32_t value)
	{
		___rectWidth_9 = value;
	}

	inline static int32_t get_offset_of_rectHeight_10() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___rectHeight_10)); }
	inline int32_t get_rectHeight_10() const { return ___rectHeight_10; }
	inline int32_t* get_address_of_rectHeight_10() { return &___rectHeight_10; }
	inline void set_rectHeight_10(int32_t value)
	{
		___rectHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxLines_11() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___maxLines_11)); }
	inline int32_t get_maxLines_11() const { return ___maxLines_11; }
	inline int32_t* get_address_of_maxLines_11() { return &___maxLines_11; }
	inline void set_maxLines_11(int32_t value)
	{
		___maxLines_11 = value;
	}

	inline static int32_t get_offset_of_gradient_12() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___gradient_12)); }
	inline bool get_gradient_12() const { return ___gradient_12; }
	inline bool* get_address_of_gradient_12() { return &___gradient_12; }
	inline void set_gradient_12(bool value)
	{
		___gradient_12 = value;
	}

	inline static int32_t get_offset_of_gradientBottom_13() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___gradientBottom_13)); }
	inline Color_t2020392075  get_gradientBottom_13() const { return ___gradientBottom_13; }
	inline Color_t2020392075 * get_address_of_gradientBottom_13() { return &___gradientBottom_13; }
	inline void set_gradientBottom_13(Color_t2020392075  value)
	{
		___gradientBottom_13 = value;
	}

	inline static int32_t get_offset_of_gradientTop_14() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___gradientTop_14)); }
	inline Color_t2020392075  get_gradientTop_14() const { return ___gradientTop_14; }
	inline Color_t2020392075 * get_address_of_gradientTop_14() { return &___gradientTop_14; }
	inline void set_gradientTop_14(Color_t2020392075  value)
	{
		___gradientTop_14 = value;
	}

	inline static int32_t get_offset_of_encoding_15() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___encoding_15)); }
	inline bool get_encoding_15() const { return ___encoding_15; }
	inline bool* get_address_of_encoding_15() { return &___encoding_15; }
	inline void set_encoding_15(bool value)
	{
		___encoding_15 = value;
	}

	inline static int32_t get_offset_of_spacingX_16() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___spacingX_16)); }
	inline float get_spacingX_16() const { return ___spacingX_16; }
	inline float* get_address_of_spacingX_16() { return &___spacingX_16; }
	inline void set_spacingX_16(float value)
	{
		___spacingX_16 = value;
	}

	inline static int32_t get_offset_of_spacingY_17() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___spacingY_17)); }
	inline float get_spacingY_17() const { return ___spacingY_17; }
	inline float* get_address_of_spacingY_17() { return &___spacingY_17; }
	inline void set_spacingY_17(float value)
	{
		___spacingY_17 = value;
	}

	inline static int32_t get_offset_of_premultiply_18() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___premultiply_18)); }
	inline bool get_premultiply_18() const { return ___premultiply_18; }
	inline bool* get_address_of_premultiply_18() { return &___premultiply_18; }
	inline void set_premultiply_18(bool value)
	{
		___premultiply_18 = value;
	}

	inline static int32_t get_offset_of_symbolStyle_19() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___symbolStyle_19)); }
	inline int32_t get_symbolStyle_19() const { return ___symbolStyle_19; }
	inline int32_t* get_address_of_symbolStyle_19() { return &___symbolStyle_19; }
	inline void set_symbolStyle_19(int32_t value)
	{
		___symbolStyle_19 = value;
	}

	inline static int32_t get_offset_of_finalSize_20() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___finalSize_20)); }
	inline int32_t get_finalSize_20() const { return ___finalSize_20; }
	inline int32_t* get_address_of_finalSize_20() { return &___finalSize_20; }
	inline void set_finalSize_20(int32_t value)
	{
		___finalSize_20 = value;
	}

	inline static int32_t get_offset_of_finalSpacingX_21() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___finalSpacingX_21)); }
	inline float get_finalSpacingX_21() const { return ___finalSpacingX_21; }
	inline float* get_address_of_finalSpacingX_21() { return &___finalSpacingX_21; }
	inline void set_finalSpacingX_21(float value)
	{
		___finalSpacingX_21 = value;
	}

	inline static int32_t get_offset_of_finalLineHeight_22() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___finalLineHeight_22)); }
	inline float get_finalLineHeight_22() const { return ___finalLineHeight_22; }
	inline float* get_address_of_finalLineHeight_22() { return &___finalLineHeight_22; }
	inline void set_finalLineHeight_22(float value)
	{
		___finalLineHeight_22 = value;
	}

	inline static int32_t get_offset_of_baseline_23() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___baseline_23)); }
	inline float get_baseline_23() const { return ___baseline_23; }
	inline float* get_address_of_baseline_23() { return &___baseline_23; }
	inline void set_baseline_23(float value)
	{
		___baseline_23 = value;
	}

	inline static int32_t get_offset_of_useSymbols_24() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___useSymbols_24)); }
	inline bool get_useSymbols_24() const { return ___useSymbols_24; }
	inline bool* get_address_of_useSymbols_24() { return &___useSymbols_24; }
	inline void set_useSymbols_24(bool value)
	{
		___useSymbols_24 = value;
	}

	inline static int32_t get_offset_of_mInvisible_25() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___mInvisible_25)); }
	inline Color_t2020392075  get_mInvisible_25() const { return ___mInvisible_25; }
	inline Color_t2020392075 * get_address_of_mInvisible_25() { return &___mInvisible_25; }
	inline void set_mInvisible_25(Color_t2020392075  value)
	{
		___mInvisible_25 = value;
	}

	inline static int32_t get_offset_of_mColors_26() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___mColors_26)); }
	inline BetterList_1_t2240780717 * get_mColors_26() const { return ___mColors_26; }
	inline BetterList_1_t2240780717 ** get_address_of_mColors_26() { return &___mColors_26; }
	inline void set_mColors_26(BetterList_1_t2240780717 * value)
	{
		___mColors_26 = value;
		Il2CppCodeGenWriteBarrier(&___mColors_26, value);
	}

	inline static int32_t get_offset_of_mTempChar_27() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___mTempChar_27)); }
	inline CharacterInfo_t3919092135  get_mTempChar_27() const { return ___mTempChar_27; }
	inline CharacterInfo_t3919092135 * get_address_of_mTempChar_27() { return &___mTempChar_27; }
	inline void set_mTempChar_27(CharacterInfo_t3919092135  value)
	{
		___mTempChar_27 = value;
	}

	inline static int32_t get_offset_of_mSizes_28() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___mSizes_28)); }
	inline BetterList_1_t2296898574 * get_mSizes_28() const { return ___mSizes_28; }
	inline BetterList_1_t2296898574 ** get_address_of_mSizes_28() { return &___mSizes_28; }
	inline void set_mSizes_28(BetterList_1_t2296898574 * value)
	{
		___mSizes_28 = value;
		Il2CppCodeGenWriteBarrier(&___mSizes_28, value);
	}

	inline static int32_t get_offset_of_s_c0_29() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___s_c0_29)); }
	inline Color32_t874517518  get_s_c0_29() const { return ___s_c0_29; }
	inline Color32_t874517518 * get_address_of_s_c0_29() { return &___s_c0_29; }
	inline void set_s_c0_29(Color32_t874517518  value)
	{
		___s_c0_29 = value;
	}

	inline static int32_t get_offset_of_s_c1_30() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___s_c1_30)); }
	inline Color32_t874517518  get_s_c1_30() const { return ___s_c1_30; }
	inline Color32_t874517518 * get_address_of_s_c1_30() { return &___s_c1_30; }
	inline void set_s_c1_30(Color32_t874517518  value)
	{
		___s_c1_30 = value;
	}

	inline static int32_t get_offset_of_mBoldOffset_31() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___mBoldOffset_31)); }
	inline SingleU5BU5D_t577127397* get_mBoldOffset_31() const { return ___mBoldOffset_31; }
	inline SingleU5BU5D_t577127397** get_address_of_mBoldOffset_31() { return &___mBoldOffset_31; }
	inline void set_mBoldOffset_31(SingleU5BU5D_t577127397* value)
	{
		___mBoldOffset_31 = value;
		Il2CppCodeGenWriteBarrier(&___mBoldOffset_31, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_32() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___U3CU3Ef__switchU24map0_32)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_32() const { return ___U3CU3Ef__switchU24map0_32; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_32() { return &___U3CU3Ef__switchU24map0_32; }
	inline void set_U3CU3Ef__switchU24map0_32(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_32, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_33() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___U3CU3Ef__switchU24map1_33)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map1_33() const { return ___U3CU3Ef__switchU24map1_33; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map1_33() { return &___U3CU3Ef__switchU24map1_33; }
	inline void set_U3CU3Ef__switchU24map1_33(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map1_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_33, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_34() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___U3CU3Ef__switchU24map2_34)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map2_34() const { return ___U3CU3Ef__switchU24map2_34; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map2_34() { return &___U3CU3Ef__switchU24map2_34; }
	inline void set_U3CU3Ef__switchU24map2_34(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map2_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2_34, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_35() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___U3CU3Ef__switchU24map3_35)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map3_35() const { return ___U3CU3Ef__switchU24map3_35; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map3_35() { return &___U3CU3Ef__switchU24map3_35; }
	inline void set_U3CU3Ef__switchU24map3_35(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map3_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map3_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
