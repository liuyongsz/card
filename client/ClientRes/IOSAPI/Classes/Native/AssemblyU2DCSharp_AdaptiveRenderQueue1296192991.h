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
// UIPanel
struct UIPanel_t1795085332;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_t3921398993;
// ModelLoadEffect[]
struct ModelLoadEffectU5BU5D_t3707807153;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AdaptiveRenderQueue
struct  AdaptiveRenderQueue_t1296192991  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject AdaptiveRenderQueue::mGameObject
	GameObject_t1756533147 * ___mGameObject_2;
	// UIPanel AdaptiveRenderQueue::mPanel
	UIPanel_t1795085332 * ___mPanel_3;
	// System.Int32 AdaptiveRenderQueue::mEffectDepth
	int32_t ___mEffectDepth_4;
	// System.Int32 AdaptiveRenderQueue::mDrawCalls
	int32_t ___mDrawCalls_5;
	// System.Int32 AdaptiveRenderQueue::mRenderQueue
	int32_t ___mRenderQueue_6;
	// System.Boolean AdaptiveRenderQueue::mUnderUI
	bool ___mUnderUI_7;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> AdaptiveRenderQueue::rendererList
	List_1_t3921398993 * ___rendererList_8;
	// ModelLoadEffect[] AdaptiveRenderQueue::effects
	ModelLoadEffectU5BU5D_t3707807153* ___effects_9;

public:
	inline static int32_t get_offset_of_mGameObject_2() { return static_cast<int32_t>(offsetof(AdaptiveRenderQueue_t1296192991, ___mGameObject_2)); }
	inline GameObject_t1756533147 * get_mGameObject_2() const { return ___mGameObject_2; }
	inline GameObject_t1756533147 ** get_address_of_mGameObject_2() { return &___mGameObject_2; }
	inline void set_mGameObject_2(GameObject_t1756533147 * value)
	{
		___mGameObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___mGameObject_2, value);
	}

	inline static int32_t get_offset_of_mPanel_3() { return static_cast<int32_t>(offsetof(AdaptiveRenderQueue_t1296192991, ___mPanel_3)); }
	inline UIPanel_t1795085332 * get_mPanel_3() const { return ___mPanel_3; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_3() { return &___mPanel_3; }
	inline void set_mPanel_3(UIPanel_t1795085332 * value)
	{
		___mPanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_3, value);
	}

	inline static int32_t get_offset_of_mEffectDepth_4() { return static_cast<int32_t>(offsetof(AdaptiveRenderQueue_t1296192991, ___mEffectDepth_4)); }
	inline int32_t get_mEffectDepth_4() const { return ___mEffectDepth_4; }
	inline int32_t* get_address_of_mEffectDepth_4() { return &___mEffectDepth_4; }
	inline void set_mEffectDepth_4(int32_t value)
	{
		___mEffectDepth_4 = value;
	}

	inline static int32_t get_offset_of_mDrawCalls_5() { return static_cast<int32_t>(offsetof(AdaptiveRenderQueue_t1296192991, ___mDrawCalls_5)); }
	inline int32_t get_mDrawCalls_5() const { return ___mDrawCalls_5; }
	inline int32_t* get_address_of_mDrawCalls_5() { return &___mDrawCalls_5; }
	inline void set_mDrawCalls_5(int32_t value)
	{
		___mDrawCalls_5 = value;
	}

	inline static int32_t get_offset_of_mRenderQueue_6() { return static_cast<int32_t>(offsetof(AdaptiveRenderQueue_t1296192991, ___mRenderQueue_6)); }
	inline int32_t get_mRenderQueue_6() const { return ___mRenderQueue_6; }
	inline int32_t* get_address_of_mRenderQueue_6() { return &___mRenderQueue_6; }
	inline void set_mRenderQueue_6(int32_t value)
	{
		___mRenderQueue_6 = value;
	}

	inline static int32_t get_offset_of_mUnderUI_7() { return static_cast<int32_t>(offsetof(AdaptiveRenderQueue_t1296192991, ___mUnderUI_7)); }
	inline bool get_mUnderUI_7() const { return ___mUnderUI_7; }
	inline bool* get_address_of_mUnderUI_7() { return &___mUnderUI_7; }
	inline void set_mUnderUI_7(bool value)
	{
		___mUnderUI_7 = value;
	}

	inline static int32_t get_offset_of_rendererList_8() { return static_cast<int32_t>(offsetof(AdaptiveRenderQueue_t1296192991, ___rendererList_8)); }
	inline List_1_t3921398993 * get_rendererList_8() const { return ___rendererList_8; }
	inline List_1_t3921398993 ** get_address_of_rendererList_8() { return &___rendererList_8; }
	inline void set_rendererList_8(List_1_t3921398993 * value)
	{
		___rendererList_8 = value;
		Il2CppCodeGenWriteBarrier(&___rendererList_8, value);
	}

	inline static int32_t get_offset_of_effects_9() { return static_cast<int32_t>(offsetof(AdaptiveRenderQueue_t1296192991, ___effects_9)); }
	inline ModelLoadEffectU5BU5D_t3707807153* get_effects_9() const { return ___effects_9; }
	inline ModelLoadEffectU5BU5D_t3707807153** get_address_of_effects_9() { return &___effects_9; }
	inline void set_effects_9(ModelLoadEffectU5BU5D_t3707807153* value)
	{
		___effects_9 = value;
		Il2CppCodeGenWriteBarrier(&___effects_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
