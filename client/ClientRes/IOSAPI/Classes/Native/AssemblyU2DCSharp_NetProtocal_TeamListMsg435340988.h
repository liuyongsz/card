#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<NetProtocal.SelectTeamMsg>
struct List_1_t1961364954;
// ProtoBuf.IExtension
struct IExtension_t1221360786;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetProtocal.TeamListMsg
struct  TeamListMsg_t435340988  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<NetProtocal.SelectTeamMsg> NetProtocal.TeamListMsg::_team
	List_1_t1961364954 * ____team_0;
	// ProtoBuf.IExtension NetProtocal.TeamListMsg::extensionObject
	Il2CppObject * ___extensionObject_1;

public:
	inline static int32_t get_offset_of__team_0() { return static_cast<int32_t>(offsetof(TeamListMsg_t435340988, ____team_0)); }
	inline List_1_t1961364954 * get__team_0() const { return ____team_0; }
	inline List_1_t1961364954 ** get_address_of__team_0() { return &____team_0; }
	inline void set__team_0(List_1_t1961364954 * value)
	{
		____team_0 = value;
		Il2CppCodeGenWriteBarrier(&____team_0, value);
	}

	inline static int32_t get_offset_of_extensionObject_1() { return static_cast<int32_t>(offsetof(TeamListMsg_t435340988, ___extensionObject_1)); }
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
