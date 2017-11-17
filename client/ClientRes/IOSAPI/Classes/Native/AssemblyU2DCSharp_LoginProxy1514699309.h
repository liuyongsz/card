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
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Dictionary_2_t2250343326;

#include "AssemblyU2DCSharp_PureMVC_Patterns_Proxy_1_gen2442423107.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoginProxy
struct  LoginProxy_t1514699309  : public Proxy_1_t2442423107
{
public:
	// System.String LoginProxy::m_account
	String_t* ___m_account_4;
	// System.String LoginProxy::m_passwd
	String_t* ___m_passwd_5;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.Dictionary`2<System.String,System.Object>> LoginProxy::m_avatarList
	Dictionary_2_t2250343326 * ___m_avatarList_6;

public:
	inline static int32_t get_offset_of_m_account_4() { return static_cast<int32_t>(offsetof(LoginProxy_t1514699309, ___m_account_4)); }
	inline String_t* get_m_account_4() const { return ___m_account_4; }
	inline String_t** get_address_of_m_account_4() { return &___m_account_4; }
	inline void set_m_account_4(String_t* value)
	{
		___m_account_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_account_4, value);
	}

	inline static int32_t get_offset_of_m_passwd_5() { return static_cast<int32_t>(offsetof(LoginProxy_t1514699309, ___m_passwd_5)); }
	inline String_t* get_m_passwd_5() const { return ___m_passwd_5; }
	inline String_t** get_address_of_m_passwd_5() { return &___m_passwd_5; }
	inline void set_m_passwd_5(String_t* value)
	{
		___m_passwd_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_passwd_5, value);
	}

	inline static int32_t get_offset_of_m_avatarList_6() { return static_cast<int32_t>(offsetof(LoginProxy_t1514699309, ___m_avatarList_6)); }
	inline Dictionary_2_t2250343326 * get_m_avatarList_6() const { return ___m_avatarList_6; }
	inline Dictionary_2_t2250343326 ** get_address_of_m_avatarList_6() { return &___m_avatarList_6; }
	inline void set_m_avatarList_6(Dictionary_2_t2250343326 * value)
	{
		___m_avatarList_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_avatarList_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
