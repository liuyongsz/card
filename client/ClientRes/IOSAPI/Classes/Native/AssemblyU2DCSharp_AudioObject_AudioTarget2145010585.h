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

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioObject/AudioTarget
struct  AudioTarget_t2145010585  : public Il2CppObject
{
public:
	// System.Boolean AudioObject/AudioTarget::hasTransform
	bool ___hasTransform_0;
	// UnityEngine.Transform AudioObject/AudioTarget::target
	Transform_t3275118058 * ___target_1;
	// UnityEngine.Vector3 AudioObject/AudioTarget::targetPos
	Vector3_t2243707580  ___targetPos_2;

public:
	inline static int32_t get_offset_of_hasTransform_0() { return static_cast<int32_t>(offsetof(AudioTarget_t2145010585, ___hasTransform_0)); }
	inline bool get_hasTransform_0() const { return ___hasTransform_0; }
	inline bool* get_address_of_hasTransform_0() { return &___hasTransform_0; }
	inline void set_hasTransform_0(bool value)
	{
		___hasTransform_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(AudioTarget_t2145010585, ___target_1)); }
	inline Transform_t3275118058 * get_target_1() const { return ___target_1; }
	inline Transform_t3275118058 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Transform_t3275118058 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier(&___target_1, value);
	}

	inline static int32_t get_offset_of_targetPos_2() { return static_cast<int32_t>(offsetof(AudioTarget_t2145010585, ___targetPos_2)); }
	inline Vector3_t2243707580  get_targetPos_2() const { return ___targetPos_2; }
	inline Vector3_t2243707580 * get_address_of_targetPos_2() { return &___targetPos_2; }
	inline void set_targetPos_2(Vector3_t2243707580  value)
	{
		___targetPos_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
