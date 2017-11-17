#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<NetProtocal.CardTeamInfo>
struct List_1_t1549215569;
// ProtoBuf.IExtension
struct IExtension_t1221360786;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetProtocal.CardListMsg
struct  CardListMsg_t1254004863  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<NetProtocal.CardTeamInfo> NetProtocal.CardListMsg::_cardList
	List_1_t1549215569 * ____cardList_0;
	// ProtoBuf.IExtension NetProtocal.CardListMsg::extensionObject
	Il2CppObject * ___extensionObject_1;

public:
	inline static int32_t get_offset_of__cardList_0() { return static_cast<int32_t>(offsetof(CardListMsg_t1254004863, ____cardList_0)); }
	inline List_1_t1549215569 * get__cardList_0() const { return ____cardList_0; }
	inline List_1_t1549215569 ** get_address_of__cardList_0() { return &____cardList_0; }
	inline void set__cardList_0(List_1_t1549215569 * value)
	{
		____cardList_0 = value;
		Il2CppCodeGenWriteBarrier(&____cardList_0, value);
	}

	inline static int32_t get_offset_of_extensionObject_1() { return static_cast<int32_t>(offsetof(CardListMsg_t1254004863, ___extensionObject_1)); }
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
