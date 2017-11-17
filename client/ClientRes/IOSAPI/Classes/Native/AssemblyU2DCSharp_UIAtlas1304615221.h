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
// UnityEngine.Material
struct Material_t193706927;
// System.Collections.Generic.List`1<UISpriteData>
struct List_1_t2231622491;
// UIAtlas
struct UIAtlas_t1304615221;
// System.Collections.Generic.List`1<UIAtlas/Sprite>
struct List_1_t3798875523;
// System.Comparison`1<UISpriteData>
struct Comparison_1_t4124240210;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIAtlas_Coordinates2844876023.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIAtlas
struct  UIAtlas_t1304615221  : public MonoBehaviour_t1158329972
{
public:
	// System.Single[] UIAtlas::scales
	SingleU5BU5D_t577127397* ___scales_2;
	// UnityEngine.Material UIAtlas::material
	Material_t193706927 * ___material_3;
	// System.Collections.Generic.List`1<UISpriteData> UIAtlas::mSprites
	List_1_t2231622491 * ___mSprites_4;
	// System.Single UIAtlas::mPixelSize
	float ___mPixelSize_5;
	// UIAtlas UIAtlas::mReplacement
	UIAtlas_t1304615221 * ___mReplacement_6;
	// UIAtlas/Coordinates UIAtlas::mCoordinates
	int32_t ___mCoordinates_7;
	// System.Collections.Generic.List`1<UIAtlas/Sprite> UIAtlas::sprites
	List_1_t3798875523 * ___sprites_8;
	// System.Int32 UIAtlas::mPMA
	int32_t ___mPMA_9;

public:
	inline static int32_t get_offset_of_scales_2() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221, ___scales_2)); }
	inline SingleU5BU5D_t577127397* get_scales_2() const { return ___scales_2; }
	inline SingleU5BU5D_t577127397** get_address_of_scales_2() { return &___scales_2; }
	inline void set_scales_2(SingleU5BU5D_t577127397* value)
	{
		___scales_2 = value;
		Il2CppCodeGenWriteBarrier(&___scales_2, value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221, ___material_3)); }
	inline Material_t193706927 * get_material_3() const { return ___material_3; }
	inline Material_t193706927 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t193706927 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier(&___material_3, value);
	}

	inline static int32_t get_offset_of_mSprites_4() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221, ___mSprites_4)); }
	inline List_1_t2231622491 * get_mSprites_4() const { return ___mSprites_4; }
	inline List_1_t2231622491 ** get_address_of_mSprites_4() { return &___mSprites_4; }
	inline void set_mSprites_4(List_1_t2231622491 * value)
	{
		___mSprites_4 = value;
		Il2CppCodeGenWriteBarrier(&___mSprites_4, value);
	}

	inline static int32_t get_offset_of_mPixelSize_5() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221, ___mPixelSize_5)); }
	inline float get_mPixelSize_5() const { return ___mPixelSize_5; }
	inline float* get_address_of_mPixelSize_5() { return &___mPixelSize_5; }
	inline void set_mPixelSize_5(float value)
	{
		___mPixelSize_5 = value;
	}

	inline static int32_t get_offset_of_mReplacement_6() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221, ___mReplacement_6)); }
	inline UIAtlas_t1304615221 * get_mReplacement_6() const { return ___mReplacement_6; }
	inline UIAtlas_t1304615221 ** get_address_of_mReplacement_6() { return &___mReplacement_6; }
	inline void set_mReplacement_6(UIAtlas_t1304615221 * value)
	{
		___mReplacement_6 = value;
		Il2CppCodeGenWriteBarrier(&___mReplacement_6, value);
	}

	inline static int32_t get_offset_of_mCoordinates_7() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221, ___mCoordinates_7)); }
	inline int32_t get_mCoordinates_7() const { return ___mCoordinates_7; }
	inline int32_t* get_address_of_mCoordinates_7() { return &___mCoordinates_7; }
	inline void set_mCoordinates_7(int32_t value)
	{
		___mCoordinates_7 = value;
	}

	inline static int32_t get_offset_of_sprites_8() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221, ___sprites_8)); }
	inline List_1_t3798875523 * get_sprites_8() const { return ___sprites_8; }
	inline List_1_t3798875523 ** get_address_of_sprites_8() { return &___sprites_8; }
	inline void set_sprites_8(List_1_t3798875523 * value)
	{
		___sprites_8 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_8, value);
	}

	inline static int32_t get_offset_of_mPMA_9() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221, ___mPMA_9)); }
	inline int32_t get_mPMA_9() const { return ___mPMA_9; }
	inline int32_t* get_address_of_mPMA_9() { return &___mPMA_9; }
	inline void set_mPMA_9(int32_t value)
	{
		___mPMA_9 = value;
	}
};

struct UIAtlas_t1304615221_StaticFields
{
public:
	// System.Comparison`1<UISpriteData> UIAtlas::<>f__am$cache8
	Comparison_1_t4124240210 * ___U3CU3Ef__amU24cache8_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_10() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221_StaticFields, ___U3CU3Ef__amU24cache8_10)); }
	inline Comparison_1_t4124240210 * get_U3CU3Ef__amU24cache8_10() const { return ___U3CU3Ef__amU24cache8_10; }
	inline Comparison_1_t4124240210 ** get_address_of_U3CU3Ef__amU24cache8_10() { return &___U3CU3Ef__amU24cache8_10; }
	inline void set_U3CU3Ef__amU24cache8_10(Comparison_1_t4124240210 * value)
	{
		___U3CU3Ef__amU24cache8_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
