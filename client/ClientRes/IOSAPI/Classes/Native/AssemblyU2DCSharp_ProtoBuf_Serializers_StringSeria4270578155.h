#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.StringSerializer
struct  StringSerializer_t4270578155  : public Il2CppObject
{
public:

public:
};

struct StringSerializer_t4270578155_StaticFields
{
public:
	// System.Type ProtoBuf.Serializers.StringSerializer::expectedType
	Type_t * ___expectedType_0;

public:
	inline static int32_t get_offset_of_expectedType_0() { return static_cast<int32_t>(offsetof(StringSerializer_t4270578155_StaticFields, ___expectedType_0)); }
	inline Type_t * get_expectedType_0() const { return ___expectedType_0; }
	inline Type_t ** get_address_of_expectedType_0() { return &___expectedType_0; }
	inline void set_expectedType_0(Type_t * value)
	{
		___expectedType_0 = value;
		Il2CppCodeGenWriteBarrier(&___expectedType_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
