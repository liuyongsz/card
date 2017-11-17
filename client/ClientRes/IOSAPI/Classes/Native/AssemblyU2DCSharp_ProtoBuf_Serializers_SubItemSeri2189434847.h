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
// ProtoBuf.Serializers.ISerializerProxy
struct ISerializerProxy_t4116334411;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.SubItemSerializer
struct  SubItemSerializer_t2189434847  : public Il2CppObject
{
public:
	// System.Int32 ProtoBuf.Serializers.SubItemSerializer::key
	int32_t ___key_0;
	// System.Type ProtoBuf.Serializers.SubItemSerializer::type
	Type_t * ___type_1;
	// ProtoBuf.Serializers.ISerializerProxy ProtoBuf.Serializers.SubItemSerializer::proxy
	Il2CppObject * ___proxy_2;
	// System.Boolean ProtoBuf.Serializers.SubItemSerializer::recursionCheck
	bool ___recursionCheck_3;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(SubItemSerializer_t2189434847, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SubItemSerializer_t2189434847, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_proxy_2() { return static_cast<int32_t>(offsetof(SubItemSerializer_t2189434847, ___proxy_2)); }
	inline Il2CppObject * get_proxy_2() const { return ___proxy_2; }
	inline Il2CppObject ** get_address_of_proxy_2() { return &___proxy_2; }
	inline void set_proxy_2(Il2CppObject * value)
	{
		___proxy_2 = value;
		Il2CppCodeGenWriteBarrier(&___proxy_2, value);
	}

	inline static int32_t get_offset_of_recursionCheck_3() { return static_cast<int32_t>(offsetof(SubItemSerializer_t2189434847, ___recursionCheck_3)); }
	inline bool get_recursionCheck_3() const { return ___recursionCheck_3; }
	inline bool* get_address_of_recursionCheck_3() { return &___recursionCheck_3; }
	inline void set_recursionCheck_3(bool value)
	{
		___recursionCheck_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
