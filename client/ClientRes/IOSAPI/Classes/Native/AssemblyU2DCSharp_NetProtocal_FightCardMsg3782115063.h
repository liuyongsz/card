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

// NetProtocal.FightCardMsg
struct  FightCardMsg_t3782115063  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.FightCardMsg::_index
	int32_t ____index_0;
	// System.Int32 NetProtocal.FightCardMsg::_cardId
	int32_t ____cardId_1;
	// ProtoBuf.IExtension NetProtocal.FightCardMsg::extensionObject
	Il2CppObject * ___extensionObject_2;

public:
	inline static int32_t get_offset_of__index_0() { return static_cast<int32_t>(offsetof(FightCardMsg_t3782115063, ____index_0)); }
	inline int32_t get__index_0() const { return ____index_0; }
	inline int32_t* get_address_of__index_0() { return &____index_0; }
	inline void set__index_0(int32_t value)
	{
		____index_0 = value;
	}

	inline static int32_t get_offset_of__cardId_1() { return static_cast<int32_t>(offsetof(FightCardMsg_t3782115063, ____cardId_1)); }
	inline int32_t get__cardId_1() const { return ____cardId_1; }
	inline int32_t* get_address_of__cardId_1() { return &____cardId_1; }
	inline void set__cardId_1(int32_t value)
	{
		____cardId_1 = value;
	}

	inline static int32_t get_offset_of_extensionObject_2() { return static_cast<int32_t>(offsetof(FightCardMsg_t3782115063, ___extensionObject_2)); }
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
