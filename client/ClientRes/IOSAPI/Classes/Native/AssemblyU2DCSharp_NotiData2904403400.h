#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_NotificationID248744986.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NotiData
struct  NotiData_t2904403400  : public Il2CppObject
{
public:
	// NotificationID NotiData::evName
	int32_t ___evName_0;
	// System.Object NotiData::evParam
	Il2CppObject * ___evParam_1;

public:
	inline static int32_t get_offset_of_evName_0() { return static_cast<int32_t>(offsetof(NotiData_t2904403400, ___evName_0)); }
	inline int32_t get_evName_0() const { return ___evName_0; }
	inline int32_t* get_address_of_evName_0() { return &___evName_0; }
	inline void set_evName_0(int32_t value)
	{
		___evName_0 = value;
	}

	inline static int32_t get_offset_of_evParam_1() { return static_cast<int32_t>(offsetof(NotiData_t2904403400, ___evParam_1)); }
	inline Il2CppObject * get_evParam_1() const { return ___evParam_1; }
	inline Il2CppObject ** get_address_of_evParam_1() { return &___evParam_1; }
	inline void set_evParam_1(Il2CppObject * value)
	{
		___evParam_1 = value;
		Il2CppCodeGenWriteBarrier(&___evParam_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
