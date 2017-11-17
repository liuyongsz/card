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
// ProtoBuf.Serializers.EnumSerializer/EnumPair[]
struct EnumPairU5BU5D_t121134586;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.EnumSerializer
struct  EnumSerializer_t438894721  : public Il2CppObject
{
public:
	// System.Type ProtoBuf.Serializers.EnumSerializer::enumType
	Type_t * ___enumType_0;
	// ProtoBuf.Serializers.EnumSerializer/EnumPair[] ProtoBuf.Serializers.EnumSerializer::map
	EnumPairU5BU5D_t121134586* ___map_1;

public:
	inline static int32_t get_offset_of_enumType_0() { return static_cast<int32_t>(offsetof(EnumSerializer_t438894721, ___enumType_0)); }
	inline Type_t * get_enumType_0() const { return ___enumType_0; }
	inline Type_t ** get_address_of_enumType_0() { return &___enumType_0; }
	inline void set_enumType_0(Type_t * value)
	{
		___enumType_0 = value;
		Il2CppCodeGenWriteBarrier(&___enumType_0, value);
	}

	inline static int32_t get_offset_of_map_1() { return static_cast<int32_t>(offsetof(EnumSerializer_t438894721, ___map_1)); }
	inline EnumPairU5BU5D_t121134586* get_map_1() const { return ___map_1; }
	inline EnumPairU5BU5D_t121134586** get_address_of_map_1() { return &___map_1; }
	inline void set_map_1(EnumPairU5BU5D_t121134586* value)
	{
		___map_1 = value;
		Il2CppCodeGenWriteBarrier(&___map_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
