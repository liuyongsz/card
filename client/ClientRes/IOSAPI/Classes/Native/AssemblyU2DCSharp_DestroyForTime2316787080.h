#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DestroyForTime/OnDestroyEffect
struct OnDestroyEffect_t2892655133;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyForTime
struct  DestroyForTime_t2316787080  : public MonoBehaviour_t1158329972
{
public:
	// DestroyForTime/OnDestroyEffect DestroyForTime::finishedCallback
	OnDestroyEffect_t2892655133 * ___finishedCallback_3;
	// System.Single DestroyForTime::time
	float ___time_4;
	// System.Boolean DestroyForTime::isDestory
	bool ___isDestory_5;
	// System.Boolean DestroyForTime::mbRemove
	bool ___mbRemove_6;
	// System.Single DestroyForTime::fStartTime
	float ___fStartTime_7;

public:
	inline static int32_t get_offset_of_finishedCallback_3() { return static_cast<int32_t>(offsetof(DestroyForTime_t2316787080, ___finishedCallback_3)); }
	inline OnDestroyEffect_t2892655133 * get_finishedCallback_3() const { return ___finishedCallback_3; }
	inline OnDestroyEffect_t2892655133 ** get_address_of_finishedCallback_3() { return &___finishedCallback_3; }
	inline void set_finishedCallback_3(OnDestroyEffect_t2892655133 * value)
	{
		___finishedCallback_3 = value;
		Il2CppCodeGenWriteBarrier(&___finishedCallback_3, value);
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(DestroyForTime_t2316787080, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_isDestory_5() { return static_cast<int32_t>(offsetof(DestroyForTime_t2316787080, ___isDestory_5)); }
	inline bool get_isDestory_5() const { return ___isDestory_5; }
	inline bool* get_address_of_isDestory_5() { return &___isDestory_5; }
	inline void set_isDestory_5(bool value)
	{
		___isDestory_5 = value;
	}

	inline static int32_t get_offset_of_mbRemove_6() { return static_cast<int32_t>(offsetof(DestroyForTime_t2316787080, ___mbRemove_6)); }
	inline bool get_mbRemove_6() const { return ___mbRemove_6; }
	inline bool* get_address_of_mbRemove_6() { return &___mbRemove_6; }
	inline void set_mbRemove_6(bool value)
	{
		___mbRemove_6 = value;
	}

	inline static int32_t get_offset_of_fStartTime_7() { return static_cast<int32_t>(offsetof(DestroyForTime_t2316787080, ___fStartTime_7)); }
	inline float get_fStartTime_7() const { return ___fStartTime_7; }
	inline float* get_address_of_fStartTime_7() { return &___fStartTime_7; }
	inline void set_fStartTime_7(float value)
	{
		___fStartTime_7 = value;
	}
};

struct DestroyForTime_t2316787080_StaticFields
{
public:
	// DestroyForTime/OnDestroyEffect DestroyForTime::monDestroyEffect
	OnDestroyEffect_t2892655133 * ___monDestroyEffect_2;

public:
	inline static int32_t get_offset_of_monDestroyEffect_2() { return static_cast<int32_t>(offsetof(DestroyForTime_t2316787080_StaticFields, ___monDestroyEffect_2)); }
	inline OnDestroyEffect_t2892655133 * get_monDestroyEffect_2() const { return ___monDestroyEffect_2; }
	inline OnDestroyEffect_t2892655133 ** get_address_of_monDestroyEffect_2() { return &___monDestroyEffect_2; }
	inline void set_monDestroyEffect_2(OnDestroyEffect_t2892655133 * value)
	{
		___monDestroyEffect_2 = value;
		Il2CppCodeGenWriteBarrier(&___monDestroyEffect_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
