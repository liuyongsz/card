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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Config/CustomInfo
struct  CustomInfo_t936757556  : public Il2CppObject
{
public:
	// System.String Config/CustomInfo::strCustomInfoID
	String_t* ___strCustomInfoID_0;
	// System.String Config/CustomInfo::strCustomInfoVaule
	String_t* ___strCustomInfoVaule_1;

public:
	inline static int32_t get_offset_of_strCustomInfoID_0() { return static_cast<int32_t>(offsetof(CustomInfo_t936757556, ___strCustomInfoID_0)); }
	inline String_t* get_strCustomInfoID_0() const { return ___strCustomInfoID_0; }
	inline String_t** get_address_of_strCustomInfoID_0() { return &___strCustomInfoID_0; }
	inline void set_strCustomInfoID_0(String_t* value)
	{
		___strCustomInfoID_0 = value;
		Il2CppCodeGenWriteBarrier(&___strCustomInfoID_0, value);
	}

	inline static int32_t get_offset_of_strCustomInfoVaule_1() { return static_cast<int32_t>(offsetof(CustomInfo_t936757556, ___strCustomInfoVaule_1)); }
	inline String_t* get_strCustomInfoVaule_1() const { return ___strCustomInfoVaule_1; }
	inline String_t** get_address_of_strCustomInfoVaule_1() { return &___strCustomInfoVaule_1; }
	inline void set_strCustomInfoVaule_1(String_t* value)
	{
		___strCustomInfoVaule_1 = value;
		Il2CppCodeGenWriteBarrier(&___strCustomInfoVaule_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
