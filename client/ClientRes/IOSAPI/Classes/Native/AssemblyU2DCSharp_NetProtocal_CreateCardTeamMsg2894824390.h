#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.IExtension
struct IExtension_t1221360786;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetProtocal.CreateCardTeamMsg
struct  CreateCardTeamMsg_t2894824390  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.CreateCardTeamMsg::_teamId
	int32_t ____teamId_0;
	// System.Int32 NetProtocal.CreateCardTeamMsg::_heroConfigId
	int32_t ____heroConfigId_1;
	// ProtoBuf.IExtension NetProtocal.CreateCardTeamMsg::extensionObject
	Il2CppObject * ___extensionObject_2;

public:
	inline static int32_t get_offset_of__teamId_0() { return static_cast<int32_t>(offsetof(CreateCardTeamMsg_t2894824390, ____teamId_0)); }
	inline int32_t get__teamId_0() const { return ____teamId_0; }
	inline int32_t* get_address_of__teamId_0() { return &____teamId_0; }
	inline void set__teamId_0(int32_t value)
	{
		____teamId_0 = value;
	}

	inline static int32_t get_offset_of__heroConfigId_1() { return static_cast<int32_t>(offsetof(CreateCardTeamMsg_t2894824390, ____heroConfigId_1)); }
	inline int32_t get__heroConfigId_1() const { return ____heroConfigId_1; }
	inline int32_t* get_address_of__heroConfigId_1() { return &____heroConfigId_1; }
	inline void set__heroConfigId_1(int32_t value)
	{
		____heroConfigId_1 = value;
	}

	inline static int32_t get_offset_of_extensionObject_2() { return static_cast<int32_t>(offsetof(CreateCardTeamMsg_t2894824390, ___extensionObject_2)); }
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
