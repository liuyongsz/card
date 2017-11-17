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

// MiniJSON
struct  MiniJSON_t13417349  : public Il2CppObject
{
public:

public:
};

struct MiniJSON_t13417349_StaticFields
{
public:
	// System.Int32 MiniJSON::lastErrorIndex
	int32_t ___lastErrorIndex_13;
	// System.String MiniJSON::lastDecode
	String_t* ___lastDecode_14;

public:
	inline static int32_t get_offset_of_lastErrorIndex_13() { return static_cast<int32_t>(offsetof(MiniJSON_t13417349_StaticFields, ___lastErrorIndex_13)); }
	inline int32_t get_lastErrorIndex_13() const { return ___lastErrorIndex_13; }
	inline int32_t* get_address_of_lastErrorIndex_13() { return &___lastErrorIndex_13; }
	inline void set_lastErrorIndex_13(int32_t value)
	{
		___lastErrorIndex_13 = value;
	}

	inline static int32_t get_offset_of_lastDecode_14() { return static_cast<int32_t>(offsetof(MiniJSON_t13417349_StaticFields, ___lastDecode_14)); }
	inline String_t* get_lastDecode_14() const { return ___lastDecode_14; }
	inline String_t** get_address_of_lastDecode_14() { return &___lastDecode_14; }
	inline void set_lastDecode_14(String_t* value)
	{
		___lastDecode_14 = value;
		Il2CppCodeGenWriteBarrier(&___lastDecode_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
