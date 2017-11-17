#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UISprite
struct UISprite_t603616735;
// UILabel
struct UILabel_t1795115428;
// System.String
struct String_t;
// RichData
struct RichData_t3375335906;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_OwnerType1657261651.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIRichText
struct  UIRichText_t2941036835  : public MonoBehaviour_t1158329972
{
public:
	// UISprite UIRichText::mWidget
	UISprite_t603616735 * ___mWidget_2;
	// UILabel UIRichText::mLabel
	UILabel_t1795115428 * ___mLabel_3;
	// UISprite UIRichText::mIcon
	UISprite_t603616735 * ___mIcon_4;
	// System.String UIRichText::mtext
	String_t* ___mtext_5;
	// RichData UIRichText::mRichData
	RichData_t3375335906 * ___mRichData_6;
	// System.Single UIRichText::mLabeltemp_x
	float ___mLabeltemp_x_7;
	// System.Single UIRichText::mLabeltemp_y
	float ___mLabeltemp_y_8;
	// System.Single UIRichText::mWidth
	float ___mWidth_9;
	// System.Single UIRichText::mPositionX
	float ___mPositionX_10;
	// System.Single UIRichText::mPositionY
	float ___mPositionY_11;
	// System.Single UIRichText::_mRichHeight
	float ____mRichHeight_12;
	// System.Single UIRichText::_mRichWidth
	float ____mRichWidth_13;
	// System.Int32 UIRichText::mreaderIndex
	int32_t ___mreaderIndex_14;
	// System.Single UIRichText::m_dy
	float ___m_dy_15;
	// System.Single UIRichText::msurplus
	float ___msurplus_16;
	// UnityEngine.Color UIRichText::_mTextColor
	Color_t2020392075  ____mTextColor_17;
	// System.Object[] UIRichText::voice_args
	ObjectU5BU5D_t3614634134* ___voice_args_18;
	// System.Single UIRichText::<cellHeight>k__BackingField
	float ___U3CcellHeightU3Ek__BackingField_19;
	// System.Single UIRichText::<maxWidth>k__BackingField
	float ___U3CmaxWidthU3Ek__BackingField_20;
	// OwnerType UIRichText::<owerType>k__BackingField
	int32_t ___U3CowerTypeU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_mWidget_2() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___mWidget_2)); }
	inline UISprite_t603616735 * get_mWidget_2() const { return ___mWidget_2; }
	inline UISprite_t603616735 ** get_address_of_mWidget_2() { return &___mWidget_2; }
	inline void set_mWidget_2(UISprite_t603616735 * value)
	{
		___mWidget_2 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_2, value);
	}

	inline static int32_t get_offset_of_mLabel_3() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___mLabel_3)); }
	inline UILabel_t1795115428 * get_mLabel_3() const { return ___mLabel_3; }
	inline UILabel_t1795115428 ** get_address_of_mLabel_3() { return &___mLabel_3; }
	inline void set_mLabel_3(UILabel_t1795115428 * value)
	{
		___mLabel_3 = value;
		Il2CppCodeGenWriteBarrier(&___mLabel_3, value);
	}

	inline static int32_t get_offset_of_mIcon_4() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___mIcon_4)); }
	inline UISprite_t603616735 * get_mIcon_4() const { return ___mIcon_4; }
	inline UISprite_t603616735 ** get_address_of_mIcon_4() { return &___mIcon_4; }
	inline void set_mIcon_4(UISprite_t603616735 * value)
	{
		___mIcon_4 = value;
		Il2CppCodeGenWriteBarrier(&___mIcon_4, value);
	}

	inline static int32_t get_offset_of_mtext_5() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___mtext_5)); }
	inline String_t* get_mtext_5() const { return ___mtext_5; }
	inline String_t** get_address_of_mtext_5() { return &___mtext_5; }
	inline void set_mtext_5(String_t* value)
	{
		___mtext_5 = value;
		Il2CppCodeGenWriteBarrier(&___mtext_5, value);
	}

	inline static int32_t get_offset_of_mRichData_6() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___mRichData_6)); }
	inline RichData_t3375335906 * get_mRichData_6() const { return ___mRichData_6; }
	inline RichData_t3375335906 ** get_address_of_mRichData_6() { return &___mRichData_6; }
	inline void set_mRichData_6(RichData_t3375335906 * value)
	{
		___mRichData_6 = value;
		Il2CppCodeGenWriteBarrier(&___mRichData_6, value);
	}

	inline static int32_t get_offset_of_mLabeltemp_x_7() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___mLabeltemp_x_7)); }
	inline float get_mLabeltemp_x_7() const { return ___mLabeltemp_x_7; }
	inline float* get_address_of_mLabeltemp_x_7() { return &___mLabeltemp_x_7; }
	inline void set_mLabeltemp_x_7(float value)
	{
		___mLabeltemp_x_7 = value;
	}

	inline static int32_t get_offset_of_mLabeltemp_y_8() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___mLabeltemp_y_8)); }
	inline float get_mLabeltemp_y_8() const { return ___mLabeltemp_y_8; }
	inline float* get_address_of_mLabeltemp_y_8() { return &___mLabeltemp_y_8; }
	inline void set_mLabeltemp_y_8(float value)
	{
		___mLabeltemp_y_8 = value;
	}

	inline static int32_t get_offset_of_mWidth_9() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___mWidth_9)); }
	inline float get_mWidth_9() const { return ___mWidth_9; }
	inline float* get_address_of_mWidth_9() { return &___mWidth_9; }
	inline void set_mWidth_9(float value)
	{
		___mWidth_9 = value;
	}

	inline static int32_t get_offset_of_mPositionX_10() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___mPositionX_10)); }
	inline float get_mPositionX_10() const { return ___mPositionX_10; }
	inline float* get_address_of_mPositionX_10() { return &___mPositionX_10; }
	inline void set_mPositionX_10(float value)
	{
		___mPositionX_10 = value;
	}

	inline static int32_t get_offset_of_mPositionY_11() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___mPositionY_11)); }
	inline float get_mPositionY_11() const { return ___mPositionY_11; }
	inline float* get_address_of_mPositionY_11() { return &___mPositionY_11; }
	inline void set_mPositionY_11(float value)
	{
		___mPositionY_11 = value;
	}

	inline static int32_t get_offset_of__mRichHeight_12() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ____mRichHeight_12)); }
	inline float get__mRichHeight_12() const { return ____mRichHeight_12; }
	inline float* get_address_of__mRichHeight_12() { return &____mRichHeight_12; }
	inline void set__mRichHeight_12(float value)
	{
		____mRichHeight_12 = value;
	}

	inline static int32_t get_offset_of__mRichWidth_13() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ____mRichWidth_13)); }
	inline float get__mRichWidth_13() const { return ____mRichWidth_13; }
	inline float* get_address_of__mRichWidth_13() { return &____mRichWidth_13; }
	inline void set__mRichWidth_13(float value)
	{
		____mRichWidth_13 = value;
	}

	inline static int32_t get_offset_of_mreaderIndex_14() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___mreaderIndex_14)); }
	inline int32_t get_mreaderIndex_14() const { return ___mreaderIndex_14; }
	inline int32_t* get_address_of_mreaderIndex_14() { return &___mreaderIndex_14; }
	inline void set_mreaderIndex_14(int32_t value)
	{
		___mreaderIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_dy_15() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___m_dy_15)); }
	inline float get_m_dy_15() const { return ___m_dy_15; }
	inline float* get_address_of_m_dy_15() { return &___m_dy_15; }
	inline void set_m_dy_15(float value)
	{
		___m_dy_15 = value;
	}

	inline static int32_t get_offset_of_msurplus_16() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___msurplus_16)); }
	inline float get_msurplus_16() const { return ___msurplus_16; }
	inline float* get_address_of_msurplus_16() { return &___msurplus_16; }
	inline void set_msurplus_16(float value)
	{
		___msurplus_16 = value;
	}

	inline static int32_t get_offset_of__mTextColor_17() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ____mTextColor_17)); }
	inline Color_t2020392075  get__mTextColor_17() const { return ____mTextColor_17; }
	inline Color_t2020392075 * get_address_of__mTextColor_17() { return &____mTextColor_17; }
	inline void set__mTextColor_17(Color_t2020392075  value)
	{
		____mTextColor_17 = value;
	}

	inline static int32_t get_offset_of_voice_args_18() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___voice_args_18)); }
	inline ObjectU5BU5D_t3614634134* get_voice_args_18() const { return ___voice_args_18; }
	inline ObjectU5BU5D_t3614634134** get_address_of_voice_args_18() { return &___voice_args_18; }
	inline void set_voice_args_18(ObjectU5BU5D_t3614634134* value)
	{
		___voice_args_18 = value;
		Il2CppCodeGenWriteBarrier(&___voice_args_18, value);
	}

	inline static int32_t get_offset_of_U3CcellHeightU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___U3CcellHeightU3Ek__BackingField_19)); }
	inline float get_U3CcellHeightU3Ek__BackingField_19() const { return ___U3CcellHeightU3Ek__BackingField_19; }
	inline float* get_address_of_U3CcellHeightU3Ek__BackingField_19() { return &___U3CcellHeightU3Ek__BackingField_19; }
	inline void set_U3CcellHeightU3Ek__BackingField_19(float value)
	{
		___U3CcellHeightU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CmaxWidthU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___U3CmaxWidthU3Ek__BackingField_20)); }
	inline float get_U3CmaxWidthU3Ek__BackingField_20() const { return ___U3CmaxWidthU3Ek__BackingField_20; }
	inline float* get_address_of_U3CmaxWidthU3Ek__BackingField_20() { return &___U3CmaxWidthU3Ek__BackingField_20; }
	inline void set_U3CmaxWidthU3Ek__BackingField_20(float value)
	{
		___U3CmaxWidthU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CowerTypeU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(UIRichText_t2941036835, ___U3CowerTypeU3Ek__BackingField_21)); }
	inline int32_t get_U3CowerTypeU3Ek__BackingField_21() const { return ___U3CowerTypeU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CowerTypeU3Ek__BackingField_21() { return &___U3CowerTypeU3Ek__BackingField_21; }
	inline void set_U3CowerTypeU3Ek__BackingField_21(int32_t value)
	{
		___U3CowerTypeU3Ek__BackingField_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
