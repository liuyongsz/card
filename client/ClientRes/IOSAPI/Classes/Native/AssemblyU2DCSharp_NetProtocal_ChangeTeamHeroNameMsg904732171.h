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

// NetProtocal.ChangeTeamHeroNameMsg
struct  ChangeTeamHeroNameMsg_t904732171  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.ChangeTeamHeroNameMsg::_teamId
	int32_t ____teamId_0;
	// System.Int32 NetProtocal.ChangeTeamHeroNameMsg::_heroId
	int32_t ____heroId_1;
	// System.String NetProtocal.ChangeTeamHeroNameMsg::_name
	String_t* ____name_2;
	// ProtoBuf.IExtension NetProtocal.ChangeTeamHeroNameMsg::extensionObject
	Il2CppObject * ___extensionObject_3;

public:
	inline static int32_t get_offset_of__teamId_0() { return static_cast<int32_t>(offsetof(ChangeTeamHeroNameMsg_t904732171, ____teamId_0)); }
	inline int32_t get__teamId_0() const { return ____teamId_0; }
	inline int32_t* get_address_of__teamId_0() { return &____teamId_0; }
	inline void set__teamId_0(int32_t value)
	{
		____teamId_0 = value;
	}

	inline static int32_t get_offset_of__heroId_1() { return static_cast<int32_t>(offsetof(ChangeTeamHeroNameMsg_t904732171, ____heroId_1)); }
	inline int32_t get__heroId_1() const { return ____heroId_1; }
	inline int32_t* get_address_of__heroId_1() { return &____heroId_1; }
	inline void set__heroId_1(int32_t value)
	{
		____heroId_1 = value;
	}

	inline static int32_t get_offset_of__name_2() { return static_cast<int32_t>(offsetof(ChangeTeamHeroNameMsg_t904732171, ____name_2)); }
	inline String_t* get__name_2() const { return ____name_2; }
	inline String_t** get_address_of__name_2() { return &____name_2; }
	inline void set__name_2(String_t* value)
	{
		____name_2 = value;
		Il2CppCodeGenWriteBarrier(&____name_2, value);
	}

	inline static int32_t get_offset_of_extensionObject_3() { return static_cast<int32_t>(offsetof(ChangeTeamHeroNameMsg_t904732171, ___extensionObject_3)); }
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
