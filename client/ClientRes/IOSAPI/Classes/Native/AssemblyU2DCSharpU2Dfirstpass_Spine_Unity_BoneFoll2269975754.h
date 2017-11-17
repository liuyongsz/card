#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonGraphic
struct SkeletonGraphic_t2028984527;
// System.String
struct String_t;
// Spine.Bone
struct Bone_t4151268332;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.BoneFollowerGraphic
struct  BoneFollowerGraphic_t2269975754  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.SkeletonGraphic Spine.Unity.BoneFollowerGraphic::skeletonGraphic
	SkeletonGraphic_t2028984527 * ___skeletonGraphic_2;
	// System.Boolean Spine.Unity.BoneFollowerGraphic::initializeOnAwake
	bool ___initializeOnAwake_3;
	// System.String Spine.Unity.BoneFollowerGraphic::boneName
	String_t* ___boneName_4;
	// System.Boolean Spine.Unity.BoneFollowerGraphic::followBoneRotation
	bool ___followBoneRotation_5;
	// System.Boolean Spine.Unity.BoneFollowerGraphic::followSkeletonFlip
	bool ___followSkeletonFlip_6;
	// System.Boolean Spine.Unity.BoneFollowerGraphic::followLocalScale
	bool ___followLocalScale_7;
	// System.Boolean Spine.Unity.BoneFollowerGraphic::followZPosition
	bool ___followZPosition_8;
	// Spine.Bone Spine.Unity.BoneFollowerGraphic::bone
	Bone_t4151268332 * ___bone_9;
	// UnityEngine.Transform Spine.Unity.BoneFollowerGraphic::skeletonTransform
	Transform_t3275118058 * ___skeletonTransform_10;
	// System.Boolean Spine.Unity.BoneFollowerGraphic::skeletonTransformIsParent
	bool ___skeletonTransformIsParent_11;
	// System.Boolean Spine.Unity.BoneFollowerGraphic::valid
	bool ___valid_12;

public:
	inline static int32_t get_offset_of_skeletonGraphic_2() { return static_cast<int32_t>(offsetof(BoneFollowerGraphic_t2269975754, ___skeletonGraphic_2)); }
	inline SkeletonGraphic_t2028984527 * get_skeletonGraphic_2() const { return ___skeletonGraphic_2; }
	inline SkeletonGraphic_t2028984527 ** get_address_of_skeletonGraphic_2() { return &___skeletonGraphic_2; }
	inline void set_skeletonGraphic_2(SkeletonGraphic_t2028984527 * value)
	{
		___skeletonGraphic_2 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonGraphic_2, value);
	}

	inline static int32_t get_offset_of_initializeOnAwake_3() { return static_cast<int32_t>(offsetof(BoneFollowerGraphic_t2269975754, ___initializeOnAwake_3)); }
	inline bool get_initializeOnAwake_3() const { return ___initializeOnAwake_3; }
	inline bool* get_address_of_initializeOnAwake_3() { return &___initializeOnAwake_3; }
	inline void set_initializeOnAwake_3(bool value)
	{
		___initializeOnAwake_3 = value;
	}

	inline static int32_t get_offset_of_boneName_4() { return static_cast<int32_t>(offsetof(BoneFollowerGraphic_t2269975754, ___boneName_4)); }
	inline String_t* get_boneName_4() const { return ___boneName_4; }
	inline String_t** get_address_of_boneName_4() { return &___boneName_4; }
	inline void set_boneName_4(String_t* value)
	{
		___boneName_4 = value;
		Il2CppCodeGenWriteBarrier(&___boneName_4, value);
	}

	inline static int32_t get_offset_of_followBoneRotation_5() { return static_cast<int32_t>(offsetof(BoneFollowerGraphic_t2269975754, ___followBoneRotation_5)); }
	inline bool get_followBoneRotation_5() const { return ___followBoneRotation_5; }
	inline bool* get_address_of_followBoneRotation_5() { return &___followBoneRotation_5; }
	inline void set_followBoneRotation_5(bool value)
	{
		___followBoneRotation_5 = value;
	}

	inline static int32_t get_offset_of_followSkeletonFlip_6() { return static_cast<int32_t>(offsetof(BoneFollowerGraphic_t2269975754, ___followSkeletonFlip_6)); }
	inline bool get_followSkeletonFlip_6() const { return ___followSkeletonFlip_6; }
	inline bool* get_address_of_followSkeletonFlip_6() { return &___followSkeletonFlip_6; }
	inline void set_followSkeletonFlip_6(bool value)
	{
		___followSkeletonFlip_6 = value;
	}

	inline static int32_t get_offset_of_followLocalScale_7() { return static_cast<int32_t>(offsetof(BoneFollowerGraphic_t2269975754, ___followLocalScale_7)); }
	inline bool get_followLocalScale_7() const { return ___followLocalScale_7; }
	inline bool* get_address_of_followLocalScale_7() { return &___followLocalScale_7; }
	inline void set_followLocalScale_7(bool value)
	{
		___followLocalScale_7 = value;
	}

	inline static int32_t get_offset_of_followZPosition_8() { return static_cast<int32_t>(offsetof(BoneFollowerGraphic_t2269975754, ___followZPosition_8)); }
	inline bool get_followZPosition_8() const { return ___followZPosition_8; }
	inline bool* get_address_of_followZPosition_8() { return &___followZPosition_8; }
	inline void set_followZPosition_8(bool value)
	{
		___followZPosition_8 = value;
	}

	inline static int32_t get_offset_of_bone_9() { return static_cast<int32_t>(offsetof(BoneFollowerGraphic_t2269975754, ___bone_9)); }
	inline Bone_t4151268332 * get_bone_9() const { return ___bone_9; }
	inline Bone_t4151268332 ** get_address_of_bone_9() { return &___bone_9; }
	inline void set_bone_9(Bone_t4151268332 * value)
	{
		___bone_9 = value;
		Il2CppCodeGenWriteBarrier(&___bone_9, value);
	}

	inline static int32_t get_offset_of_skeletonTransform_10() { return static_cast<int32_t>(offsetof(BoneFollowerGraphic_t2269975754, ___skeletonTransform_10)); }
	inline Transform_t3275118058 * get_skeletonTransform_10() const { return ___skeletonTransform_10; }
	inline Transform_t3275118058 ** get_address_of_skeletonTransform_10() { return &___skeletonTransform_10; }
	inline void set_skeletonTransform_10(Transform_t3275118058 * value)
	{
		___skeletonTransform_10 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonTransform_10, value);
	}

	inline static int32_t get_offset_of_skeletonTransformIsParent_11() { return static_cast<int32_t>(offsetof(BoneFollowerGraphic_t2269975754, ___skeletonTransformIsParent_11)); }
	inline bool get_skeletonTransformIsParent_11() const { return ___skeletonTransformIsParent_11; }
	inline bool* get_address_of_skeletonTransformIsParent_11() { return &___skeletonTransformIsParent_11; }
	inline void set_skeletonTransformIsParent_11(bool value)
	{
		___skeletonTransformIsParent_11 = value;
	}

	inline static int32_t get_offset_of_valid_12() { return static_cast<int32_t>(offsetof(BoneFollowerGraphic_t2269975754, ___valid_12)); }
	inline bool get_valid_12() const { return ___valid_12; }
	inline bool* get_address_of_valid_12() { return &___valid_12; }
	inline void set_valid_12(bool value)
	{
		___valid_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
