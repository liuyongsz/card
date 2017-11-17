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
// UISprite
struct UISprite_t603616735;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Action
struct Action_t3226471752;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISpriteAnimation
struct  UISpriteAnimation_t97731357  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 UISpriteAnimation::mFPS
	int32_t ___mFPS_2;
	// System.String UISpriteAnimation::mPrefix
	String_t* ___mPrefix_3;
	// System.Boolean UISpriteAnimation::mLoop
	bool ___mLoop_4;
	// UISprite UISpriteAnimation::mSprite
	UISprite_t603616735 * ___mSprite_5;
	// System.Single UISpriteAnimation::mDelta
	float ___mDelta_6;
	// System.Int32 UISpriteAnimation::mIndex
	int32_t ___mIndex_7;
	// System.Boolean UISpriteAnimation::mActive
	bool ___mActive_8;
	// System.Collections.Generic.List`1<System.String> UISpriteAnimation::mSpriteNames
	List_1_t1398341365 * ___mSpriteNames_9;
	// System.Int32 UISpriteAnimation::loopTime
	int32_t ___loopTime_10;
	// System.Int32 UISpriteAnimation::loopCounter
	int32_t ___loopCounter_11;
	// System.Action UISpriteAnimation::m_callBack
	Action_t3226471752 * ___m_callBack_12;
	// System.Boolean UISpriteAnimation::perfect
	bool ___perfect_13;

public:
	inline static int32_t get_offset_of_mFPS_2() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mFPS_2)); }
	inline int32_t get_mFPS_2() const { return ___mFPS_2; }
	inline int32_t* get_address_of_mFPS_2() { return &___mFPS_2; }
	inline void set_mFPS_2(int32_t value)
	{
		___mFPS_2 = value;
	}

	inline static int32_t get_offset_of_mPrefix_3() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mPrefix_3)); }
	inline String_t* get_mPrefix_3() const { return ___mPrefix_3; }
	inline String_t** get_address_of_mPrefix_3() { return &___mPrefix_3; }
	inline void set_mPrefix_3(String_t* value)
	{
		___mPrefix_3 = value;
		Il2CppCodeGenWriteBarrier(&___mPrefix_3, value);
	}

	inline static int32_t get_offset_of_mLoop_4() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mLoop_4)); }
	inline bool get_mLoop_4() const { return ___mLoop_4; }
	inline bool* get_address_of_mLoop_4() { return &___mLoop_4; }
	inline void set_mLoop_4(bool value)
	{
		___mLoop_4 = value;
	}

	inline static int32_t get_offset_of_mSprite_5() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mSprite_5)); }
	inline UISprite_t603616735 * get_mSprite_5() const { return ___mSprite_5; }
	inline UISprite_t603616735 ** get_address_of_mSprite_5() { return &___mSprite_5; }
	inline void set_mSprite_5(UISprite_t603616735 * value)
	{
		___mSprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_5, value);
	}

	inline static int32_t get_offset_of_mDelta_6() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mDelta_6)); }
	inline float get_mDelta_6() const { return ___mDelta_6; }
	inline float* get_address_of_mDelta_6() { return &___mDelta_6; }
	inline void set_mDelta_6(float value)
	{
		___mDelta_6 = value;
	}

	inline static int32_t get_offset_of_mIndex_7() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mIndex_7)); }
	inline int32_t get_mIndex_7() const { return ___mIndex_7; }
	inline int32_t* get_address_of_mIndex_7() { return &___mIndex_7; }
	inline void set_mIndex_7(int32_t value)
	{
		___mIndex_7 = value;
	}

	inline static int32_t get_offset_of_mActive_8() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mActive_8)); }
	inline bool get_mActive_8() const { return ___mActive_8; }
	inline bool* get_address_of_mActive_8() { return &___mActive_8; }
	inline void set_mActive_8(bool value)
	{
		___mActive_8 = value;
	}

	inline static int32_t get_offset_of_mSpriteNames_9() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mSpriteNames_9)); }
	inline List_1_t1398341365 * get_mSpriteNames_9() const { return ___mSpriteNames_9; }
	inline List_1_t1398341365 ** get_address_of_mSpriteNames_9() { return &___mSpriteNames_9; }
	inline void set_mSpriteNames_9(List_1_t1398341365 * value)
	{
		___mSpriteNames_9 = value;
		Il2CppCodeGenWriteBarrier(&___mSpriteNames_9, value);
	}

	inline static int32_t get_offset_of_loopTime_10() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___loopTime_10)); }
	inline int32_t get_loopTime_10() const { return ___loopTime_10; }
	inline int32_t* get_address_of_loopTime_10() { return &___loopTime_10; }
	inline void set_loopTime_10(int32_t value)
	{
		___loopTime_10 = value;
	}

	inline static int32_t get_offset_of_loopCounter_11() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___loopCounter_11)); }
	inline int32_t get_loopCounter_11() const { return ___loopCounter_11; }
	inline int32_t* get_address_of_loopCounter_11() { return &___loopCounter_11; }
	inline void set_loopCounter_11(int32_t value)
	{
		___loopCounter_11 = value;
	}

	inline static int32_t get_offset_of_m_callBack_12() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___m_callBack_12)); }
	inline Action_t3226471752 * get_m_callBack_12() const { return ___m_callBack_12; }
	inline Action_t3226471752 ** get_address_of_m_callBack_12() { return &___m_callBack_12; }
	inline void set_m_callBack_12(Action_t3226471752 * value)
	{
		___m_callBack_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_callBack_12, value);
	}

	inline static int32_t get_offset_of_perfect_13() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___perfect_13)); }
	inline bool get_perfect_13() const { return ___perfect_13; }
	inline bool* get_address_of_perfect_13() { return &___perfect_13; }
	inline void set_perfect_13(bool value)
	{
		___perfect_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
