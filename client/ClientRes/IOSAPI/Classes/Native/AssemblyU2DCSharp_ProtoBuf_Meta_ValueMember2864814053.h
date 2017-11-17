#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.Meta.RuntimeTypeModel
struct RuntimeTypeModel_t623319549;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_DataFormat1866125683.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.ValueMember
struct  ValueMember_t2864814053  : public Il2CppObject
{
public:
	// System.Int32 ProtoBuf.Meta.ValueMember::fieldNumber
	int32_t ___fieldNumber_5;
	// System.Reflection.MemberInfo ProtoBuf.Meta.ValueMember::member
	MemberInfo_t * ___member_6;
	// System.Type ProtoBuf.Meta.ValueMember::parentType
	Type_t * ___parentType_7;
	// System.Type ProtoBuf.Meta.ValueMember::itemType
	Type_t * ___itemType_8;
	// System.Type ProtoBuf.Meta.ValueMember::defaultType
	Type_t * ___defaultType_9;
	// System.Type ProtoBuf.Meta.ValueMember::memberType
	Type_t * ___memberType_10;
	// System.Object ProtoBuf.Meta.ValueMember::defaultValue
	Il2CppObject * ___defaultValue_11;
	// ProtoBuf.Meta.RuntimeTypeModel ProtoBuf.Meta.ValueMember::model
	RuntimeTypeModel_t623319549 * ___model_12;
	// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.ValueMember::serializer
	Il2CppObject * ___serializer_13;
	// ProtoBuf.DataFormat ProtoBuf.Meta.ValueMember::dataFormat
	int32_t ___dataFormat_14;
	// System.Boolean ProtoBuf.Meta.ValueMember::asReference
	bool ___asReference_15;
	// System.Boolean ProtoBuf.Meta.ValueMember::dynamicType
	bool ___dynamicType_16;
	// System.Reflection.MethodInfo ProtoBuf.Meta.ValueMember::getSpecified
	MethodInfo_t * ___getSpecified_17;
	// System.Reflection.MethodInfo ProtoBuf.Meta.ValueMember::setSpecified
	MethodInfo_t * ___setSpecified_18;
	// System.String ProtoBuf.Meta.ValueMember::name
	String_t* ___name_19;
	// System.Byte ProtoBuf.Meta.ValueMember::flags
	uint8_t ___flags_20;

public:
	inline static int32_t get_offset_of_fieldNumber_5() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___fieldNumber_5)); }
	inline int32_t get_fieldNumber_5() const { return ___fieldNumber_5; }
	inline int32_t* get_address_of_fieldNumber_5() { return &___fieldNumber_5; }
	inline void set_fieldNumber_5(int32_t value)
	{
		___fieldNumber_5 = value;
	}

	inline static int32_t get_offset_of_member_6() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___member_6)); }
	inline MemberInfo_t * get_member_6() const { return ___member_6; }
	inline MemberInfo_t ** get_address_of_member_6() { return &___member_6; }
	inline void set_member_6(MemberInfo_t * value)
	{
		___member_6 = value;
		Il2CppCodeGenWriteBarrier(&___member_6, value);
	}

	inline static int32_t get_offset_of_parentType_7() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___parentType_7)); }
	inline Type_t * get_parentType_7() const { return ___parentType_7; }
	inline Type_t ** get_address_of_parentType_7() { return &___parentType_7; }
	inline void set_parentType_7(Type_t * value)
	{
		___parentType_7 = value;
		Il2CppCodeGenWriteBarrier(&___parentType_7, value);
	}

	inline static int32_t get_offset_of_itemType_8() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___itemType_8)); }
	inline Type_t * get_itemType_8() const { return ___itemType_8; }
	inline Type_t ** get_address_of_itemType_8() { return &___itemType_8; }
	inline void set_itemType_8(Type_t * value)
	{
		___itemType_8 = value;
		Il2CppCodeGenWriteBarrier(&___itemType_8, value);
	}

	inline static int32_t get_offset_of_defaultType_9() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___defaultType_9)); }
	inline Type_t * get_defaultType_9() const { return ___defaultType_9; }
	inline Type_t ** get_address_of_defaultType_9() { return &___defaultType_9; }
	inline void set_defaultType_9(Type_t * value)
	{
		___defaultType_9 = value;
		Il2CppCodeGenWriteBarrier(&___defaultType_9, value);
	}

	inline static int32_t get_offset_of_memberType_10() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___memberType_10)); }
	inline Type_t * get_memberType_10() const { return ___memberType_10; }
	inline Type_t ** get_address_of_memberType_10() { return &___memberType_10; }
	inline void set_memberType_10(Type_t * value)
	{
		___memberType_10 = value;
		Il2CppCodeGenWriteBarrier(&___memberType_10, value);
	}

	inline static int32_t get_offset_of_defaultValue_11() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___defaultValue_11)); }
	inline Il2CppObject * get_defaultValue_11() const { return ___defaultValue_11; }
	inline Il2CppObject ** get_address_of_defaultValue_11() { return &___defaultValue_11; }
	inline void set_defaultValue_11(Il2CppObject * value)
	{
		___defaultValue_11 = value;
		Il2CppCodeGenWriteBarrier(&___defaultValue_11, value);
	}

	inline static int32_t get_offset_of_model_12() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___model_12)); }
	inline RuntimeTypeModel_t623319549 * get_model_12() const { return ___model_12; }
	inline RuntimeTypeModel_t623319549 ** get_address_of_model_12() { return &___model_12; }
	inline void set_model_12(RuntimeTypeModel_t623319549 * value)
	{
		___model_12 = value;
		Il2CppCodeGenWriteBarrier(&___model_12, value);
	}

	inline static int32_t get_offset_of_serializer_13() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___serializer_13)); }
	inline Il2CppObject * get_serializer_13() const { return ___serializer_13; }
	inline Il2CppObject ** get_address_of_serializer_13() { return &___serializer_13; }
	inline void set_serializer_13(Il2CppObject * value)
	{
		___serializer_13 = value;
		Il2CppCodeGenWriteBarrier(&___serializer_13, value);
	}

	inline static int32_t get_offset_of_dataFormat_14() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___dataFormat_14)); }
	inline int32_t get_dataFormat_14() const { return ___dataFormat_14; }
	inline int32_t* get_address_of_dataFormat_14() { return &___dataFormat_14; }
	inline void set_dataFormat_14(int32_t value)
	{
		___dataFormat_14 = value;
	}

	inline static int32_t get_offset_of_asReference_15() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___asReference_15)); }
	inline bool get_asReference_15() const { return ___asReference_15; }
	inline bool* get_address_of_asReference_15() { return &___asReference_15; }
	inline void set_asReference_15(bool value)
	{
		___asReference_15 = value;
	}

	inline static int32_t get_offset_of_dynamicType_16() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___dynamicType_16)); }
	inline bool get_dynamicType_16() const { return ___dynamicType_16; }
	inline bool* get_address_of_dynamicType_16() { return &___dynamicType_16; }
	inline void set_dynamicType_16(bool value)
	{
		___dynamicType_16 = value;
	}

	inline static int32_t get_offset_of_getSpecified_17() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___getSpecified_17)); }
	inline MethodInfo_t * get_getSpecified_17() const { return ___getSpecified_17; }
	inline MethodInfo_t ** get_address_of_getSpecified_17() { return &___getSpecified_17; }
	inline void set_getSpecified_17(MethodInfo_t * value)
	{
		___getSpecified_17 = value;
		Il2CppCodeGenWriteBarrier(&___getSpecified_17, value);
	}

	inline static int32_t get_offset_of_setSpecified_18() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___setSpecified_18)); }
	inline MethodInfo_t * get_setSpecified_18() const { return ___setSpecified_18; }
	inline MethodInfo_t ** get_address_of_setSpecified_18() { return &___setSpecified_18; }
	inline void set_setSpecified_18(MethodInfo_t * value)
	{
		___setSpecified_18 = value;
		Il2CppCodeGenWriteBarrier(&___setSpecified_18, value);
	}

	inline static int32_t get_offset_of_name_19() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___name_19)); }
	inline String_t* get_name_19() const { return ___name_19; }
	inline String_t** get_address_of_name_19() { return &___name_19; }
	inline void set_name_19(String_t* value)
	{
		___name_19 = value;
		Il2CppCodeGenWriteBarrier(&___name_19, value);
	}

	inline static int32_t get_offset_of_flags_20() { return static_cast<int32_t>(offsetof(ValueMember_t2864814053, ___flags_20)); }
	inline uint8_t get_flags_20() const { return ___flags_20; }
	inline uint8_t* get_address_of_flags_20() { return &___flags_20; }
	inline void set_flags_20(uint8_t value)
	{
		___flags_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
