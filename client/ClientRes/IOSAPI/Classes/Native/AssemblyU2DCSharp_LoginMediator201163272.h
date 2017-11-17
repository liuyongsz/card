#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LoginMediator
struct LoginMediator_t201163272;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_UIMediator_1_gen1670738460.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoginMediator
struct  LoginMediator_t201163272  : public UIMediator_1_t1670738460
{
public:
	// System.String LoginMediator::user
	String_t* ___user_19;
	// System.String LoginMediator::pass
	String_t* ___pass_20;

public:
	inline static int32_t get_offset_of_user_19() { return static_cast<int32_t>(offsetof(LoginMediator_t201163272, ___user_19)); }
	inline String_t* get_user_19() const { return ___user_19; }
	inline String_t** get_address_of_user_19() { return &___user_19; }
	inline void set_user_19(String_t* value)
	{
		___user_19 = value;
		Il2CppCodeGenWriteBarrier(&___user_19, value);
	}

	inline static int32_t get_offset_of_pass_20() { return static_cast<int32_t>(offsetof(LoginMediator_t201163272, ___pass_20)); }
	inline String_t* get_pass_20() const { return ___pass_20; }
	inline String_t** get_address_of_pass_20() { return &___pass_20; }
	inline void set_pass_20(String_t* value)
	{
		___pass_20 = value;
		Il2CppCodeGenWriteBarrier(&___pass_20, value);
	}
};

struct LoginMediator_t201163272_StaticFields
{
public:
	// LoginMediator LoginMediator::loginMediator
	LoginMediator_t201163272 * ___loginMediator_18;

public:
	inline static int32_t get_offset_of_loginMediator_18() { return static_cast<int32_t>(offsetof(LoginMediator_t201163272_StaticFields, ___loginMediator_18)); }
	inline LoginMediator_t201163272 * get_loginMediator_18() const { return ___loginMediator_18; }
	inline LoginMediator_t201163272 ** get_address_of_loginMediator_18() { return &___loginMediator_18; }
	inline void set_loginMediator_18(LoginMediator_t201163272 * value)
	{
		___loginMediator_18 = value;
		Il2CppCodeGenWriteBarrier(&___loginMediator_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
