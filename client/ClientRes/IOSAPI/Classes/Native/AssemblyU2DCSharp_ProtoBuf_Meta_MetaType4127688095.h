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
// ProtoBuf.Meta.BasicList
struct BasicList_t2284403912;
// System.Type
struct Type_t;
// ProtoBuf.Meta.CallbackSet
struct CallbackSet_t2109955613;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ProtoBuf.Meta.RuntimeTypeModel
struct RuntimeTypeModel_t623319549;
// ProtoBuf.Serializers.IProtoTypeSerializer
struct IProtoTypeSerializer_t3285812945;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Byte3683104436.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.MetaType
struct  MetaType_t4127688095  : public Il2CppObject
{
public:
	// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::baseType
	MetaType_t4127688095 * ___baseType_8;
	// ProtoBuf.Meta.BasicList ProtoBuf.Meta.MetaType::subTypes
	BasicList_t2284403912 * ___subTypes_9;
	// ProtoBuf.Meta.CallbackSet ProtoBuf.Meta.MetaType::callbacks
	CallbackSet_t2109955613 * ___callbacks_11;
	// System.String ProtoBuf.Meta.MetaType::name
	String_t* ___name_12;
	// System.Reflection.MethodInfo ProtoBuf.Meta.MetaType::factory
	MethodInfo_t * ___factory_13;
	// ProtoBuf.Meta.RuntimeTypeModel ProtoBuf.Meta.MetaType::model
	RuntimeTypeModel_t623319549 * ___model_14;
	// System.Type ProtoBuf.Meta.MetaType::type
	Type_t * ___type_15;
	// ProtoBuf.Serializers.IProtoTypeSerializer ProtoBuf.Meta.MetaType::serializer
	Il2CppObject * ___serializer_16;
	// System.Type ProtoBuf.Meta.MetaType::constructType
	Type_t * ___constructType_17;
	// System.Type ProtoBuf.Meta.MetaType::surrogate
	Type_t * ___surrogate_18;
	// ProtoBuf.Meta.BasicList ProtoBuf.Meta.MetaType::fields
	BasicList_t2284403912 * ___fields_19;
	// System.Byte modreq(System.Runtime.CompilerServices.IsVolatile) ProtoBuf.Meta.MetaType::flags
	uint8_t ___flags_20;

public:
	inline static int32_t get_offset_of_baseType_8() { return static_cast<int32_t>(offsetof(MetaType_t4127688095, ___baseType_8)); }
	inline MetaType_t4127688095 * get_baseType_8() const { return ___baseType_8; }
	inline MetaType_t4127688095 ** get_address_of_baseType_8() { return &___baseType_8; }
	inline void set_baseType_8(MetaType_t4127688095 * value)
	{
		___baseType_8 = value;
		Il2CppCodeGenWriteBarrier(&___baseType_8, value);
	}

	inline static int32_t get_offset_of_subTypes_9() { return static_cast<int32_t>(offsetof(MetaType_t4127688095, ___subTypes_9)); }
	inline BasicList_t2284403912 * get_subTypes_9() const { return ___subTypes_9; }
	inline BasicList_t2284403912 ** get_address_of_subTypes_9() { return &___subTypes_9; }
	inline void set_subTypes_9(BasicList_t2284403912 * value)
	{
		___subTypes_9 = value;
		Il2CppCodeGenWriteBarrier(&___subTypes_9, value);
	}

	inline static int32_t get_offset_of_callbacks_11() { return static_cast<int32_t>(offsetof(MetaType_t4127688095, ___callbacks_11)); }
	inline CallbackSet_t2109955613 * get_callbacks_11() const { return ___callbacks_11; }
	inline CallbackSet_t2109955613 ** get_address_of_callbacks_11() { return &___callbacks_11; }
	inline void set_callbacks_11(CallbackSet_t2109955613 * value)
	{
		___callbacks_11 = value;
		Il2CppCodeGenWriteBarrier(&___callbacks_11, value);
	}

	inline static int32_t get_offset_of_name_12() { return static_cast<int32_t>(offsetof(MetaType_t4127688095, ___name_12)); }
	inline String_t* get_name_12() const { return ___name_12; }
	inline String_t** get_address_of_name_12() { return &___name_12; }
	inline void set_name_12(String_t* value)
	{
		___name_12 = value;
		Il2CppCodeGenWriteBarrier(&___name_12, value);
	}

	inline static int32_t get_offset_of_factory_13() { return static_cast<int32_t>(offsetof(MetaType_t4127688095, ___factory_13)); }
	inline MethodInfo_t * get_factory_13() const { return ___factory_13; }
	inline MethodInfo_t ** get_address_of_factory_13() { return &___factory_13; }
	inline void set_factory_13(MethodInfo_t * value)
	{
		___factory_13 = value;
		Il2CppCodeGenWriteBarrier(&___factory_13, value);
	}

	inline static int32_t get_offset_of_model_14() { return static_cast<int32_t>(offsetof(MetaType_t4127688095, ___model_14)); }
	inline RuntimeTypeModel_t623319549 * get_model_14() const { return ___model_14; }
	inline RuntimeTypeModel_t623319549 ** get_address_of_model_14() { return &___model_14; }
	inline void set_model_14(RuntimeTypeModel_t623319549 * value)
	{
		___model_14 = value;
		Il2CppCodeGenWriteBarrier(&___model_14, value);
	}

	inline static int32_t get_offset_of_type_15() { return static_cast<int32_t>(offsetof(MetaType_t4127688095, ___type_15)); }
	inline Type_t * get_type_15() const { return ___type_15; }
	inline Type_t ** get_address_of_type_15() { return &___type_15; }
	inline void set_type_15(Type_t * value)
	{
		___type_15 = value;
		Il2CppCodeGenWriteBarrier(&___type_15, value);
	}

	inline static int32_t get_offset_of_serializer_16() { return static_cast<int32_t>(offsetof(MetaType_t4127688095, ___serializer_16)); }
	inline Il2CppObject * get_serializer_16() const { return ___serializer_16; }
	inline Il2CppObject ** get_address_of_serializer_16() { return &___serializer_16; }
	inline void set_serializer_16(Il2CppObject * value)
	{
		___serializer_16 = value;
		Il2CppCodeGenWriteBarrier(&___serializer_16, value);
	}

	inline static int32_t get_offset_of_constructType_17() { return static_cast<int32_t>(offsetof(MetaType_t4127688095, ___constructType_17)); }
	inline Type_t * get_constructType_17() const { return ___constructType_17; }
	inline Type_t ** get_address_of_constructType_17() { return &___constructType_17; }
	inline void set_constructType_17(Type_t * value)
	{
		___constructType_17 = value;
		Il2CppCodeGenWriteBarrier(&___constructType_17, value);
	}

	inline static int32_t get_offset_of_surrogate_18() { return static_cast<int32_t>(offsetof(MetaType_t4127688095, ___surrogate_18)); }
	inline Type_t * get_surrogate_18() const { return ___surrogate_18; }
	inline Type_t ** get_address_of_surrogate_18() { return &___surrogate_18; }
	inline void set_surrogate_18(Type_t * value)
	{
		___surrogate_18 = value;
		Il2CppCodeGenWriteBarrier(&___surrogate_18, value);
	}

	inline static int32_t get_offset_of_fields_19() { return static_cast<int32_t>(offsetof(MetaType_t4127688095, ___fields_19)); }
	inline BasicList_t2284403912 * get_fields_19() const { return ___fields_19; }
	inline BasicList_t2284403912 ** get_address_of_fields_19() { return &___fields_19; }
	inline void set_fields_19(BasicList_t2284403912 * value)
	{
		___fields_19 = value;
		Il2CppCodeGenWriteBarrier(&___fields_19, value);
	}

	inline static int32_t get_offset_of_flags_20() { return static_cast<int32_t>(offsetof(MetaType_t4127688095, ___flags_20)); }
	inline uint8_t get_flags_20() const { return ___flags_20; }
	inline uint8_t* get_address_of_flags_20() { return &___flags_20; }
	inline void set_flags_20(uint8_t value)
	{
		___flags_20 = value;
	}
};

struct MetaType_t4127688095_StaticFields
{
public:
	// System.Type ProtoBuf.Meta.MetaType::ienumerable
	Type_t * ___ienumerable_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ProtoBuf.Meta.MetaType::<>f__switch$map4
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map4_21;

public:
	inline static int32_t get_offset_of_ienumerable_10() { return static_cast<int32_t>(offsetof(MetaType_t4127688095_StaticFields, ___ienumerable_10)); }
	inline Type_t * get_ienumerable_10() const { return ___ienumerable_10; }
	inline Type_t ** get_address_of_ienumerable_10() { return &___ienumerable_10; }
	inline void set_ienumerable_10(Type_t * value)
	{
		___ienumerable_10 = value;
		Il2CppCodeGenWriteBarrier(&___ienumerable_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_21() { return static_cast<int32_t>(offsetof(MetaType_t4127688095_StaticFields, ___U3CU3Ef__switchU24map4_21)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map4_21() const { return ___U3CU3Ef__switchU24map4_21; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map4_21() { return &___U3CU3Ef__switchU24map4_21; }
	inline void set_U3CU3Ef__switchU24map4_21(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map4_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map4_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
