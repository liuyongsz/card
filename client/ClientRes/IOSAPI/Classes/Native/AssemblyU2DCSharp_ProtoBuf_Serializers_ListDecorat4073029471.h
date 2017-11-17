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
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "AssemblyU2DCSharp_ProtoBuf_Serializers_ProtoDecora1562593268.h"
#include "AssemblyU2DCSharp_ProtoBuf_WireType4172783757.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.ListDecorator
struct  ListDecorator_t4073029471  : public ProtoDecoratorBase_t1562593268
{
public:
	// System.Byte ProtoBuf.Serializers.ListDecorator::options
	uint8_t ___options_7;
	// System.Type ProtoBuf.Serializers.ListDecorator::declaredType
	Type_t * ___declaredType_8;
	// System.Type ProtoBuf.Serializers.ListDecorator::concreteType
	Type_t * ___concreteType_9;
	// System.Reflection.MethodInfo ProtoBuf.Serializers.ListDecorator::add
	MethodInfo_t * ___add_10;
	// System.Int32 ProtoBuf.Serializers.ListDecorator::fieldNumber
	int32_t ___fieldNumber_11;
	// ProtoBuf.WireType ProtoBuf.Serializers.ListDecorator::packedWireType
	int32_t ___packedWireType_12;

public:
	inline static int32_t get_offset_of_options_7() { return static_cast<int32_t>(offsetof(ListDecorator_t4073029471, ___options_7)); }
	inline uint8_t get_options_7() const { return ___options_7; }
	inline uint8_t* get_address_of_options_7() { return &___options_7; }
	inline void set_options_7(uint8_t value)
	{
		___options_7 = value;
	}

	inline static int32_t get_offset_of_declaredType_8() { return static_cast<int32_t>(offsetof(ListDecorator_t4073029471, ___declaredType_8)); }
	inline Type_t * get_declaredType_8() const { return ___declaredType_8; }
	inline Type_t ** get_address_of_declaredType_8() { return &___declaredType_8; }
	inline void set_declaredType_8(Type_t * value)
	{
		___declaredType_8 = value;
		Il2CppCodeGenWriteBarrier(&___declaredType_8, value);
	}

	inline static int32_t get_offset_of_concreteType_9() { return static_cast<int32_t>(offsetof(ListDecorator_t4073029471, ___concreteType_9)); }
	inline Type_t * get_concreteType_9() const { return ___concreteType_9; }
	inline Type_t ** get_address_of_concreteType_9() { return &___concreteType_9; }
	inline void set_concreteType_9(Type_t * value)
	{
		___concreteType_9 = value;
		Il2CppCodeGenWriteBarrier(&___concreteType_9, value);
	}

	inline static int32_t get_offset_of_add_10() { return static_cast<int32_t>(offsetof(ListDecorator_t4073029471, ___add_10)); }
	inline MethodInfo_t * get_add_10() const { return ___add_10; }
	inline MethodInfo_t ** get_address_of_add_10() { return &___add_10; }
	inline void set_add_10(MethodInfo_t * value)
	{
		___add_10 = value;
		Il2CppCodeGenWriteBarrier(&___add_10, value);
	}

	inline static int32_t get_offset_of_fieldNumber_11() { return static_cast<int32_t>(offsetof(ListDecorator_t4073029471, ___fieldNumber_11)); }
	inline int32_t get_fieldNumber_11() const { return ___fieldNumber_11; }
	inline int32_t* get_address_of_fieldNumber_11() { return &___fieldNumber_11; }
	inline void set_fieldNumber_11(int32_t value)
	{
		___fieldNumber_11 = value;
	}

	inline static int32_t get_offset_of_packedWireType_12() { return static_cast<int32_t>(offsetof(ListDecorator_t4073029471, ___packedWireType_12)); }
	inline int32_t get_packedWireType_12() const { return ___packedWireType_12; }
	inline int32_t* get_address_of_packedWireType_12() { return &___packedWireType_12; }
	inline void set_packedWireType_12(int32_t value)
	{
		___packedWireType_12 = value;
	}
};

struct ListDecorator_t4073029471_StaticFields
{
public:
	// System.Type ProtoBuf.Serializers.ListDecorator::ienumeratorType
	Type_t * ___ienumeratorType_13;
	// System.Type ProtoBuf.Serializers.ListDecorator::ienumerableType
	Type_t * ___ienumerableType_14;

public:
	inline static int32_t get_offset_of_ienumeratorType_13() { return static_cast<int32_t>(offsetof(ListDecorator_t4073029471_StaticFields, ___ienumeratorType_13)); }
	inline Type_t * get_ienumeratorType_13() const { return ___ienumeratorType_13; }
	inline Type_t ** get_address_of_ienumeratorType_13() { return &___ienumeratorType_13; }
	inline void set_ienumeratorType_13(Type_t * value)
	{
		___ienumeratorType_13 = value;
		Il2CppCodeGenWriteBarrier(&___ienumeratorType_13, value);
	}

	inline static int32_t get_offset_of_ienumerableType_14() { return static_cast<int32_t>(offsetof(ListDecorator_t4073029471_StaticFields, ___ienumerableType_14)); }
	inline Type_t * get_ienumerableType_14() const { return ___ienumerableType_14; }
	inline Type_t ** get_address_of_ienumerableType_14() { return &___ienumerableType_14; }
	inline void set_ienumerableType_14(Type_t * value)
	{
		___ienumerableType_14 = value;
		Il2CppCodeGenWriteBarrier(&___ienumerableType_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
