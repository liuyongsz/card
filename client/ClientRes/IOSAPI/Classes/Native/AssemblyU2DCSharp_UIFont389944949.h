#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;
// BMFont
struct BMFont_t421884312;
// UIAtlas
struct UIAtlas_t1304615221;
// UIFont
struct UIFont_t389944949;
// System.Collections.Generic.List`1<BMSymbol>
struct List_1_t1234607911;
// UnityEngine.Font
struct Font_t4239498691;
// UISpriteData
struct UISpriteData_t2862501359;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIFont
struct  UIFont_t389944949  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material UIFont::mMat
	Material_t193706927 * ___mMat_2;
	// UnityEngine.Rect UIFont::mUVRect
	Rect_t3681755626  ___mUVRect_3;
	// BMFont UIFont::mFont
	BMFont_t421884312 * ___mFont_4;
	// UIAtlas UIFont::mAtlas
	UIAtlas_t1304615221 * ___mAtlas_5;
	// UIFont UIFont::mReplacement
	UIFont_t389944949 * ___mReplacement_6;
	// System.Collections.Generic.List`1<BMSymbol> UIFont::mSymbols
	List_1_t1234607911 * ___mSymbols_7;
	// UnityEngine.Font UIFont::mDynamicFont
	Font_t4239498691 * ___mDynamicFont_8;
	// System.Int32 UIFont::mDynamicFontSize
	int32_t ___mDynamicFontSize_9;
	// UnityEngine.FontStyle UIFont::mDynamicFontStyle
	int32_t ___mDynamicFontStyle_10;
	// UISpriteData UIFont::mSprite
	UISpriteData_t2862501359 * ___mSprite_11;
	// System.Int32 UIFont::mPMA
	int32_t ___mPMA_12;
	// System.Int32 UIFont::mPacked
	int32_t ___mPacked_13;

public:
	inline static int32_t get_offset_of_mMat_2() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mMat_2)); }
	inline Material_t193706927 * get_mMat_2() const { return ___mMat_2; }
	inline Material_t193706927 ** get_address_of_mMat_2() { return &___mMat_2; }
	inline void set_mMat_2(Material_t193706927 * value)
	{
		___mMat_2 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_2, value);
	}

	inline static int32_t get_offset_of_mUVRect_3() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mUVRect_3)); }
	inline Rect_t3681755626  get_mUVRect_3() const { return ___mUVRect_3; }
	inline Rect_t3681755626 * get_address_of_mUVRect_3() { return &___mUVRect_3; }
	inline void set_mUVRect_3(Rect_t3681755626  value)
	{
		___mUVRect_3 = value;
	}

	inline static int32_t get_offset_of_mFont_4() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mFont_4)); }
	inline BMFont_t421884312 * get_mFont_4() const { return ___mFont_4; }
	inline BMFont_t421884312 ** get_address_of_mFont_4() { return &___mFont_4; }
	inline void set_mFont_4(BMFont_t421884312 * value)
	{
		___mFont_4 = value;
		Il2CppCodeGenWriteBarrier(&___mFont_4, value);
	}

	inline static int32_t get_offset_of_mAtlas_5() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mAtlas_5)); }
	inline UIAtlas_t1304615221 * get_mAtlas_5() const { return ___mAtlas_5; }
	inline UIAtlas_t1304615221 ** get_address_of_mAtlas_5() { return &___mAtlas_5; }
	inline void set_mAtlas_5(UIAtlas_t1304615221 * value)
	{
		___mAtlas_5 = value;
		Il2CppCodeGenWriteBarrier(&___mAtlas_5, value);
	}

	inline static int32_t get_offset_of_mReplacement_6() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mReplacement_6)); }
	inline UIFont_t389944949 * get_mReplacement_6() const { return ___mReplacement_6; }
	inline UIFont_t389944949 ** get_address_of_mReplacement_6() { return &___mReplacement_6; }
	inline void set_mReplacement_6(UIFont_t389944949 * value)
	{
		___mReplacement_6 = value;
		Il2CppCodeGenWriteBarrier(&___mReplacement_6, value);
	}

	inline static int32_t get_offset_of_mSymbols_7() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mSymbols_7)); }
	inline List_1_t1234607911 * get_mSymbols_7() const { return ___mSymbols_7; }
	inline List_1_t1234607911 ** get_address_of_mSymbols_7() { return &___mSymbols_7; }
	inline void set_mSymbols_7(List_1_t1234607911 * value)
	{
		___mSymbols_7 = value;
		Il2CppCodeGenWriteBarrier(&___mSymbols_7, value);
	}

	inline static int32_t get_offset_of_mDynamicFont_8() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mDynamicFont_8)); }
	inline Font_t4239498691 * get_mDynamicFont_8() const { return ___mDynamicFont_8; }
	inline Font_t4239498691 ** get_address_of_mDynamicFont_8() { return &___mDynamicFont_8; }
	inline void set_mDynamicFont_8(Font_t4239498691 * value)
	{
		___mDynamicFont_8 = value;
		Il2CppCodeGenWriteBarrier(&___mDynamicFont_8, value);
	}

	inline static int32_t get_offset_of_mDynamicFontSize_9() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mDynamicFontSize_9)); }
	inline int32_t get_mDynamicFontSize_9() const { return ___mDynamicFontSize_9; }
	inline int32_t* get_address_of_mDynamicFontSize_9() { return &___mDynamicFontSize_9; }
	inline void set_mDynamicFontSize_9(int32_t value)
	{
		___mDynamicFontSize_9 = value;
	}

	inline static int32_t get_offset_of_mDynamicFontStyle_10() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mDynamicFontStyle_10)); }
	inline int32_t get_mDynamicFontStyle_10() const { return ___mDynamicFontStyle_10; }
	inline int32_t* get_address_of_mDynamicFontStyle_10() { return &___mDynamicFontStyle_10; }
	inline void set_mDynamicFontStyle_10(int32_t value)
	{
		___mDynamicFontStyle_10 = value;
	}

	inline static int32_t get_offset_of_mSprite_11() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mSprite_11)); }
	inline UISpriteData_t2862501359 * get_mSprite_11() const { return ___mSprite_11; }
	inline UISpriteData_t2862501359 ** get_address_of_mSprite_11() { return &___mSprite_11; }
	inline void set_mSprite_11(UISpriteData_t2862501359 * value)
	{
		___mSprite_11 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_11, value);
	}

	inline static int32_t get_offset_of_mPMA_12() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mPMA_12)); }
	inline int32_t get_mPMA_12() const { return ___mPMA_12; }
	inline int32_t* get_address_of_mPMA_12() { return &___mPMA_12; }
	inline void set_mPMA_12(int32_t value)
	{
		___mPMA_12 = value;
	}

	inline static int32_t get_offset_of_mPacked_13() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mPacked_13)); }
	inline int32_t get_mPacked_13() const { return ___mPacked_13; }
	inline int32_t* get_address_of_mPacked_13() { return &___mPacked_13; }
	inline void set_mPacked_13(int32_t value)
	{
		___mPacked_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
