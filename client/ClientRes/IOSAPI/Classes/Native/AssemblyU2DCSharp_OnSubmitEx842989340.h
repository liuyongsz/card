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
// OnSubmitExCallBack
struct OnSubmitExCallBack_t2813523835;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnSubmitEx
struct  OnSubmitEx_t842989340  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject OnSubmitEx::source_obj
	GameObject_t1756533147 * ___source_obj_2;
	// OnSubmitExCallBack OnSubmitEx::submitExCallBack
	OnSubmitExCallBack_t2813523835 * ___submitExCallBack_3;

public:
	inline static int32_t get_offset_of_source_obj_2() { return static_cast<int32_t>(offsetof(OnSubmitEx_t842989340, ___source_obj_2)); }
	inline GameObject_t1756533147 * get_source_obj_2() const { return ___source_obj_2; }
	inline GameObject_t1756533147 ** get_address_of_source_obj_2() { return &___source_obj_2; }
	inline void set_source_obj_2(GameObject_t1756533147 * value)
	{
		___source_obj_2 = value;
		Il2CppCodeGenWriteBarrier(&___source_obj_2, value);
	}

	inline static int32_t get_offset_of_submitExCallBack_3() { return static_cast<int32_t>(offsetof(OnSubmitEx_t842989340, ___submitExCallBack_3)); }
	inline OnSubmitExCallBack_t2813523835 * get_submitExCallBack_3() const { return ___submitExCallBack_3; }
	inline OnSubmitExCallBack_t2813523835 ** get_address_of_submitExCallBack_3() { return &___submitExCallBack_3; }
	inline void set_submitExCallBack_3(OnSubmitExCallBack_t2813523835 * value)
	{
		___submitExCallBack_3 = value;
		Il2CppCodeGenWriteBarrier(&___submitExCallBack_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
