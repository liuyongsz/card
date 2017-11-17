#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animation
struct Animation_t2068071072;
// UnityEngine.Animator
struct Animator_t69676727;
// System.String
struct String_t;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2865430313;
// UnityEngine.GameObject
struct GameObject_t1756533147;

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

// UIPlayAnimation
struct  UIPlayAnimation_t3152825278  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animation UIPlayAnimation::target
	Animation_t2068071072 * ___target_2;
	// UnityEngine.Animator UIPlayAnimation::animator
	Animator_t69676727 * ___animator_3;
	// System.String UIPlayAnimation::clipName
	String_t* ___clipName_4;
	// AnimationOrTween.Trigger UIPlayAnimation::trigger
	int32_t ___trigger_5;
	// AnimationOrTween.Direction UIPlayAnimation::playDirection
	int32_t ___playDirection_6;
	// System.Boolean UIPlayAnimation::resetOnPlay
	bool ___resetOnPlay_7;
	// System.Boolean UIPlayAnimation::clearSelection
	bool ___clearSelection_8;
	// AnimationOrTween.EnableCondition UIPlayAnimation::ifDisabledOnPlay
	int32_t ___ifDisabledOnPlay_9;
	// AnimationOrTween.DisableCondition UIPlayAnimation::disableWhenFinished
	int32_t ___disableWhenFinished_10;
	// System.Collections.Generic.List`1<EventDelegate> UIPlayAnimation::onFinished
	List_1_t2865430313 * ___onFinished_11;
	// UnityEngine.GameObject UIPlayAnimation::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_12;
	// System.String UIPlayAnimation::callWhenFinished
	String_t* ___callWhenFinished_13;
	// System.Boolean UIPlayAnimation::mStarted
	bool ___mStarted_14;
	// System.Boolean UIPlayAnimation::mActivated
	bool ___mActivated_15;
	// System.Boolean UIPlayAnimation::dragHighlight
	bool ___dragHighlight_16;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___target_2)); }
	inline Animation_t2068071072 * get_target_2() const { return ___target_2; }
	inline Animation_t2068071072 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Animation_t2068071072 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_animator_3() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___animator_3)); }
	inline Animator_t69676727 * get_animator_3() const { return ___animator_3; }
	inline Animator_t69676727 ** get_address_of_animator_3() { return &___animator_3; }
	inline void set_animator_3(Animator_t69676727 * value)
	{
		___animator_3 = value;
		Il2CppCodeGenWriteBarrier(&___animator_3, value);
	}

	inline static int32_t get_offset_of_clipName_4() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___clipName_4)); }
	inline String_t* get_clipName_4() const { return ___clipName_4; }
	inline String_t** get_address_of_clipName_4() { return &___clipName_4; }
	inline void set_clipName_4(String_t* value)
	{
		___clipName_4 = value;
		Il2CppCodeGenWriteBarrier(&___clipName_4, value);
	}

	inline static int32_t get_offset_of_trigger_5() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___trigger_5)); }
	inline int32_t get_trigger_5() const { return ___trigger_5; }
	inline int32_t* get_address_of_trigger_5() { return &___trigger_5; }
	inline void set_trigger_5(int32_t value)
	{
		___trigger_5 = value;
	}

	inline static int32_t get_offset_of_playDirection_6() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___playDirection_6)); }
	inline int32_t get_playDirection_6() const { return ___playDirection_6; }
	inline int32_t* get_address_of_playDirection_6() { return &___playDirection_6; }
	inline void set_playDirection_6(int32_t value)
	{
		___playDirection_6 = value;
	}

	inline static int32_t get_offset_of_resetOnPlay_7() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___resetOnPlay_7)); }
	inline bool get_resetOnPlay_7() const { return ___resetOnPlay_7; }
	inline bool* get_address_of_resetOnPlay_7() { return &___resetOnPlay_7; }
	inline void set_resetOnPlay_7(bool value)
	{
		___resetOnPlay_7 = value;
	}

	inline static int32_t get_offset_of_clearSelection_8() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___clearSelection_8)); }
	inline bool get_clearSelection_8() const { return ___clearSelection_8; }
	inline bool* get_address_of_clearSelection_8() { return &___clearSelection_8; }
	inline void set_clearSelection_8(bool value)
	{
		___clearSelection_8 = value;
	}

	inline static int32_t get_offset_of_ifDisabledOnPlay_9() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___ifDisabledOnPlay_9)); }
	inline int32_t get_ifDisabledOnPlay_9() const { return ___ifDisabledOnPlay_9; }
	inline int32_t* get_address_of_ifDisabledOnPlay_9() { return &___ifDisabledOnPlay_9; }
	inline void set_ifDisabledOnPlay_9(int32_t value)
	{
		___ifDisabledOnPlay_9 = value;
	}

	inline static int32_t get_offset_of_disableWhenFinished_10() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___disableWhenFinished_10)); }
	inline int32_t get_disableWhenFinished_10() const { return ___disableWhenFinished_10; }
	inline int32_t* get_address_of_disableWhenFinished_10() { return &___disableWhenFinished_10; }
	inline void set_disableWhenFinished_10(int32_t value)
	{
		___disableWhenFinished_10 = value;
	}

	inline static int32_t get_offset_of_onFinished_11() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___onFinished_11)); }
	inline List_1_t2865430313 * get_onFinished_11() const { return ___onFinished_11; }
	inline List_1_t2865430313 ** get_address_of_onFinished_11() { return &___onFinished_11; }
	inline void set_onFinished_11(List_1_t2865430313 * value)
	{
		___onFinished_11 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_11, value);
	}

	inline static int32_t get_offset_of_eventReceiver_12() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___eventReceiver_12)); }
	inline GameObject_t1756533147 * get_eventReceiver_12() const { return ___eventReceiver_12; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_12() { return &___eventReceiver_12; }
	inline void set_eventReceiver_12(GameObject_t1756533147 * value)
	{
		___eventReceiver_12 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_12, value);
	}

	inline static int32_t get_offset_of_callWhenFinished_13() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___callWhenFinished_13)); }
	inline String_t* get_callWhenFinished_13() const { return ___callWhenFinished_13; }
	inline String_t** get_address_of_callWhenFinished_13() { return &___callWhenFinished_13; }
	inline void set_callWhenFinished_13(String_t* value)
	{
		___callWhenFinished_13 = value;
		Il2CppCodeGenWriteBarrier(&___callWhenFinished_13, value);
	}

	inline static int32_t get_offset_of_mStarted_14() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___mStarted_14)); }
	inline bool get_mStarted_14() const { return ___mStarted_14; }
	inline bool* get_address_of_mStarted_14() { return &___mStarted_14; }
	inline void set_mStarted_14(bool value)
	{
		___mStarted_14 = value;
	}

	inline static int32_t get_offset_of_mActivated_15() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___mActivated_15)); }
	inline bool get_mActivated_15() const { return ___mActivated_15; }
	inline bool* get_address_of_mActivated_15() { return &___mActivated_15; }
	inline void set_mActivated_15(bool value)
	{
		___mActivated_15 = value;
	}

	inline static int32_t get_offset_of_dragHighlight_16() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t3152825278, ___dragHighlight_16)); }
	inline bool get_dragHighlight_16() const { return ___dragHighlight_16; }
	inline bool* get_address_of_dragHighlight_16() { return &___dragHighlight_16; }
	inline void set_dragHighlight_16(bool value)
	{
		___dragHighlight_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
