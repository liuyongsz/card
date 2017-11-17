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

#include "AssemblyU2DCSharp_ProtoBuf_Serializers_ProtoDecora1562593268.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.DefaultValueDecorator
struct  DefaultValueDecorator_t3822837873  : public ProtoDecoratorBase_t1562593268
{
public:
	// System.Object ProtoBuf.Serializers.DefaultValueDecorator::defaultValue
	Il2CppObject * ___defaultValue_1;

public:
	inline static int32_t get_offset_of_defaultValue_1() { return static_cast<int32_t>(offsetof(DefaultValueDecorator_t3822837873, ___defaultValue_1)); }
	inline Il2CppObject * get_defaultValue_1() const { return ___defaultValue_1; }
	inline Il2CppObject ** get_address_of_defaultValue_1() { return &___defaultValue_1; }
	inline void set_defaultValue_1(Il2CppObject * value)
	{
		___defaultValue_1 = value;
		Il2CppCodeGenWriteBarrier(&___defaultValue_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
