#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;
// Spine.Unity.ISkeletonAnimation
struct ISkeletonAnimation_t174943072;
// System.Collections.Generic.List`1<Spine.Unity.SkeletonUtilityBone>
struct List_1_t451375051;
// System.Collections.Generic.List`1<Spine.Unity.SkeletonUtilityConstraint>
struct List_1_t766713108;
// Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate
struct SkeletonUtilityDelegate_t3188065966;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonUtility
struct  SkeletonUtility_t122738797  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Spine.Unity.SkeletonUtility::boneRoot
	Transform_t3275118058 * ___boneRoot_2;
	// Spine.Unity.SkeletonRenderer Spine.Unity.SkeletonUtility::skeletonRenderer
	SkeletonRenderer_t2265953470 * ___skeletonRenderer_3;
	// Spine.Unity.ISkeletonAnimation Spine.Unity.SkeletonUtility::skeletonAnimation
	Il2CppObject * ___skeletonAnimation_4;
	// System.Collections.Generic.List`1<Spine.Unity.SkeletonUtilityBone> Spine.Unity.SkeletonUtility::utilityBones
	List_1_t451375051 * ___utilityBones_5;
	// System.Collections.Generic.List`1<Spine.Unity.SkeletonUtilityConstraint> Spine.Unity.SkeletonUtility::utilityConstraints
	List_1_t766713108 * ___utilityConstraints_6;
	// System.Boolean Spine.Unity.SkeletonUtility::hasTransformBones
	bool ___hasTransformBones_7;
	// System.Boolean Spine.Unity.SkeletonUtility::hasUtilityConstraints
	bool ___hasUtilityConstraints_8;
	// System.Boolean Spine.Unity.SkeletonUtility::needToReprocessBones
	bool ___needToReprocessBones_9;
	// Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate Spine.Unity.SkeletonUtility::OnReset
	SkeletonUtilityDelegate_t3188065966 * ___OnReset_10;

public:
	inline static int32_t get_offset_of_boneRoot_2() { return static_cast<int32_t>(offsetof(SkeletonUtility_t122738797, ___boneRoot_2)); }
	inline Transform_t3275118058 * get_boneRoot_2() const { return ___boneRoot_2; }
	inline Transform_t3275118058 ** get_address_of_boneRoot_2() { return &___boneRoot_2; }
	inline void set_boneRoot_2(Transform_t3275118058 * value)
	{
		___boneRoot_2 = value;
		Il2CppCodeGenWriteBarrier(&___boneRoot_2, value);
	}

	inline static int32_t get_offset_of_skeletonRenderer_3() { return static_cast<int32_t>(offsetof(SkeletonUtility_t122738797, ___skeletonRenderer_3)); }
	inline SkeletonRenderer_t2265953470 * get_skeletonRenderer_3() const { return ___skeletonRenderer_3; }
	inline SkeletonRenderer_t2265953470 ** get_address_of_skeletonRenderer_3() { return &___skeletonRenderer_3; }
	inline void set_skeletonRenderer_3(SkeletonRenderer_t2265953470 * value)
	{
		___skeletonRenderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonRenderer_3, value);
	}

	inline static int32_t get_offset_of_skeletonAnimation_4() { return static_cast<int32_t>(offsetof(SkeletonUtility_t122738797, ___skeletonAnimation_4)); }
	inline Il2CppObject * get_skeletonAnimation_4() const { return ___skeletonAnimation_4; }
	inline Il2CppObject ** get_address_of_skeletonAnimation_4() { return &___skeletonAnimation_4; }
	inline void set_skeletonAnimation_4(Il2CppObject * value)
	{
		___skeletonAnimation_4 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonAnimation_4, value);
	}

	inline static int32_t get_offset_of_utilityBones_5() { return static_cast<int32_t>(offsetof(SkeletonUtility_t122738797, ___utilityBones_5)); }
	inline List_1_t451375051 * get_utilityBones_5() const { return ___utilityBones_5; }
	inline List_1_t451375051 ** get_address_of_utilityBones_5() { return &___utilityBones_5; }
	inline void set_utilityBones_5(List_1_t451375051 * value)
	{
		___utilityBones_5 = value;
		Il2CppCodeGenWriteBarrier(&___utilityBones_5, value);
	}

	inline static int32_t get_offset_of_utilityConstraints_6() { return static_cast<int32_t>(offsetof(SkeletonUtility_t122738797, ___utilityConstraints_6)); }
	inline List_1_t766713108 * get_utilityConstraints_6() const { return ___utilityConstraints_6; }
	inline List_1_t766713108 ** get_address_of_utilityConstraints_6() { return &___utilityConstraints_6; }
	inline void set_utilityConstraints_6(List_1_t766713108 * value)
	{
		___utilityConstraints_6 = value;
		Il2CppCodeGenWriteBarrier(&___utilityConstraints_6, value);
	}

	inline static int32_t get_offset_of_hasTransformBones_7() { return static_cast<int32_t>(offsetof(SkeletonUtility_t122738797, ___hasTransformBones_7)); }
	inline bool get_hasTransformBones_7() const { return ___hasTransformBones_7; }
	inline bool* get_address_of_hasTransformBones_7() { return &___hasTransformBones_7; }
	inline void set_hasTransformBones_7(bool value)
	{
		___hasTransformBones_7 = value;
	}

	inline static int32_t get_offset_of_hasUtilityConstraints_8() { return static_cast<int32_t>(offsetof(SkeletonUtility_t122738797, ___hasUtilityConstraints_8)); }
	inline bool get_hasUtilityConstraints_8() const { return ___hasUtilityConstraints_8; }
	inline bool* get_address_of_hasUtilityConstraints_8() { return &___hasUtilityConstraints_8; }
	inline void set_hasUtilityConstraints_8(bool value)
	{
		___hasUtilityConstraints_8 = value;
	}

	inline static int32_t get_offset_of_needToReprocessBones_9() { return static_cast<int32_t>(offsetof(SkeletonUtility_t122738797, ___needToReprocessBones_9)); }
	inline bool get_needToReprocessBones_9() const { return ___needToReprocessBones_9; }
	inline bool* get_address_of_needToReprocessBones_9() { return &___needToReprocessBones_9; }
	inline void set_needToReprocessBones_9(bool value)
	{
		___needToReprocessBones_9 = value;
	}

	inline static int32_t get_offset_of_OnReset_10() { return static_cast<int32_t>(offsetof(SkeletonUtility_t122738797, ___OnReset_10)); }
	inline SkeletonUtilityDelegate_t3188065966 * get_OnReset_10() const { return ___OnReset_10; }
	inline SkeletonUtilityDelegate_t3188065966 ** get_address_of_OnReset_10() { return &___OnReset_10; }
	inline void set_OnReset_10(SkeletonUtilityDelegate_t3188065966 * value)
	{
		___OnReset_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnReset_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
