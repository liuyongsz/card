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
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "System_Xml_System_Xml_XPath_XPathFunction759167395.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionId
struct  XPathFunctionId_t2998162272  : public XPathFunction_t759167395
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionId::arg0
	Expression_t1283317256 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionId_t2998162272, ___arg0_0)); }
	inline Expression_t1283317256 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1283317256 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1283317256 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier(&___arg0_0, value);
	}
};

struct XPathFunctionId_t2998162272_StaticFields
{
public:
	// System.Char[] System.Xml.XPath.XPathFunctionId::rgchWhitespace
	CharU5BU5D_t1328083999* ___rgchWhitespace_1;

public:
	inline static int32_t get_offset_of_rgchWhitespace_1() { return static_cast<int32_t>(offsetof(XPathFunctionId_t2998162272_StaticFields, ___rgchWhitespace_1)); }
	inline CharU5BU5D_t1328083999* get_rgchWhitespace_1() const { return ___rgchWhitespace_1; }
	inline CharU5BU5D_t1328083999** get_address_of_rgchWhitespace_1() { return &___rgchWhitespace_1; }
	inline void set_rgchWhitespace_1(CharU5BU5D_t1328083999* value)
	{
		___rgchWhitespace_1 = value;
		Il2CppCodeGenWriteBarrier(&___rgchWhitespace_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
