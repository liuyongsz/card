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

// NetProtocal.ParamIntMsg
struct  ParamIntMsg_t2467478971  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.ParamIntMsg::_intValue
	int32_t ____intValue_0;
	// ProtoBuf.IExtension NetProtocal.ParamIntMsg::extensionObject
	Il2CppObject * ___extensionObject_1;

public:
	inline static int32_t get_offset_of__intValue_0() { return static_cast<int32_t>(offsetof(ParamIntMsg_t2467478971, ____intValue_0)); }
	inline int32_t get__intValue_0() const { return ____intValue_0; }
	inline int32_t* get_address_of__intValue_0() { return &____intValue_0; }
	inline void set__intValue_0(int32_t value)
	{
		____intValue_0 = value;
	}

	inline static int32_t get_offset_of_extensionObject_1() { return static_cast<int32_t>(offsetof(ParamIntMsg_t2467478971, ___extensionObject_1)); }
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
