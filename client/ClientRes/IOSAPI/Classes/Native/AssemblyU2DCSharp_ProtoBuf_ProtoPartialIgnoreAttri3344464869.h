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

#include "AssemblyU2DCSharp_ProtoBuf_ProtoIgnoreAttribute2591673812.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.ProtoPartialIgnoreAttribute
struct  ProtoPartialIgnoreAttribute_t3344464869  : public ProtoIgnoreAttribute_t2591673812
{
public:
	// System.String ProtoBuf.ProtoPartialIgnoreAttribute::memberName
	String_t* ___memberName_0;

public:
	inline static int32_t get_offset_of_memberName_0() { return static_cast<int32_t>(offsetof(ProtoPartialIgnoreAttribute_t3344464869, ___memberName_0)); }
	inline String_t* get_memberName_0() const { return ___memberName_0; }
	inline String_t** get_address_of_memberName_0() { return &___memberName_0; }
	inline void set_memberName_0(String_t* value)
	{
		___memberName_0 = value;
		Il2CppCodeGenWriteBarrier(&___memberName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
