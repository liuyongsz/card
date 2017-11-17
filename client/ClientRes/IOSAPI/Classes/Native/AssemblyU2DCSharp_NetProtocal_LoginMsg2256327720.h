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
// ProtoBuf.IExtension
struct IExtension_t1221360786;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetProtocal.LoginMsg
struct  LoginMsg_t2256327720  : public Il2CppObject
{
public:
	// System.String NetProtocal.LoginMsg::_accountId
	String_t* ____accountId_0;
	// System.String NetProtocal.LoginMsg::_accountPwd
	String_t* ____accountPwd_1;
	// ProtoBuf.IExtension NetProtocal.LoginMsg::extensionObject
	Il2CppObject * ___extensionObject_2;

public:
	inline static int32_t get_offset_of__accountId_0() { return static_cast<int32_t>(offsetof(LoginMsg_t2256327720, ____accountId_0)); }
	inline String_t* get__accountId_0() const { return ____accountId_0; }
	inline String_t** get_address_of__accountId_0() { return &____accountId_0; }
	inline void set__accountId_0(String_t* value)
	{
		____accountId_0 = value;
		Il2CppCodeGenWriteBarrier(&____accountId_0, value);
	}

	inline static int32_t get_offset_of__accountPwd_1() { return static_cast<int32_t>(offsetof(LoginMsg_t2256327720, ____accountPwd_1)); }
	inline String_t* get__accountPwd_1() const { return ____accountPwd_1; }
	inline String_t** get_address_of__accountPwd_1() { return &____accountPwd_1; }
	inline void set__accountPwd_1(String_t* value)
	{
		____accountPwd_1 = value;
		Il2CppCodeGenWriteBarrier(&____accountPwd_1, value);
	}

	inline static int32_t get_offset_of_extensionObject_2() { return static_cast<int32_t>(offsetof(LoginMsg_t2256327720, ___extensionObject_2)); }
	inline Il2CppObject * get_extensionObject_2() const { return ___extensionObject_2; }
	inline Il2CppObject ** get_address_of_extensionObject_2() { return &___extensionObject_2; }
	inline void set_extensionObject_2(Il2CppObject * value)
	{
		___extensionObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
