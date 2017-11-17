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

#include "System_Xml_System_Xml_XPath_XPathFunction759167395.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionStartsWith
struct  XPathFunctionStartsWith_t1855488236  : public XPathFunction_t759167395
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionStartsWith::arg0
	Expression_t1283317256 * ___arg0_0;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionStartsWith::arg1
	Expression_t1283317256 * ___arg1_1;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionStartsWith_t1855488236, ___arg0_0)); }
	inline Expression_t1283317256 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1283317256 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1283317256 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier(&___arg0_0, value);
	}

	inline static int32_t get_offset_of_arg1_1() { return static_cast<int32_t>(offsetof(XPathFunctionStartsWith_t1855488236, ___arg1_1)); }
	inline Expression_t1283317256 * get_arg1_1() const { return ___arg1_1; }
	inline Expression_t1283317256 ** get_address_of_arg1_1() { return &___arg1_1; }
	inline void set_arg1_1(Expression_t1283317256 * value)
	{
		___arg1_1 = value;
		Il2CppCodeGenWriteBarrier(&___arg1_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
