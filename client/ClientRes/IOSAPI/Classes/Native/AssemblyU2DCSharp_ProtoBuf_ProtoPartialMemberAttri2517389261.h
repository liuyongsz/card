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

#include "AssemblyU2DCSharp_ProtoBuf_ProtoMemberAttribute3383080044.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.ProtoPartialMemberAttribute
struct  ProtoPartialMemberAttribute_t2517389261  : public ProtoMemberAttribute_t3383080044
{
public:
	// System.String ProtoBuf.ProtoPartialMemberAttribute::memberName
	String_t* ___memberName_6;

public:
	inline static int32_t get_offset_of_memberName_6() { return static_cast<int32_t>(offsetof(ProtoPartialMemberAttribute_t2517389261, ___memberName_6)); }
	inline String_t* get_memberName_6() const { return ___memberName_6; }
	inline String_t** get_address_of_memberName_6() { return &___memberName_6; }
	inline void set_memberName_6(String_t* value)
	{
		___memberName_6 = value;
		Il2CppCodeGenWriteBarrier(&___memberName_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
