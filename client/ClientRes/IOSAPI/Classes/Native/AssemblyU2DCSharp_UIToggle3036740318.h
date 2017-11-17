#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIToggle>
struct BetterList_1_t3257128960;
// UIToggle
struct UIToggle_t3036740318;
// UIWidget
struct UIWidget_t1453041918;
// UnityEngine.Animation
struct Animation_t2068071072;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2865430313;
// UISprite
struct UISprite_t603616735;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_UIWidgetContainer701016325.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIToggle
struct  UIToggle_t3036740318  : public UIWidgetContainer_t701016325
{
public:
	// System.Int32 UIToggle::group
	int32_t ___group_4;
	// UIWidget UIToggle::activeSprite
	UIWidget_t1453041918 * ___activeSprite_5;
	// UnityEngine.Animation UIToggle::activeAnimation
	Animation_t2068071072 * ___activeAnimation_6;
	// System.Boolean UIToggle::startsActive
	bool ___startsActive_7;
	// System.Boolean UIToggle::instantTween
	bool ___instantTween_8;
	// System.Boolean UIToggle::optionCanBeNone
	bool ___optionCanBeNone_9;
	// System.Collections.Generic.List`1<EventDelegate> UIToggle::onChange
	List_1_t2865430313 * ___onChange_10;
	// UISprite UIToggle::checkSprite
	UISprite_t603616735 * ___checkSprite_11;
	// UnityEngine.Animation UIToggle::checkAnimation
	Animation_t2068071072 * ___checkAnimation_12;
	// UnityEngine.GameObject UIToggle::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_13;
	// System.String UIToggle::functionName
	String_t* ___functionName_14;
	// System.Boolean UIToggle::startsChecked
	bool ___startsChecked_15;
	// System.Boolean UIToggle::mIsActive
	bool ___mIsActive_16;
	// System.Boolean UIToggle::mStarted
	bool ___mStarted_17;

public:
	inline static int32_t get_offset_of_group_4() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___group_4)); }
	inline int32_t get_group_4() const { return ___group_4; }
	inline int32_t* get_address_of_group_4() { return &___group_4; }
	inline void set_group_4(int32_t value)
	{
		___group_4 = value;
	}

	inline static int32_t get_offset_of_activeSprite_5() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___activeSprite_5)); }
	inline UIWidget_t1453041918 * get_activeSprite_5() const { return ___activeSprite_5; }
	inline UIWidget_t1453041918 ** get_address_of_activeSprite_5() { return &___activeSprite_5; }
	inline void set_activeSprite_5(UIWidget_t1453041918 * value)
	{
		___activeSprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___activeSprite_5, value);
	}

	inline static int32_t get_offset_of_activeAnimation_6() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___activeAnimation_6)); }
	inline Animation_t2068071072 * get_activeAnimation_6() const { return ___activeAnimation_6; }
	inline Animation_t2068071072 ** get_address_of_activeAnimation_6() { return &___activeAnimation_6; }
	inline void set_activeAnimation_6(Animation_t2068071072 * value)
	{
		___activeAnimation_6 = value;
		Il2CppCodeGenWriteBarrier(&___activeAnimation_6, value);
	}

	inline static int32_t get_offset_of_startsActive_7() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___startsActive_7)); }
	inline bool get_startsActive_7() const { return ___startsActive_7; }
	inline bool* get_address_of_startsActive_7() { return &___startsActive_7; }
	inline void set_startsActive_7(bool value)
	{
		___startsActive_7 = value;
	}

	inline static int32_t get_offset_of_instantTween_8() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___instantTween_8)); }
	inline bool get_instantTween_8() const { return ___instantTween_8; }
	inline bool* get_address_of_instantTween_8() { return &___instantTween_8; }
	inline void set_instantTween_8(bool value)
	{
		___instantTween_8 = value;
	}

	inline static int32_t get_offset_of_optionCanBeNone_9() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___optionCanBeNone_9)); }
	inline bool get_optionCanBeNone_9() const { return ___optionCanBeNone_9; }
	inline bool* get_address_of_optionCanBeNone_9() { return &___optionCanBeNone_9; }
	inline void set_optionCanBeNone_9(bool value)
	{
		___optionCanBeNone_9 = value;
	}

	inline static int32_t get_offset_of_onChange_10() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___onChange_10)); }
	inline List_1_t2865430313 * get_onChange_10() const { return ___onChange_10; }
	inline List_1_t2865430313 ** get_address_of_onChange_10() { return &___onChange_10; }
	inline void set_onChange_10(List_1_t2865430313 * value)
	{
		___onChange_10 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_10, value);
	}

	inline static int32_t get_offset_of_checkSprite_11() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___checkSprite_11)); }
	inline UISprite_t603616735 * get_checkSprite_11() const { return ___checkSprite_11; }
	inline UISprite_t603616735 ** get_address_of_checkSprite_11() { return &___checkSprite_11; }
	inline void set_checkSprite_11(UISprite_t603616735 * value)
	{
		___checkSprite_11 = value;
		Il2CppCodeGenWriteBarrier(&___checkSprite_11, value);
	}

	inline static int32_t get_offset_of_checkAnimation_12() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___checkAnimation_12)); }
	inline Animation_t2068071072 * get_checkAnimation_12() const { return ___checkAnimation_12; }
	inline Animation_t2068071072 ** get_address_of_checkAnimation_12() { return &___checkAnimation_12; }
	inline void set_checkAnimation_12(Animation_t2068071072 * value)
	{
		___checkAnimation_12 = value;
		Il2CppCodeGenWriteBarrier(&___checkAnimation_12, value);
	}

	inline static int32_t get_offset_of_eventReceiver_13() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___eventReceiver_13)); }
	inline GameObject_t1756533147 * get_eventReceiver_13() const { return ___eventReceiver_13; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_13() { return &___eventReceiver_13; }
	inline void set_eventReceiver_13(GameObject_t1756533147 * value)
	{
		___eventReceiver_13 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_13, value);
	}

	inline static int32_t get_offset_of_functionName_14() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___functionName_14)); }
	inline String_t* get_functionName_14() const { return ___functionName_14; }
	inline String_t** get_address_of_functionName_14() { return &___functionName_14; }
	inline void set_functionName_14(String_t* value)
	{
		___functionName_14 = value;
		Il2CppCodeGenWriteBarrier(&___functionName_14, value);
	}

	inline static int32_t get_offset_of_startsChecked_15() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___startsChecked_15)); }
	inline bool get_startsChecked_15() const { return ___startsChecked_15; }
	inline bool* get_address_of_startsChecked_15() { return &___startsChecked_15; }
	inline void set_startsChecked_15(bool value)
	{
		___startsChecked_15 = value;
	}

	inline static int32_t get_offset_of_mIsActive_16() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___mIsActive_16)); }
	inline bool get_mIsActive_16() const { return ___mIsActive_16; }
	inline bool* get_address_of_mIsActive_16() { return &___mIsActive_16; }
	inline void set_mIsActive_16(bool value)
	{
		___mIsActive_16 = value;
	}

	inline static int32_t get_offset_of_mStarted_17() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___mStarted_17)); }
	inline bool get_mStarted_17() const { return ___mStarted_17; }
	inline bool* get_address_of_mStarted_17() { return &___mStarted_17; }
	inline void set_mStarted_17(bool value)
	{
		___mStarted_17 = value;
	}
};

struct UIToggle_t3036740318_StaticFields
{
public:
	// BetterList`1<UIToggle> UIToggle::list
	BetterList_1_t3257128960 * ___list_2;
	// UIToggle UIToggle::current
	UIToggle_t3036740318 * ___current_3;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318_StaticFields, ___list_2)); }
	inline BetterList_1_t3257128960 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t3257128960 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t3257128960 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318_StaticFields, ___current_3)); }
	inline UIToggle_t3036740318 * get_current_3() const { return ___current_3; }
	inline UIToggle_t3036740318 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UIToggle_t3036740318 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier(&___current_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
