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
// NetProtocal.FightCardsMsg
struct FightCardsMsg_t1539797984;
// System.Collections.Generic.List`1<NetProtocal.FightHeroMsg>
struct List_1_t398529845;
// ProtoBuf.IExtension
struct IExtension_t1221360786;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetProtocal.RoleInfoMsg
struct  RoleInfoMsg_t3183420057  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.RoleInfoMsg::_pid
	int32_t ____pid_0;
	// System.String NetProtocal.RoleInfoMsg::_name
	String_t* ____name_1;
	// System.Int32 NetProtocal.RoleInfoMsg::_arcaneNum
	int32_t ____arcaneNum_2;
	// System.Int32 NetProtocal.RoleInfoMsg::_fatigueTime
	int32_t ____fatigueTime_3;
	// NetProtocal.FightCardsMsg NetProtocal.RoleInfoMsg::_cards
	FightCardsMsg_t1539797984 * ____cards_4;
	// System.Collections.Generic.List`1<NetProtocal.FightHeroMsg> NetProtocal.RoleInfoMsg::_heros
	List_1_t398529845 * ____heros_5;
	// ProtoBuf.IExtension NetProtocal.RoleInfoMsg::extensionObject
	Il2CppObject * ___extensionObject_6;

public:
	inline static int32_t get_offset_of__pid_0() { return static_cast<int32_t>(offsetof(RoleInfoMsg_t3183420057, ____pid_0)); }
	inline int32_t get__pid_0() const { return ____pid_0; }
	inline int32_t* get_address_of__pid_0() { return &____pid_0; }
	inline void set__pid_0(int32_t value)
	{
		____pid_0 = value;
	}

	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(RoleInfoMsg_t3183420057, ____name_1)); }
	inline String_t* get__name_1() const { return ____name_1; }
	inline String_t** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(String_t* value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier(&____name_1, value);
	}

	inline static int32_t get_offset_of__arcaneNum_2() { return static_cast<int32_t>(offsetof(RoleInfoMsg_t3183420057, ____arcaneNum_2)); }
	inline int32_t get__arcaneNum_2() const { return ____arcaneNum_2; }
	inline int32_t* get_address_of__arcaneNum_2() { return &____arcaneNum_2; }
	inline void set__arcaneNum_2(int32_t value)
	{
		____arcaneNum_2 = value;
	}

	inline static int32_t get_offset_of__fatigueTime_3() { return static_cast<int32_t>(offsetof(RoleInfoMsg_t3183420057, ____fatigueTime_3)); }
	inline int32_t get__fatigueTime_3() const { return ____fatigueTime_3; }
	inline int32_t* get_address_of__fatigueTime_3() { return &____fatigueTime_3; }
	inline void set__fatigueTime_3(int32_t value)
	{
		____fatigueTime_3 = value;
	}

	inline static int32_t get_offset_of__cards_4() { return static_cast<int32_t>(offsetof(RoleInfoMsg_t3183420057, ____cards_4)); }
	inline FightCardsMsg_t1539797984 * get__cards_4() const { return ____cards_4; }
	inline FightCardsMsg_t1539797984 ** get_address_of__cards_4() { return &____cards_4; }
	inline void set__cards_4(FightCardsMsg_t1539797984 * value)
	{
		____cards_4 = value;
		Il2CppCodeGenWriteBarrier(&____cards_4, value);
	}

	inline static int32_t get_offset_of__heros_5() { return static_cast<int32_t>(offsetof(RoleInfoMsg_t3183420057, ____heros_5)); }
	inline List_1_t398529845 * get__heros_5() const { return ____heros_5; }
	inline List_1_t398529845 ** get_address_of__heros_5() { return &____heros_5; }
	inline void set__heros_5(List_1_t398529845 * value)
	{
		____heros_5 = value;
		Il2CppCodeGenWriteBarrier(&____heros_5, value);
	}

	inline static int32_t get_offset_of_extensionObject_6() { return static_cast<int32_t>(offsetof(RoleInfoMsg_t3183420057, ___extensionObject_6)); }
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
