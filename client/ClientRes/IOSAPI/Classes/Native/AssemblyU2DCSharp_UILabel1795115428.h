#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Font
struct Font_t4239498691;
// UIFont
struct UIFont_t389944949;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t193706927;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// BetterList`1<UILabel>
struct BetterList_1_t2015504070;
// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Int32>
struct Dictionary_2_t2179995492;
// UILabel/CallLoadAsset
struct CallLoadAsset_t879644691;
// UILabel/OnQueryString
struct OnQueryString_t1562153177;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t2464096222;
// BetterList`1<System.Int32>
struct BetterList_1_t2292266090;
// System.Action
struct Action_t3226471752;

#include "AssemblyU2DCSharp_UIWidget1453041918.h"
#include "AssemblyU2DCSharp_UILabel_Crispness4281041871.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"
#include "AssemblyU2DCSharp_NGUIText_Alignment3620437664.h"
#include "AssemblyU2DCSharp_UILabel_Effect541741196.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_NGUIText_SymbolStyle2170314704.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_UILabel_Overflow2317266067.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UILabel
struct  UILabel_t1795115428  : public UIWidget_t1453041918
{
public:
	// UILabel/Crispness UILabel::keepCrispWhenShrunk
	int32_t ___keepCrispWhenShrunk_51;
	// System.Boolean UILabel::mbUseSnailFont
	bool ___mbUseSnailFont_52;
	// UnityEngine.Font UILabel::mTrueTypeFont
	Font_t4239498691 * ___mTrueTypeFont_53;
	// UIFont UILabel::mFont
	UIFont_t389944949 * ___mFont_54;
	// System.String UILabel::mText
	String_t* ___mText_55;
	// System.Int32 UILabel::mFontSize
	int32_t ___mFontSize_56;
	// UnityEngine.FontStyle UILabel::mFontStyle
	int32_t ___mFontStyle_57;
	// NGUIText/Alignment UILabel::mAlignment
	int32_t ___mAlignment_58;
	// System.Boolean UILabel::mEncoding
	bool ___mEncoding_59;
	// System.Int32 UILabel::mMaxLineCount
	int32_t ___mMaxLineCount_60;
	// UILabel/Effect UILabel::mEffectStyle
	int32_t ___mEffectStyle_61;
	// UnityEngine.Color UILabel::mEffectColor
	Color_t2020392075  ___mEffectColor_62;
	// NGUIText/SymbolStyle UILabel::mSymbols
	int32_t ___mSymbols_63;
	// UnityEngine.Vector2 UILabel::mEffectDistance
	Vector2_t2243707579  ___mEffectDistance_64;
	// UILabel/Overflow UILabel::mOverflow
	int32_t ___mOverflow_65;
	// UnityEngine.Material UILabel::mMaterial
	Material_t193706927 * ___mMaterial_66;
	// System.Boolean UILabel::mApplyGradient
	bool ___mApplyGradient_67;
	// UnityEngine.Color UILabel::mGradientTop
	Color_t2020392075  ___mGradientTop_68;
	// UnityEngine.Color UILabel::mGradientBottom
	Color_t2020392075  ___mGradientBottom_69;
	// System.Int32 UILabel::mSpacingX
	int32_t ___mSpacingX_70;
	// System.Int32 UILabel::mSpacingY
	int32_t ___mSpacingY_71;
	// System.Boolean UILabel::mShrinkToFit
	bool ___mShrinkToFit_72;
	// System.Int32 UILabel::mMaxLineWidth
	int32_t ___mMaxLineWidth_73;
	// System.Int32 UILabel::mMaxLineHeight
	int32_t ___mMaxLineHeight_74;
	// System.Single UILabel::mLineWidth
	float ___mLineWidth_75;
	// System.Boolean UILabel::mMultiline
	bool ___mMultiline_76;
	// System.Boolean UILabel::isChanged
	bool ___isChanged_77;
	// System.String UILabel::mOriginalText
	String_t* ___mOriginalText_78;
	// System.Boolean UILabel::mIntConvert
	bool ___mIntConvert_79;
	// System.Boolean UILabel::needChangeWord
	bool ___needChangeWord_80;
	// UnityEngine.Font UILabel::mActiveTTF
	Font_t4239498691 * ___mActiveTTF_81;
	// System.Single UILabel::mDensity
	float ___mDensity_82;
	// System.Boolean UILabel::mShouldBeProcessed
	bool ___mShouldBeProcessed_83;
	// System.String UILabel::mProcessedText
	String_t* ___mProcessedText_84;
	// System.Boolean UILabel::mPremultiply
	bool ___mPremultiply_85;
	// UnityEngine.Vector2 UILabel::mCalculatedSize
	Vector2_t2243707579  ___mCalculatedSize_86;
	// System.Single UILabel::mScale
	float ___mScale_87;
	// System.Int32 UILabel::mPrintedSize
	int32_t ___mPrintedSize_88;
	// System.Int32 UILabel::mLastWidth
	int32_t ___mLastWidth_89;
	// System.Int32 UILabel::mLastHeight
	int32_t ___mLastHeight_90;
	// System.Action UILabel::m_symbolOffset
	Action_t3226471752 * ___m_symbolOffset_101;

public:
	inline static int32_t get_offset_of_keepCrispWhenShrunk_51() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___keepCrispWhenShrunk_51)); }
	inline int32_t get_keepCrispWhenShrunk_51() const { return ___keepCrispWhenShrunk_51; }
	inline int32_t* get_address_of_keepCrispWhenShrunk_51() { return &___keepCrispWhenShrunk_51; }
	inline void set_keepCrispWhenShrunk_51(int32_t value)
	{
		___keepCrispWhenShrunk_51 = value;
	}

	inline static int32_t get_offset_of_mbUseSnailFont_52() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mbUseSnailFont_52)); }
	inline bool get_mbUseSnailFont_52() const { return ___mbUseSnailFont_52; }
	inline bool* get_address_of_mbUseSnailFont_52() { return &___mbUseSnailFont_52; }
	inline void set_mbUseSnailFont_52(bool value)
	{
		___mbUseSnailFont_52 = value;
	}

	inline static int32_t get_offset_of_mTrueTypeFont_53() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mTrueTypeFont_53)); }
	inline Font_t4239498691 * get_mTrueTypeFont_53() const { return ___mTrueTypeFont_53; }
	inline Font_t4239498691 ** get_address_of_mTrueTypeFont_53() { return &___mTrueTypeFont_53; }
	inline void set_mTrueTypeFont_53(Font_t4239498691 * value)
	{
		___mTrueTypeFont_53 = value;
		Il2CppCodeGenWriteBarrier(&___mTrueTypeFont_53, value);
	}

	inline static int32_t get_offset_of_mFont_54() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mFont_54)); }
	inline UIFont_t389944949 * get_mFont_54() const { return ___mFont_54; }
	inline UIFont_t389944949 ** get_address_of_mFont_54() { return &___mFont_54; }
	inline void set_mFont_54(UIFont_t389944949 * value)
	{
		___mFont_54 = value;
		Il2CppCodeGenWriteBarrier(&___mFont_54, value);
	}

	inline static int32_t get_offset_of_mText_55() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mText_55)); }
	inline String_t* get_mText_55() const { return ___mText_55; }
	inline String_t** get_address_of_mText_55() { return &___mText_55; }
	inline void set_mText_55(String_t* value)
	{
		___mText_55 = value;
		Il2CppCodeGenWriteBarrier(&___mText_55, value);
	}

	inline static int32_t get_offset_of_mFontSize_56() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mFontSize_56)); }
	inline int32_t get_mFontSize_56() const { return ___mFontSize_56; }
	inline int32_t* get_address_of_mFontSize_56() { return &___mFontSize_56; }
	inline void set_mFontSize_56(int32_t value)
	{
		___mFontSize_56 = value;
	}

	inline static int32_t get_offset_of_mFontStyle_57() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mFontStyle_57)); }
	inline int32_t get_mFontStyle_57() const { return ___mFontStyle_57; }
	inline int32_t* get_address_of_mFontStyle_57() { return &___mFontStyle_57; }
	inline void set_mFontStyle_57(int32_t value)
	{
		___mFontStyle_57 = value;
	}

	inline static int32_t get_offset_of_mAlignment_58() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mAlignment_58)); }
	inline int32_t get_mAlignment_58() const { return ___mAlignment_58; }
	inline int32_t* get_address_of_mAlignment_58() { return &___mAlignment_58; }
	inline void set_mAlignment_58(int32_t value)
	{
		___mAlignment_58 = value;
	}

	inline static int32_t get_offset_of_mEncoding_59() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mEncoding_59)); }
	inline bool get_mEncoding_59() const { return ___mEncoding_59; }
	inline bool* get_address_of_mEncoding_59() { return &___mEncoding_59; }
	inline void set_mEncoding_59(bool value)
	{
		___mEncoding_59 = value;
	}

	inline static int32_t get_offset_of_mMaxLineCount_60() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mMaxLineCount_60)); }
	inline int32_t get_mMaxLineCount_60() const { return ___mMaxLineCount_60; }
	inline int32_t* get_address_of_mMaxLineCount_60() { return &___mMaxLineCount_60; }
	inline void set_mMaxLineCount_60(int32_t value)
	{
		___mMaxLineCount_60 = value;
	}

	inline static int32_t get_offset_of_mEffectStyle_61() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mEffectStyle_61)); }
	inline int32_t get_mEffectStyle_61() const { return ___mEffectStyle_61; }
	inline int32_t* get_address_of_mEffectStyle_61() { return &___mEffectStyle_61; }
	inline void set_mEffectStyle_61(int32_t value)
	{
		___mEffectStyle_61 = value;
	}

	inline static int32_t get_offset_of_mEffectColor_62() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mEffectColor_62)); }
	inline Color_t2020392075  get_mEffectColor_62() const { return ___mEffectColor_62; }
	inline Color_t2020392075 * get_address_of_mEffectColor_62() { return &___mEffectColor_62; }
	inline void set_mEffectColor_62(Color_t2020392075  value)
	{
		___mEffectColor_62 = value;
	}

	inline static int32_t get_offset_of_mSymbols_63() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mSymbols_63)); }
	inline int32_t get_mSymbols_63() const { return ___mSymbols_63; }
	inline int32_t* get_address_of_mSymbols_63() { return &___mSymbols_63; }
	inline void set_mSymbols_63(int32_t value)
	{
		___mSymbols_63 = value;
	}

	inline static int32_t get_offset_of_mEffectDistance_64() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mEffectDistance_64)); }
	inline Vector2_t2243707579  get_mEffectDistance_64() const { return ___mEffectDistance_64; }
	inline Vector2_t2243707579 * get_address_of_mEffectDistance_64() { return &___mEffectDistance_64; }
	inline void set_mEffectDistance_64(Vector2_t2243707579  value)
	{
		___mEffectDistance_64 = value;
	}

	inline static int32_t get_offset_of_mOverflow_65() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mOverflow_65)); }
	inline int32_t get_mOverflow_65() const { return ___mOverflow_65; }
	inline int32_t* get_address_of_mOverflow_65() { return &___mOverflow_65; }
	inline void set_mOverflow_65(int32_t value)
	{
		___mOverflow_65 = value;
	}

	inline static int32_t get_offset_of_mMaterial_66() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mMaterial_66)); }
	inline Material_t193706927 * get_mMaterial_66() const { return ___mMaterial_66; }
	inline Material_t193706927 ** get_address_of_mMaterial_66() { return &___mMaterial_66; }
	inline void set_mMaterial_66(Material_t193706927 * value)
	{
		___mMaterial_66 = value;
		Il2CppCodeGenWriteBarrier(&___mMaterial_66, value);
	}

	inline static int32_t get_offset_of_mApplyGradient_67() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mApplyGradient_67)); }
	inline bool get_mApplyGradient_67() const { return ___mApplyGradient_67; }
	inline bool* get_address_of_mApplyGradient_67() { return &___mApplyGradient_67; }
	inline void set_mApplyGradient_67(bool value)
	{
		___mApplyGradient_67 = value;
	}

	inline static int32_t get_offset_of_mGradientTop_68() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mGradientTop_68)); }
	inline Color_t2020392075  get_mGradientTop_68() const { return ___mGradientTop_68; }
	inline Color_t2020392075 * get_address_of_mGradientTop_68() { return &___mGradientTop_68; }
	inline void set_mGradientTop_68(Color_t2020392075  value)
	{
		___mGradientTop_68 = value;
	}

	inline static int32_t get_offset_of_mGradientBottom_69() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mGradientBottom_69)); }
	inline Color_t2020392075  get_mGradientBottom_69() const { return ___mGradientBottom_69; }
	inline Color_t2020392075 * get_address_of_mGradientBottom_69() { return &___mGradientBottom_69; }
	inline void set_mGradientBottom_69(Color_t2020392075  value)
	{
		___mGradientBottom_69 = value;
	}

	inline static int32_t get_offset_of_mSpacingX_70() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mSpacingX_70)); }
	inline int32_t get_mSpacingX_70() const { return ___mSpacingX_70; }
	inline int32_t* get_address_of_mSpacingX_70() { return &___mSpacingX_70; }
	inline void set_mSpacingX_70(int32_t value)
	{
		___mSpacingX_70 = value;
	}

	inline static int32_t get_offset_of_mSpacingY_71() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mSpacingY_71)); }
	inline int32_t get_mSpacingY_71() const { return ___mSpacingY_71; }
	inline int32_t* get_address_of_mSpacingY_71() { return &___mSpacingY_71; }
	inline void set_mSpacingY_71(int32_t value)
	{
		___mSpacingY_71 = value;
	}

	inline static int32_t get_offset_of_mShrinkToFit_72() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mShrinkToFit_72)); }
	inline bool get_mShrinkToFit_72() const { return ___mShrinkToFit_72; }
	inline bool* get_address_of_mShrinkToFit_72() { return &___mShrinkToFit_72; }
	inline void set_mShrinkToFit_72(bool value)
	{
		___mShrinkToFit_72 = value;
	}

	inline static int32_t get_offset_of_mMaxLineWidth_73() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mMaxLineWidth_73)); }
	inline int32_t get_mMaxLineWidth_73() const { return ___mMaxLineWidth_73; }
	inline int32_t* get_address_of_mMaxLineWidth_73() { return &___mMaxLineWidth_73; }
	inline void set_mMaxLineWidth_73(int32_t value)
	{
		___mMaxLineWidth_73 = value;
	}

	inline static int32_t get_offset_of_mMaxLineHeight_74() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mMaxLineHeight_74)); }
	inline int32_t get_mMaxLineHeight_74() const { return ___mMaxLineHeight_74; }
	inline int32_t* get_address_of_mMaxLineHeight_74() { return &___mMaxLineHeight_74; }
	inline void set_mMaxLineHeight_74(int32_t value)
	{
		___mMaxLineHeight_74 = value;
	}

	inline static int32_t get_offset_of_mLineWidth_75() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mLineWidth_75)); }
	inline float get_mLineWidth_75() const { return ___mLineWidth_75; }
	inline float* get_address_of_mLineWidth_75() { return &___mLineWidth_75; }
	inline void set_mLineWidth_75(float value)
	{
		___mLineWidth_75 = value;
	}

	inline static int32_t get_offset_of_mMultiline_76() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mMultiline_76)); }
	inline bool get_mMultiline_76() const { return ___mMultiline_76; }
	inline bool* get_address_of_mMultiline_76() { return &___mMultiline_76; }
	inline void set_mMultiline_76(bool value)
	{
		___mMultiline_76 = value;
	}

	inline static int32_t get_offset_of_isChanged_77() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___isChanged_77)); }
	inline bool get_isChanged_77() const { return ___isChanged_77; }
	inline bool* get_address_of_isChanged_77() { return &___isChanged_77; }
	inline void set_isChanged_77(bool value)
	{
		___isChanged_77 = value;
	}

	inline static int32_t get_offset_of_mOriginalText_78() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mOriginalText_78)); }
	inline String_t* get_mOriginalText_78() const { return ___mOriginalText_78; }
	inline String_t** get_address_of_mOriginalText_78() { return &___mOriginalText_78; }
	inline void set_mOriginalText_78(String_t* value)
	{
		___mOriginalText_78 = value;
		Il2CppCodeGenWriteBarrier(&___mOriginalText_78, value);
	}

	inline static int32_t get_offset_of_mIntConvert_79() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mIntConvert_79)); }
	inline bool get_mIntConvert_79() const { return ___mIntConvert_79; }
	inline bool* get_address_of_mIntConvert_79() { return &___mIntConvert_79; }
	inline void set_mIntConvert_79(bool value)
	{
		___mIntConvert_79 = value;
	}

	inline static int32_t get_offset_of_needChangeWord_80() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___needChangeWord_80)); }
	inline bool get_needChangeWord_80() const { return ___needChangeWord_80; }
	inline bool* get_address_of_needChangeWord_80() { return &___needChangeWord_80; }
	inline void set_needChangeWord_80(bool value)
	{
		___needChangeWord_80 = value;
	}

	inline static int32_t get_offset_of_mActiveTTF_81() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mActiveTTF_81)); }
	inline Font_t4239498691 * get_mActiveTTF_81() const { return ___mActiveTTF_81; }
	inline Font_t4239498691 ** get_address_of_mActiveTTF_81() { return &___mActiveTTF_81; }
	inline void set_mActiveTTF_81(Font_t4239498691 * value)
	{
		___mActiveTTF_81 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveTTF_81, value);
	}

	inline static int32_t get_offset_of_mDensity_82() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mDensity_82)); }
	inline float get_mDensity_82() const { return ___mDensity_82; }
	inline float* get_address_of_mDensity_82() { return &___mDensity_82; }
	inline void set_mDensity_82(float value)
	{
		___mDensity_82 = value;
	}

	inline static int32_t get_offset_of_mShouldBeProcessed_83() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mShouldBeProcessed_83)); }
	inline bool get_mShouldBeProcessed_83() const { return ___mShouldBeProcessed_83; }
	inline bool* get_address_of_mShouldBeProcessed_83() { return &___mShouldBeProcessed_83; }
	inline void set_mShouldBeProcessed_83(bool value)
	{
		___mShouldBeProcessed_83 = value;
	}

	inline static int32_t get_offset_of_mProcessedText_84() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mProcessedText_84)); }
	inline String_t* get_mProcessedText_84() const { return ___mProcessedText_84; }
	inline String_t** get_address_of_mProcessedText_84() { return &___mProcessedText_84; }
	inline void set_mProcessedText_84(String_t* value)
	{
		___mProcessedText_84 = value;
		Il2CppCodeGenWriteBarrier(&___mProcessedText_84, value);
	}

	inline static int32_t get_offset_of_mPremultiply_85() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mPremultiply_85)); }
	inline bool get_mPremultiply_85() const { return ___mPremultiply_85; }
	inline bool* get_address_of_mPremultiply_85() { return &___mPremultiply_85; }
	inline void set_mPremultiply_85(bool value)
	{
		___mPremultiply_85 = value;
	}

	inline static int32_t get_offset_of_mCalculatedSize_86() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mCalculatedSize_86)); }
	inline Vector2_t2243707579  get_mCalculatedSize_86() const { return ___mCalculatedSize_86; }
	inline Vector2_t2243707579 * get_address_of_mCalculatedSize_86() { return &___mCalculatedSize_86; }
	inline void set_mCalculatedSize_86(Vector2_t2243707579  value)
	{
		___mCalculatedSize_86 = value;
	}

	inline static int32_t get_offset_of_mScale_87() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mScale_87)); }
	inline float get_mScale_87() const { return ___mScale_87; }
	inline float* get_address_of_mScale_87() { return &___mScale_87; }
	inline void set_mScale_87(float value)
	{
		___mScale_87 = value;
	}

	inline static int32_t get_offset_of_mPrintedSize_88() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mPrintedSize_88)); }
	inline int32_t get_mPrintedSize_88() const { return ___mPrintedSize_88; }
	inline int32_t* get_address_of_mPrintedSize_88() { return &___mPrintedSize_88; }
	inline void set_mPrintedSize_88(int32_t value)
	{
		___mPrintedSize_88 = value;
	}

	inline static int32_t get_offset_of_mLastWidth_89() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mLastWidth_89)); }
	inline int32_t get_mLastWidth_89() const { return ___mLastWidth_89; }
	inline int32_t* get_address_of_mLastWidth_89() { return &___mLastWidth_89; }
	inline void set_mLastWidth_89(int32_t value)
	{
		___mLastWidth_89 = value;
	}

	inline static int32_t get_offset_of_mLastHeight_90() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mLastHeight_90)); }
	inline int32_t get_mLastHeight_90() const { return ___mLastHeight_90; }
	inline int32_t* get_address_of_mLastHeight_90() { return &___mLastHeight_90; }
	inline void set_mLastHeight_90(int32_t value)
	{
		___mLastHeight_90 = value;
	}

	inline static int32_t get_offset_of_m_symbolOffset_101() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___m_symbolOffset_101)); }
	inline Action_t3226471752 * get_m_symbolOffset_101() const { return ___m_symbolOffset_101; }
	inline Action_t3226471752 ** get_address_of_m_symbolOffset_101() { return &___m_symbolOffset_101; }
	inline void set_m_symbolOffset_101(Action_t3226471752 * value)
	{
		___m_symbolOffset_101 = value;
		Il2CppCodeGenWriteBarrier(&___m_symbolOffset_101, value);
	}
};

struct UILabel_t1795115428_StaticFields
{
public:
	// System.String[] UILabel::separater
	StringU5BU5D_t1642385972* ___separater_91;
	// System.Text.StringBuilder UILabel::sb
	StringBuilder_t1221177846 * ___sb_92;
	// BetterList`1<UILabel> UILabel::mList
	BetterList_1_t2015504070 * ___mList_93;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Int32> UILabel::mFontUsage
	Dictionary_2_t2179995492 * ___mFontUsage_94;
	// UILabel/CallLoadAsset UILabel::monLoadAsset
	CallLoadAsset_t879644691 * ___monLoadAsset_95;
	// System.Text.StringBuilder UILabel::mstrbuilder
	StringBuilder_t1221177846 * ___mstrbuilder_96;
	// UILabel/OnQueryString UILabel::moQuery
	OnQueryString_t1562153177 * ___moQuery_97;
	// UILabel/OnQueryString UILabel::intConvertFunc
	OnQueryString_t1562153177 * ___intConvertFunc_98;
	// BetterList`1<UnityEngine.Vector3> UILabel::mTempVerts
	BetterList_1_t2464096222 * ___mTempVerts_99;
	// BetterList`1<System.Int32> UILabel::mTempIndices
	BetterList_1_t2292266090 * ___mTempIndices_100;

public:
	inline static int32_t get_offset_of_separater_91() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___separater_91)); }
	inline StringU5BU5D_t1642385972* get_separater_91() const { return ___separater_91; }
	inline StringU5BU5D_t1642385972** get_address_of_separater_91() { return &___separater_91; }
	inline void set_separater_91(StringU5BU5D_t1642385972* value)
	{
		___separater_91 = value;
		Il2CppCodeGenWriteBarrier(&___separater_91, value);
	}

	inline static int32_t get_offset_of_sb_92() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___sb_92)); }
	inline StringBuilder_t1221177846 * get_sb_92() const { return ___sb_92; }
	inline StringBuilder_t1221177846 ** get_address_of_sb_92() { return &___sb_92; }
	inline void set_sb_92(StringBuilder_t1221177846 * value)
	{
		___sb_92 = value;
		Il2CppCodeGenWriteBarrier(&___sb_92, value);
	}

	inline static int32_t get_offset_of_mList_93() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___mList_93)); }
	inline BetterList_1_t2015504070 * get_mList_93() const { return ___mList_93; }
	inline BetterList_1_t2015504070 ** get_address_of_mList_93() { return &___mList_93; }
	inline void set_mList_93(BetterList_1_t2015504070 * value)
	{
		___mList_93 = value;
		Il2CppCodeGenWriteBarrier(&___mList_93, value);
	}

	inline static int32_t get_offset_of_mFontUsage_94() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___mFontUsage_94)); }
	inline Dictionary_2_t2179995492 * get_mFontUsage_94() const { return ___mFontUsage_94; }
	inline Dictionary_2_t2179995492 ** get_address_of_mFontUsage_94() { return &___mFontUsage_94; }
	inline void set_mFontUsage_94(Dictionary_2_t2179995492 * value)
	{
		___mFontUsage_94 = value;
		Il2CppCodeGenWriteBarrier(&___mFontUsage_94, value);
	}

	inline static int32_t get_offset_of_monLoadAsset_95() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___monLoadAsset_95)); }
	inline CallLoadAsset_t879644691 * get_monLoadAsset_95() const { return ___monLoadAsset_95; }
	inline CallLoadAsset_t879644691 ** get_address_of_monLoadAsset_95() { return &___monLoadAsset_95; }
	inline void set_monLoadAsset_95(CallLoadAsset_t879644691 * value)
	{
		___monLoadAsset_95 = value;
		Il2CppCodeGenWriteBarrier(&___monLoadAsset_95, value);
	}

	inline static int32_t get_offset_of_mstrbuilder_96() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___mstrbuilder_96)); }
	inline StringBuilder_t1221177846 * get_mstrbuilder_96() const { return ___mstrbuilder_96; }
	inline StringBuilder_t1221177846 ** get_address_of_mstrbuilder_96() { return &___mstrbuilder_96; }
	inline void set_mstrbuilder_96(StringBuilder_t1221177846 * value)
	{
		___mstrbuilder_96 = value;
		Il2CppCodeGenWriteBarrier(&___mstrbuilder_96, value);
	}

	inline static int32_t get_offset_of_moQuery_97() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___moQuery_97)); }
	inline OnQueryString_t1562153177 * get_moQuery_97() const { return ___moQuery_97; }
	inline OnQueryString_t1562153177 ** get_address_of_moQuery_97() { return &___moQuery_97; }
	inline void set_moQuery_97(OnQueryString_t1562153177 * value)
	{
		___moQuery_97 = value;
		Il2CppCodeGenWriteBarrier(&___moQuery_97, value);
	}

	inline static int32_t get_offset_of_intConvertFunc_98() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___intConvertFunc_98)); }
	inline OnQueryString_t1562153177 * get_intConvertFunc_98() const { return ___intConvertFunc_98; }
	inline OnQueryString_t1562153177 ** get_address_of_intConvertFunc_98() { return &___intConvertFunc_98; }
	inline void set_intConvertFunc_98(OnQueryString_t1562153177 * value)
	{
		___intConvertFunc_98 = value;
		Il2CppCodeGenWriteBarrier(&___intConvertFunc_98, value);
	}

	inline static int32_t get_offset_of_mTempVerts_99() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___mTempVerts_99)); }
	inline BetterList_1_t2464096222 * get_mTempVerts_99() const { return ___mTempVerts_99; }
	inline BetterList_1_t2464096222 ** get_address_of_mTempVerts_99() { return &___mTempVerts_99; }
	inline void set_mTempVerts_99(BetterList_1_t2464096222 * value)
	{
		___mTempVerts_99 = value;
		Il2CppCodeGenWriteBarrier(&___mTempVerts_99, value);
	}

	inline static int32_t get_offset_of_mTempIndices_100() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___mTempIndices_100)); }
	inline BetterList_1_t2292266090 * get_mTempIndices_100() const { return ___mTempIndices_100; }
	inline BetterList_1_t2292266090 ** get_address_of_mTempIndices_100() { return &___mTempIndices_100; }
	inline void set_mTempIndices_100(BetterList_1_t2292266090 * value)
	{
		___mTempIndices_100 = value;
		Il2CppCodeGenWriteBarrier(&___mTempIndices_100, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
