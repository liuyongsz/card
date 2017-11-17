#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIPopupList
struct UIPopupList_t109953940;
// UIAtlas
struct UIAtlas_t1304615221;
// UIFont
struct UIFont_t389944949;
// UnityEngine.Font
struct Font_t4239498691;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2865430313;
// UIPanel
struct UIPanel_t1795085332;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UISprite
struct UISprite_t603616735;
// UILabel
struct UILabel_t1795115428;
// System.Collections.Generic.List`1<UILabel>
struct List_1_t1164236560;
// UIPopupList/LegacyEvent
struct LegacyEvent_t3991167770;

#include "AssemblyU2DCSharp_UIWidgetContainer701016325.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"
#include "AssemblyU2DCSharp_UIPopupList_Position1780870098.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPopupList
struct  UIPopupList_t109953940  : public UIWidgetContainer_t701016325
{
public:
	// UIAtlas UIPopupList::atlas
	UIAtlas_t1304615221 * ___atlas_4;
	// UIFont UIPopupList::bitmapFont
	UIFont_t389944949 * ___bitmapFont_5;
	// UnityEngine.Font UIPopupList::trueTypeFont
	Font_t4239498691 * ___trueTypeFont_6;
	// System.Int32 UIPopupList::fontSize
	int32_t ___fontSize_7;
	// UnityEngine.FontStyle UIPopupList::fontStyle
	int32_t ___fontStyle_8;
	// System.String UIPopupList::backgroundSprite
	String_t* ___backgroundSprite_9;
	// System.String UIPopupList::highlightSprite
	String_t* ___highlightSprite_10;
	// UIPopupList/Position UIPopupList::position
	int32_t ___position_11;
	// System.Collections.Generic.List`1<System.String> UIPopupList::items
	List_1_t1398341365 * ___items_12;
	// UnityEngine.Vector2 UIPopupList::padding
	Vector2_t2243707579  ___padding_13;
	// UnityEngine.Color UIPopupList::textColor
	Color_t2020392075  ___textColor_14;
	// UnityEngine.Color UIPopupList::backgroundColor
	Color_t2020392075  ___backgroundColor_15;
	// UnityEngine.Color UIPopupList::highlightColor
	Color_t2020392075  ___highlightColor_16;
	// System.Boolean UIPopupList::isAnimated
	bool ___isAnimated_17;
	// System.Boolean UIPopupList::isLocalized
	bool ___isLocalized_18;
	// System.Boolean UIPopupList::isCenter
	bool ___isCenter_19;
	// System.Collections.Generic.List`1<EventDelegate> UIPopupList::onChange
	List_1_t2865430313 * ___onChange_20;
	// System.String UIPopupList::mSelectedItem
	String_t* ___mSelectedItem_21;
	// UIPanel UIPopupList::mPanel
	UIPanel_t1795085332 * ___mPanel_22;
	// UnityEngine.GameObject UIPopupList::mChild
	GameObject_t1756533147 * ___mChild_23;
	// UISprite UIPopupList::mBackground
	UISprite_t603616735 * ___mBackground_24;
	// UISprite UIPopupList::mHighlight
	UISprite_t603616735 * ___mHighlight_25;
	// UILabel UIPopupList::mHighlightedLabel
	UILabel_t1795115428 * ___mHighlightedLabel_26;
	// System.Collections.Generic.List`1<UILabel> UIPopupList::mLabelList
	List_1_t1164236560 * ___mLabelList_27;
	// System.Single UIPopupList::mBgBorder
	float ___mBgBorder_28;
	// UnityEngine.GameObject UIPopupList::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_29;
	// System.String UIPopupList::functionName
	String_t* ___functionName_30;
	// System.Single UIPopupList::textScale
	float ___textScale_31;
	// UIFont UIPopupList::font
	UIFont_t389944949 * ___font_32;
	// UILabel UIPopupList::textLabel
	UILabel_t1795115428 * ___textLabel_33;
	// UIPopupList/LegacyEvent UIPopupList::mLegacyEvent
	LegacyEvent_t3991167770 * ___mLegacyEvent_34;
	// System.Boolean UIPopupList::mUseDynamicFont
	bool ___mUseDynamicFont_35;

public:
	inline static int32_t get_offset_of_atlas_4() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___atlas_4)); }
	inline UIAtlas_t1304615221 * get_atlas_4() const { return ___atlas_4; }
	inline UIAtlas_t1304615221 ** get_address_of_atlas_4() { return &___atlas_4; }
	inline void set_atlas_4(UIAtlas_t1304615221 * value)
	{
		___atlas_4 = value;
		Il2CppCodeGenWriteBarrier(&___atlas_4, value);
	}

	inline static int32_t get_offset_of_bitmapFont_5() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___bitmapFont_5)); }
	inline UIFont_t389944949 * get_bitmapFont_5() const { return ___bitmapFont_5; }
	inline UIFont_t389944949 ** get_address_of_bitmapFont_5() { return &___bitmapFont_5; }
	inline void set_bitmapFont_5(UIFont_t389944949 * value)
	{
		___bitmapFont_5 = value;
		Il2CppCodeGenWriteBarrier(&___bitmapFont_5, value);
	}

	inline static int32_t get_offset_of_trueTypeFont_6() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___trueTypeFont_6)); }
	inline Font_t4239498691 * get_trueTypeFont_6() const { return ___trueTypeFont_6; }
	inline Font_t4239498691 ** get_address_of_trueTypeFont_6() { return &___trueTypeFont_6; }
	inline void set_trueTypeFont_6(Font_t4239498691 * value)
	{
		___trueTypeFont_6 = value;
		Il2CppCodeGenWriteBarrier(&___trueTypeFont_6, value);
	}

	inline static int32_t get_offset_of_fontSize_7() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___fontSize_7)); }
	inline int32_t get_fontSize_7() const { return ___fontSize_7; }
	inline int32_t* get_address_of_fontSize_7() { return &___fontSize_7; }
	inline void set_fontSize_7(int32_t value)
	{
		___fontSize_7 = value;
	}

	inline static int32_t get_offset_of_fontStyle_8() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___fontStyle_8)); }
	inline int32_t get_fontStyle_8() const { return ___fontStyle_8; }
	inline int32_t* get_address_of_fontStyle_8() { return &___fontStyle_8; }
	inline void set_fontStyle_8(int32_t value)
	{
		___fontStyle_8 = value;
	}

	inline static int32_t get_offset_of_backgroundSprite_9() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___backgroundSprite_9)); }
	inline String_t* get_backgroundSprite_9() const { return ___backgroundSprite_9; }
	inline String_t** get_address_of_backgroundSprite_9() { return &___backgroundSprite_9; }
	inline void set_backgroundSprite_9(String_t* value)
	{
		___backgroundSprite_9 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundSprite_9, value);
	}

	inline static int32_t get_offset_of_highlightSprite_10() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___highlightSprite_10)); }
	inline String_t* get_highlightSprite_10() const { return ___highlightSprite_10; }
	inline String_t** get_address_of_highlightSprite_10() { return &___highlightSprite_10; }
	inline void set_highlightSprite_10(String_t* value)
	{
		___highlightSprite_10 = value;
		Il2CppCodeGenWriteBarrier(&___highlightSprite_10, value);
	}

	inline static int32_t get_offset_of_position_11() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___position_11)); }
	inline int32_t get_position_11() const { return ___position_11; }
	inline int32_t* get_address_of_position_11() { return &___position_11; }
	inline void set_position_11(int32_t value)
	{
		___position_11 = value;
	}

	inline static int32_t get_offset_of_items_12() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___items_12)); }
	inline List_1_t1398341365 * get_items_12() const { return ___items_12; }
	inline List_1_t1398341365 ** get_address_of_items_12() { return &___items_12; }
	inline void set_items_12(List_1_t1398341365 * value)
	{
		___items_12 = value;
		Il2CppCodeGenWriteBarrier(&___items_12, value);
	}

	inline static int32_t get_offset_of_padding_13() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___padding_13)); }
	inline Vector2_t2243707579  get_padding_13() const { return ___padding_13; }
	inline Vector2_t2243707579 * get_address_of_padding_13() { return &___padding_13; }
	inline void set_padding_13(Vector2_t2243707579  value)
	{
		___padding_13 = value;
	}

	inline static int32_t get_offset_of_textColor_14() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___textColor_14)); }
	inline Color_t2020392075  get_textColor_14() const { return ___textColor_14; }
	inline Color_t2020392075 * get_address_of_textColor_14() { return &___textColor_14; }
	inline void set_textColor_14(Color_t2020392075  value)
	{
		___textColor_14 = value;
	}

	inline static int32_t get_offset_of_backgroundColor_15() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___backgroundColor_15)); }
	inline Color_t2020392075  get_backgroundColor_15() const { return ___backgroundColor_15; }
	inline Color_t2020392075 * get_address_of_backgroundColor_15() { return &___backgroundColor_15; }
	inline void set_backgroundColor_15(Color_t2020392075  value)
	{
		___backgroundColor_15 = value;
	}

	inline static int32_t get_offset_of_highlightColor_16() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___highlightColor_16)); }
	inline Color_t2020392075  get_highlightColor_16() const { return ___highlightColor_16; }
	inline Color_t2020392075 * get_address_of_highlightColor_16() { return &___highlightColor_16; }
	inline void set_highlightColor_16(Color_t2020392075  value)
	{
		___highlightColor_16 = value;
	}

	inline static int32_t get_offset_of_isAnimated_17() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___isAnimated_17)); }
	inline bool get_isAnimated_17() const { return ___isAnimated_17; }
	inline bool* get_address_of_isAnimated_17() { return &___isAnimated_17; }
	inline void set_isAnimated_17(bool value)
	{
		___isAnimated_17 = value;
	}

	inline static int32_t get_offset_of_isLocalized_18() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___isLocalized_18)); }
	inline bool get_isLocalized_18() const { return ___isLocalized_18; }
	inline bool* get_address_of_isLocalized_18() { return &___isLocalized_18; }
	inline void set_isLocalized_18(bool value)
	{
		___isLocalized_18 = value;
	}

	inline static int32_t get_offset_of_isCenter_19() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___isCenter_19)); }
	inline bool get_isCenter_19() const { return ___isCenter_19; }
	inline bool* get_address_of_isCenter_19() { return &___isCenter_19; }
	inline void set_isCenter_19(bool value)
	{
		___isCenter_19 = value;
	}

	inline static int32_t get_offset_of_onChange_20() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___onChange_20)); }
	inline List_1_t2865430313 * get_onChange_20() const { return ___onChange_20; }
	inline List_1_t2865430313 ** get_address_of_onChange_20() { return &___onChange_20; }
	inline void set_onChange_20(List_1_t2865430313 * value)
	{
		___onChange_20 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_20, value);
	}

	inline static int32_t get_offset_of_mSelectedItem_21() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mSelectedItem_21)); }
	inline String_t* get_mSelectedItem_21() const { return ___mSelectedItem_21; }
	inline String_t** get_address_of_mSelectedItem_21() { return &___mSelectedItem_21; }
	inline void set_mSelectedItem_21(String_t* value)
	{
		___mSelectedItem_21 = value;
		Il2CppCodeGenWriteBarrier(&___mSelectedItem_21, value);
	}

	inline static int32_t get_offset_of_mPanel_22() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mPanel_22)); }
	inline UIPanel_t1795085332 * get_mPanel_22() const { return ___mPanel_22; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_22() { return &___mPanel_22; }
	inline void set_mPanel_22(UIPanel_t1795085332 * value)
	{
		___mPanel_22 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_22, value);
	}

	inline static int32_t get_offset_of_mChild_23() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mChild_23)); }
	inline GameObject_t1756533147 * get_mChild_23() const { return ___mChild_23; }
	inline GameObject_t1756533147 ** get_address_of_mChild_23() { return &___mChild_23; }
	inline void set_mChild_23(GameObject_t1756533147 * value)
	{
		___mChild_23 = value;
		Il2CppCodeGenWriteBarrier(&___mChild_23, value);
	}

	inline static int32_t get_offset_of_mBackground_24() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mBackground_24)); }
	inline UISprite_t603616735 * get_mBackground_24() const { return ___mBackground_24; }
	inline UISprite_t603616735 ** get_address_of_mBackground_24() { return &___mBackground_24; }
	inline void set_mBackground_24(UISprite_t603616735 * value)
	{
		___mBackground_24 = value;
		Il2CppCodeGenWriteBarrier(&___mBackground_24, value);
	}

	inline static int32_t get_offset_of_mHighlight_25() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mHighlight_25)); }
	inline UISprite_t603616735 * get_mHighlight_25() const { return ___mHighlight_25; }
	inline UISprite_t603616735 ** get_address_of_mHighlight_25() { return &___mHighlight_25; }
	inline void set_mHighlight_25(UISprite_t603616735 * value)
	{
		___mHighlight_25 = value;
		Il2CppCodeGenWriteBarrier(&___mHighlight_25, value);
	}

	inline static int32_t get_offset_of_mHighlightedLabel_26() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mHighlightedLabel_26)); }
	inline UILabel_t1795115428 * get_mHighlightedLabel_26() const { return ___mHighlightedLabel_26; }
	inline UILabel_t1795115428 ** get_address_of_mHighlightedLabel_26() { return &___mHighlightedLabel_26; }
	inline void set_mHighlightedLabel_26(UILabel_t1795115428 * value)
	{
		___mHighlightedLabel_26 = value;
		Il2CppCodeGenWriteBarrier(&___mHighlightedLabel_26, value);
	}

	inline static int32_t get_offset_of_mLabelList_27() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mLabelList_27)); }
	inline List_1_t1164236560 * get_mLabelList_27() const { return ___mLabelList_27; }
	inline List_1_t1164236560 ** get_address_of_mLabelList_27() { return &___mLabelList_27; }
	inline void set_mLabelList_27(List_1_t1164236560 * value)
	{
		___mLabelList_27 = value;
		Il2CppCodeGenWriteBarrier(&___mLabelList_27, value);
	}

	inline static int32_t get_offset_of_mBgBorder_28() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mBgBorder_28)); }
	inline float get_mBgBorder_28() const { return ___mBgBorder_28; }
	inline float* get_address_of_mBgBorder_28() { return &___mBgBorder_28; }
	inline void set_mBgBorder_28(float value)
	{
		___mBgBorder_28 = value;
	}

	inline static int32_t get_offset_of_eventReceiver_29() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___eventReceiver_29)); }
	inline GameObject_t1756533147 * get_eventReceiver_29() const { return ___eventReceiver_29; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_29() { return &___eventReceiver_29; }
	inline void set_eventReceiver_29(GameObject_t1756533147 * value)
	{
		___eventReceiver_29 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_29, value);
	}

	inline static int32_t get_offset_of_functionName_30() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___functionName_30)); }
	inline String_t* get_functionName_30() const { return ___functionName_30; }
	inline String_t** get_address_of_functionName_30() { return &___functionName_30; }
	inline void set_functionName_30(String_t* value)
	{
		___functionName_30 = value;
		Il2CppCodeGenWriteBarrier(&___functionName_30, value);
	}

	inline static int32_t get_offset_of_textScale_31() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___textScale_31)); }
	inline float get_textScale_31() const { return ___textScale_31; }
	inline float* get_address_of_textScale_31() { return &___textScale_31; }
	inline void set_textScale_31(float value)
	{
		___textScale_31 = value;
	}

	inline static int32_t get_offset_of_font_32() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___font_32)); }
	inline UIFont_t389944949 * get_font_32() const { return ___font_32; }
	inline UIFont_t389944949 ** get_address_of_font_32() { return &___font_32; }
	inline void set_font_32(UIFont_t389944949 * value)
	{
		___font_32 = value;
		Il2CppCodeGenWriteBarrier(&___font_32, value);
	}

	inline static int32_t get_offset_of_textLabel_33() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___textLabel_33)); }
	inline UILabel_t1795115428 * get_textLabel_33() const { return ___textLabel_33; }
	inline UILabel_t1795115428 ** get_address_of_textLabel_33() { return &___textLabel_33; }
	inline void set_textLabel_33(UILabel_t1795115428 * value)
	{
		___textLabel_33 = value;
		Il2CppCodeGenWriteBarrier(&___textLabel_33, value);
	}

	inline static int32_t get_offset_of_mLegacyEvent_34() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mLegacyEvent_34)); }
	inline LegacyEvent_t3991167770 * get_mLegacyEvent_34() const { return ___mLegacyEvent_34; }
	inline LegacyEvent_t3991167770 ** get_address_of_mLegacyEvent_34() { return &___mLegacyEvent_34; }
	inline void set_mLegacyEvent_34(LegacyEvent_t3991167770 * value)
	{
		___mLegacyEvent_34 = value;
		Il2CppCodeGenWriteBarrier(&___mLegacyEvent_34, value);
	}

	inline static int32_t get_offset_of_mUseDynamicFont_35() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mUseDynamicFont_35)); }
	inline bool get_mUseDynamicFont_35() const { return ___mUseDynamicFont_35; }
	inline bool* get_address_of_mUseDynamicFont_35() { return &___mUseDynamicFont_35; }
	inline void set_mUseDynamicFont_35(bool value)
	{
		___mUseDynamicFont_35 = value;
	}
};

struct UIPopupList_t109953940_StaticFields
{
public:
	// UIPopupList UIPopupList::current
	UIPopupList_t109953940 * ___current_3;

public:
	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940_StaticFields, ___current_3)); }
	inline UIPopupList_t109953940 * get_current_3() const { return ___current_3; }
	inline UIPopupList_t109953940 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UIPopupList_t109953940 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier(&___current_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
