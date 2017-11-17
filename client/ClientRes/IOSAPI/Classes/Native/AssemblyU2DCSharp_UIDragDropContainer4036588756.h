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

// UIDragDropContainer
struct  UIDragDropContainer_t4036588756  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UIDragDropContainer::reparentTarget
	Transform_t3275118058 * ___reparentTarget_2;

public:
	inline static int32_t get_offset_of_reparentTarget_2() { return static_cast<int32_t>(offsetof(UIDragDropContainer_t4036588756, ___reparentTarget_2)); }
	inline Transform_t3275118058 * get_reparentTarget_2() const { return ___reparentTarget_2; }
	inline Transform_t3275118058 ** get_address_of_reparentTarget_2() { return &___reparentTarget_2; }
	inline void set_reparentTarget_2(Transform_t3275118058 * value)
	{
		___reparentTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___reparentTarget_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
