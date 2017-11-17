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

// LookAtTheCamera
struct  LookAtTheCamera_t3287830434  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform LookAtTheCamera::cameraTra
	Transform_t3275118058 * ___cameraTra_2;
	// UnityEngine.Transform LookAtTheCamera::selfTra
	Transform_t3275118058 * ___selfTra_3;

public:
	inline static int32_t get_offset_of_cameraTra_2() { return static_cast<int32_t>(offsetof(LookAtTheCamera_t3287830434, ___cameraTra_2)); }
	inline Transform_t3275118058 * get_cameraTra_2() const { return ___cameraTra_2; }
	inline Transform_t3275118058 ** get_address_of_cameraTra_2() { return &___cameraTra_2; }
	inline void set_cameraTra_2(Transform_t3275118058 * value)
	{
		___cameraTra_2 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTra_2, value);
	}

	inline static int32_t get_offset_of_selfTra_3() { return static_cast<int32_t>(offsetof(LookAtTheCamera_t3287830434, ___selfTra_3)); }
	inline Transform_t3275118058 * get_selfTra_3() const { return ___selfTra_3; }
	inline Transform_t3275118058 ** get_address_of_selfTra_3() { return &___selfTra_3; }
	inline void set_selfTra_3(Transform_t3275118058 * value)
	{
		___selfTra_3 = value;
		Il2CppCodeGenWriteBarrier(&___selfTra_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
