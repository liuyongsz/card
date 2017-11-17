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

// NetProtocal.PlayerInfoMsg
struct  PlayerInfoMsg_t3752910050  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.PlayerInfoMsg::_pid
	int32_t ____pid_0;
	// System.String NetProtocal.PlayerInfoMsg::_nickName
	String_t* ____nickName_1;
	// System.Int32 NetProtocal.PlayerInfoMsg::_selectTeamId
	int32_t ____selectTeamId_2;
	// ProtoBuf.IExtension NetProtocal.PlayerInfoMsg::extensionObject
	Il2CppObject * ___extensionObject_3;

public:
	inline static int32_t get_offset_of__pid_0() { return static_cast<int32_t>(offsetof(PlayerInfoMsg_t3752910050, ____pid_0)); }
	inline int32_t get__pid_0() const { return ____pid_0; }
	inline int32_t* get_address_of__pid_0() { return &____pid_0; }
	inline void set__pid_0(int32_t value)
	{
		____pid_0 = value;
	}

	inline static int32_t get_offset_of__nickName_1() { return static_cast<int32_t>(offsetof(PlayerInfoMsg_t3752910050, ____nickName_1)); }
	inline String_t* get__nickName_1() const { return ____nickName_1; }
	inline String_t** get_address_of__nickName_1() { return &____nickName_1; }
	inline void set__nickName_1(String_t* value)
	{
		____nickName_1 = value;
		Il2CppCodeGenWriteBarrier(&____nickName_1, value);
	}

	inline static int32_t get_offset_of__selectTeamId_2() { return static_cast<int32_t>(offsetof(PlayerInfoMsg_t3752910050, ____selectTeamId_2)); }
	inline int32_t get__selectTeamId_2() const { return ____selectTeamId_2; }
	inline int32_t* get_address_of__selectTeamId_2() { return &____selectTeamId_2; }
	inline void set__selectTeamId_2(int32_t value)
	{
		____selectTeamId_2 = value;
	}

	inline static int32_t get_offset_of_extensionObject_3() { return static_cast<int32_t>(offsetof(PlayerInfoMsg_t3752910050, ___extensionObject_3)); }
	inline Il2CppObject * get_extensionObject_3() const { return ___extensionObject_3; }
	inline Il2CppObject ** get_address_of_extensionObject_3() { return &___extensionObject_3; }
	inline void set_extensionObject_3(Il2CppObject * value)
	{
		___extensionObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
