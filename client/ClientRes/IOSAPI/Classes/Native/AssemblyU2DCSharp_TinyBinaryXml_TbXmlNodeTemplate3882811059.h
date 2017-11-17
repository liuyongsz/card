#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// System.Collections.Generic.List`1<TinyBinaryXml.TB_XML_ATTRIBUTE_TYPE>
struct List_1_t17717598;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TinyBinaryXml.TbXmlNodeTemplate
struct  TbXmlNodeTemplate_t3882811059  : public Il2CppObject
{
public:
	// System.UInt16 TinyBinaryXml.TbXmlNodeTemplate::id
	uint16_t ___id_0;
	// System.String TinyBinaryXml.TbXmlNodeTemplate::name
	String_t* ___name_1;
	// System.Collections.Generic.List`1<System.String> TinyBinaryXml.TbXmlNodeTemplate::attributeNames
	List_1_t1398341365 * ___attributeNames_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> TinyBinaryXml.TbXmlNodeTemplate::attributeNameIndexMapping
	Dictionary_2_t3986656710 * ___attributeNameIndexMapping_3;
	// System.Collections.Generic.List`1<TinyBinaryXml.TB_XML_ATTRIBUTE_TYPE> TinyBinaryXml.TbXmlNodeTemplate::attributeTypes
	List_1_t17717598 * ___attributeTypes_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(TbXmlNodeTemplate_t3882811059, ___id_0)); }
	inline uint16_t get_id_0() const { return ___id_0; }
	inline uint16_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint16_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(TbXmlNodeTemplate_t3882811059, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_attributeNames_2() { return static_cast<int32_t>(offsetof(TbXmlNodeTemplate_t3882811059, ___attributeNames_2)); }
	inline List_1_t1398341365 * get_attributeNames_2() const { return ___attributeNames_2; }
	inline List_1_t1398341365 ** get_address_of_attributeNames_2() { return &___attributeNames_2; }
	inline void set_attributeNames_2(List_1_t1398341365 * value)
	{
		___attributeNames_2 = value;
		Il2CppCodeGenWriteBarrier(&___attributeNames_2, value);
	}

	inline static int32_t get_offset_of_attributeNameIndexMapping_3() { return static_cast<int32_t>(offsetof(TbXmlNodeTemplate_t3882811059, ___attributeNameIndexMapping_3)); }
	inline Dictionary_2_t3986656710 * get_attributeNameIndexMapping_3() const { return ___attributeNameIndexMapping_3; }
	inline Dictionary_2_t3986656710 ** get_address_of_attributeNameIndexMapping_3() { return &___attributeNameIndexMapping_3; }
	inline void set_attributeNameIndexMapping_3(Dictionary_2_t3986656710 * value)
	{
		___attributeNameIndexMapping_3 = value;
		Il2CppCodeGenWriteBarrier(&___attributeNameIndexMapping_3, value);
	}

	inline static int32_t get_offset_of_attributeTypes_4() { return static_cast<int32_t>(offsetof(TbXmlNodeTemplate_t3882811059, ___attributeTypes_4)); }
	inline List_1_t17717598 * get_attributeTypes_4() const { return ___attributeTypes_4; }
	inline List_1_t17717598 ** get_address_of_attributeTypes_4() { return &___attributeTypes_4; }
	inline void set_attributeTypes_4(List_1_t17717598 * value)
	{
		___attributeTypes_4 = value;
		Il2CppCodeGenWriteBarrier(&___attributeTypes_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
