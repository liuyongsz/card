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

#include "mscorlib_System_EventArgs3289624707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.LockContentedEventArgs
struct  LockContentedEventArgs_t564711064  : public EventArgs_t3289624707
{
public:
	// System.String ProtoBuf.Meta.LockContentedEventArgs::ownerStackTrace
	String_t* ___ownerStackTrace_1;

public:
	inline static int32_t get_offset_of_ownerStackTrace_1() { return static_cast<int32_t>(offsetof(LockContentedEventArgs_t564711064, ___ownerStackTrace_1)); }
	inline String_t* get_ownerStackTrace_1() const { return ___ownerStackTrace_1; }
	inline String_t** get_address_of_ownerStackTrace_1() { return &___ownerStackTrace_1; }
	inline void set_ownerStackTrace_1(String_t* value)
	{
		___ownerStackTrace_1 = value;
		Il2CppCodeGenWriteBarrier(&___ownerStackTrace_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
