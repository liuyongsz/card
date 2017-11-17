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

// NetProtocal.DeleteSuitCardMsg
struct  DeleteSuitCardMsg_t2395483925  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.DeleteSuitCardMsg::_teamUUid
	int32_t ____teamUUid_0;
	// System.Int32 NetProtocal.DeleteSuitCardMsg::_teamHeroUUid
	int32_t ____teamHeroUUid_1;
	// ProtoBuf.IExtension NetProtocal.DeleteSuitCardMsg::extensionObject
	Il2CppObject * ___extensionObject_2;

public:
	inline static int32_t get_offset_of__teamUUid_0() { return static_cast<int32_t>(offsetof(DeleteSuitCardMsg_t2395483925, ____teamUUid_0)); }
	inline int32_t get__teamUUid_0() const { return ____teamUUid_0; }
	inline int32_t* get_address_of__teamUUid_0() { return &____teamUUid_0; }
	inline void set__teamUUid_0(int32_t value)
	{
		____teamUUid_0 = value;
	}

	inline static int32_t get_offset_of__teamHeroUUid_1() { return static_cast<int32_t>(offsetof(DeleteSuitCardMsg_t2395483925, ____teamHeroUUid_1)); }
	inline int32_t get__teamHeroUUid_1() const { return ____teamHeroUUid_1; }
	inline int32_t* get_address_of__teamHeroUUid_1() { return &____teamHeroUUid_1; }
	inline void set__teamHeroUUid_1(int32_t value)
	{
		____teamHeroUUid_1 = value;
	}

	inline static int32_t get_offset_of_extensionObject_2() { return static_cast<int32_t>(offsetof(DeleteSuitCardMsg_t2395483925, ___extensionObject_2)); }
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
