#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.Xml.XPath.NodeSet
struct NodeSet_t2895962396;
// System.Xml.XPath.NodeTest
struct NodeTest_t2072055152;

#include "System_Xml_System_Xml_XPath_NodeSet2895962396.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprSLASH2
struct  ExprSLASH2_t1892232446  : public NodeSet_t2895962396
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH2::left
	Expression_t1283317256 * ___left_0;
	// System.Xml.XPath.NodeSet System.Xml.XPath.ExprSLASH2::right
	NodeSet_t2895962396 * ___right_1;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(ExprSLASH2_t1892232446, ___left_0)); }
	inline Expression_t1283317256 * get_left_0() const { return ___left_0; }
	inline Expression_t1283317256 ** get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(Expression_t1283317256 * value)
	{
		___left_0 = value;
		Il2CppCodeGenWriteBarrier(&___left_0, value);
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(ExprSLASH2_t1892232446, ___right_1)); }
	inline NodeSet_t2895962396 * get_right_1() const { return ___right_1; }
	inline NodeSet_t2895962396 ** get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(NodeSet_t2895962396 * value)
	{
		___right_1 = value;
		Il2CppCodeGenWriteBarrier(&___right_1, value);
	}
};

struct ExprSLASH2_t1892232446_StaticFields
{
public:
	// System.Xml.XPath.NodeTest System.Xml.XPath.ExprSLASH2::DescendantOrSelfStar
	NodeTest_t2072055152 * ___DescendantOrSelfStar_2;

public:
	inline static int32_t get_offset_of_DescendantOrSelfStar_2() { return static_cast<int32_t>(offsetof(ExprSLASH2_t1892232446_StaticFields, ___DescendantOrSelfStar_2)); }
	inline NodeTest_t2072055152 * get_DescendantOrSelfStar_2() const { return ___DescendantOrSelfStar_2; }
	inline NodeTest_t2072055152 ** get_address_of_DescendantOrSelfStar_2() { return &___DescendantOrSelfStar_2; }
	inline void set_DescendantOrSelfStar_2(NodeTest_t2072055152 * value)
	{
		___DescendantOrSelfStar_2 = value;
		Il2CppCodeGenWriteBarrier(&___DescendantOrSelfStar_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
