#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateProgressData
struct  UpdateProgressData_t3619756786 
{
public:
	// System.String UpdateProgressData::content
	String_t* ___content_0;
	// System.Single UpdateProgressData::grogress
	float ___grogress_1;

public:
	inline static int32_t get_offset_of_content_0() { return static_cast<int32_t>(offsetof(UpdateProgressData_t3619756786, ___content_0)); }
	inline String_t* get_content_0() const { return ___content_0; }
	inline String_t** get_address_of_content_0() { return &___content_0; }
	inline void set_content_0(String_t* value)
	{
		___content_0 = value;
		Il2CppCodeGenWriteBarrier(&___content_0, value);
	}

	inline static int32_t get_offset_of_grogress_1() { return static_cast<int32_t>(offsetof(UpdateProgressData_t3619756786, ___grogress_1)); }
	inline float get_grogress_1() const { return ___grogress_1; }
	inline float* get_address_of_grogress_1() { return &___grogress_1; }
	inline void set_grogress_1(float value)
	{
		___grogress_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UpdateProgressData
struct UpdateProgressData_t3619756786_marshaled_pinvoke
{
	char* ___content_0;
	float ___grogress_1;
};
// Native definition for marshalling of: UpdateProgressData
struct UpdateProgressData_t3619756786_marshaled_com
{
	Il2CppChar* ___content_0;
	float ___grogress_1;
};
