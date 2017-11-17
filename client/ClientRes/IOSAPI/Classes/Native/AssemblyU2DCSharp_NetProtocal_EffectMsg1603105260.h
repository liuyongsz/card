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

// NetProtocal.EffectMsg
struct  EffectMsg_t1603105260  : public Il2CppObject
{
public:
	// System.Int32 NetProtocal.EffectMsg::_target
	int32_t ____target_0;
	// System.Int32 NetProtocal.EffectMsg::_type
	int32_t ____type_1;
	// System.Int32 NetProtocal.EffectMsg::_prop
	int32_t ____prop_2;
	// System.Int32 NetProtocal.EffectMsg::_value
	int32_t ____value_3;
	// ProtoBuf.IExtension NetProtocal.EffectMsg::extensionObject
	Il2CppObject * ___extensionObject_4;

public:
	inline static int32_t get_offset_of__target_0() { return static_cast<int32_t>(offsetof(EffectMsg_t1603105260, ____target_0)); }
	inline int32_t get__target_0() const { return ____target_0; }
	inline int32_t* get_address_of__target_0() { return &____target_0; }
	inline void set__target_0(int32_t value)
	{
		____target_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(EffectMsg_t1603105260, ____type_1)); }
	inline int32_t get__type_1() const { return ____type_1; }
	inline int32_t* get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(int32_t value)
	{
		____type_1 = value;
	}

	inline static int32_t get_offset_of__prop_2() { return static_cast<int32_t>(offsetof(EffectMsg_t1603105260, ____prop_2)); }
	inline int32_t get__prop_2() const { return ____prop_2; }
	inline int32_t* get_address_of__prop_2() { return &____prop_2; }
	inline void set__prop_2(int32_t value)
	{
		____prop_2 = value;
	}

	inline static int32_t get_offset_of__value_3() { return static_cast<int32_t>(offsetof(EffectMsg_t1603105260, ____value_3)); }
	inline int32_t get__value_3() const { return ____value_3; }
	inline int32_t* get_address_of__value_3() { return &____value_3; }
	inline void set__value_3(int32_t value)
	{
		____value_3 = value;
	}

	inline static int32_t get_offset_of_extensionObject_4() { return static_cast<int32_t>(offsetof(EffectMsg_t1603105260, ___extensionObject_4)); }
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
