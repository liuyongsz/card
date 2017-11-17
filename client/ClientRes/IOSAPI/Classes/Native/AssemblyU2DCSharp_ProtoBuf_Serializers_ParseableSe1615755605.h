#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.ParseableSerializer
struct  ParseableSerializer_t1615755605  : public Il2CppObject
{
public:
	// System.Reflection.MethodInfo ProtoBuf.Serializers.ParseableSerializer::parse
	MethodInfo_t * ___parse_0;

public:
	inline static int32_t get_offset_of_parse_0() { return static_cast<int32_t>(offsetof(ParseableSerializer_t1615755605, ___parse_0)); }
	inline MethodInfo_t * get_parse_0() const { return ___parse_0; }
	inline MethodInfo_t ** get_address_of_parse_0() { return &___parse_0; }
	inline void set_parse_0(MethodInfo_t * value)
	{
		___parse_0 = value;
		Il2CppCodeGenWriteBarrier(&___parse_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
