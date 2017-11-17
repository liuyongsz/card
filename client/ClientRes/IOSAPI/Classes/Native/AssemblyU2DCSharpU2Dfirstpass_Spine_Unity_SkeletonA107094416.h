#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonAnimator/MecanimTranslator
struct MecanimTranslator_t158962723;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t2937009411;

#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton2265953470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonAnimator
struct  SkeletonAnimator_t107094416  : public SkeletonRenderer_t2265953470
{
public:
	// Spine.Unity.SkeletonAnimator/MecanimTranslator Spine.Unity.SkeletonAnimator::translator
	MecanimTranslator_t158962723 * ___translator_31;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimator::_UpdateLocal
	UpdateBonesDelegate_t2937009411 * ____UpdateLocal_32;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimator::_UpdateWorld
	UpdateBonesDelegate_t2937009411 * ____UpdateWorld_33;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimator::_UpdateComplete
	UpdateBonesDelegate_t2937009411 * ____UpdateComplete_34;

public:
	inline static int32_t get_offset_of_translator_31() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t107094416, ___translator_31)); }
	inline MecanimTranslator_t158962723 * get_translator_31() const { return ___translator_31; }
	inline MecanimTranslator_t158962723 ** get_address_of_translator_31() { return &___translator_31; }
	inline void set_translator_31(MecanimTranslator_t158962723 * value)
	{
		___translator_31 = value;
		Il2CppCodeGenWriteBarrier(&___translator_31, value);
	}

	inline static int32_t get_offset_of__UpdateLocal_32() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t107094416, ____UpdateLocal_32)); }
	inline UpdateBonesDelegate_t2937009411 * get__UpdateLocal_32() const { return ____UpdateLocal_32; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of__UpdateLocal_32() { return &____UpdateLocal_32; }
	inline void set__UpdateLocal_32(UpdateBonesDelegate_t2937009411 * value)
	{
		____UpdateLocal_32 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateLocal_32, value);
	}

	inline static int32_t get_offset_of__UpdateWorld_33() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t107094416, ____UpdateWorld_33)); }
	inline UpdateBonesDelegate_t2937009411 * get__UpdateWorld_33() const { return ____UpdateWorld_33; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of__UpdateWorld_33() { return &____UpdateWorld_33; }
	inline void set__UpdateWorld_33(UpdateBonesDelegate_t2937009411 * value)
	{
		____UpdateWorld_33 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateWorld_33, value);
	}

	inline static int32_t get_offset_of__UpdateComplete_34() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t107094416, ____UpdateComplete_34)); }
	inline UpdateBonesDelegate_t2937009411 * get__UpdateComplete_34() const { return ____UpdateComplete_34; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of__UpdateComplete_34() { return &____UpdateComplete_34; }
	inline void set__UpdateComplete_34(UpdateBonesDelegate_t2937009411 * value)
	{
		____UpdateComplete_34 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateComplete_34, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
