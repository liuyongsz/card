#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t3936083219;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimationAsset
struct  AnimationAsset_t1157532622  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.AnimationClip AnimationAsset::mainClip
	AnimationClip_t3510324950 * ___mainClip_2;
	// UnityEngine.AnimationClip[] AnimationAsset::animClip
	AnimationClipU5BU5D_t3936083219* ___animClip_3;

public:
	inline static int32_t get_offset_of_mainClip_2() { return static_cast<int32_t>(offsetof(AnimationAsset_t1157532622, ___mainClip_2)); }
	inline AnimationClip_t3510324950 * get_mainClip_2() const { return ___mainClip_2; }
	inline AnimationClip_t3510324950 ** get_address_of_mainClip_2() { return &___mainClip_2; }
	inline void set_mainClip_2(AnimationClip_t3510324950 * value)
	{
		___mainClip_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainClip_2, value);
	}

	inline static int32_t get_offset_of_animClip_3() { return static_cast<int32_t>(offsetof(AnimationAsset_t1157532622, ___animClip_3)); }
	inline AnimationClipU5BU5D_t3936083219* get_animClip_3() const { return ___animClip_3; }
	inline AnimationClipU5BU5D_t3936083219** get_address_of_animClip_3() { return &___animClip_3; }
	inline void set_animClip_3(AnimationClipU5BU5D_t3936083219* value)
	{
		___animClip_3 = value;
		Il2CppCodeGenWriteBarrier(&___animClip_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
