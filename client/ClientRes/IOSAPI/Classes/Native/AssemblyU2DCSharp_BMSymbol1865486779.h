#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t2862501359;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BMSymbol
struct  BMSymbol_t1865486779  : public Il2CppObject
{
public:
	// System.String BMSymbol::sequence
	String_t* ___sequence_0;
	// System.String BMSymbol::spriteName
	String_t* ___spriteName_1;
	// UISpriteData BMSymbol::mSprite
	UISpriteData_t2862501359 * ___mSprite_2;
	// System.Boolean BMSymbol::mIsValid
	bool ___mIsValid_3;
	// System.Int32 BMSymbol::mLength
	int32_t ___mLength_4;
	// System.Int32 BMSymbol::mOffsetX
	int32_t ___mOffsetX_5;
	// System.Int32 BMSymbol::mOffsetY
	int32_t ___mOffsetY_6;
	// System.Int32 BMSymbol::mWidth
	int32_t ___mWidth_7;
	// System.Int32 BMSymbol::mHeight
	int32_t ___mHeight_8;
	// System.Int32 BMSymbol::mAdvance
	int32_t ___mAdvance_9;
	// UnityEngine.Rect BMSymbol::mUV
	Rect_t3681755626  ___mUV_10;

public:
	inline static int32_t get_offset_of_sequence_0() { return static_cast<int32_t>(offsetof(BMSymbol_t1865486779, ___sequence_0)); }
	inline String_t* get_sequence_0() const { return ___sequence_0; }
	inline String_t** get_address_of_sequence_0() { return &___sequence_0; }
	inline void set_sequence_0(String_t* value)
	{
		___sequence_0 = value;
		Il2CppCodeGenWriteBarrier(&___sequence_0, value);
	}

	inline static int32_t get_offset_of_spriteName_1() { return static_cast<int32_t>(offsetof(BMSymbol_t1865486779, ___spriteName_1)); }
	inline String_t* get_spriteName_1() const { return ___spriteName_1; }
	inline String_t** get_address_of_spriteName_1() { return &___spriteName_1; }
	inline void set_spriteName_1(String_t* value)
	{
		___spriteName_1 = value;
		Il2CppCodeGenWriteBarrier(&___spriteName_1, value);
	}

	inline static int32_t get_offset_of_mSprite_2() { return static_cast<int32_t>(offsetof(BMSymbol_t1865486779, ___mSprite_2)); }
	inline UISpriteData_t2862501359 * get_mSprite_2() const { return ___mSprite_2; }
	inline UISpriteData_t2862501359 ** get_address_of_mSprite_2() { return &___mSprite_2; }
	inline void set_mSprite_2(UISpriteData_t2862501359 * value)
	{
		___mSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_2, value);
	}

	inline static int32_t get_offset_of_mIsValid_3() { return static_cast<int32_t>(offsetof(BMSymbol_t1865486779, ___mIsValid_3)); }
	inline bool get_mIsValid_3() const { return ___mIsValid_3; }
	inline bool* get_address_of_mIsValid_3() { return &___mIsValid_3; }
	inline void set_mIsValid_3(bool value)
	{
		___mIsValid_3 = value;
	}

	inline static int32_t get_offset_of_mLength_4() { return static_cast<int32_t>(offsetof(BMSymbol_t1865486779, ___mLength_4)); }
	inline int32_t get_mLength_4() const { return ___mLength_4; }
	inline int32_t* get_address_of_mLength_4() { return &___mLength_4; }
	inline void set_mLength_4(int32_t value)
	{
		___mLength_4 = value;
	}

	inline static int32_t get_offset_of_mOffsetX_5() { return static_cast<int32_t>(offsetof(BMSymbol_t1865486779, ___mOffsetX_5)); }
	inline int32_t get_mOffsetX_5() const { return ___mOffsetX_5; }
	inline int32_t* get_address_of_mOffsetX_5() { return &___mOffsetX_5; }
	inline void set_mOffsetX_5(int32_t value)
	{
		___mOffsetX_5 = value;
	}

	inline static int32_t get_offset_of_mOffsetY_6() { return static_cast<int32_t>(offsetof(BMSymbol_t1865486779, ___mOffsetY_6)); }
	inline int32_t get_mOffsetY_6() const { return ___mOffsetY_6; }
	inline int32_t* get_address_of_mOffsetY_6() { return &___mOffsetY_6; }
	inline void set_mOffsetY_6(int32_t value)
	{
		___mOffsetY_6 = value;
	}

	inline static int32_t get_offset_of_mWidth_7() { return static_cast<int32_t>(offsetof(BMSymbol_t1865486779, ___mWidth_7)); }
	inline int32_t get_mWidth_7() const { return ___mWidth_7; }
	inline int32_t* get_address_of_mWidth_7() { return &___mWidth_7; }
	inline void set_mWidth_7(int32_t value)
	{
		___mWidth_7 = value;
	}

	inline static int32_t get_offset_of_mHeight_8() { return static_cast<int32_t>(offsetof(BMSymbol_t1865486779, ___mHeight_8)); }
	inline int32_t get_mHeight_8() const { return ___mHeight_8; }
	inline int32_t* get_address_of_mHeight_8() { return &___mHeight_8; }
	inline void set_mHeight_8(int32_t value)
	{
		___mHeight_8 = value;
	}

	inline static int32_t get_offset_of_mAdvance_9() { return static_cast<int32_t>(offsetof(BMSymbol_t1865486779, ___mAdvance_9)); }
	inline int32_t get_mAdvance_9() const { return ___mAdvance_9; }
	inline int32_t* get_address_of_mAdvance_9() { return &___mAdvance_9; }
	inline void set_mAdvance_9(int32_t value)
	{
		___mAdvance_9 = value;
	}

	inline static int32_t get_offset_of_mUV_10() { return static_cast<int32_t>(offsetof(BMSymbol_t1865486779, ___mUV_10)); }
	inline Rect_t3681755626  get_mUV_10() const { return ___mUV_10; }
	inline Rect_t3681755626 * get_address_of_mUV_10() { return &___mUV_10; }
	inline void set_mUV_10(Rect_t3681755626  value)
	{
		___mUV_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
