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

// AnimationProxy/AnimationInfo
struct  AnimationInfo_t2163354247  : public Il2CppObject
{
public:
	// System.String AnimationProxy/AnimationInfo::strName
	String_t* ___strName_0;
	// System.String AnimationProxy/AnimationInfo::strPath
	String_t* ___strPath_1;

public:
	inline static int32_t get_offset_of_strName_0() { return static_cast<int32_t>(offsetof(AnimationInfo_t2163354247, ___strName_0)); }
	inline String_t* get_strName_0() const { return ___strName_0; }
	inline String_t** get_address_of_strName_0() { return &___strName_0; }
	inline void set_strName_0(String_t* value)
	{
		___strName_0 = value;
		Il2CppCodeGenWriteBarrier(&___strName_0, value);
	}

	inline static int32_t get_offset_of_strPath_1() { return static_cast<int32_t>(offsetof(AnimationInfo_t2163354247, ___strPath_1)); }
	inline String_t* get_strPath_1() const { return ___strPath_1; }
	inline String_t** get_address_of_strPath_1() { return &___strPath_1; }
	inline void set_strPath_1(String_t* value)
	{
		___strPath_1 = value;
		Il2CppCodeGenWriteBarrier(&___strPath_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
