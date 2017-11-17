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

// NetProtocal.FightHeroMsg
struct  FightHeroMsg_t1029408713  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.FightHeroMsg::_heroId
	int32_t ____heroId_0;
	// System.Int32 NetProtocal.FightHeroMsg::_hp
	int32_t ____hp_1;
	// System.Int32 NetProtocal.FightHeroMsg::_maxHp
	int32_t ____maxHp_2;
	// System.Int32 NetProtocal.FightHeroMsg::_shield
	int32_t ____shield_3;
	// System.Int32 NetProtocal.FightHeroMsg::_arcane
	int32_t ____arcane_4;
	// ProtoBuf.IExtension NetProtocal.FightHeroMsg::extensionObject
	Il2CppObject * ___extensionObject_5;

public:
	inline static int32_t get_offset_of__heroId_0() { return static_cast<int32_t>(offsetof(FightHeroMsg_t1029408713, ____heroId_0)); }
	inline int32_t get__heroId_0() const { return ____heroId_0; }
	inline int32_t* get_address_of__heroId_0() { return &____heroId_0; }
	inline void set__heroId_0(int32_t value)
	{
		____heroId_0 = value;
	}

	inline static int32_t get_offset_of__hp_1() { return static_cast<int32_t>(offsetof(FightHeroMsg_t1029408713, ____hp_1)); }
	inline int32_t get__hp_1() const { return ____hp_1; }
	inline int32_t* get_address_of__hp_1() { return &____hp_1; }
	inline void set__hp_1(int32_t value)
	{
		____hp_1 = value;
	}

	inline static int32_t get_offset_of__maxHp_2() { return static_cast<int32_t>(offsetof(FightHeroMsg_t1029408713, ____maxHp_2)); }
	inline int32_t get__maxHp_2() const { return ____maxHp_2; }
	inline int32_t* get_address_of__maxHp_2() { return &____maxHp_2; }
	inline void set__maxHp_2(int32_t value)
	{
		____maxHp_2 = value;
	}

	inline static int32_t get_offset_of__shield_3() { return static_cast<int32_t>(offsetof(FightHeroMsg_t1029408713, ____shield_3)); }
	inline int32_t get__shield_3() const { return ____shield_3; }
	inline int32_t* get_address_of__shield_3() { return &____shield_3; }
	inline void set__shield_3(int32_t value)
	{
		____shield_3 = value;
	}

	inline static int32_t get_offset_of__arcane_4() { return static_cast<int32_t>(offsetof(FightHeroMsg_t1029408713, ____arcane_4)); }
	inline int32_t get__arcane_4() const { return ____arcane_4; }
	inline int32_t* get_address_of__arcane_4() { return &____arcane_4; }
	inline void set__arcane_4(int32_t value)
	{
		____arcane_4 = value;
	}

	inline static int32_t get_offset_of_extensionObject_5() { return static_cast<int32_t>(offsetof(FightHeroMsg_t1029408713, ___extensionObject_5)); }
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
