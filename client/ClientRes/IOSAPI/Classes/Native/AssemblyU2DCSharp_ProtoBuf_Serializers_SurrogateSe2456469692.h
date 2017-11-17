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
// ProtoBuf.Serializers.IProtoTypeSerializer
struct IProtoTypeSerializer_t3285812945;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.SurrogateSerializer
struct  SurrogateSerializer_t2456469692  : public Il2CppObject
{
public:
	// System.Type ProtoBuf.Serializers.SurrogateSerializer::forType
	Type_t * ___forType_0;
	// System.Type ProtoBuf.Serializers.SurrogateSerializer::declaredType
	Type_t * ___declaredType_1;
	// System.Reflection.MethodInfo ProtoBuf.Serializers.SurrogateSerializer::toTail
	MethodInfo_t * ___toTail_2;
	// System.Reflection.MethodInfo ProtoBuf.Serializers.SurrogateSerializer::fromTail
	MethodInfo_t * ___fromTail_3;
	// ProtoBuf.Serializers.IProtoTypeSerializer ProtoBuf.Serializers.SurrogateSerializer::rootTail
	Il2CppObject * ___rootTail_4;

public:
	inline static int32_t get_offset_of_forType_0() { return static_cast<int32_t>(offsetof(SurrogateSerializer_t2456469692, ___forType_0)); }
	inline Type_t * get_forType_0() const { return ___forType_0; }
	inline Type_t ** get_address_of_forType_0() { return &___forType_0; }
	inline void set_forType_0(Type_t * value)
	{
		___forType_0 = value;
		Il2CppCodeGenWriteBarrier(&___forType_0, value);
	}

	inline static int32_t get_offset_of_declaredType_1() { return static_cast<int32_t>(offsetof(SurrogateSerializer_t2456469692, ___declaredType_1)); }
	inline Type_t * get_declaredType_1() const { return ___declaredType_1; }
	inline Type_t ** get_address_of_declaredType_1() { return &___declaredType_1; }
	inline void set_declaredType_1(Type_t * value)
	{
		___declaredType_1 = value;
		Il2CppCodeGenWriteBarrier(&___declaredType_1, value);
	}

	inline static int32_t get_offset_of_toTail_2() { return static_cast<int32_t>(offsetof(SurrogateSerializer_t2456469692, ___toTail_2)); }
	inline MethodInfo_t * get_toTail_2() const { return ___toTail_2; }
	inline MethodInfo_t ** get_address_of_toTail_2() { return &___toTail_2; }
	inline void set_toTail_2(MethodInfo_t * value)
	{
		___toTail_2 = value;
		Il2CppCodeGenWriteBarrier(&___toTail_2, value);
	}

	inline static int32_t get_offset_of_fromTail_3() { return static_cast<int32_t>(offsetof(SurrogateSerializer_t2456469692, ___fromTail_3)); }
	inline MethodInfo_t * get_fromTail_3() const { return ___fromTail_3; }
	inline MethodInfo_t ** get_address_of_fromTail_3() { return &___fromTail_3; }
	inline void set_fromTail_3(MethodInfo_t * value)
	{
		___fromTail_3 = value;
		Il2CppCodeGenWriteBarrier(&___fromTail_3, value);
	}

	inline static int32_t get_offset_of_rootTail_4() { return static_cast<int32_t>(offsetof(SurrogateSerializer_t2456469692, ___rootTail_4)); }
	inline Il2CppObject * get_rootTail_4() const { return ___rootTail_4; }
	inline Il2CppObject ** get_address_of_rootTail_4() { return &___rootTail_4; }
	inline void set_rootTail_4(Il2CppObject * value)
	{
		___rootTail_4 = value;
		Il2CppCodeGenWriteBarrier(&___rootTail_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
