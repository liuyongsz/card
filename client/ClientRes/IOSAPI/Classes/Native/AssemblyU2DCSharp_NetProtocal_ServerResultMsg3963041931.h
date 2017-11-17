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
#include "AssemblyU2DCSharp_NetProtocal_ServerResultFlag2413212214.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetProtocal.ServerResultMsg
struct  ServerResultMsg_t3963041931  : public Il2CppObject
{
public:
	// NetProtocal.ServerResultFlag NetProtocal.ServerResultMsg::_flag
	int32_t ____flag_0;
	// ProtoBuf.IExtension NetProtocal.ServerResultMsg::extensionObject
	Il2CppObject * ___extensionObject_1;

public:
	inline static int32_t get_offset_of__flag_0() { return static_cast<int32_t>(offsetof(ServerResultMsg_t3963041931, ____flag_0)); }
	inline int32_t get__flag_0() const { return ____flag_0; }
	inline int32_t* get_address_of__flag_0() { return &____flag_0; }
	inline void set__flag_0(int32_t value)
	{
		____flag_0 = value;
	}

	inline static int32_t get_offset_of_extensionObject_1() { return static_cast<int32_t>(offsetof(ServerResultMsg_t3963041931, ___extensionObject_1)); }
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
