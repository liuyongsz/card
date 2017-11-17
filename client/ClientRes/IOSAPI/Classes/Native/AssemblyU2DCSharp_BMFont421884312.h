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
// System.Collections.Generic.List`1<BMGlyph>
struct List_1_t3272617963;
// System.Collections.Generic.Dictionary`2<System.Int32,BMGlyph>
struct Dictionary_2_t2911322466;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BMFont
struct  BMFont_t421884312  : public Il2CppObject
{
public:
	// System.Int32 BMFont::mSize
	int32_t ___mSize_0;
	// System.Int32 BMFont::mBase
	int32_t ___mBase_1;
	// System.Int32 BMFont::mWidth
	int32_t ___mWidth_2;
	// System.Int32 BMFont::mHeight
	int32_t ___mHeight_3;
	// System.String BMFont::mSpriteName
	String_t* ___mSpriteName_4;
	// System.Collections.Generic.List`1<BMGlyph> BMFont::mSaved
	List_1_t3272617963 * ___mSaved_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,BMGlyph> BMFont::mDict
	Dictionary_2_t2911322466 * ___mDict_6;

public:
	inline static int32_t get_offset_of_mSize_0() { return static_cast<int32_t>(offsetof(BMFont_t421884312, ___mSize_0)); }
	inline int32_t get_mSize_0() const { return ___mSize_0; }
	inline int32_t* get_address_of_mSize_0() { return &___mSize_0; }
	inline void set_mSize_0(int32_t value)
	{
		___mSize_0 = value;
	}

	inline static int32_t get_offset_of_mBase_1() { return static_cast<int32_t>(offsetof(BMFont_t421884312, ___mBase_1)); }
	inline int32_t get_mBase_1() const { return ___mBase_1; }
	inline int32_t* get_address_of_mBase_1() { return &___mBase_1; }
	inline void set_mBase_1(int32_t value)
	{
		___mBase_1 = value;
	}

	inline static int32_t get_offset_of_mWidth_2() { return static_cast<int32_t>(offsetof(BMFont_t421884312, ___mWidth_2)); }
	inline int32_t get_mWidth_2() const { return ___mWidth_2; }
	inline int32_t* get_address_of_mWidth_2() { return &___mWidth_2; }
	inline void set_mWidth_2(int32_t value)
	{
		___mWidth_2 = value;
	}

	inline static int32_t get_offset_of_mHeight_3() { return static_cast<int32_t>(offsetof(BMFont_t421884312, ___mHeight_3)); }
	inline int32_t get_mHeight_3() const { return ___mHeight_3; }
	inline int32_t* get_address_of_mHeight_3() { return &___mHeight_3; }
	inline void set_mHeight_3(int32_t value)
	{
		___mHeight_3 = value;
	}

	inline static int32_t get_offset_of_mSpriteName_4() { return static_cast<int32_t>(offsetof(BMFont_t421884312, ___mSpriteName_4)); }
	inline String_t* get_mSpriteName_4() const { return ___mSpriteName_4; }
	inline String_t** get_address_of_mSpriteName_4() { return &___mSpriteName_4; }
	inline void set_mSpriteName_4(String_t* value)
	{
		___mSpriteName_4 = value;
		Il2CppCodeGenWriteBarrier(&___mSpriteName_4, value);
	}

	inline static int32_t get_offset_of_mSaved_5() { return static_cast<int32_t>(offsetof(BMFont_t421884312, ___mSaved_5)); }
	inline List_1_t3272617963 * get_mSaved_5() const { return ___mSaved_5; }
	inline List_1_t3272617963 ** get_address_of_mSaved_5() { return &___mSaved_5; }
	inline void set_mSaved_5(List_1_t3272617963 * value)
	{
		___mSaved_5 = value;
		Il2CppCodeGenWriteBarrier(&___mSaved_5, value);
	}

	inline static int32_t get_offset_of_mDict_6() { return static_cast<int32_t>(offsetof(BMFont_t421884312, ___mDict_6)); }
	inline Dictionary_2_t2911322466 * get_mDict_6() const { return ___mDict_6; }
	inline Dictionary_2_t2911322466 ** get_address_of_mDict_6() { return &___mDict_6; }
	inline void set_mDict_6(Dictionary_2_t2911322466 * value)
	{
		___mDict_6 = value;
		Il2CppCodeGenWriteBarrier(&___mDict_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
