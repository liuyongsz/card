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
#include "AssemblyU2DCSharp_ProtoBuf_WireType4172783757.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.ArrayDecorator
struct  ArrayDecorator_t6119840  : public ProtoDecoratorBase_t1562593268
{
public:
	// System.Int32 ProtoBuf.Serializers.ArrayDecorator::fieldNumber
	int32_t ___fieldNumber_4;
	// System.Byte ProtoBuf.Serializers.ArrayDecorator::options
	uint8_t ___options_5;
	// ProtoBuf.WireType ProtoBuf.Serializers.ArrayDecorator::packedWireType
	int32_t ___packedWireType_6;
	// System.Type ProtoBuf.Serializers.ArrayDecorator::arrayType
	Type_t * ___arrayType_7;
	// System.Type ProtoBuf.Serializers.ArrayDecorator::itemType
	Type_t * ___itemType_8;

public:
	inline static int32_t get_offset_of_fieldNumber_4() { return static_cast<int32_t>(offsetof(ArrayDecorator_t6119840, ___fieldNumber_4)); }
	inline int32_t get_fieldNumber_4() const { return ___fieldNumber_4; }
	inline int32_t* get_address_of_fieldNumber_4() { return &___fieldNumber_4; }
	inline void set_fieldNumber_4(int32_t value)
	{
		___fieldNumber_4 = value;
	}

	inline static int32_t get_offset_of_options_5() { return static_cast<int32_t>(offsetof(ArrayDecorator_t6119840, ___options_5)); }
	inline uint8_t get_options_5() const { return ___options_5; }
	inline uint8_t* get_address_of_options_5() { return &___options_5; }
	inline void set_options_5(uint8_t value)
	{
		___options_5 = value;
	}

	inline static int32_t get_offset_of_packedWireType_6() { return static_cast<int32_t>(offsetof(ArrayDecorator_t6119840, ___packedWireType_6)); }
	inline int32_t get_packedWireType_6() const { return ___packedWireType_6; }
	inline int32_t* get_address_of_packedWireType_6() { return &___packedWireType_6; }
	inline void set_packedWireType_6(int32_t value)
	{
		___packedWireType_6 = value;
	}

	inline static int32_t get_offset_of_arrayType_7() { return static_cast<int32_t>(offsetof(ArrayDecorator_t6119840, ___arrayType_7)); }
	inline Type_t * get_arrayType_7() const { return ___arrayType_7; }
	inline Type_t ** get_address_of_arrayType_7() { return &___arrayType_7; }
	inline void set_arrayType_7(Type_t * value)
	{
		___arrayType_7 = value;
		Il2CppCodeGenWriteBarrier(&___arrayType_7, value);
	}

	inline static int32_t get_offset_of_itemType_8() { return static_cast<int32_t>(offsetof(ArrayDecorator_t6119840, ___itemType_8)); }
	inline Type_t * get_itemType_8() const { return ___itemType_8; }
	inline Type_t ** get_address_of_itemType_8() { return &___itemType_8; }
	inline void set_itemType_8(Type_t * value)
	{
		___itemType_8 = value;
		Il2CppCodeGenWriteBarrier(&___itemType_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
