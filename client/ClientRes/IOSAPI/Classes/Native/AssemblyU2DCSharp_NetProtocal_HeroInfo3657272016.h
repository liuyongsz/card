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

// NetProtocal.HeroInfo
struct  HeroInfo_t3657272016  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.HeroInfo::_heroUUId
	int32_t ____heroUUId_0;
	// System.Int32 NetProtocal.HeroInfo::_configId
	int32_t ____configId_1;
	// System.Int32 NetProtocal.HeroInfo::_pos
	int32_t ____pos_2;
	// System.Int32 NetProtocal.HeroInfo::_arcaneId
	int32_t ____arcaneId_3;
	// System.String NetProtocal.HeroInfo::_cardTeamName
	String_t* ____cardTeamName_4;
	// ProtoBuf.IExtension NetProtocal.HeroInfo::extensionObject
	Il2CppObject * ___extensionObject_5;

public:
	inline static int32_t get_offset_of__heroUUId_0() { return static_cast<int32_t>(offsetof(HeroInfo_t3657272016, ____heroUUId_0)); }
	inline int32_t get__heroUUId_0() const { return ____heroUUId_0; }
	inline int32_t* get_address_of__heroUUId_0() { return &____heroUUId_0; }
	inline void set__heroUUId_0(int32_t value)
	{
		____heroUUId_0 = value;
	}

	inline static int32_t get_offset_of__configId_1() { return static_cast<int32_t>(offsetof(HeroInfo_t3657272016, ____configId_1)); }
	inline int32_t get__configId_1() const { return ____configId_1; }
	inline int32_t* get_address_of__configId_1() { return &____configId_1; }
	inline void set__configId_1(int32_t value)
	{
		____configId_1 = value;
	}

	inline static int32_t get_offset_of__pos_2() { return static_cast<int32_t>(offsetof(HeroInfo_t3657272016, ____pos_2)); }
	inline int32_t get__pos_2() const { return ____pos_2; }
	inline int32_t* get_address_of__pos_2() { return &____pos_2; }
	inline void set__pos_2(int32_t value)
	{
		____pos_2 = value;
	}

	inline static int32_t get_offset_of__arcaneId_3() { return static_cast<int32_t>(offsetof(HeroInfo_t3657272016, ____arcaneId_3)); }
	inline int32_t get__arcaneId_3() const { return ____arcaneId_3; }
	inline int32_t* get_address_of__arcaneId_3() { return &____arcaneId_3; }
	inline void set__arcaneId_3(int32_t value)
	{
		____arcaneId_3 = value;
	}

	inline static int32_t get_offset_of__cardTeamName_4() { return static_cast<int32_t>(offsetof(HeroInfo_t3657272016, ____cardTeamName_4)); }
	inline String_t* get__cardTeamName_4() const { return ____cardTeamName_4; }
	inline String_t** get_address_of__cardTeamName_4() { return &____cardTeamName_4; }
	inline void set__cardTeamName_4(String_t* value)
	{
		____cardTeamName_4 = value;
		Il2CppCodeGenWriteBarrier(&____cardTeamName_4, value);
	}

	inline static int32_t get_offset_of_extensionObject_5() { return static_cast<int32_t>(offsetof(HeroInfo_t3657272016, ___extensionObject_5)); }
	inline Il2CppObject * get_extensionObject_5() const { return ___extensionObject_5; }
	inline Il2CppObject ** get_address_of_extensionObject_5() { return &___extensionObject_5; }
	inline void set_extensionObject_5(Il2CppObject * value)
	{
		___extensionObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
