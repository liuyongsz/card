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

// AnimationPrefabEvent
struct  AnimationPrefabEvent_t2243242400  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform AnimationPrefabEvent::TransHP
	Transform_t3275118058 * ___TransHP_2;
	// UnityEngine.Transform AnimationPrefabEvent::Enemy
	Transform_t3275118058 * ___Enemy_3;
	// UnityEngine.Transform AnimationPrefabEvent::Self
	Transform_t3275118058 * ___Self_4;
	// UnityEngine.Transform AnimationPrefabEvent::Me
	Transform_t3275118058 * ___Me_5;

public:
	inline static int32_t get_offset_of_TransHP_2() { return static_cast<int32_t>(offsetof(AnimationPrefabEvent_t2243242400, ___TransHP_2)); }
	inline Transform_t3275118058 * get_TransHP_2() const { return ___TransHP_2; }
	inline Transform_t3275118058 ** get_address_of_TransHP_2() { return &___TransHP_2; }
	inline void set_TransHP_2(Transform_t3275118058 * value)
	{
		___TransHP_2 = value;
		Il2CppCodeGenWriteBarrier(&___TransHP_2, value);
	}

	inline static int32_t get_offset_of_Enemy_3() { return static_cast<int32_t>(offsetof(AnimationPrefabEvent_t2243242400, ___Enemy_3)); }
	inline Transform_t3275118058 * get_Enemy_3() const { return ___Enemy_3; }
	inline Transform_t3275118058 ** get_address_of_Enemy_3() { return &___Enemy_3; }
	inline void set_Enemy_3(Transform_t3275118058 * value)
	{
		___Enemy_3 = value;
		Il2CppCodeGenWriteBarrier(&___Enemy_3, value);
	}

	inline static int32_t get_offset_of_Self_4() { return static_cast<int32_t>(offsetof(AnimationPrefabEvent_t2243242400, ___Self_4)); }
	inline Transform_t3275118058 * get_Self_4() const { return ___Self_4; }
	inline Transform_t3275118058 ** get_address_of_Self_4() { return &___Self_4; }
	inline void set_Self_4(Transform_t3275118058 * value)
	{
		___Self_4 = value;
		Il2CppCodeGenWriteBarrier(&___Self_4, value);
	}

	inline static int32_t get_offset_of_Me_5() { return static_cast<int32_t>(offsetof(AnimationPrefabEvent_t2243242400, ___Me_5)); }
	inline Transform_t3275118058 * get_Me_5() const { return ___Me_5; }
	inline Transform_t3275118058 ** get_address_of_Me_5() { return &___Me_5; }
	inline void set_Me_5(Transform_t3275118058 * value)
	{
		___Me_5 = value;
		Il2CppCodeGenWriteBarrier(&___Me_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
