#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2865430313;
// System.String
struct String_t;
// UITweener[]
struct UITweenerU5BU5D_t2857044187;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Trigger3949147154.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction1874854737.h"
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition2151086590.h"
#include "AssemblyU2DCSharp_AnimationOrTween_DisableCondition122284263.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPlayTween
struct  UIPlayTween_t2614996159  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UIPlayTween::tweenTarget
	GameObject_t1756533147 * ___tweenTarget_2;
	// System.Int32 UIPlayTween::tweenGroup
	int32_t ___tweenGroup_3;
	// AnimationOrTween.Trigger UIPlayTween::trigger
	int32_t ___trigger_4;
	// AnimationOrTween.Direction UIPlayTween::playDirection
	int32_t ___playDirection_5;
	// System.Boolean UIPlayTween::resetOnPlay
	bool ___resetOnPlay_6;
	// System.Boolean UIPlayTween::resetIfDisabled
	bool ___resetIfDisabled_7;
	// AnimationOrTween.EnableCondition UIPlayTween::ifDisabledOnPlay
	int32_t ___ifDisabledOnPlay_8;
	// AnimationOrTween.DisableCondition UIPlayTween::disableWhenFinished
	int32_t ___disableWhenFinished_9;
	// System.Boolean UIPlayTween::includeChildren
	bool ___includeChildren_10;
	// System.Collections.Generic.List`1<EventDelegate> UIPlayTween::onFinished
	List_1_t2865430313 * ___onFinished_11;
	// UnityEngine.GameObject UIPlayTween::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_12;
	// System.String UIPlayTween::callWhenFinished
	String_t* ___callWhenFinished_13;
	// UITweener[] UIPlayTween::mTweens
	UITweenerU5BU5D_t2857044187* ___mTweens_14;
	// System.Boolean UIPlayTween::mStarted
	bool ___mStarted_15;
	// System.Int32 UIPlayTween::mActive
	int32_t ___mActive_16;
	// System.Boolean UIPlayTween::mActivated
	bool ___mActivated_17;

public:
	inline static int32_t get_offset_of_tweenTarget_2() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___tweenTarget_2)); }
	inline GameObject_t1756533147 * get_tweenTarget_2() const { return ___tweenTarget_2; }
	inline GameObject_t1756533147 ** get_address_of_tweenTarget_2() { return &___tweenTarget_2; }
	inline void set_tweenTarget_2(GameObject_t1756533147 * value)
	{
		___tweenTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___tweenTarget_2, value);
	}

	inline static int32_t get_offset_of_tweenGroup_3() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___tweenGroup_3)); }
	inline int32_t get_tweenGroup_3() const { return ___tweenGroup_3; }
	inline int32_t* get_address_of_tweenGroup_3() { return &___tweenGroup_3; }
	inline void set_tweenGroup_3(int32_t value)
	{
		___tweenGroup_3 = value;
	}

	inline static int32_t get_offset_of_trigger_4() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___trigger_4)); }
	inline int32_t get_trigger_4() const { return ___trigger_4; }
	inline int32_t* get_address_of_trigger_4() { return &___trigger_4; }
	inline void set_trigger_4(int32_t value)
	{
		___trigger_4 = value;
	}

	inline static int32_t get_offset_of_playDirection_5() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___playDirection_5)); }
	inline int32_t get_playDirection_5() const { return ___playDirection_5; }
	inline int32_t* get_address_of_playDirection_5() { return &___playDirection_5; }
	inline void set_playDirection_5(int32_t value)
	{
		___playDirection_5 = value;
	}

	inline static int32_t get_offset_of_resetOnPlay_6() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___resetOnPlay_6)); }
	inline bool get_resetOnPlay_6() const { return ___resetOnPlay_6; }
	inline bool* get_address_of_resetOnPlay_6() { return &___resetOnPlay_6; }
	inline void set_resetOnPlay_6(bool value)
	{
		___resetOnPlay_6 = value;
	}

	inline static int32_t get_offset_of_resetIfDisabled_7() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___resetIfDisabled_7)); }
	inline bool get_resetIfDisabled_7() const { return ___resetIfDisabled_7; }
	inline bool* get_address_of_resetIfDisabled_7() { return &___resetIfDisabled_7; }
	inline void set_resetIfDisabled_7(bool value)
	{
		___resetIfDisabled_7 = value;
	}

	inline static int32_t get_offset_of_ifDisabledOnPlay_8() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___ifDisabledOnPlay_8)); }
	inline int32_t get_ifDisabledOnPlay_8() const { return ___ifDisabledOnPlay_8; }
	inline int32_t* get_address_of_ifDisabledOnPlay_8() { return &___ifDisabledOnPlay_8; }
	inline void set_ifDisabledOnPlay_8(int32_t value)
	{
		___ifDisabledOnPlay_8 = value;
	}

	inline static int32_t get_offset_of_disableWhenFinished_9() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___disableWhenFinished_9)); }
	inline int32_t get_disableWhenFinished_9() const { return ___disableWhenFinished_9; }
	inline int32_t* get_address_of_disableWhenFinished_9() { return &___disableWhenFinished_9; }
	inline void set_disableWhenFinished_9(int32_t value)
	{
		___disableWhenFinished_9 = value;
	}

	inline static int32_t get_offset_of_includeChildren_10() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___includeChildren_10)); }
	inline bool get_includeChildren_10() const { return ___includeChildren_10; }
	inline bool* get_address_of_includeChildren_10() { return &___includeChildren_10; }
	inline void set_includeChildren_10(bool value)
	{
		___includeChildren_10 = value;
	}

	inline static int32_t get_offset_of_onFinished_11() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___onFinished_11)); }
	inline List_1_t2865430313 * get_onFinished_11() const { return ___onFinished_11; }
	inline List_1_t2865430313 ** get_address_of_onFinished_11() { return &___onFinished_11; }
	inline void set_onFinished_11(List_1_t2865430313 * value)
	{
		___onFinished_11 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_11, value);
	}

	inline static int32_t get_offset_of_eventReceiver_12() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___eventReceiver_12)); }
	inline GameObject_t1756533147 * get_eventReceiver_12() const { return ___eventReceiver_12; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_12() { return &___eventReceiver_12; }
	inline void set_eventReceiver_12(GameObject_t1756533147 * value)
	{
		___eventReceiver_12 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_12, value);
	}

	inline static int32_t get_offset_of_callWhenFinished_13() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___callWhenFinished_13)); }
	inline String_t* get_callWhenFinished_13() const { return ___callWhenFinished_13; }
	inline String_t** get_address_of_callWhenFinished_13() { return &___callWhenFinished_13; }
	inline void set_callWhenFinished_13(String_t* value)
	{
		___callWhenFinished_13 = value;
		Il2CppCodeGenWriteBarrier(&___callWhenFinished_13, value);
	}

	inline static int32_t get_offset_of_mTweens_14() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___mTweens_14)); }
	inline UITweenerU5BU5D_t2857044187* get_mTweens_14() const { return ___mTweens_14; }
	inline UITweenerU5BU5D_t2857044187** get_address_of_mTweens_14() { return &___mTweens_14; }
	inline void set_mTweens_14(UITweenerU5BU5D_t2857044187* value)
	{
		___mTweens_14 = value;
		Il2CppCodeGenWriteBarrier(&___mTweens_14, value);
	}

	inline static int32_t get_offset_of_mStarted_15() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___mStarted_15)); }
	inline bool get_mStarted_15() const { return ___mStarted_15; }
	inline bool* get_address_of_mStarted_15() { return &___mStarted_15; }
	inline void set_mStarted_15(bool value)
	{
		___mStarted_15 = value;
	}

	inline static int32_t get_offset_of_mActive_16() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___mActive_16)); }
	inline int32_t get_mActive_16() const { return ___mActive_16; }
	inline int32_t* get_address_of_mActive_16() { return &___mActive_16; }
	inline void set_mActive_16(int32_t value)
	{
		___mActive_16 = value;
	}

	inline static int32_t get_offset_of_mActivated_17() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___mActivated_17)); }
	inline bool get_mActivated_17() const { return ___mActivated_17; }
	inline bool* get_address_of_mActivated_17() { return &___mActivated_17; }
	inline void set_mActivated_17(bool value)
	{
		___mActivated_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
