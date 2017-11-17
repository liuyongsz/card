#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RealTime
struct RealTime_t1079009241;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RealTime
struct  RealTime_t1079009241  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RealTime::mRealTime
	float ___mRealTime_3;
	// System.Single RealTime::mRealDelta
	float ___mRealDelta_4;

public:
	inline static int32_t get_offset_of_mRealTime_3() { return static_cast<int32_t>(offsetof(RealTime_t1079009241, ___mRealTime_3)); }
	inline float get_mRealTime_3() const { return ___mRealTime_3; }
	inline float* get_address_of_mRealTime_3() { return &___mRealTime_3; }
	inline void set_mRealTime_3(float value)
	{
		___mRealTime_3 = value;
	}

	inline static int32_t get_offset_of_mRealDelta_4() { return static_cast<int32_t>(offsetof(RealTime_t1079009241, ___mRealDelta_4)); }
	inline float get_mRealDelta_4() const { return ___mRealDelta_4; }
	inline float* get_address_of_mRealDelta_4() { return &___mRealDelta_4; }
	inline void set_mRealDelta_4(float value)
	{
		___mRealDelta_4 = value;
	}
};

struct RealTime_t1079009241_StaticFields
{
public:
	// RealTime RealTime::mInst
	RealTime_t1079009241 * ___mInst_2;

public:
	inline static int32_t get_offset_of_mInst_2() { return static_cast<int32_t>(offsetof(RealTime_t1079009241_StaticFields, ___mInst_2)); }
	inline RealTime_t1079009241 * get_mInst_2() const { return ___mInst_2; }
	inline RealTime_t1079009241 ** get_address_of_mInst_2() { return &___mInst_2; }
	inline void set_mInst_2(RealTime_t1079009241 * value)
	{
		___mInst_2 = value;
		Il2CppCodeGenWriteBarrier(&___mInst_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
