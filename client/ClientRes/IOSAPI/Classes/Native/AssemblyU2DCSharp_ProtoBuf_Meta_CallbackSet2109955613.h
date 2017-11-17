#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.Meta.MetaType
struct MetaType_t4127688095;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.CallbackSet
struct  CallbackSet_t2109955613  : public Il2CppObject
{
public:
	// ProtoBuf.Meta.MetaType ProtoBuf.Meta.CallbackSet::metaType
	MetaType_t4127688095 * ___metaType_0;
	// System.Reflection.MethodInfo ProtoBuf.Meta.CallbackSet::beforeSerialize
	MethodInfo_t * ___beforeSerialize_1;
	// System.Reflection.MethodInfo ProtoBuf.Meta.CallbackSet::afterSerialize
	MethodInfo_t * ___afterSerialize_2;
	// System.Reflection.MethodInfo ProtoBuf.Meta.CallbackSet::beforeDeserialize
	MethodInfo_t * ___beforeDeserialize_3;
	// System.Reflection.MethodInfo ProtoBuf.Meta.CallbackSet::afterDeserialize
	MethodInfo_t * ___afterDeserialize_4;

public:
	inline static int32_t get_offset_of_metaType_0() { return static_cast<int32_t>(offsetof(CallbackSet_t2109955613, ___metaType_0)); }
	inline MetaType_t4127688095 * get_metaType_0() const { return ___metaType_0; }
	inline MetaType_t4127688095 ** get_address_of_metaType_0() { return &___metaType_0; }
	inline void set_metaType_0(MetaType_t4127688095 * value)
	{
		___metaType_0 = value;
		Il2CppCodeGenWriteBarrier(&___metaType_0, value);
	}

	inline static int32_t get_offset_of_beforeSerialize_1() { return static_cast<int32_t>(offsetof(CallbackSet_t2109955613, ___beforeSerialize_1)); }
	inline MethodInfo_t * get_beforeSerialize_1() const { return ___beforeSerialize_1; }
	inline MethodInfo_t ** get_address_of_beforeSerialize_1() { return &___beforeSerialize_1; }
	inline void set_beforeSerialize_1(MethodInfo_t * value)
	{
		___beforeSerialize_1 = value;
		Il2CppCodeGenWriteBarrier(&___beforeSerialize_1, value);
	}

	inline static int32_t get_offset_of_afterSerialize_2() { return static_cast<int32_t>(offsetof(CallbackSet_t2109955613, ___afterSerialize_2)); }
	inline MethodInfo_t * get_afterSerialize_2() const { return ___afterSerialize_2; }
	inline MethodInfo_t ** get_address_of_afterSerialize_2() { return &___afterSerialize_2; }
	inline void set_afterSerialize_2(MethodInfo_t * value)
	{
		___afterSerialize_2 = value;
		Il2CppCodeGenWriteBarrier(&___afterSerialize_2, value);
	}

	inline static int32_t get_offset_of_beforeDeserialize_3() { return static_cast<int32_t>(offsetof(CallbackSet_t2109955613, ___beforeDeserialize_3)); }
	inline MethodInfo_t * get_beforeDeserialize_3() const { return ___beforeDeserialize_3; }
	inline MethodInfo_t ** get_address_of_beforeDeserialize_3() { return &___beforeDeserialize_3; }
	inline void set_beforeDeserialize_3(MethodInfo_t * value)
	{
		___beforeDeserialize_3 = value;
		Il2CppCodeGenWriteBarrier(&___beforeDeserialize_3, value);
	}

	inline static int32_t get_offset_of_afterDeserialize_4() { return static_cast<int32_t>(offsetof(CallbackSet_t2109955613, ___afterDeserialize_4)); }
	inline MethodInfo_t * get_afterDeserialize_4() const { return ___afterDeserialize_4; }
	inline MethodInfo_t ** get_address_of_afterDeserialize_4() { return &___afterDeserialize_4; }
	inline void set_afterDeserialize_4(MethodInfo_t * value)
	{
		___afterDeserialize_4 = value;
		Il2CppCodeGenWriteBarrier(&___afterDeserialize_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
