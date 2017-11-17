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

// NetProtocal.ReplaceCardMsg
struct  ReplaceCardMsg_t722529301  : public Il2CppObject
{
public:
	// System.Boolean NetProtocal.ReplaceCardMsg::_replace
	bool ____replace_0;
	// ProtoBuf.IExtension NetProtocal.ReplaceCardMsg::extensionObject
	Il2CppObject * ___extensionObject_1;

public:
	inline static int32_t get_offset_of__replace_0() { return static_cast<int32_t>(offsetof(ReplaceCardMsg_t722529301, ____replace_0)); }
	inline bool get__replace_0() const { return ____replace_0; }
	inline bool* get_address_of__replace_0() { return &____replace_0; }
	inline void set__replace_0(bool value)
	{
		____replace_0 = value;
	}

	inline static int32_t get_offset_of_extensionObject_1() { return static_cast<int32_t>(offsetof(ReplaceCardMsg_t722529301, ___extensionObject_1)); }
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
