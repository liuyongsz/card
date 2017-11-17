#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// UILabel
struct UILabel_t1795115428;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TypeWriterEffect
struct  TypeWriterEffect_t368317382  : public MonoBehaviour_t1158329972
{
public:
	// System.Action TypeWriterEffect::WriteComplete
	Action_t3226471752 * ___WriteComplete_2;
	// System.Int32 TypeWriterEffect::charsPerSecond
	int32_t ___charsPerSecond_3;
	// System.Boolean TypeWriterEffect::wait
	bool ___wait_4;
	// UILabel TypeWriterEffect::mLabel
	UILabel_t1795115428 * ___mLabel_5;
	// System.String[] TypeWriterEffect::mText
	StringU5BU5D_t1642385972* ___mText_6;
	// System.Int32 TypeWriterEffect::mOffset
	int32_t ___mOffset_7;
	// System.Single TypeWriterEffect::mNextChar
	float ___mNextChar_8;
	// System.Int32 TypeWriterEffect::index
	int32_t ___index_9;
	// System.Int32 TypeWriterEffect::maxCount
	int32_t ___maxCount_10;

public:
	inline static int32_t get_offset_of_WriteComplete_2() { return static_cast<int32_t>(offsetof(TypeWriterEffect_t368317382, ___WriteComplete_2)); }
	inline Action_t3226471752 * get_WriteComplete_2() const { return ___WriteComplete_2; }
	inline Action_t3226471752 ** get_address_of_WriteComplete_2() { return &___WriteComplete_2; }
	inline void set_WriteComplete_2(Action_t3226471752 * value)
	{
		___WriteComplete_2 = value;
		Il2CppCodeGenWriteBarrier(&___WriteComplete_2, value);
	}

	inline static int32_t get_offset_of_charsPerSecond_3() { return static_cast<int32_t>(offsetof(TypeWriterEffect_t368317382, ___charsPerSecond_3)); }
	inline int32_t get_charsPerSecond_3() const { return ___charsPerSecond_3; }
	inline int32_t* get_address_of_charsPerSecond_3() { return &___charsPerSecond_3; }
	inline void set_charsPerSecond_3(int32_t value)
	{
		___charsPerSecond_3 = value;
	}

	inline static int32_t get_offset_of_wait_4() { return static_cast<int32_t>(offsetof(TypeWriterEffect_t368317382, ___wait_4)); }
	inline bool get_wait_4() const { return ___wait_4; }
	inline bool* get_address_of_wait_4() { return &___wait_4; }
	inline void set_wait_4(bool value)
	{
		___wait_4 = value;
	}

	inline static int32_t get_offset_of_mLabel_5() { return static_cast<int32_t>(offsetof(TypeWriterEffect_t368317382, ___mLabel_5)); }
	inline UILabel_t1795115428 * get_mLabel_5() const { return ___mLabel_5; }
	inline UILabel_t1795115428 ** get_address_of_mLabel_5() { return &___mLabel_5; }
	inline void set_mLabel_5(UILabel_t1795115428 * value)
	{
		___mLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&___mLabel_5, value);
	}

	inline static int32_t get_offset_of_mText_6() { return static_cast<int32_t>(offsetof(TypeWriterEffect_t368317382, ___mText_6)); }
	inline StringU5BU5D_t1642385972* get_mText_6() const { return ___mText_6; }
	inline StringU5BU5D_t1642385972** get_address_of_mText_6() { return &___mText_6; }
	inline void set_mText_6(StringU5BU5D_t1642385972* value)
	{
		___mText_6 = value;
		Il2CppCodeGenWriteBarrier(&___mText_6, value);
	}

	inline static int32_t get_offset_of_mOffset_7() { return static_cast<int32_t>(offsetof(TypeWriterEffect_t368317382, ___mOffset_7)); }
	inline int32_t get_mOffset_7() const { return ___mOffset_7; }
	inline int32_t* get_address_of_mOffset_7() { return &___mOffset_7; }
	inline void set_mOffset_7(int32_t value)
	{
		___mOffset_7 = value;
	}

	inline static int32_t get_offset_of_mNextChar_8() { return static_cast<int32_t>(offsetof(TypeWriterEffect_t368317382, ___mNextChar_8)); }
	inline float get_mNextChar_8() const { return ___mNextChar_8; }
	inline float* get_address_of_mNextChar_8() { return &___mNextChar_8; }
	inline void set_mNextChar_8(float value)
	{
		___mNextChar_8 = value;
	}

	inline static int32_t get_offset_of_index_9() { return static_cast<int32_t>(offsetof(TypeWriterEffect_t368317382, ___index_9)); }
	inline int32_t get_index_9() const { return ___index_9; }
	inline int32_t* get_address_of_index_9() { return &___index_9; }
	inline void set_index_9(int32_t value)
	{
		___index_9 = value;
	}

	inline static int32_t get_offset_of_maxCount_10() { return static_cast<int32_t>(offsetof(TypeWriterEffect_t368317382, ___maxCount_10)); }
	inline int32_t get_maxCount_10() const { return ___maxCount_10; }
	inline int32_t* get_address_of_maxCount_10() { return &___maxCount_10; }
	inline void set_maxCount_10(int32_t value)
	{
		___maxCount_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
