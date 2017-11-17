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

// NetProtocal.UseArcaneMsg
struct  UseArcaneMsg_t873403870  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.UseArcaneMsg::_pos
	int32_t ____pos_0;
	// System.Int32 NetProtocal.UseArcaneMsg::_target
	int32_t ____target_1;
	// ProtoBuf.IExtension NetProtocal.UseArcaneMsg::extensionObject
	Il2CppObject * ___extensionObject_2;

public:
	inline static int32_t get_offset_of__pos_0() { return static_cast<int32_t>(offsetof(UseArcaneMsg_t873403870, ____pos_0)); }
	inline int32_t get__pos_0() const { return ____pos_0; }
	inline int32_t* get_address_of__pos_0() { return &____pos_0; }
	inline void set__pos_0(int32_t value)
	{
		____pos_0 = value;
	}

	inline static int32_t get_offset_of__target_1() { return static_cast<int32_t>(offsetof(UseArcaneMsg_t873403870, ____target_1)); }
	inline int32_t get__target_1() const { return ____target_1; }
	inline int32_t* get_address_of__target_1() { return &____target_1; }
	inline void set__target_1(int32_t value)
	{
		____target_1 = value;
	}

	inline static int32_t get_offset_of_extensionObject_2() { return static_cast<int32_t>(offsetof(UseArcaneMsg_t873403870, ___extensionObject_2)); }
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
