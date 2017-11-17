#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.AnimationEvent>
struct List_1_t1797444432;
// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimationEventManager
struct  AnimationEventManager_t4155832427  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AnimationEvent> AnimationEventManager::mAllAnimationEvent
	List_1_t1797444432 * ___mAllAnimationEvent_0;
	// UnityEngine.AnimationClip AnimationEventManager::m_dstClip
	AnimationClip_t3510324950 * ___m_dstClip_1;

public:
	inline static int32_t get_offset_of_mAllAnimationEvent_0() { return static_cast<int32_t>(offsetof(AnimationEventManager_t4155832427, ___mAllAnimationEvent_0)); }
	inline List_1_t1797444432 * get_mAllAnimationEvent_0() const { return ___mAllAnimationEvent_0; }
	inline List_1_t1797444432 ** get_address_of_mAllAnimationEvent_0() { return &___mAllAnimationEvent_0; }
	inline void set_mAllAnimationEvent_0(List_1_t1797444432 * value)
	{
		___mAllAnimationEvent_0 = value;
		Il2CppCodeGenWriteBarrier(&___mAllAnimationEvent_0, value);
	}

	inline static int32_t get_offset_of_m_dstClip_1() { return static_cast<int32_t>(offsetof(AnimationEventManager_t4155832427, ___m_dstClip_1)); }
	inline AnimationClip_t3510324950 * get_m_dstClip_1() const { return ___m_dstClip_1; }
	inline AnimationClip_t3510324950 ** get_address_of_m_dstClip_1() { return &___m_dstClip_1; }
	inline void set_m_dstClip_1(AnimationClip_t3510324950 * value)
	{
		___m_dstClip_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_dstClip_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
