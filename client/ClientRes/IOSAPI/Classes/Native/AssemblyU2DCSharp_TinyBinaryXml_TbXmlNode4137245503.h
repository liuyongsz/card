#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t356003743;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// TinyBinaryXml.TbXml
struct TbXml_t2231173011;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TinyBinaryXml.TbXmlNode
struct  TbXmlNode_t4137245503  : public Il2CppObject
{
public:
	// System.UInt16 TinyBinaryXml.TbXmlNode::id
	uint16_t ___id_0;
	// System.Collections.Generic.List`1<System.UInt16> TinyBinaryXml.TbXmlNode::childrenIds
	List_1_t356003743 * ___childrenIds_1;
	// System.UInt16 TinyBinaryXml.TbXmlNode::templateId
	uint16_t ___templateId_2;
	// System.Collections.Generic.List`1<System.Int32> TinyBinaryXml.TbXmlNode::attributeValues
	List_1_t1440998580 * ___attributeValues_3;
	// TinyBinaryXml.TbXml TinyBinaryXml.TbXmlNode::tbXml
	TbXml_t2231173011 * ___tbXml_4;
	// System.Int32 TinyBinaryXml.TbXmlNode::text
	int32_t ___text_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(TbXmlNode_t4137245503, ___id_0)); }
	inline uint16_t get_id_0() const { return ___id_0; }
	inline uint16_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint16_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_childrenIds_1() { return static_cast<int32_t>(offsetof(TbXmlNode_t4137245503, ___childrenIds_1)); }
	inline List_1_t356003743 * get_childrenIds_1() const { return ___childrenIds_1; }
	inline List_1_t356003743 ** get_address_of_childrenIds_1() { return &___childrenIds_1; }
	inline void set_childrenIds_1(List_1_t356003743 * value)
	{
		___childrenIds_1 = value;
		Il2CppCodeGenWriteBarrier(&___childrenIds_1, value);
	}

	inline static int32_t get_offset_of_templateId_2() { return static_cast<int32_t>(offsetof(TbXmlNode_t4137245503, ___templateId_2)); }
	inline uint16_t get_templateId_2() const { return ___templateId_2; }
	inline uint16_t* get_address_of_templateId_2() { return &___templateId_2; }
	inline void set_templateId_2(uint16_t value)
	{
		___templateId_2 = value;
	}

	inline static int32_t get_offset_of_attributeValues_3() { return static_cast<int32_t>(offsetof(TbXmlNode_t4137245503, ___attributeValues_3)); }
	inline List_1_t1440998580 * get_attributeValues_3() const { return ___attributeValues_3; }
	inline List_1_t1440998580 ** get_address_of_attributeValues_3() { return &___attributeValues_3; }
	inline void set_attributeValues_3(List_1_t1440998580 * value)
	{
		___attributeValues_3 = value;
		Il2CppCodeGenWriteBarrier(&___attributeValues_3, value);
	}

	inline static int32_t get_offset_of_tbXml_4() { return static_cast<int32_t>(offsetof(TbXmlNode_t4137245503, ___tbXml_4)); }
	inline TbXml_t2231173011 * get_tbXml_4() const { return ___tbXml_4; }
	inline TbXml_t2231173011 ** get_address_of_tbXml_4() { return &___tbXml_4; }
	inline void set_tbXml_4(TbXml_t2231173011 * value)
	{
		___tbXml_4 = value;
		Il2CppCodeGenWriteBarrier(&___tbXml_4, value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(TbXmlNode_t4137245503, ___text_5)); }
	inline int32_t get_text_5() const { return ___text_5; }
	inline int32_t* get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(int32_t value)
	{
		___text_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
