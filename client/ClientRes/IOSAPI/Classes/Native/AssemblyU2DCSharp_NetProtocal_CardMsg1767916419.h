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

// NetProtocal.CardMsg
struct  CardMsg_t1767916419  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.CardMsg::_teamUUid
	int32_t ____teamUUid_0;
	// System.Int32 NetProtocal.CardMsg::_teamHeroUUid
	int32_t ____teamHeroUUid_1;
	// System.Int32 NetProtocal.CardMsg::_oldCardId
	int32_t ____oldCardId_2;
	// System.Int32 NetProtocal.CardMsg::_newCardId
	int32_t ____newCardId_3;
	// ProtoBuf.IExtension NetProtocal.CardMsg::extensionObject
	Il2CppObject * ___extensionObject_4;

public:
	inline static int32_t get_offset_of__teamUUid_0() { return static_cast<int32_t>(offsetof(CardMsg_t1767916419, ____teamUUid_0)); }
	inline int32_t get__teamUUid_0() const { return ____teamUUid_0; }
	inline int32_t* get_address_of__teamUUid_0() { return &____teamUUid_0; }
	inline void set__teamUUid_0(int32_t value)
	{
		____teamUUid_0 = value;
	}

	inline static int32_t get_offset_of__teamHeroUUid_1() { return static_cast<int32_t>(offsetof(CardMsg_t1767916419, ____teamHeroUUid_1)); }
	inline int32_t get__teamHeroUUid_1() const { return ____teamHeroUUid_1; }
	inline int32_t* get_address_of__teamHeroUUid_1() { return &____teamHeroUUid_1; }
	inline void set__teamHeroUUid_1(int32_t value)
	{
		____teamHeroUUid_1 = value;
	}

	inline static int32_t get_offset_of__oldCardId_2() { return static_cast<int32_t>(offsetof(CardMsg_t1767916419, ____oldCardId_2)); }
	inline int32_t get__oldCardId_2() const { return ____oldCardId_2; }
	inline int32_t* get_address_of__oldCardId_2() { return &____oldCardId_2; }
	inline void set__oldCardId_2(int32_t value)
	{
		____oldCardId_2 = value;
	}

	inline static int32_t get_offset_of__newCardId_3() { return static_cast<int32_t>(offsetof(CardMsg_t1767916419, ____newCardId_3)); }
	inline int32_t get__newCardId_3() const { return ____newCardId_3; }
	inline int32_t* get_address_of__newCardId_3() { return &____newCardId_3; }
	inline void set__newCardId_3(int32_t value)
	{
		____newCardId_3 = value;
	}

	inline static int32_t get_offset_of_extensionObject_4() { return static_cast<int32_t>(offsetof(CardMsg_t1767916419, ___extensionObject_4)); }
	inline Il2CppObject * get_extensionObject_4() const { return ___extensionObject_4; }
	inline Il2CppObject ** get_address_of_extensionObject_4() { return &___extensionObject_4; }
	inline void set_extensionObject_4(Il2CppObject * value)
	{
		___extensionObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
