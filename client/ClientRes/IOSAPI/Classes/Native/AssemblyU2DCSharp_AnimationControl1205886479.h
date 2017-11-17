#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<AnimationControl>
struct List_1_t575007611;
// UnityEngine.Animation
struct Animation_t2068071072;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimationControl
struct  AnimationControl_t1205886479  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animation AnimationControl::mAnimation
	Animation_t2068071072 * ___mAnimation_4;

public:
	inline static int32_t get_offset_of_mAnimation_4() { return static_cast<int32_t>(offsetof(AnimationControl_t1205886479, ___mAnimation_4)); }
	inline Animation_t2068071072 * get_mAnimation_4() const { return ___mAnimation_4; }
	inline Animation_t2068071072 ** get_address_of_mAnimation_4() { return &___mAnimation_4; }
	inline void set_mAnimation_4(Animation_t2068071072 * value)
	{
		___mAnimation_4 = value;
		Il2CppCodeGenWriteBarrier(&___mAnimation_4, value);
	}
};

struct AnimationControl_t1205886479_StaticFields
{
public:
	// System.Boolean AnimationControl::bEnabeld
	bool ___bEnabeld_2;
	// System.Collections.Generic.List`1<AnimationControl> AnimationControl::ListAnimation
	List_1_t575007611 * ___ListAnimation_3;

public:
	inline static int32_t get_offset_of_bEnabeld_2() { return static_cast<int32_t>(offsetof(AnimationControl_t1205886479_StaticFields, ___bEnabeld_2)); }
	inline bool get_bEnabeld_2() const { return ___bEnabeld_2; }
	inline bool* get_address_of_bEnabeld_2() { return &___bEnabeld_2; }
	inline void set_bEnabeld_2(bool value)
	{
		___bEnabeld_2 = value;
	}

	inline static int32_t get_offset_of_ListAnimation_3() { return static_cast<int32_t>(offsetof(AnimationControl_t1205886479_StaticFields, ___ListAnimation_3)); }
	inline List_1_t575007611 * get_ListAnimation_3() const { return ___ListAnimation_3; }
	inline List_1_t575007611 ** get_address_of_ListAnimation_3() { return &___ListAnimation_3; }
	inline void set_ListAnimation_3(List_1_t575007611 * value)
	{
		___ListAnimation_3 = value;
		Il2CppCodeGenWriteBarrier(&___ListAnimation_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
