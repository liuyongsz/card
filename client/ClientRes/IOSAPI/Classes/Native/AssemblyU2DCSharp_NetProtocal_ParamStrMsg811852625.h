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
// ProtoBuf.IExtension
struct IExtension_t1221360786;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetProtocal.ParamStrMsg
struct  ParamStrMsg_t811852625  : public Il2CppObject
{
public:
	// System.String NetProtocal.ParamStrMsg::_strValue
	String_t* ____strValue_0;
	// ProtoBuf.IExtension NetProtocal.ParamStrMsg::extensionObject
	Il2CppObject * ___extensionObject_1;

public:
	inline static int32_t get_offset_of__strValue_0() { return static_cast<int32_t>(offsetof(ParamStrMsg_t811852625, ____strValue_0)); }
	inline String_t* get__strValue_0() const { return ____strValue_0; }
	inline String_t** get_address_of__strValue_0() { return &____strValue_0; }
	inline void set__strValue_0(String_t* value)
	{
		____strValue_0 = value;
		Il2CppCodeGenWriteBarrier(&____strValue_0, value);
	}

	inline static int32_t get_offset_of_extensionObject_1() { return static_cast<int32_t>(offsetof(ParamStrMsg_t811852625, ___extensionObject_1)); }
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
