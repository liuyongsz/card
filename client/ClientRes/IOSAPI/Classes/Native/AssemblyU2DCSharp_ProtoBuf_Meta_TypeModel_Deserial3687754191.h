#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t3255436806;
// System.Type
struct Type_t;
// ProtoBuf.Serializer/TypeResolver
struct TypeResolver_t475680514;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_PrefixStyle2069489999.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.TypeModel/DeserializeItemsIterator
struct  DeserializeItemsIterator_t3687754191  : public Il2CppObject
{
public:
	// System.Boolean ProtoBuf.Meta.TypeModel/DeserializeItemsIterator::haveObject
	bool ___haveObject_0;
	// System.Object ProtoBuf.Meta.TypeModel/DeserializeItemsIterator::current
	Il2CppObject * ___current_1;
	// System.IO.Stream ProtoBuf.Meta.TypeModel/DeserializeItemsIterator::source
	Stream_t3255436806 * ___source_2;
	// System.Type ProtoBuf.Meta.TypeModel/DeserializeItemsIterator::type
	Type_t * ___type_3;
	// ProtoBuf.PrefixStyle ProtoBuf.Meta.TypeModel/DeserializeItemsIterator::style
	int32_t ___style_4;
	// System.Int32 ProtoBuf.Meta.TypeModel/DeserializeItemsIterator::expectedField
	int32_t ___expectedField_5;
	// ProtoBuf.Serializer/TypeResolver ProtoBuf.Meta.TypeModel/DeserializeItemsIterator::resolver
	TypeResolver_t475680514 * ___resolver_6;
	// ProtoBuf.Meta.TypeModel ProtoBuf.Meta.TypeModel/DeserializeItemsIterator::model
	TypeModel_t653695305 * ___model_7;
	// ProtoBuf.SerializationContext ProtoBuf.Meta.TypeModel/DeserializeItemsIterator::context
	SerializationContext_t3878296411 * ___context_8;

public:
	inline static int32_t get_offset_of_haveObject_0() { return static_cast<int32_t>(offsetof(DeserializeItemsIterator_t3687754191, ___haveObject_0)); }
	inline bool get_haveObject_0() const { return ___haveObject_0; }
	inline bool* get_address_of_haveObject_0() { return &___haveObject_0; }
	inline void set_haveObject_0(bool value)
	{
		___haveObject_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(DeserializeItemsIterator_t3687754191, ___current_1)); }
	inline Il2CppObject * get_current_1() const { return ___current_1; }
	inline Il2CppObject ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(Il2CppObject * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier(&___current_1, value);
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(DeserializeItemsIterator_t3687754191, ___source_2)); }
	inline Stream_t3255436806 * get_source_2() const { return ___source_2; }
	inline Stream_t3255436806 ** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(Stream_t3255436806 * value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier(&___source_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(DeserializeItemsIterator_t3687754191, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier(&___type_3, value);
	}

	inline static int32_t get_offset_of_style_4() { return static_cast<int32_t>(offsetof(DeserializeItemsIterator_t3687754191, ___style_4)); }
	inline int32_t get_style_4() const { return ___style_4; }
	inline int32_t* get_address_of_style_4() { return &___style_4; }
	inline void set_style_4(int32_t value)
	{
		___style_4 = value;
	}

	inline static int32_t get_offset_of_expectedField_5() { return static_cast<int32_t>(offsetof(DeserializeItemsIterator_t3687754191, ___expectedField_5)); }
	inline int32_t get_expectedField_5() const { return ___expectedField_5; }
	inline int32_t* get_address_of_expectedField_5() { return &___expectedField_5; }
	inline void set_expectedField_5(int32_t value)
	{
		___expectedField_5 = value;
	}

	inline static int32_t get_offset_of_resolver_6() { return static_cast<int32_t>(offsetof(DeserializeItemsIterator_t3687754191, ___resolver_6)); }
	inline TypeResolver_t475680514 * get_resolver_6() const { return ___resolver_6; }
	inline TypeResolver_t475680514 ** get_address_of_resolver_6() { return &___resolver_6; }
	inline void set_resolver_6(TypeResolver_t475680514 * value)
	{
		___resolver_6 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_6, value);
	}

	inline static int32_t get_offset_of_model_7() { return static_cast<int32_t>(offsetof(DeserializeItemsIterator_t3687754191, ___model_7)); }
	inline TypeModel_t653695305 * get_model_7() const { return ___model_7; }
	inline TypeModel_t653695305 ** get_address_of_model_7() { return &___model_7; }
	inline void set_model_7(TypeModel_t653695305 * value)
	{
		___model_7 = value;
		Il2CppCodeGenWriteBarrier(&___model_7, value);
	}

	inline static int32_t get_offset_of_context_8() { return static_cast<int32_t>(offsetof(DeserializeItemsIterator_t3687754191, ___context_8)); }
	inline SerializationContext_t3878296411 * get_context_8() const { return ___context_8; }
	inline SerializationContext_t3878296411 ** get_address_of_context_8() { return &___context_8; }
	inline void set_context_8(SerializationContext_t3878296411 * value)
	{
		___context_8 = value;
		Il2CppCodeGenWriteBarrier(&___context_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
