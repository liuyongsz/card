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
// System.Collections.Generic.List`1<NetProtocal.HeroInfo>
struct List_1_t3026393148;
// ProtoBuf.IExtension
struct IExtension_t1221360786;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetProtocal.HeroListMsg
struct  HeroListMsg_t3128201993  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.HeroListMsg::_id
	int32_t ____id_0;
	// System.String NetProtocal.HeroListMsg::_teamName
	String_t* ____teamName_1;
	// System.Collections.Generic.List`1<NetProtocal.HeroInfo> NetProtocal.HeroListMsg::_heroList
	List_1_t3026393148 * ____heroList_2;
	// ProtoBuf.IExtension NetProtocal.HeroListMsg::extensionObject
	Il2CppObject * ___extensionObject_3;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(HeroListMsg_t3128201993, ____id_0)); }
	inline int32_t get__id_0() const { return ____id_0; }
	inline int32_t* get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(int32_t value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__teamName_1() { return static_cast<int32_t>(offsetof(HeroListMsg_t3128201993, ____teamName_1)); }
	inline String_t* get__teamName_1() const { return ____teamName_1; }
	inline String_t** get_address_of__teamName_1() { return &____teamName_1; }
	inline void set__teamName_1(String_t* value)
	{
		____teamName_1 = value;
		Il2CppCodeGenWriteBarrier(&____teamName_1, value);
	}

	inline static int32_t get_offset_of__heroList_2() { return static_cast<int32_t>(offsetof(HeroListMsg_t3128201993, ____heroList_2)); }
	inline List_1_t3026393148 * get__heroList_2() const { return ____heroList_2; }
	inline List_1_t3026393148 ** get_address_of__heroList_2() { return &____heroList_2; }
	inline void set__heroList_2(List_1_t3026393148 * value)
	{
		____heroList_2 = value;
		Il2CppCodeGenWriteBarrier(&____heroList_2, value);
	}

	inline static int32_t get_offset_of_extensionObject_3() { return static_cast<int32_t>(offsetof(HeroListMsg_t3128201993, ___extensionObject_3)); }
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
