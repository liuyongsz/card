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

#include "System_Xml_System_Xml_XPath_NodeSet2895962396.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprSLASH
struct  ExprSLASH_t1432925936  : public NodeSet_t2895962396
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH::left
	Expression_t1283317256 * ___left_0;
	// System.Xml.XPath.NodeSet System.Xml.XPath.ExprSLASH::right
	NodeSet_t2895962396 * ___right_1;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(ExprSLASH_t1432925936, ___left_0)); }
	inline Expression_t1283317256 * get_left_0() const { return ___left_0; }
	inline Expression_t1283317256 ** get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(Expression_t1283317256 * value)
	{
		___left_0 = value;
		Il2CppCodeGenWriteBarrier(&___left_0, value);
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(ExprSLASH_t1432925936, ___right_1)); }
	inline NodeSet_t2895962396 * get_right_1() const { return ___right_1; }
	inline NodeSet_t2895962396 ** get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(NodeSet_t2895962396 * value)
	{
		___right_1 = value;
		Il2CppCodeGenWriteBarrier(&___right_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
