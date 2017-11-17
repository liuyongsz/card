#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NetProtocal.RoleInfoMsg
struct RoleInfoMsg_t3183420057;
// ProtoBuf.IExtension
struct IExtension_t1221360786;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetProtocal.RoomInfoMsg
struct  RoomInfoMsg_t1078239938  : public Il2CppObject
{
public:
	// NetProtocal.RoleInfoMsg NetProtocal.RoomInfoMsg::_frole
	RoleInfoMsg_t3183420057 * ____frole_0;
	// NetProtocal.RoleInfoMsg NetProtocal.RoomInfoMsg::_srole
	RoleInfoMsg_t3183420057 * ____srole_1;
	// ProtoBuf.IExtension NetProtocal.RoomInfoMsg::extensionObject
	Il2CppObject * ___extensionObject_2;

public:
	inline static int32_t get_offset_of__frole_0() { return static_cast<int32_t>(offsetof(RoomInfoMsg_t1078239938, ____frole_0)); }
	inline RoleInfoMsg_t3183420057 * get__frole_0() const { return ____frole_0; }
	inline RoleInfoMsg_t3183420057 ** get_address_of__frole_0() { return &____frole_0; }
	inline void set__frole_0(RoleInfoMsg_t3183420057 * value)
	{
		____frole_0 = value;
		Il2CppCodeGenWriteBarrier(&____frole_0, value);
	}

	inline static int32_t get_offset_of__srole_1() { return static_cast<int32_t>(offsetof(RoomInfoMsg_t1078239938, ____srole_1)); }
	inline RoleInfoMsg_t3183420057 * get__srole_1() const { return ____srole_1; }
	inline RoleInfoMsg_t3183420057 ** get_address_of__srole_1() { return &____srole_1; }
	inline void set__srole_1(RoleInfoMsg_t3183420057 * value)
	{
		____srole_1 = value;
		Il2CppCodeGenWriteBarrier(&____srole_1, value);
	}

	inline static int32_t get_offset_of_extensionObject_2() { return static_cast<int32_t>(offsetof(RoomInfoMsg_t1078239938, ___extensionObject_2)); }
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
