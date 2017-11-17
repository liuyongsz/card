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

// NetProtocal.HeroOnFightMsg
struct  HeroOnFightMsg_t3899865342  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.HeroOnFightMsg::_teamId
	int32_t ____teamId_0;
	// System.Int32 NetProtocal.HeroOnFightMsg::_heroId
	int32_t ____heroId_1;
	// System.Int32 NetProtocal.HeroOnFightMsg::_replaceId
	int32_t ____replaceId_2;
	// System.Int32 NetProtocal.HeroOnFightMsg::_pos
	int32_t ____pos_3;
	// ProtoBuf.IExtension NetProtocal.HeroOnFightMsg::extensionObject
	Il2CppObject * ___extensionObject_4;

public:
	inline static int32_t get_offset_of__teamId_0() { return static_cast<int32_t>(offsetof(HeroOnFightMsg_t3899865342, ____teamId_0)); }
	inline int32_t get__teamId_0() const { return ____teamId_0; }
	inline int32_t* get_address_of__teamId_0() { return &____teamId_0; }
	inline void set__teamId_0(int32_t value)
	{
		____teamId_0 = value;
	}

	inline static int32_t get_offset_of__heroId_1() { return static_cast<int32_t>(offsetof(HeroOnFightMsg_t3899865342, ____heroId_1)); }
	inline int32_t get__heroId_1() const { return ____heroId_1; }
	inline int32_t* get_address_of__heroId_1() { return &____heroId_1; }
	inline void set__heroId_1(int32_t value)
	{
		____heroId_1 = value;
	}

	inline static int32_t get_offset_of__replaceId_2() { return static_cast<int32_t>(offsetof(HeroOnFightMsg_t3899865342, ____replaceId_2)); }
	inline int32_t get__replaceId_2() const { return ____replaceId_2; }
	inline int32_t* get_address_of__replaceId_2() { return &____replaceId_2; }
	inline void set__replaceId_2(int32_t value)
	{
		____replaceId_2 = value;
	}

	inline static int32_t get_offset_of__pos_3() { return static_cast<int32_t>(offsetof(HeroOnFightMsg_t3899865342, ____pos_3)); }
	inline int32_t get__pos_3() const { return ____pos_3; }
	inline int32_t* get_address_of__pos_3() { return &____pos_3; }
	inline void set__pos_3(int32_t value)
	{
		____pos_3 = value;
	}

	inline static int32_t get_offset_of_extensionObject_4() { return static_cast<int32_t>(offsetof(HeroOnFightMsg_t3899865342, ___extensionObject_4)); }
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
