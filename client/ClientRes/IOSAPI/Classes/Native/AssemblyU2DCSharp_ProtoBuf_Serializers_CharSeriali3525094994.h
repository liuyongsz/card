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

#include "AssemblyU2DCSharp_ProtoBuf_Serializers_UInt16Seria4060534859.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.CharSerializer
struct  CharSerializer_t3525094994  : public UInt16Serializer_t4060534859
{
public:

public:
};

struct CharSerializer_t3525094994_StaticFields
{
public:
	// System.Type ProtoBuf.Serializers.CharSerializer::expectedType
	Type_t * ___expectedType_1;

public:
	inline static int32_t get_offset_of_expectedType_1() { return static_cast<int32_t>(offsetof(CharSerializer_t3525094994_StaticFields, ___expectedType_1)); }
	inline Type_t * get_expectedType_1() const { return ___expectedType_1; }
	inline Type_t ** get_address_of_expectedType_1() { return &___expectedType_1; }
	inline void set_expectedType_1(Type_t * value)
	{
		___expectedType_1 = value;
		Il2CppCodeGenWriteBarrier(&___expectedType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
