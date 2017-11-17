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
// System.Collections.Generic.List`1<NetProtocal.CardDataMsg>
struct List_1_t2495074879;
// ProtoBuf.IExtension
struct IExtension_t1221360786;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetProtocal.CardInfoListMsg
struct  CardInfoListMsg_t972027215  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.CardInfoListMsg::_heroConfigId
	int32_t ____heroConfigId_0;
	// System.Int32 NetProtocal.CardInfoListMsg::_arcaneId
	int32_t ____arcaneId_1;
	// System.Int32 NetProtocal.CardInfoListMsg::_teamId
	int32_t ____teamId_2;
	// System.Int32 NetProtocal.CardInfoListMsg::_heroId
	int32_t ____heroId_3;
	// System.String NetProtocal.CardInfoListMsg::_cardName
	String_t* ____cardName_4;
	// System.Collections.Generic.List`1<NetProtocal.CardDataMsg> NetProtocal.CardInfoListMsg::_cardList
	List_1_t2495074879 * ____cardList_5;
	// ProtoBuf.IExtension NetProtocal.CardInfoListMsg::extensionObject
	Il2CppObject * ___extensionObject_6;

public:
	inline static int32_t get_offset_of__heroConfigId_0() { return static_cast<int32_t>(offsetof(CardInfoListMsg_t972027215, ____heroConfigId_0)); }
	inline int32_t get__heroConfigId_0() const { return ____heroConfigId_0; }
	inline int32_t* get_address_of__heroConfigId_0() { return &____heroConfigId_0; }
	inline void set__heroConfigId_0(int32_t value)
	{
		____heroConfigId_0 = value;
	}

	inline static int32_t get_offset_of__arcaneId_1() { return static_cast<int32_t>(offsetof(CardInfoListMsg_t972027215, ____arcaneId_1)); }
	inline int32_t get__arcaneId_1() const { return ____arcaneId_1; }
	inline int32_t* get_address_of__arcaneId_1() { return &____arcaneId_1; }
	inline void set__arcaneId_1(int32_t value)
	{
		____arcaneId_1 = value;
	}

	inline static int32_t get_offset_of__teamId_2() { return static_cast<int32_t>(offsetof(CardInfoListMsg_t972027215, ____teamId_2)); }
	inline int32_t get__teamId_2() const { return ____teamId_2; }
	inline int32_t* get_address_of__teamId_2() { return &____teamId_2; }
	inline void set__teamId_2(int32_t value)
	{
		____teamId_2 = value;
	}

	inline static int32_t get_offset_of__heroId_3() { return static_cast<int32_t>(offsetof(CardInfoListMsg_t972027215, ____heroId_3)); }
	inline int32_t get__heroId_3() const { return ____heroId_3; }
	inline int32_t* get_address_of__heroId_3() { return &____heroId_3; }
	inline void set__heroId_3(int32_t value)
	{
		____heroId_3 = value;
	}

	inline static int32_t get_offset_of__cardName_4() { return static_cast<int32_t>(offsetof(CardInfoListMsg_t972027215, ____cardName_4)); }
	inline String_t* get__cardName_4() const { return ____cardName_4; }
	inline String_t** get_address_of__cardName_4() { return &____cardName_4; }
	inline void set__cardName_4(String_t* value)
	{
		____cardName_4 = value;
		Il2CppCodeGenWriteBarrier(&____cardName_4, value);
	}

	inline static int32_t get_offset_of__cardList_5() { return static_cast<int32_t>(offsetof(CardInfoListMsg_t972027215, ____cardList_5)); }
	inline List_1_t2495074879 * get__cardList_5() const { return ____cardList_5; }
	inline List_1_t2495074879 ** get_address_of__cardList_5() { return &____cardList_5; }
	inline void set__cardList_5(List_1_t2495074879 * value)
	{
		____cardList_5 = value;
		Il2CppCodeGenWriteBarrier(&____cardList_5, value);
	}

	inline static int32_t get_offset_of_extensionObject_6() { return static_cast<int32_t>(offsetof(CardInfoListMsg_t972027215, ___extensionObject_6)); }
	inline Il2CppObject * get_extensionObject_6() const { return ___extensionObject_6; }
	inline Il2CppObject ** get_address_of_extensionObject_6() { return &___extensionObject_6; }
	inline void set_extensionObject_6(Il2CppObject * value)
	{
		___extensionObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
