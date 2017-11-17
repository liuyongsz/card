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

#include "mscorlib_System_Exception1927440687.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.　   
struct  U3000U20U20U20_t4203922846  : public Exception_t1927440687
{
public:
	// System.String live2d.　   ::id
	String_t* ___id_11;
	// System.String live2d.　   ::live2d_message
	String_t* ___live2d_message_12;

public:
	inline static int32_t get_offset_of_id_11() { return static_cast<int32_t>(offsetof(U3000U20U20U20_t4203922846, ___id_11)); }
	inline String_t* get_id_11() const { return ___id_11; }
	inline String_t** get_address_of_id_11() { return &___id_11; }
	inline void set_id_11(String_t* value)
	{
		___id_11 = value;
		Il2CppCodeGenWriteBarrier(&___id_11, value);
	}

	inline static int32_t get_offset_of_live2d_message_12() { return static_cast<int32_t>(offsetof(U3000U20U20U20_t4203922846, ___live2d_message_12)); }
	inline String_t* get_live2d_message_12() const { return ___live2d_message_12; }
	inline String_t** get_address_of_live2d_message_12() { return &___live2d_message_12; }
	inline void set_live2d_message_12(String_t* value)
	{
		___live2d_message_12 = value;
		Il2CppCodeGenWriteBarrier(&___live2d_message_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
