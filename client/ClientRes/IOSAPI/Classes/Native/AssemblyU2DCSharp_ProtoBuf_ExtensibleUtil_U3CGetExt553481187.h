#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.IExtensible
struct IExtensible_t151450440;
// ProtoBuf.IExtension
struct IExtension_t1221360786;
// System.IO.Stream
struct Stream_t3255436806;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_DataFormat1866125683.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13
struct  U3CGetExtendedValuesU3Ec__Iterator13_t553481187  : public Il2CppObject
{
public:
	// ProtoBuf.IExtensible ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::instance
	Il2CppObject * ___instance_0;
	// System.Int32 ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::tag
	int32_t ___tag_1;
	// ProtoBuf.IExtension ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::<extn>__0
	Il2CppObject * ___U3CextnU3E__0_2;
	// System.IO.Stream ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::<stream>__1
	Stream_t3255436806 * ___U3CstreamU3E__1_3;
	// System.Object ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::<value>__2
	Il2CppObject * ___U3CvalueU3E__2_4;
	// ProtoBuf.ProtoReader ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::<reader>__3
	ProtoReader_t3981212867 * ___U3CreaderU3E__3_5;
	// ProtoBuf.SerializationContext ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::<ctx>__4
	SerializationContext_t3878296411 * ___U3CctxU3E__4_6;
	// ProtoBuf.Meta.TypeModel ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::model
	TypeModel_t653695305 * ___model_7;
	// ProtoBuf.DataFormat ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::format
	int32_t ___format_8;
	// System.Type ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::type
	Type_t * ___type_9;
	// System.Boolean ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::singleton
	bool ___singleton_10;
	// System.Int32 ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::$PC
	int32_t ___U24PC_11;
	// System.Object ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::$current
	Il2CppObject * ___U24current_12;
	// ProtoBuf.IExtensible ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::<$>instance
	Il2CppObject * ___U3CU24U3Einstance_13;
	// System.Int32 ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::<$>tag
	int32_t ___U3CU24U3Etag_14;
	// ProtoBuf.Meta.TypeModel ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::<$>model
	TypeModel_t653695305 * ___U3CU24U3Emodel_15;
	// ProtoBuf.DataFormat ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::<$>format
	int32_t ___U3CU24U3Eformat_16;
	// System.Type ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::<$>type
	Type_t * ___U3CU24U3Etype_17;
	// System.Boolean ProtoBuf.ExtensibleUtil/<GetExtendedValues>c__Iterator13::<$>singleton
	bool ___U3CU24U3Esingleton_18;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___instance_0)); }
	inline Il2CppObject * get_instance_0() const { return ___instance_0; }
	inline Il2CppObject ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(Il2CppObject * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___tag_1)); }
	inline int32_t get_tag_1() const { return ___tag_1; }
	inline int32_t* get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(int32_t value)
	{
		___tag_1 = value;
	}

	inline static int32_t get_offset_of_U3CextnU3E__0_2() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___U3CextnU3E__0_2)); }
	inline Il2CppObject * get_U3CextnU3E__0_2() const { return ___U3CextnU3E__0_2; }
	inline Il2CppObject ** get_address_of_U3CextnU3E__0_2() { return &___U3CextnU3E__0_2; }
	inline void set_U3CextnU3E__0_2(Il2CppObject * value)
	{
		___U3CextnU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CextnU3E__0_2, value);
	}

	inline static int32_t get_offset_of_U3CstreamU3E__1_3() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___U3CstreamU3E__1_3)); }
	inline Stream_t3255436806 * get_U3CstreamU3E__1_3() const { return ___U3CstreamU3E__1_3; }
	inline Stream_t3255436806 ** get_address_of_U3CstreamU3E__1_3() { return &___U3CstreamU3E__1_3; }
	inline void set_U3CstreamU3E__1_3(Stream_t3255436806 * value)
	{
		___U3CstreamU3E__1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CstreamU3E__1_3, value);
	}

	inline static int32_t get_offset_of_U3CvalueU3E__2_4() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___U3CvalueU3E__2_4)); }
	inline Il2CppObject * get_U3CvalueU3E__2_4() const { return ___U3CvalueU3E__2_4; }
	inline Il2CppObject ** get_address_of_U3CvalueU3E__2_4() { return &___U3CvalueU3E__2_4; }
	inline void set_U3CvalueU3E__2_4(Il2CppObject * value)
	{
		___U3CvalueU3E__2_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CvalueU3E__2_4, value);
	}

	inline static int32_t get_offset_of_U3CreaderU3E__3_5() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___U3CreaderU3E__3_5)); }
	inline ProtoReader_t3981212867 * get_U3CreaderU3E__3_5() const { return ___U3CreaderU3E__3_5; }
	inline ProtoReader_t3981212867 ** get_address_of_U3CreaderU3E__3_5() { return &___U3CreaderU3E__3_5; }
	inline void set_U3CreaderU3E__3_5(ProtoReader_t3981212867 * value)
	{
		___U3CreaderU3E__3_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CreaderU3E__3_5, value);
	}

	inline static int32_t get_offset_of_U3CctxU3E__4_6() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___U3CctxU3E__4_6)); }
	inline SerializationContext_t3878296411 * get_U3CctxU3E__4_6() const { return ___U3CctxU3E__4_6; }
	inline SerializationContext_t3878296411 ** get_address_of_U3CctxU3E__4_6() { return &___U3CctxU3E__4_6; }
	inline void set_U3CctxU3E__4_6(SerializationContext_t3878296411 * value)
	{
		___U3CctxU3E__4_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CctxU3E__4_6, value);
	}

	inline static int32_t get_offset_of_model_7() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___model_7)); }
	inline TypeModel_t653695305 * get_model_7() const { return ___model_7; }
	inline TypeModel_t653695305 ** get_address_of_model_7() { return &___model_7; }
	inline void set_model_7(TypeModel_t653695305 * value)
	{
		___model_7 = value;
		Il2CppCodeGenWriteBarrier(&___model_7, value);
	}

	inline static int32_t get_offset_of_format_8() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___format_8)); }
	inline int32_t get_format_8() const { return ___format_8; }
	inline int32_t* get_address_of_format_8() { return &___format_8; }
	inline void set_format_8(int32_t value)
	{
		___format_8 = value;
	}

	inline static int32_t get_offset_of_type_9() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___type_9)); }
	inline Type_t * get_type_9() const { return ___type_9; }
	inline Type_t ** get_address_of_type_9() { return &___type_9; }
	inline void set_type_9(Type_t * value)
	{
		___type_9 = value;
		Il2CppCodeGenWriteBarrier(&___type_9, value);
	}

	inline static int32_t get_offset_of_singleton_10() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___singleton_10)); }
	inline bool get_singleton_10() const { return ___singleton_10; }
	inline bool* get_address_of_singleton_10() { return &___singleton_10; }
	inline void set_singleton_10(bool value)
	{
		___singleton_10 = value;
	}

	inline static int32_t get_offset_of_U24PC_11() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___U24PC_11)); }
	inline int32_t get_U24PC_11() const { return ___U24PC_11; }
	inline int32_t* get_address_of_U24PC_11() { return &___U24PC_11; }
	inline void set_U24PC_11(int32_t value)
	{
		___U24PC_11 = value;
	}

	inline static int32_t get_offset_of_U24current_12() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___U24current_12)); }
	inline Il2CppObject * get_U24current_12() const { return ___U24current_12; }
	inline Il2CppObject ** get_address_of_U24current_12() { return &___U24current_12; }
	inline void set_U24current_12(Il2CppObject * value)
	{
		___U24current_12 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_12, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Einstance_13() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___U3CU24U3Einstance_13)); }
	inline Il2CppObject * get_U3CU24U3Einstance_13() const { return ___U3CU24U3Einstance_13; }
	inline Il2CppObject ** get_address_of_U3CU24U3Einstance_13() { return &___U3CU24U3Einstance_13; }
	inline void set_U3CU24U3Einstance_13(Il2CppObject * value)
	{
		___U3CU24U3Einstance_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Einstance_13, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Etag_14() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___U3CU24U3Etag_14)); }
	inline int32_t get_U3CU24U3Etag_14() const { return ___U3CU24U3Etag_14; }
	inline int32_t* get_address_of_U3CU24U3Etag_14() { return &___U3CU24U3Etag_14; }
	inline void set_U3CU24U3Etag_14(int32_t value)
	{
		___U3CU24U3Etag_14 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Emodel_15() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___U3CU24U3Emodel_15)); }
	inline TypeModel_t653695305 * get_U3CU24U3Emodel_15() const { return ___U3CU24U3Emodel_15; }
	inline TypeModel_t653695305 ** get_address_of_U3CU24U3Emodel_15() { return &___U3CU24U3Emodel_15; }
	inline void set_U3CU24U3Emodel_15(TypeModel_t653695305 * value)
	{
		___U3CU24U3Emodel_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Emodel_15, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Eformat_16() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___U3CU24U3Eformat_16)); }
	inline int32_t get_U3CU24U3Eformat_16() const { return ___U3CU24U3Eformat_16; }
	inline int32_t* get_address_of_U3CU24U3Eformat_16() { return &___U3CU24U3Eformat_16; }
	inline void set_U3CU24U3Eformat_16(int32_t value)
	{
		___U3CU24U3Eformat_16 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Etype_17() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___U3CU24U3Etype_17)); }
	inline Type_t * get_U3CU24U3Etype_17() const { return ___U3CU24U3Etype_17; }
	inline Type_t ** get_address_of_U3CU24U3Etype_17() { return &___U3CU24U3Etype_17; }
	inline void set_U3CU24U3Etype_17(Type_t * value)
	{
		___U3CU24U3Etype_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Etype_17, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Esingleton_18() { return static_cast<int32_t>(offsetof(U3CGetExtendedValuesU3Ec__Iterator13_t553481187, ___U3CU24U3Esingleton_18)); }
	inline bool get_U3CU24U3Esingleton_18() const { return ___U3CU24U3Esingleton_18; }
	inline bool* get_address_of_U3CU24U3Esingleton_18() { return &___U3CU24U3Esingleton_18; }
	inline void set_U3CU24U3Esingleton_18(bool value)
	{
		___U3CU24U3Esingleton_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
