#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Type
struct Type_t;

#include "AssemblyU2DCSharp_ProtoBuf_Serializers_ProtoDecora1562593268.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.FieldDecorator
struct  FieldDecorator_t681850927  : public ProtoDecoratorBase_t1562593268
{
public:
	// System.Reflection.FieldInfo ProtoBuf.Serializers.FieldDecorator::field
	FieldInfo_t * ___field_1;
	// System.Type ProtoBuf.Serializers.FieldDecorator::forType
	Type_t * ___forType_2;

public:
	inline static int32_t get_offset_of_field_1() { return static_cast<int32_t>(offsetof(FieldDecorator_t681850927, ___field_1)); }
	inline FieldInfo_t * get_field_1() const { return ___field_1; }
	inline FieldInfo_t ** get_address_of_field_1() { return &___field_1; }
	inline void set_field_1(FieldInfo_t * value)
	{
		___field_1 = value;
		Il2CppCodeGenWriteBarrier(&___field_1, value);
	}

	inline static int32_t get_offset_of_forType_2() { return static_cast<int32_t>(offsetof(FieldDecorator_t681850927, ___forType_2)); }
	inline Type_t * get_forType_2() const { return ___forType_2; }
	inline Type_t ** get_address_of_forType_2() { return &___forType_2; }
	inline void set_forType_2(Type_t * value)
	{
		___forType_2 = value;
		Il2CppCodeGenWriteBarrier(&___forType_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
