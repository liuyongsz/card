#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIAtlas
struct UIAtlas_t1304615221;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t2862501359;
// UnityEngine.Shader
struct Shader_t2430389951;
// UISprite/CallLoadAsset
struct CallLoadAsset_t3643317544;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;

#include "AssemblyU2DCSharp_UIWidget1453041918.h"
#include "AssemblyU2DCSharp_UISprite_Type2972059396.h"
#include "AssemblyU2DCSharp_UISprite_FillDirection2438394762.h"
#include "AssemblyU2DCSharp_UISprite_Flip250082235.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "AssemblyU2DCSharp_UISprite_AdvancedType3338161062.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISprite
struct  UISprite_t603616735  : public UIWidget_t1453041918
{
public:
	// UIAtlas UISprite::mAtlas
	UIAtlas_t1304615221 * ___mAtlas_51;
	// System.String UISprite::mSpriteName
	String_t* ___mSpriteName_52;
	// UISprite/Type UISprite::mType
	int32_t ___mType_53;
	// UISprite/FillDirection UISprite::mFillDirection
	int32_t ___mFillDirection_54;
	// System.Single UISprite::mFillAmount
	float ___mFillAmount_55;
	// System.Boolean UISprite::mInvert
	bool ___mInvert_56;
	// UISprite/Flip UISprite::mFlip
	int32_t ___mFlip_57;
	// System.Boolean UISprite::mUseCircle
	bool ___mUseCircle_58;
	// System.Int32 UISprite::mCircleRadius
	int32_t ___mCircleRadius_59;
	// System.Boolean UISprite::mMirrorHorizontal
	bool ___mMirrorHorizontal_60;
	// System.Boolean UISprite::mMirrorVertical
	bool ___mMirrorVertical_61;
	// System.Boolean UISprite::mFillCenter
	bool ___mFillCenter_62;
	// UISpriteData UISprite::mSprite
	UISpriteData_t2862501359 * ___mSprite_63;
	// UnityEngine.Rect UISprite::mInnerUV
	Rect_t3681755626  ___mInnerUV_64;
	// UnityEngine.Rect UISprite::mOuterUV
	Rect_t3681755626  ___mOuterUV_65;
	// System.Boolean UISprite::mSpriteSet
	bool ___mSpriteSet_66;
	// UISprite/AdvancedType UISprite::centerType
	int32_t ___centerType_67;
	// UISprite/AdvancedType UISprite::leftType
	int32_t ___leftType_68;
	// UISprite/AdvancedType UISprite::rightType
	int32_t ___rightType_69;
	// UISprite/AdvancedType UISprite::bottomType
	int32_t ___bottomType_70;
	// UISprite/AdvancedType UISprite::topType
	int32_t ___topType_71;
	// System.Boolean UISprite::Additive
	bool ___Additive_72;
	// System.Int32 UISprite::maskCount
	int32_t ___maskCount_74;
	// UnityEngine.Vector4 UISprite::customValue1
	Vector4_t2243707581  ___customValue1_75;
	// UnityEngine.Vector4 UISprite::customValue2
	Vector4_t2243707581  ___customValue2_76;

public:
	inline static int32_t get_offset_of_mAtlas_51() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mAtlas_51)); }
	inline UIAtlas_t1304615221 * get_mAtlas_51() const { return ___mAtlas_51; }
	inline UIAtlas_t1304615221 ** get_address_of_mAtlas_51() { return &___mAtlas_51; }
	inline void set_mAtlas_51(UIAtlas_t1304615221 * value)
	{
		___mAtlas_51 = value;
		Il2CppCodeGenWriteBarrier(&___mAtlas_51, value);
	}

	inline static int32_t get_offset_of_mSpriteName_52() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mSpriteName_52)); }
	inline String_t* get_mSpriteName_52() const { return ___mSpriteName_52; }
	inline String_t** get_address_of_mSpriteName_52() { return &___mSpriteName_52; }
	inline void set_mSpriteName_52(String_t* value)
	{
		___mSpriteName_52 = value;
		Il2CppCodeGenWriteBarrier(&___mSpriteName_52, value);
	}

	inline static int32_t get_offset_of_mType_53() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mType_53)); }
	inline int32_t get_mType_53() const { return ___mType_53; }
	inline int32_t* get_address_of_mType_53() { return &___mType_53; }
	inline void set_mType_53(int32_t value)
	{
		___mType_53 = value;
	}

	inline static int32_t get_offset_of_mFillDirection_54() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mFillDirection_54)); }
	inline int32_t get_mFillDirection_54() const { return ___mFillDirection_54; }
	inline int32_t* get_address_of_mFillDirection_54() { return &___mFillDirection_54; }
	inline void set_mFillDirection_54(int32_t value)
	{
		___mFillDirection_54 = value;
	}

	inline static int32_t get_offset_of_mFillAmount_55() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mFillAmount_55)); }
	inline float get_mFillAmount_55() const { return ___mFillAmount_55; }
	inline float* get_address_of_mFillAmount_55() { return &___mFillAmount_55; }
	inline void set_mFillAmount_55(float value)
	{
		___mFillAmount_55 = value;
	}

	inline static int32_t get_offset_of_mInvert_56() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mInvert_56)); }
	inline bool get_mInvert_56() const { return ___mInvert_56; }
	inline bool* get_address_of_mInvert_56() { return &___mInvert_56; }
	inline void set_mInvert_56(bool value)
	{
		___mInvert_56 = value;
	}

	inline static int32_t get_offset_of_mFlip_57() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mFlip_57)); }
	inline int32_t get_mFlip_57() const { return ___mFlip_57; }
	inline int32_t* get_address_of_mFlip_57() { return &___mFlip_57; }
	inline void set_mFlip_57(int32_t value)
	{
		___mFlip_57 = value;
	}

	inline static int32_t get_offset_of_mUseCircle_58() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mUseCircle_58)); }
	inline bool get_mUseCircle_58() const { return ___mUseCircle_58; }
	inline bool* get_address_of_mUseCircle_58() { return &___mUseCircle_58; }
	inline void set_mUseCircle_58(bool value)
	{
		___mUseCircle_58 = value;
	}

	inline static int32_t get_offset_of_mCircleRadius_59() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mCircleRadius_59)); }
	inline int32_t get_mCircleRadius_59() const { return ___mCircleRadius_59; }
	inline int32_t* get_address_of_mCircleRadius_59() { return &___mCircleRadius_59; }
	inline void set_mCircleRadius_59(int32_t value)
	{
		___mCircleRadius_59 = value;
	}

	inline static int32_t get_offset_of_mMirrorHorizontal_60() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mMirrorHorizontal_60)); }
	inline bool get_mMirrorHorizontal_60() const { return ___mMirrorHorizontal_60; }
	inline bool* get_address_of_mMirrorHorizontal_60() { return &___mMirrorHorizontal_60; }
	inline void set_mMirrorHorizontal_60(bool value)
	{
		___mMirrorHorizontal_60 = value;
	}

	inline static int32_t get_offset_of_mMirrorVertical_61() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mMirrorVertical_61)); }
	inline bool get_mMirrorVertical_61() const { return ___mMirrorVertical_61; }
	inline bool* get_address_of_mMirrorVertical_61() { return &___mMirrorVertical_61; }
	inline void set_mMirrorVertical_61(bool value)
	{
		___mMirrorVertical_61 = value;
	}

	inline static int32_t get_offset_of_mFillCenter_62() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mFillCenter_62)); }
	inline bool get_mFillCenter_62() const { return ___mFillCenter_62; }
	inline bool* get_address_of_mFillCenter_62() { return &___mFillCenter_62; }
	inline void set_mFillCenter_62(bool value)
	{
		___mFillCenter_62 = value;
	}

	inline static int32_t get_offset_of_mSprite_63() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mSprite_63)); }
	inline UISpriteData_t2862501359 * get_mSprite_63() const { return ___mSprite_63; }
	inline UISpriteData_t2862501359 ** get_address_of_mSprite_63() { return &___mSprite_63; }
	inline void set_mSprite_63(UISpriteData_t2862501359 * value)
	{
		___mSprite_63 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_63, value);
	}

	inline static int32_t get_offset_of_mInnerUV_64() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mInnerUV_64)); }
	inline Rect_t3681755626  get_mInnerUV_64() const { return ___mInnerUV_64; }
	inline Rect_t3681755626 * get_address_of_mInnerUV_64() { return &___mInnerUV_64; }
	inline void set_mInnerUV_64(Rect_t3681755626  value)
	{
		___mInnerUV_64 = value;
	}

	inline static int32_t get_offset_of_mOuterUV_65() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mOuterUV_65)); }
	inline Rect_t3681755626  get_mOuterUV_65() const { return ___mOuterUV_65; }
	inline Rect_t3681755626 * get_address_of_mOuterUV_65() { return &___mOuterUV_65; }
	inline void set_mOuterUV_65(Rect_t3681755626  value)
	{
		___mOuterUV_65 = value;
	}

	inline static int32_t get_offset_of_mSpriteSet_66() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mSpriteSet_66)); }
	inline bool get_mSpriteSet_66() const { return ___mSpriteSet_66; }
	inline bool* get_address_of_mSpriteSet_66() { return &___mSpriteSet_66; }
	inline void set_mSpriteSet_66(bool value)
	{
		___mSpriteSet_66 = value;
	}

	inline static int32_t get_offset_of_centerType_67() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___centerType_67)); }
	inline int32_t get_centerType_67() const { return ___centerType_67; }
	inline int32_t* get_address_of_centerType_67() { return &___centerType_67; }
	inline void set_centerType_67(int32_t value)
	{
		___centerType_67 = value;
	}

	inline static int32_t get_offset_of_leftType_68() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___leftType_68)); }
	inline int32_t get_leftType_68() const { return ___leftType_68; }
	inline int32_t* get_address_of_leftType_68() { return &___leftType_68; }
	inline void set_leftType_68(int32_t value)
	{
		___leftType_68 = value;
	}

	inline static int32_t get_offset_of_rightType_69() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___rightType_69)); }
	inline int32_t get_rightType_69() const { return ___rightType_69; }
	inline int32_t* get_address_of_rightType_69() { return &___rightType_69; }
	inline void set_rightType_69(int32_t value)
	{
		___rightType_69 = value;
	}

	inline static int32_t get_offset_of_bottomType_70() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___bottomType_70)); }
	inline int32_t get_bottomType_70() const { return ___bottomType_70; }
	inline int32_t* get_address_of_bottomType_70() { return &___bottomType_70; }
	inline void set_bottomType_70(int32_t value)
	{
		___bottomType_70 = value;
	}

	inline static int32_t get_offset_of_topType_71() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___topType_71)); }
	inline int32_t get_topType_71() const { return ___topType_71; }
	inline int32_t* get_address_of_topType_71() { return &___topType_71; }
	inline void set_topType_71(int32_t value)
	{
		___topType_71 = value;
	}

	inline static int32_t get_offset_of_Additive_72() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___Additive_72)); }
	inline bool get_Additive_72() const { return ___Additive_72; }
	inline bool* get_address_of_Additive_72() { return &___Additive_72; }
	inline void set_Additive_72(bool value)
	{
		___Additive_72 = value;
	}

	inline static int32_t get_offset_of_maskCount_74() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___maskCount_74)); }
	inline int32_t get_maskCount_74() const { return ___maskCount_74; }
	inline int32_t* get_address_of_maskCount_74() { return &___maskCount_74; }
	inline void set_maskCount_74(int32_t value)
	{
		___maskCount_74 = value;
	}

	inline static int32_t get_offset_of_customValue1_75() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___customValue1_75)); }
	inline Vector4_t2243707581  get_customValue1_75() const { return ___customValue1_75; }
	inline Vector4_t2243707581 * get_address_of_customValue1_75() { return &___customValue1_75; }
	inline void set_customValue1_75(Vector4_t2243707581  value)
	{
		___customValue1_75 = value;
	}

	inline static int32_t get_offset_of_customValue2_76() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___customValue2_76)); }
	inline Vector4_t2243707581  get_customValue2_76() const { return ___customValue2_76; }
	inline Vector4_t2243707581 * get_address_of_customValue2_76() { return &___customValue2_76; }
	inline void set_customValue2_76(Vector4_t2243707581  value)
	{
		___customValue2_76 = value;
	}
};

struct UISprite_t603616735_StaticFields
{
public:
	// UnityEngine.Shader UISprite::mAppointShader
	Shader_t2430389951 * ___mAppointShader_73;
	// UISprite/CallLoadAsset UISprite::monLoadAsset
	CallLoadAsset_t3643317544 * ___monLoadAsset_77;
	// UnityEngine.Vector2[] UISprite::mTempPos
	Vector2U5BU5D_t686124026* ___mTempPos_78;
	// UnityEngine.Vector2[] UISprite::mTempUVs
	Vector2U5BU5D_t686124026* ___mTempUVs_79;

public:
	inline static int32_t get_offset_of_mAppointShader_73() { return static_cast<int32_t>(offsetof(UISprite_t603616735_StaticFields, ___mAppointShader_73)); }
	inline Shader_t2430389951 * get_mAppointShader_73() const { return ___mAppointShader_73; }
	inline Shader_t2430389951 ** get_address_of_mAppointShader_73() { return &___mAppointShader_73; }
	inline void set_mAppointShader_73(Shader_t2430389951 * value)
	{
		___mAppointShader_73 = value;
		Il2CppCodeGenWriteBarrier(&___mAppointShader_73, value);
	}

	inline static int32_t get_offset_of_monLoadAsset_77() { return static_cast<int32_t>(offsetof(UISprite_t603616735_StaticFields, ___monLoadAsset_77)); }
	inline CallLoadAsset_t3643317544 * get_monLoadAsset_77() const { return ___monLoadAsset_77; }
	inline CallLoadAsset_t3643317544 ** get_address_of_monLoadAsset_77() { return &___monLoadAsset_77; }
	inline void set_monLoadAsset_77(CallLoadAsset_t3643317544 * value)
	{
		___monLoadAsset_77 = value;
		Il2CppCodeGenWriteBarrier(&___monLoadAsset_77, value);
	}

	inline static int32_t get_offset_of_mTempPos_78() { return static_cast<int32_t>(offsetof(UISprite_t603616735_StaticFields, ___mTempPos_78)); }
	inline Vector2U5BU5D_t686124026* get_mTempPos_78() const { return ___mTempPos_78; }
	inline Vector2U5BU5D_t686124026** get_address_of_mTempPos_78() { return &___mTempPos_78; }
	inline void set_mTempPos_78(Vector2U5BU5D_t686124026* value)
	{
		___mTempPos_78 = value;
		Il2CppCodeGenWriteBarrier(&___mTempPos_78, value);
	}

	inline static int32_t get_offset_of_mTempUVs_79() { return static_cast<int32_t>(offsetof(UISprite_t603616735_StaticFields, ___mTempUVs_79)); }
	inline Vector2U5BU5D_t686124026* get_mTempUVs_79() const { return ___mTempUVs_79; }
	inline Vector2U5BU5D_t686124026** get_address_of_mTempUVs_79() { return &___mTempUVs_79; }
	inline void set_mTempUVs_79(Vector2U5BU5D_t686124026* value)
	{
		___mTempUVs_79 = value;
		Il2CppCodeGenWriteBarrier(&___mTempUVs_79, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
