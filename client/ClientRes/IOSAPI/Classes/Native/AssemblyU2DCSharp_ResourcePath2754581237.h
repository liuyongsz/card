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

// ResourcePath
struct  ResourcePath_t2754581237  : public Il2CppObject
{
public:

public:
};

struct ResourcePath_t2754581237_StaticFields
{
public:
	// System.String ResourcePath::customParentPath
	String_t* ___customParentPath_0;
	// System.String ResourcePath::configPath
	String_t* ___configPath_1;
	// System.String ResourcePath::imgPath
	String_t* ___imgPath_2;
	// System.String ResourcePath::baseUrl
	String_t* ___baseUrl_3;

public:
	inline static int32_t get_offset_of_customParentPath_0() { return static_cast<int32_t>(offsetof(ResourcePath_t2754581237_StaticFields, ___customParentPath_0)); }
	inline String_t* get_customParentPath_0() const { return ___customParentPath_0; }
	inline String_t** get_address_of_customParentPath_0() { return &___customParentPath_0; }
	inline void set_customParentPath_0(String_t* value)
	{
		___customParentPath_0 = value;
		Il2CppCodeGenWriteBarrier(&___customParentPath_0, value);
	}

	inline static int32_t get_offset_of_configPath_1() { return static_cast<int32_t>(offsetof(ResourcePath_t2754581237_StaticFields, ___configPath_1)); }
	inline String_t* get_configPath_1() const { return ___configPath_1; }
	inline String_t** get_address_of_configPath_1() { return &___configPath_1; }
	inline void set_configPath_1(String_t* value)
	{
		___configPath_1 = value;
		Il2CppCodeGenWriteBarrier(&___configPath_1, value);
	}

	inline static int32_t get_offset_of_imgPath_2() { return static_cast<int32_t>(offsetof(ResourcePath_t2754581237_StaticFields, ___imgPath_2)); }
	inline String_t* get_imgPath_2() const { return ___imgPath_2; }
	inline String_t** get_address_of_imgPath_2() { return &___imgPath_2; }
	inline void set_imgPath_2(String_t* value)
	{
		___imgPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___imgPath_2, value);
	}

	inline static int32_t get_offset_of_baseUrl_3() { return static_cast<int32_t>(offsetof(ResourcePath_t2754581237_StaticFields, ___baseUrl_3)); }
	inline String_t* get_baseUrl_3() const { return ___baseUrl_3; }
	inline String_t** get_address_of_baseUrl_3() { return &___baseUrl_3; }
	inline void set_baseUrl_3(String_t* value)
	{
		___baseUrl_3 = value;
		Il2CppCodeGenWriteBarrier(&___baseUrl_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
