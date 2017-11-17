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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransformConstraint
struct  TransformConstraint_t2733542435  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform TransformConstraint::target
	Transform_t3275118058 * ___target_2;
	// System.Boolean TransformConstraint::position
	bool ___position_3;
	// System.Boolean TransformConstraint::rotation
	bool ___rotation_4;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(TransformConstraint_t2733542435, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(TransformConstraint_t2733542435, ___position_3)); }
	inline bool get_position_3() const { return ___position_3; }
	inline bool* get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(bool value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_rotation_4() { return static_cast<int32_t>(offsetof(TransformConstraint_t2733542435, ___rotation_4)); }
	inline bool get_rotation_4() const { return ___rotation_4; }
	inline bool* get_address_of_rotation_4() { return &___rotation_4; }
	inline void set_rotation_4(bool value)
	{
		___rotation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
