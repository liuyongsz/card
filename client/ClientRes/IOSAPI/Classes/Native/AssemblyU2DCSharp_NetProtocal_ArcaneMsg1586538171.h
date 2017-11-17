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

// NetProtocal.ArcaneMsg
struct  ArcaneMsg_t1586538171  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.ArcaneMsg::_teamUUid
	int32_t ____teamUUid_0;
	// System.Int32 NetProtocal.ArcaneMsg::_teamHeroUUid
	int32_t ____teamHeroUUid_1;
	// System.Int32 NetProtocal.ArcaneMsg::_arcaneId
	int32_t ____arcaneId_2;
	// ProtoBuf.IExtension NetProtocal.ArcaneMsg::extensionObject
	Il2CppObject * ___extensionObject_3;

public:
	inline static int32_t get_offset_of__teamUUid_0() { return static_cast<int32_t>(offsetof(ArcaneMsg_t1586538171, ____teamUUid_0)); }
	inline int32_t get__teamUUid_0() const { return ____teamUUid_0; }
	inline int32_t* get_address_of__teamUUid_0() { return &____teamUUid_0; }
	inline void set__teamUUid_0(int32_t value)
	{
		____teamUUid_0 = value;
	}

	inline static int32_t get_offset_of__teamHeroUUid_1() { return static_cast<int32_t>(offsetof(ArcaneMsg_t1586538171, ____teamHeroUUid_1)); }
	inline int32_t get__teamHeroUUid_1() const { return ____teamHeroUUid_1; }
	inline int32_t* get_address_of__teamHeroUUid_1() { return &____teamHeroUUid_1; }
	inline void set__teamHeroUUid_1(int32_t value)
	{
		____teamHeroUUid_1 = value;
	}

	inline static int32_t get_offset_of__arcaneId_2() { return static_cast<int32_t>(offsetof(ArcaneMsg_t1586538171, ____arcaneId_2)); }
	inline int32_t get__arcaneId_2() const { return ____arcaneId_2; }
	inline int32_t* get_address_of__arcaneId_2() { return &____arcaneId_2; }
	inline void set__arcaneId_2(int32_t value)
	{
		____arcaneId_2 = value;
	}

	inline static int32_t get_offset_of_extensionObject_3() { return static_cast<int32_t>(offsetof(ArcaneMsg_t1586538171, ___extensionObject_3)); }
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
