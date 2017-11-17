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

// NetProtocal.PlayerCreateMsg
struct  PlayerCreateMsg_t2435875764  : public Il2CppObject
{
public:
	// System.String NetProtocal.PlayerCreateMsg::_nickName
	String_t* ____nickName_0;
	// ProtoBuf.IExtension NetProtocal.PlayerCreateMsg::extensionObject
	Il2CppObject * ___extensionObject_1;

public:
	inline static int32_t get_offset_of__nickName_0() { return static_cast<int32_t>(offsetof(PlayerCreateMsg_t2435875764, ____nickName_0)); }
	inline String_t* get__nickName_0() const { return ____nickName_0; }
	inline String_t** get_address_of__nickName_0() { return &____nickName_0; }
	inline void set__nickName_0(String_t* value)
	{
		____nickName_0 = value;
		Il2CppCodeGenWriteBarrier(&____nickName_0, value);
	}

	inline static int32_t get_offset_of_extensionObject_1() { return static_cast<int32_t>(offsetof(PlayerCreateMsg_t2435875764, ___extensionObject_1)); }
	inline Il2CppObject * get_extensionObject_1() const { return ___extensionObject_1; }
	inline Il2CppObject ** get_address_of_extensionObject_1() { return &___extensionObject_1; }
	inline void set_extensionObject_1(Il2CppObject * value)
	{
		___extensionObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
