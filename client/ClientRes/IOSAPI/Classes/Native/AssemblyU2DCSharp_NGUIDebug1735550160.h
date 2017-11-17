#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// NGUIDebug
struct NGUIDebug_t1735550160;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NGUIDebug
struct  NGUIDebug_t1735550160  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct NGUIDebug_t1735550160_StaticFields
{
public:
	// System.Int32 NGUIDebug::miOpenLog
	int32_t ___miOpenLog_2;
	// System.Boolean NGUIDebug::mRayDebug
	bool ___mRayDebug_3;
	// System.Collections.Generic.List`1<System.String> NGUIDebug::mLines
	List_1_t1398341365 * ___mLines_4;
	// NGUIDebug NGUIDebug::mInstance
	NGUIDebug_t1735550160 * ___mInstance_5;

public:
	inline static int32_t get_offset_of_miOpenLog_2() { return static_cast<int32_t>(offsetof(NGUIDebug_t1735550160_StaticFields, ___miOpenLog_2)); }
	inline int32_t get_miOpenLog_2() const { return ___miOpenLog_2; }
	inline int32_t* get_address_of_miOpenLog_2() { return &___miOpenLog_2; }
	inline void set_miOpenLog_2(int32_t value)
	{
		___miOpenLog_2 = value;
	}

	inline static int32_t get_offset_of_mRayDebug_3() { return static_cast<int32_t>(offsetof(NGUIDebug_t1735550160_StaticFields, ___mRayDebug_3)); }
	inline bool get_mRayDebug_3() const { return ___mRayDebug_3; }
	inline bool* get_address_of_mRayDebug_3() { return &___mRayDebug_3; }
	inline void set_mRayDebug_3(bool value)
	{
		___mRayDebug_3 = value;
	}

	inline static int32_t get_offset_of_mLines_4() { return static_cast<int32_t>(offsetof(NGUIDebug_t1735550160_StaticFields, ___mLines_4)); }
	inline List_1_t1398341365 * get_mLines_4() const { return ___mLines_4; }
	inline List_1_t1398341365 ** get_address_of_mLines_4() { return &___mLines_4; }
	inline void set_mLines_4(List_1_t1398341365 * value)
	{
		___mLines_4 = value;
		Il2CppCodeGenWriteBarrier(&___mLines_4, value);
	}

	inline static int32_t get_offset_of_mInstance_5() { return static_cast<int32_t>(offsetof(NGUIDebug_t1735550160_StaticFields, ___mInstance_5)); }
	inline NGUIDebug_t1735550160 * get_mInstance_5() const { return ___mInstance_5; }
	inline NGUIDebug_t1735550160 ** get_address_of_mInstance_5() { return &___mInstance_5; }
	inline void set_mInstance_5(NGUIDebug_t1735550160 * value)
	{
		___mInstance_5 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
