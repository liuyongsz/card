#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.AnimationState
struct AnimationState_t1491536497;
// System.String
struct String_t;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t2937009411;

#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton2265953470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonAnimation
struct  SkeletonAnimation_t1845683983  : public SkeletonRenderer_t2265953470
{
public:
	// Spine.AnimationState Spine.Unity.SkeletonAnimation::state
	AnimationState_t1491536497 * ___state_31;
	// System.String Spine.Unity.SkeletonAnimation::_animationName
	String_t* ____animationName_32;
	// System.Boolean Spine.Unity.SkeletonAnimation::loop
	bool ___loop_33;
	// System.Single Spine.Unity.SkeletonAnimation::timeScale
	float ___timeScale_34;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateLocal
	UpdateBonesDelegate_t2937009411 * ____UpdateLocal_35;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateWorld
	UpdateBonesDelegate_t2937009411 * ____UpdateWorld_36;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateComplete
	UpdateBonesDelegate_t2937009411 * ____UpdateComplete_37;

public:
	inline static int32_t get_offset_of_state_31() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t1845683983, ___state_31)); }
	inline AnimationState_t1491536497 * get_state_31() const { return ___state_31; }
	inline AnimationState_t1491536497 ** get_address_of_state_31() { return &___state_31; }
	inline void set_state_31(AnimationState_t1491536497 * value)
	{
		___state_31 = value;
		Il2CppCodeGenWriteBarrier(&___state_31, value);
	}

	inline static int32_t get_offset_of__animationName_32() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t1845683983, ____animationName_32)); }
	inline String_t* get__animationName_32() const { return ____animationName_32; }
	inline String_t** get_address_of__animationName_32() { return &____animationName_32; }
	inline void set__animationName_32(String_t* value)
	{
		____animationName_32 = value;
		Il2CppCodeGenWriteBarrier(&____animationName_32, value);
	}

	inline static int32_t get_offset_of_loop_33() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t1845683983, ___loop_33)); }
	inline bool get_loop_33() const { return ___loop_33; }
	inline bool* get_address_of_loop_33() { return &___loop_33; }
	inline void set_loop_33(bool value)
	{
		___loop_33 = value;
	}

	inline static int32_t get_offset_of_timeScale_34() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t1845683983, ___timeScale_34)); }
	inline float get_timeScale_34() const { return ___timeScale_34; }
	inline float* get_address_of_timeScale_34() { return &___timeScale_34; }
	inline void set_timeScale_34(float value)
	{
		___timeScale_34 = value;
	}

	inline static int32_t get_offset_of__UpdateLocal_35() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t1845683983, ____UpdateLocal_35)); }
	inline UpdateBonesDelegate_t2937009411 * get__UpdateLocal_35() const { return ____UpdateLocal_35; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of__UpdateLocal_35() { return &____UpdateLocal_35; }
	inline void set__UpdateLocal_35(UpdateBonesDelegate_t2937009411 * value)
	{
		____UpdateLocal_35 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateLocal_35, value);
	}

	inline static int32_t get_offset_of__UpdateWorld_36() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t1845683983, ____UpdateWorld_36)); }
	inline UpdateBonesDelegate_t2937009411 * get__UpdateWorld_36() const { return ____UpdateWorld_36; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of__UpdateWorld_36() { return &____UpdateWorld_36; }
	inline void set__UpdateWorld_36(UpdateBonesDelegate_t2937009411 * value)
	{
		____UpdateWorld_36 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateWorld_36, value);
	}

	inline static int32_t get_offset_of__UpdateComplete_37() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t1845683983, ____UpdateComplete_37)); }
	inline UpdateBonesDelegate_t2937009411 * get__UpdateComplete_37() const { return ____UpdateComplete_37; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of__UpdateComplete_37() { return &____UpdateComplete_37; }
	inline void set__UpdateComplete_37(UpdateBonesDelegate_t2937009411 * value)
	{
		____UpdateComplete_37 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateComplete_37, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
