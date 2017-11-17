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
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.SerializationContext
struct  SerializationContext_t3878296411  : public Il2CppObject
{
public:
	// System.Boolean ProtoBuf.SerializationContext::frozen
	bool ___frozen_0;
	// System.Object ProtoBuf.SerializationContext::context
	Il2CppObject * ___context_1;

public:
	inline static int32_t get_offset_of_frozen_0() { return static_cast<int32_t>(offsetof(SerializationContext_t3878296411, ___frozen_0)); }
	inline bool get_frozen_0() const { return ___frozen_0; }
	inline bool* get_address_of_frozen_0() { return &___frozen_0; }
	inline void set_frozen_0(bool value)
	{
		___frozen_0 = value;
	}

	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(SerializationContext_t3878296411, ___context_1)); }
	inline Il2CppObject * get_context_1() const { return ___context_1; }
	inline Il2CppObject ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(Il2CppObject * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier(&___context_1, value);
	}
};

struct SerializationContext_t3878296411_StaticFields
{
public:
	// ProtoBuf.SerializationContext ProtoBuf.SerializationContext::default
	SerializationContext_t3878296411 * ___default_2;

public:
	inline static int32_t get_offset_of_default_2() { return static_cast<int32_t>(offsetof(SerializationContext_t3878296411_StaticFields, ___default_2)); }
	inline SerializationContext_t3878296411 * get_default_2() const { return ___default_2; }
	inline SerializationContext_t3878296411 ** get_address_of_default_2() { return &___default_2; }
	inline void set_default_2(SerializationContext_t3878296411 * value)
	{
		___default_2 = value;
		Il2CppCodeGenWriteBarrier(&___default_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
