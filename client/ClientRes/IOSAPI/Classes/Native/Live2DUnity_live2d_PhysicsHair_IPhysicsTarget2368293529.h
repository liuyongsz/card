#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.PhysicsHair/IPhysicsTarget
struct  IPhysicsTarget_t2368293529  : public Il2CppObject
{
public:
	// System.String live2d.PhysicsHair/IPhysicsTarget::paramID
	String_t* ___paramID_0;
	// System.Single live2d.PhysicsHair/IPhysicsTarget::scale
	float ___scale_1;
	// System.Single live2d.PhysicsHair/IPhysicsTarget::weight
	float ___weight_2;

public:
	inline static int32_t get_offset_of_paramID_0() { return static_cast<int32_t>(offsetof(IPhysicsTarget_t2368293529, ___paramID_0)); }
	inline String_t* get_paramID_0() const { return ___paramID_0; }
	inline String_t** get_address_of_paramID_0() { return &___paramID_0; }
	inline void set_paramID_0(String_t* value)
	{
		___paramID_0 = value;
		Il2CppCodeGenWriteBarrier(&___paramID_0, value);
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(IPhysicsTarget_t2368293529, ___scale_1)); }
	inline float get_scale_1() const { return ___scale_1; }
	inline float* get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(float value)
	{
		___scale_1 = value;
	}

	inline static int32_t get_offset_of_weight_2() { return static_cast<int32_t>(offsetof(IPhysicsTarget_t2368293529, ___weight_2)); }
	inline float get_weight_2() const { return ___weight_2; }
	inline float* get_address_of_weight_2() { return &___weight_2; }
	inline void set_weight_2(float value)
	{
		___weight_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
