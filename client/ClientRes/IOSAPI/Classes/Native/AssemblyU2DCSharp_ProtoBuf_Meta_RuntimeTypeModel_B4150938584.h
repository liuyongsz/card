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
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.RuntimeTypeModel/BasicType
struct  BasicType_t4150938584  : public Il2CppObject
{
public:
	// System.Type ProtoBuf.Meta.RuntimeTypeModel/BasicType::type
	Type_t * ___type_0;
	// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.RuntimeTypeModel/BasicType::serializer
	Il2CppObject * ___serializer_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(BasicType_t4150938584, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_serializer_1() { return static_cast<int32_t>(offsetof(BasicType_t4150938584, ___serializer_1)); }
	inline Il2CppObject * get_serializer_1() const { return ___serializer_1; }
	inline Il2CppObject ** get_address_of_serializer_1() { return &___serializer_1; }
	inline void set_serializer_1(Il2CppObject * value)
	{
		___serializer_1 = value;
		Il2CppCodeGenWriteBarrier(&___serializer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
