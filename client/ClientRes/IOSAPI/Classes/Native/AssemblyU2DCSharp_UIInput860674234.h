#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIInput
struct UIInput_t860674234;
// UILabel
struct UILabel_t1795115428;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2865430313;
// UIInput/OnValidate
struct OnValidate_t2431313412;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t601950206;
// UITexture
struct UITexture_t2537039969;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIInput_InputType1695544313.h"
#include "AssemblyU2DCSharp_UIInput_OnReturnKey1716013855.h"
#include "AssemblyU2DCSharp_UIInput_KeyboardType865779294.h"
#include "AssemblyU2DCSharp_UIInput_Validation3865409168.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot752586349.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIInput
struct  UIInput_t860674234  : public MonoBehaviour_t1158329972
{
public:
	// UILabel UIInput::label
	UILabel_t1795115428 * ___label_4;
	// UIInput/InputType UIInput::inputType
	int32_t ___inputType_5;
	// UIInput/OnReturnKey UIInput::onReturnKey
	int32_t ___onReturnKey_6;
	// UIInput/KeyboardType UIInput::keyboardType
	int32_t ___keyboardType_7;
	// System.Boolean UIInput::hideInput
	bool ___hideInput_8;
	// System.Boolean UIInput::selectAllTextOnFocus
	bool ___selectAllTextOnFocus_9;
	// UIInput/Validation UIInput::validation
	int32_t ___validation_10;
	// System.Int32 UIInput::characterLimit
	int32_t ___characterLimit_11;
	// System.String UIInput::savedAs
	String_t* ___savedAs_12;
	// UnityEngine.GameObject UIInput::selectOnTab
	GameObject_t1756533147 * ___selectOnTab_13;
	// UnityEngine.Color UIInput::activeTextColor
	Color_t2020392075  ___activeTextColor_14;
	// UnityEngine.Color UIInput::caretColor
	Color_t2020392075  ___caretColor_15;
	// UnityEngine.Color UIInput::selectionColor
	Color_t2020392075  ___selectionColor_16;
	// System.Collections.Generic.List`1<EventDelegate> UIInput::onSubmit
	List_1_t2865430313 * ___onSubmit_17;
	// System.Collections.Generic.List`1<EventDelegate> UIInput::onChange
	List_1_t2865430313 * ___onChange_18;
	// UIInput/OnValidate UIInput::onValidate
	OnValidate_t2431313412 * ___onValidate_19;
	// System.String UIInput::mValue
	String_t* ___mValue_20;
	// System.String UIInput::mDefaultText
	String_t* ___mDefaultText_21;
	// UnityEngine.Color UIInput::mDefaultColor
	Color_t2020392075  ___mDefaultColor_22;
	// System.Single UIInput::mPosition
	float ___mPosition_23;
	// System.Boolean UIInput::mDoInit
	bool ___mDoInit_24;
	// UIWidget/Pivot UIInput::mPivot
	int32_t ___mPivot_25;
	// System.Boolean UIInput::mLoadSavedValue
	bool ___mLoadSavedValue_26;
	// System.Int32 UIInput::mSelectionStart
	int32_t ___mSelectionStart_31;
	// System.Int32 UIInput::mSelectionEnd
	int32_t ___mSelectionEnd_32;
	// UITexture UIInput::mHighlight
	UITexture_t2537039969 * ___mHighlight_33;
	// UITexture UIInput::mCaret
	UITexture_t2537039969 * ___mCaret_34;
	// UnityEngine.Texture2D UIInput::mBlankTex
	Texture2D_t3542995729 * ___mBlankTex_35;
	// System.Single UIInput::mNextBlink
	float ___mNextBlink_36;
	// System.Single UIInput::mLastAlpha
	float ___mLastAlpha_37;
	// System.String UIInput::mCached
	String_t* ___mCached_38;
	// System.Int32 UIInput::mSelectMe
	int32_t ___mSelectMe_39;

public:
	inline static int32_t get_offset_of_label_4() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___label_4)); }
	inline UILabel_t1795115428 * get_label_4() const { return ___label_4; }
	inline UILabel_t1795115428 ** get_address_of_label_4() { return &___label_4; }
	inline void set_label_4(UILabel_t1795115428 * value)
	{
		___label_4 = value;
		Il2CppCodeGenWriteBarrier(&___label_4, value);
	}

	inline static int32_t get_offset_of_inputType_5() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___inputType_5)); }
	inline int32_t get_inputType_5() const { return ___inputType_5; }
	inline int32_t* get_address_of_inputType_5() { return &___inputType_5; }
	inline void set_inputType_5(int32_t value)
	{
		___inputType_5 = value;
	}

	inline static int32_t get_offset_of_onReturnKey_6() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___onReturnKey_6)); }
	inline int32_t get_onReturnKey_6() const { return ___onReturnKey_6; }
	inline int32_t* get_address_of_onReturnKey_6() { return &___onReturnKey_6; }
	inline void set_onReturnKey_6(int32_t value)
	{
		___onReturnKey_6 = value;
	}

	inline static int32_t get_offset_of_keyboardType_7() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___keyboardType_7)); }
	inline int32_t get_keyboardType_7() const { return ___keyboardType_7; }
	inline int32_t* get_address_of_keyboardType_7() { return &___keyboardType_7; }
	inline void set_keyboardType_7(int32_t value)
	{
		___keyboardType_7 = value;
	}

	inline static int32_t get_offset_of_hideInput_8() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___hideInput_8)); }
	inline bool get_hideInput_8() const { return ___hideInput_8; }
	inline bool* get_address_of_hideInput_8() { return &___hideInput_8; }
	inline void set_hideInput_8(bool value)
	{
		___hideInput_8 = value;
	}

	inline static int32_t get_offset_of_selectAllTextOnFocus_9() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___selectAllTextOnFocus_9)); }
	inline bool get_selectAllTextOnFocus_9() const { return ___selectAllTextOnFocus_9; }
	inline bool* get_address_of_selectAllTextOnFocus_9() { return &___selectAllTextOnFocus_9; }
	inline void set_selectAllTextOnFocus_9(bool value)
	{
		___selectAllTextOnFocus_9 = value;
	}

	inline static int32_t get_offset_of_validation_10() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___validation_10)); }
	inline int32_t get_validation_10() const { return ___validation_10; }
	inline int32_t* get_address_of_validation_10() { return &___validation_10; }
	inline void set_validation_10(int32_t value)
	{
		___validation_10 = value;
	}

	inline static int32_t get_offset_of_characterLimit_11() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___characterLimit_11)); }
	inline int32_t get_characterLimit_11() const { return ___characterLimit_11; }
	inline int32_t* get_address_of_characterLimit_11() { return &___characterLimit_11; }
	inline void set_characterLimit_11(int32_t value)
	{
		___characterLimit_11 = value;
	}

	inline static int32_t get_offset_of_savedAs_12() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___savedAs_12)); }
	inline String_t* get_savedAs_12() const { return ___savedAs_12; }
	inline String_t** get_address_of_savedAs_12() { return &___savedAs_12; }
	inline void set_savedAs_12(String_t* value)
	{
		___savedAs_12 = value;
		Il2CppCodeGenWriteBarrier(&___savedAs_12, value);
	}

	inline static int32_t get_offset_of_selectOnTab_13() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___selectOnTab_13)); }
	inline GameObject_t1756533147 * get_selectOnTab_13() const { return ___selectOnTab_13; }
	inline GameObject_t1756533147 ** get_address_of_selectOnTab_13() { return &___selectOnTab_13; }
	inline void set_selectOnTab_13(GameObject_t1756533147 * value)
	{
		___selectOnTab_13 = value;
		Il2CppCodeGenWriteBarrier(&___selectOnTab_13, value);
	}

	inline static int32_t get_offset_of_activeTextColor_14() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___activeTextColor_14)); }
	inline Color_t2020392075  get_activeTextColor_14() const { return ___activeTextColor_14; }
	inline Color_t2020392075 * get_address_of_activeTextColor_14() { return &___activeTextColor_14; }
	inline void set_activeTextColor_14(Color_t2020392075  value)
	{
		___activeTextColor_14 = value;
	}

	inline static int32_t get_offset_of_caretColor_15() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___caretColor_15)); }
	inline Color_t2020392075  get_caretColor_15() const { return ___caretColor_15; }
	inline Color_t2020392075 * get_address_of_caretColor_15() { return &___caretColor_15; }
	inline void set_caretColor_15(Color_t2020392075  value)
	{
		___caretColor_15 = value;
	}

	inline static int32_t get_offset_of_selectionColor_16() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___selectionColor_16)); }
	inline Color_t2020392075  get_selectionColor_16() const { return ___selectionColor_16; }
	inline Color_t2020392075 * get_address_of_selectionColor_16() { return &___selectionColor_16; }
	inline void set_selectionColor_16(Color_t2020392075  value)
	{
		___selectionColor_16 = value;
	}

	inline static int32_t get_offset_of_onSubmit_17() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___onSubmit_17)); }
	inline List_1_t2865430313 * get_onSubmit_17() const { return ___onSubmit_17; }
	inline List_1_t2865430313 ** get_address_of_onSubmit_17() { return &___onSubmit_17; }
	inline void set_onSubmit_17(List_1_t2865430313 * value)
	{
		___onSubmit_17 = value;
		Il2CppCodeGenWriteBarrier(&___onSubmit_17, value);
	}

	inline static int32_t get_offset_of_onChange_18() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___onChange_18)); }
	inline List_1_t2865430313 * get_onChange_18() const { return ___onChange_18; }
	inline List_1_t2865430313 ** get_address_of_onChange_18() { return &___onChange_18; }
	inline void set_onChange_18(List_1_t2865430313 * value)
	{
		___onChange_18 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_18, value);
	}

	inline static int32_t get_offset_of_onValidate_19() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___onValidate_19)); }
	inline OnValidate_t2431313412 * get_onValidate_19() const { return ___onValidate_19; }
	inline OnValidate_t2431313412 ** get_address_of_onValidate_19() { return &___onValidate_19; }
	inline void set_onValidate_19(OnValidate_t2431313412 * value)
	{
		___onValidate_19 = value;
		Il2CppCodeGenWriteBarrier(&___onValidate_19, value);
	}

	inline static int32_t get_offset_of_mValue_20() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mValue_20)); }
	inline String_t* get_mValue_20() const { return ___mValue_20; }
	inline String_t** get_address_of_mValue_20() { return &___mValue_20; }
	inline void set_mValue_20(String_t* value)
	{
		___mValue_20 = value;
		Il2CppCodeGenWriteBarrier(&___mValue_20, value);
	}

	inline static int32_t get_offset_of_mDefaultText_21() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mDefaultText_21)); }
	inline String_t* get_mDefaultText_21() const { return ___mDefaultText_21; }
	inline String_t** get_address_of_mDefaultText_21() { return &___mDefaultText_21; }
	inline void set_mDefaultText_21(String_t* value)
	{
		___mDefaultText_21 = value;
		Il2CppCodeGenWriteBarrier(&___mDefaultText_21, value);
	}

	inline static int32_t get_offset_of_mDefaultColor_22() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mDefaultColor_22)); }
	inline Color_t2020392075  get_mDefaultColor_22() const { return ___mDefaultColor_22; }
	inline Color_t2020392075 * get_address_of_mDefaultColor_22() { return &___mDefaultColor_22; }
	inline void set_mDefaultColor_22(Color_t2020392075  value)
	{
		___mDefaultColor_22 = value;
	}

	inline static int32_t get_offset_of_mPosition_23() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mPosition_23)); }
	inline float get_mPosition_23() const { return ___mPosition_23; }
	inline float* get_address_of_mPosition_23() { return &___mPosition_23; }
	inline void set_mPosition_23(float value)
	{
		___mPosition_23 = value;
	}

	inline static int32_t get_offset_of_mDoInit_24() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mDoInit_24)); }
	inline bool get_mDoInit_24() const { return ___mDoInit_24; }
	inline bool* get_address_of_mDoInit_24() { return &___mDoInit_24; }
	inline void set_mDoInit_24(bool value)
	{
		___mDoInit_24 = value;
	}

	inline static int32_t get_offset_of_mPivot_25() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mPivot_25)); }
	inline int32_t get_mPivot_25() const { return ___mPivot_25; }
	inline int32_t* get_address_of_mPivot_25() { return &___mPivot_25; }
	inline void set_mPivot_25(int32_t value)
	{
		___mPivot_25 = value;
	}

	inline static int32_t get_offset_of_mLoadSavedValue_26() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mLoadSavedValue_26)); }
	inline bool get_mLoadSavedValue_26() const { return ___mLoadSavedValue_26; }
	inline bool* get_address_of_mLoadSavedValue_26() { return &___mLoadSavedValue_26; }
	inline void set_mLoadSavedValue_26(bool value)
	{
		___mLoadSavedValue_26 = value;
	}

	inline static int32_t get_offset_of_mSelectionStart_31() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mSelectionStart_31)); }
	inline int32_t get_mSelectionStart_31() const { return ___mSelectionStart_31; }
	inline int32_t* get_address_of_mSelectionStart_31() { return &___mSelectionStart_31; }
	inline void set_mSelectionStart_31(int32_t value)
	{
		___mSelectionStart_31 = value;
	}

	inline static int32_t get_offset_of_mSelectionEnd_32() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mSelectionEnd_32)); }
	inline int32_t get_mSelectionEnd_32() const { return ___mSelectionEnd_32; }
	inline int32_t* get_address_of_mSelectionEnd_32() { return &___mSelectionEnd_32; }
	inline void set_mSelectionEnd_32(int32_t value)
	{
		___mSelectionEnd_32 = value;
	}

	inline static int32_t get_offset_of_mHighlight_33() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mHighlight_33)); }
	inline UITexture_t2537039969 * get_mHighlight_33() const { return ___mHighlight_33; }
	inline UITexture_t2537039969 ** get_address_of_mHighlight_33() { return &___mHighlight_33; }
	inline void set_mHighlight_33(UITexture_t2537039969 * value)
	{
		___mHighlight_33 = value;
		Il2CppCodeGenWriteBarrier(&___mHighlight_33, value);
	}

	inline static int32_t get_offset_of_mCaret_34() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mCaret_34)); }
	inline UITexture_t2537039969 * get_mCaret_34() const { return ___mCaret_34; }
	inline UITexture_t2537039969 ** get_address_of_mCaret_34() { return &___mCaret_34; }
	inline void set_mCaret_34(UITexture_t2537039969 * value)
	{
		___mCaret_34 = value;
		Il2CppCodeGenWriteBarrier(&___mCaret_34, value);
	}

	inline static int32_t get_offset_of_mBlankTex_35() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mBlankTex_35)); }
	inline Texture2D_t3542995729 * get_mBlankTex_35() const { return ___mBlankTex_35; }
	inline Texture2D_t3542995729 ** get_address_of_mBlankTex_35() { return &___mBlankTex_35; }
	inline void set_mBlankTex_35(Texture2D_t3542995729 * value)
	{
		___mBlankTex_35 = value;
		Il2CppCodeGenWriteBarrier(&___mBlankTex_35, value);
	}

	inline static int32_t get_offset_of_mNextBlink_36() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mNextBlink_36)); }
	inline float get_mNextBlink_36() const { return ___mNextBlink_36; }
	inline float* get_address_of_mNextBlink_36() { return &___mNextBlink_36; }
	inline void set_mNextBlink_36(float value)
	{
		___mNextBlink_36 = value;
	}

	inline static int32_t get_offset_of_mLastAlpha_37() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mLastAlpha_37)); }
	inline float get_mLastAlpha_37() const { return ___mLastAlpha_37; }
	inline float* get_address_of_mLastAlpha_37() { return &___mLastAlpha_37; }
	inline void set_mLastAlpha_37(float value)
	{
		___mLastAlpha_37 = value;
	}

	inline static int32_t get_offset_of_mCached_38() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mCached_38)); }
	inline String_t* get_mCached_38() const { return ___mCached_38; }
	inline String_t** get_address_of_mCached_38() { return &___mCached_38; }
	inline void set_mCached_38(String_t* value)
	{
		___mCached_38 = value;
		Il2CppCodeGenWriteBarrier(&___mCached_38, value);
	}

	inline static int32_t get_offset_of_mSelectMe_39() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mSelectMe_39)); }
	inline int32_t get_mSelectMe_39() const { return ___mSelectMe_39; }
	inline int32_t* get_address_of_mSelectMe_39() { return &___mSelectMe_39; }
	inline void set_mSelectMe_39(int32_t value)
	{
		___mSelectMe_39 = value;
	}
};

struct UIInput_t860674234_StaticFields
{
public:
	// UIInput UIInput::current
	UIInput_t860674234 * ___current_2;
	// UIInput UIInput::selection
	UIInput_t860674234 * ___selection_3;
	// System.Int32 UIInput::mDrawStart
	int32_t ___mDrawStart_27;
	// System.String UIInput::mLastIME
	String_t* ___mLastIME_28;
	// UnityEngine.TouchScreenKeyboard UIInput::mKeyboard
	TouchScreenKeyboard_t601950206 * ___mKeyboard_29;
	// System.Boolean UIInput::mWaitForKeyboard
	bool ___mWaitForKeyboard_30;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(UIInput_t860674234_StaticFields, ___current_2)); }
	inline UIInput_t860674234 * get_current_2() const { return ___current_2; }
	inline UIInput_t860674234 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(UIInput_t860674234 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}

	inline static int32_t get_offset_of_selection_3() { return static_cast<int32_t>(offsetof(UIInput_t860674234_StaticFields, ___selection_3)); }
	inline UIInput_t860674234 * get_selection_3() const { return ___selection_3; }
	inline UIInput_t860674234 ** get_address_of_selection_3() { return &___selection_3; }
	inline void set_selection_3(UIInput_t860674234 * value)
	{
		___selection_3 = value;
		Il2CppCodeGenWriteBarrier(&___selection_3, value);
	}

	inline static int32_t get_offset_of_mDrawStart_27() { return static_cast<int32_t>(offsetof(UIInput_t860674234_StaticFields, ___mDrawStart_27)); }
	inline int32_t get_mDrawStart_27() const { return ___mDrawStart_27; }
	inline int32_t* get_address_of_mDrawStart_27() { return &___mDrawStart_27; }
	inline void set_mDrawStart_27(int32_t value)
	{
		___mDrawStart_27 = value;
	}

	inline static int32_t get_offset_of_mLastIME_28() { return static_cast<int32_t>(offsetof(UIInput_t860674234_StaticFields, ___mLastIME_28)); }
	inline String_t* get_mLastIME_28() const { return ___mLastIME_28; }
	inline String_t** get_address_of_mLastIME_28() { return &___mLastIME_28; }
	inline void set_mLastIME_28(String_t* value)
	{
		___mLastIME_28 = value;
		Il2CppCodeGenWriteBarrier(&___mLastIME_28, value);
	}

	inline static int32_t get_offset_of_mKeyboard_29() { return static_cast<int32_t>(offsetof(UIInput_t860674234_StaticFields, ___mKeyboard_29)); }
	inline TouchScreenKeyboard_t601950206 * get_mKeyboard_29() const { return ___mKeyboard_29; }
	inline TouchScreenKeyboard_t601950206 ** get_address_of_mKeyboard_29() { return &___mKeyboard_29; }
	inline void set_mKeyboard_29(TouchScreenKeyboard_t601950206 * value)
	{
		___mKeyboard_29 = value;
		Il2CppCodeGenWriteBarrier(&___mKeyboard_29, value);
	}

	inline static int32_t get_offset_of_mWaitForKeyboard_30() { return static_cast<int32_t>(offsetof(UIInput_t860674234_StaticFields, ___mWaitForKeyboard_30)); }
	inline bool get_mWaitForKeyboard_30() const { return ___mWaitForKeyboard_30; }
	inline bool* get_address_of_mWaitForKeyboard_30() { return &___mWaitForKeyboard_30; }
	inline void set_mWaitForKeyboard_30(bool value)
	{
		___mWaitForKeyboard_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
