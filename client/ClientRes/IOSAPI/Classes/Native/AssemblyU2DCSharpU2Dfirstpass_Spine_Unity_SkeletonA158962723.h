#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonAnimator/MecanimTranslator/MixMode[]
struct MixModeU5BU5D_t870012474;
// System.Collections.Generic.Dictionary`2<System.Int32,Spine.Animation>
struct Dictionary_2_t3245496819;
// System.Collections.Generic.Dictionary`2<UnityEngine.AnimationClip,System.Int32>
struct Dictionary_2_t1985386661;
// System.Collections.Generic.List`1<Spine.Animation>
struct List_1_t3606792316;
// UnityEngine.Animator
struct Animator_t69676727;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonAnimator/MecanimTranslator
struct  MecanimTranslator_t158962723  : public Il2CppObject
{
public:
	// System.Boolean Spine.Unity.SkeletonAnimator/MecanimTranslator::autoReset
	bool ___autoReset_0;
	// Spine.Unity.SkeletonAnimator/MecanimTranslator/MixMode[] Spine.Unity.SkeletonAnimator/MecanimTranslator::layerMixModes
	MixModeU5BU5D_t870012474* ___layerMixModes_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,Spine.Animation> Spine.Unity.SkeletonAnimator/MecanimTranslator::animationTable
	Dictionary_2_t3245496819 * ___animationTable_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.AnimationClip,System.Int32> Spine.Unity.SkeletonAnimator/MecanimTranslator::clipNameHashCodeTable
	Dictionary_2_t1985386661 * ___clipNameHashCodeTable_3;
	// System.Collections.Generic.List`1<Spine.Animation> Spine.Unity.SkeletonAnimator/MecanimTranslator::previousAnimations
	List_1_t3606792316 * ___previousAnimations_4;
	// UnityEngine.Animator Spine.Unity.SkeletonAnimator/MecanimTranslator::animator
	Animator_t69676727 * ___animator_5;

public:
	inline static int32_t get_offset_of_autoReset_0() { return static_cast<int32_t>(offsetof(MecanimTranslator_t158962723, ___autoReset_0)); }
	inline bool get_autoReset_0() const { return ___autoReset_0; }
	inline bool* get_address_of_autoReset_0() { return &___autoReset_0; }
	inline void set_autoReset_0(bool value)
	{
		___autoReset_0 = value;
	}

	inline static int32_t get_offset_of_layerMixModes_1() { return static_cast<int32_t>(offsetof(MecanimTranslator_t158962723, ___layerMixModes_1)); }
	inline MixModeU5BU5D_t870012474* get_layerMixModes_1() const { return ___layerMixModes_1; }
	inline MixModeU5BU5D_t870012474** get_address_of_layerMixModes_1() { return &___layerMixModes_1; }
	inline void set_layerMixModes_1(MixModeU5BU5D_t870012474* value)
	{
		___layerMixModes_1 = value;
		Il2CppCodeGenWriteBarrier(&___layerMixModes_1, value);
	}

	inline static int32_t get_offset_of_animationTable_2() { return static_cast<int32_t>(offsetof(MecanimTranslator_t158962723, ___animationTable_2)); }
	inline Dictionary_2_t3245496819 * get_animationTable_2() const { return ___animationTable_2; }
	inline Dictionary_2_t3245496819 ** get_address_of_animationTable_2() { return &___animationTable_2; }
	inline void set_animationTable_2(Dictionary_2_t3245496819 * value)
	{
		___animationTable_2 = value;
		Il2CppCodeGenWriteBarrier(&___animationTable_2, value);
	}

	inline static int32_t get_offset_of_clipNameHashCodeTable_3() { return static_cast<int32_t>(offsetof(MecanimTranslator_t158962723, ___clipNameHashCodeTable_3)); }
	inline Dictionary_2_t1985386661 * get_clipNameHashCodeTable_3() const { return ___clipNameHashCodeTable_3; }
	inline Dictionary_2_t1985386661 ** get_address_of_clipNameHashCodeTable_3() { return &___clipNameHashCodeTable_3; }
	inline void set_clipNameHashCodeTable_3(Dictionary_2_t1985386661 * value)
	{
		___clipNameHashCodeTable_3 = value;
		Il2CppCodeGenWriteBarrier(&___clipNameHashCodeTable_3, value);
	}

	inline static int32_t get_offset_of_previousAnimations_4() { return static_cast<int32_t>(offsetof(MecanimTranslator_t158962723, ___previousAnimations_4)); }
	inline List_1_t3606792316 * get_previousAnimations_4() const { return ___previousAnimations_4; }
	inline List_1_t3606792316 ** get_address_of_previousAnimations_4() { return &___previousAnimations_4; }
	inline void set_previousAnimations_4(List_1_t3606792316 * value)
	{
		___previousAnimations_4 = value;
		Il2CppCodeGenWriteBarrier(&___previousAnimations_4, value);
	}

	inline static int32_t get_offset_of_animator_5() { return static_cast<int32_t>(offsetof(MecanimTranslator_t158962723, ___animator_5)); }
	inline Animator_t69676727 * get_animator_5() const { return ___animator_5; }
	inline Animator_t69676727 ** get_address_of_animator_5() { return &___animator_5; }
	inline void set_animator_5(Animator_t69676727 * value)
	{
		___animator_5 = value;
		Il2CppCodeGenWriteBarrier(&___animator_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
