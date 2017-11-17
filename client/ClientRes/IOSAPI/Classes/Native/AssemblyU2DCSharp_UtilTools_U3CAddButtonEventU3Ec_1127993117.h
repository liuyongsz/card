#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>
struct UnityAction_1_t3123118898;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UtilTools/<AddButtonEvent>c__AnonStorey27
struct  U3CAddButtonEventU3Ec__AnonStorey27_t1127993117  : public Il2CppObject
{
public:
	// UnityEngine.Events.UnityAction`1<UnityEngine.GameObject> UtilTools/<AddButtonEvent>c__AnonStorey27::unityAction
	UnityAction_1_t3123118898 * ___unityAction_0;
	// UnityEngine.GameObject UtilTools/<AddButtonEvent>c__AnonStorey27::obj
	GameObject_t1756533147 * ___obj_1;

public:
	inline static int32_t get_offset_of_unityAction_0() { return static_cast<int32_t>(offsetof(U3CAddButtonEventU3Ec__AnonStorey27_t1127993117, ___unityAction_0)); }
	inline UnityAction_1_t3123118898 * get_unityAction_0() const { return ___unityAction_0; }
	inline UnityAction_1_t3123118898 ** get_address_of_unityAction_0() { return &___unityAction_0; }
	inline void set_unityAction_0(UnityAction_1_t3123118898 * value)
	{
		___unityAction_0 = value;
		Il2CppCodeGenWriteBarrier(&___unityAction_0, value);
	}

	inline static int32_t get_offset_of_obj_1() { return static_cast<int32_t>(offsetof(U3CAddButtonEventU3Ec__AnonStorey27_t1127993117, ___obj_1)); }
	inline GameObject_t1756533147 * get_obj_1() const { return ___obj_1; }
	inline GameObject_t1756533147 ** get_address_of_obj_1() { return &___obj_1; }
	inline void set_obj_1(GameObject_t1756533147 * value)
	{
		___obj_1 = value;
		Il2CppCodeGenWriteBarrier(&___obj_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
