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

#include "AssemblyU2DCSharp_ProtoBuf_Serializers_ProtoDecora1562593268.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.NullDecorator
struct  NullDecorator_t3704621164  : public ProtoDecoratorBase_t1562593268
{
public:
	// System.Type ProtoBuf.Serializers.NullDecorator::expectedType
	Type_t * ___expectedType_2;

public:
	inline static int32_t get_offset_of_expectedType_2() { return static_cast<int32_t>(offsetof(NullDecorator_t3704621164, ___expectedType_2)); }
	inline Type_t * get_expectedType_2() const { return ___expectedType_2; }
	inline Type_t ** get_address_of_expectedType_2() { return &___expectedType_2; }
	inline void set_expectedType_2(Type_t * value)
	{
		___expectedType_2 = value;
		Il2CppCodeGenWriteBarrier(&___expectedType_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
