#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<TinyBinaryXml.TbXmlNodeTemplate>
struct List_1_t3251932191;
// System.Collections.Generic.List`1<TinyBinaryXml.TbXmlNode>
struct List_1_t3506366635;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t3447136813;
// TinyBinaryXml.TbXmlNode
struct TbXmlNode_t4137245503;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TinyBinaryXml.TbXml
struct  TbXml_t2231173011  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<TinyBinaryXml.TbXmlNodeTemplate> TinyBinaryXml.TbXml::nodeTemplates
	List_1_t3251932191 * ___nodeTemplates_0;
	// System.Collections.Generic.List`1<TinyBinaryXml.TbXmlNode> TinyBinaryXml.TbXml::nodes
	List_1_t3506366635 * ___nodes_1;
	// System.Collections.Generic.List`1<System.String> TinyBinaryXml.TbXml::stringPool
	List_1_t1398341365 * ___stringPool_2;
	// System.Collections.Generic.List`1<System.Double> TinyBinaryXml.TbXml::valuePool
	List_1_t3447136813 * ___valuePool_3;
	// TinyBinaryXml.TbXmlNode TinyBinaryXml.TbXml::docNode
	TbXmlNode_t4137245503 * ___docNode_4;

public:
	inline static int32_t get_offset_of_nodeTemplates_0() { return static_cast<int32_t>(offsetof(TbXml_t2231173011, ___nodeTemplates_0)); }
	inline List_1_t3251932191 * get_nodeTemplates_0() const { return ___nodeTemplates_0; }
	inline List_1_t3251932191 ** get_address_of_nodeTemplates_0() { return &___nodeTemplates_0; }
	inline void set_nodeTemplates_0(List_1_t3251932191 * value)
	{
		___nodeTemplates_0 = value;
		Il2CppCodeGenWriteBarrier(&___nodeTemplates_0, value);
	}

	inline static int32_t get_offset_of_nodes_1() { return static_cast<int32_t>(offsetof(TbXml_t2231173011, ___nodes_1)); }
	inline List_1_t3506366635 * get_nodes_1() const { return ___nodes_1; }
	inline List_1_t3506366635 ** get_address_of_nodes_1() { return &___nodes_1; }
	inline void set_nodes_1(List_1_t3506366635 * value)
	{
		___nodes_1 = value;
		Il2CppCodeGenWriteBarrier(&___nodes_1, value);
	}

	inline static int32_t get_offset_of_stringPool_2() { return static_cast<int32_t>(offsetof(TbXml_t2231173011, ___stringPool_2)); }
	inline List_1_t1398341365 * get_stringPool_2() const { return ___stringPool_2; }
	inline List_1_t1398341365 ** get_address_of_stringPool_2() { return &___stringPool_2; }
	inline void set_stringPool_2(List_1_t1398341365 * value)
	{
		___stringPool_2 = value;
		Il2CppCodeGenWriteBarrier(&___stringPool_2, value);
	}

	inline static int32_t get_offset_of_valuePool_3() { return static_cast<int32_t>(offsetof(TbXml_t2231173011, ___valuePool_3)); }
	inline List_1_t3447136813 * get_valuePool_3() const { return ___valuePool_3; }
	inline List_1_t3447136813 ** get_address_of_valuePool_3() { return &___valuePool_3; }
	inline void set_valuePool_3(List_1_t3447136813 * value)
	{
		___valuePool_3 = value;
		Il2CppCodeGenWriteBarrier(&___valuePool_3, value);
	}

	inline static int32_t get_offset_of_docNode_4() { return static_cast<int32_t>(offsetof(TbXml_t2231173011, ___docNode_4)); }
	inline TbXmlNode_t4137245503 * get_docNode_4() const { return ___docNode_4; }
	inline TbXmlNode_t4137245503 ** get_address_of_docNode_4() { return &___docNode_4; }
	inline void set_docNode_4(TbXmlNode_t4137245503 * value)
	{
		___docNode_4 = value;
		Il2CppCodeGenWriteBarrier(&___docNode_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
