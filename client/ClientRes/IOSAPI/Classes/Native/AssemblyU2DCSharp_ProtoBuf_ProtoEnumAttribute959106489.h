#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.ProtoEnumAttribute
struct  ProtoEnumAttribute_t959106489  : public Attribute_t542643598
{
public:
	// System.Boolean ProtoBuf.ProtoEnumAttribute::hasValue
	bool ___hasValue_0;
	// System.Int32 ProtoBuf.ProtoEnumAttribute::enumValue
	int32_t ___enumValue_1;
	// System.String ProtoBuf.ProtoEnumAttribute::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_hasValue_0() { return static_cast<int32_t>(offsetof(ProtoEnumAttribute_t959106489, ___hasValue_0)); }
	inline bool get_hasValue_0() const { return ___hasValue_0; }
	inline bool* get_address_of_hasValue_0() { return &___hasValue_0; }
	inline void set_hasValue_0(bool value)
	{
		___hasValue_0 = value;
	}

	inline static int32_t get_offset_of_enumValue_1() { return static_cast<int32_t>(offsetof(ProtoEnumAttribute_t959106489, ___enumValue_1)); }
	inline int32_t get_enumValue_1() const { return ___enumValue_1; }
	inline int32_t* get_address_of_enumValue_1() { return &___enumValue_1; }
	inline void set_enumValue_1(int32_t value)
	{
		___enumValue_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ProtoEnumAttribute_t959106489, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
