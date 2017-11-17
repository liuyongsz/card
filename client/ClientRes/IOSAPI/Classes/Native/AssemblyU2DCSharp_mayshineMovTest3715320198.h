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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// mayshineMovTest
struct  mayshineMovTest_t3715320198  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject mayshineMovTest::a
	GameObject_t1756533147 * ___a_2;
	// UnityEngine.GameObject mayshineMovTest::b
	GameObject_t1756533147 * ___b_3;

public:
	inline static int32_t get_offset_of_a_2() { return static_cast<int32_t>(offsetof(mayshineMovTest_t3715320198, ___a_2)); }
	inline GameObject_t1756533147 * get_a_2() const { return ___a_2; }
	inline GameObject_t1756533147 ** get_address_of_a_2() { return &___a_2; }
	inline void set_a_2(GameObject_t1756533147 * value)
	{
		___a_2 = value;
		Il2CppCodeGenWriteBarrier(&___a_2, value);
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(mayshineMovTest_t3715320198, ___b_3)); }
	inline GameObject_t1756533147 * get_b_3() const { return ___b_3; }
	inline GameObject_t1756533147 ** get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(GameObject_t1756533147 * value)
	{
		___b_3 = value;
		Il2CppCodeGenWriteBarrier(&___b_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
