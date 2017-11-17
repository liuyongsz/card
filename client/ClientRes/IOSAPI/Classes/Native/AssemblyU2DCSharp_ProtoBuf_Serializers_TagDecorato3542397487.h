#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_ProtoBuf_Serializers_ProtoDecora1562593268.h"
#include "AssemblyU2DCSharp_ProtoBuf_WireType4172783757.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.TagDecorator
struct  TagDecorator_t3542397487  : public ProtoDecoratorBase_t1562593268
{
public:
	// System.Boolean ProtoBuf.Serializers.TagDecorator::strict
	bool ___strict_1;
	// System.Int32 ProtoBuf.Serializers.TagDecorator::fieldNumber
	int32_t ___fieldNumber_2;
	// ProtoBuf.WireType ProtoBuf.Serializers.TagDecorator::wireType
	int32_t ___wireType_3;

public:
	inline static int32_t get_offset_of_strict_1() { return static_cast<int32_t>(offsetof(TagDecorator_t3542397487, ___strict_1)); }
	inline bool get_strict_1() const { return ___strict_1; }
	inline bool* get_address_of_strict_1() { return &___strict_1; }
	inline void set_strict_1(bool value)
	{
		___strict_1 = value;
	}

	inline static int32_t get_offset_of_fieldNumber_2() { return static_cast<int32_t>(offsetof(TagDecorator_t3542397487, ___fieldNumber_2)); }
	inline int32_t get_fieldNumber_2() const { return ___fieldNumber_2; }
	inline int32_t* get_address_of_fieldNumber_2() { return &___fieldNumber_2; }
	inline void set_fieldNumber_2(int32_t value)
	{
		___fieldNumber_2 = value;
	}

	inline static int32_t get_offset_of_wireType_3() { return static_cast<int32_t>(offsetof(TagDecorator_t3542397487, ___wireType_3)); }
	inline int32_t get_wireType_3() const { return ___wireType_3; }
	inline int32_t* get_address_of_wireType_3() { return &___wireType_3; }
	inline void set_wireType_3(int32_t value)
	{
		___wireType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
