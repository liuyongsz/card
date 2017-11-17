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

#include "System_Xml_System_Xml_XPath_Expression1283317256.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprBinary
struct  ExprBinary_t2134514854  : public Expression_t1283317256
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprBinary::_left
	Expression_t1283317256 * ____left_0;
	// System.Xml.XPath.Expression System.Xml.XPath.ExprBinary::_right
	Expression_t1283317256 * ____right_1;

public:
	inline static int32_t get_offset_of__left_0() { return static_cast<int32_t>(offsetof(ExprBinary_t2134514854, ____left_0)); }
	inline Expression_t1283317256 * get__left_0() const { return ____left_0; }
	inline Expression_t1283317256 ** get_address_of__left_0() { return &____left_0; }
	inline void set__left_0(Expression_t1283317256 * value)
	{
		____left_0 = value;
		Il2CppCodeGenWriteBarrier(&____left_0, value);
	}

	inline static int32_t get_offset_of__right_1() { return static_cast<int32_t>(offsetof(ExprBinary_t2134514854, ____right_1)); }
	inline Expression_t1283317256 * get__right_1() const { return ____right_1; }
	inline Expression_t1283317256 ** get_address_of__right_1() { return &____right_1; }
	inline void set__right_1(Expression_t1283317256 * value)
	{
		____right_1 = value;
		Il2CppCodeGenWriteBarrier(&____right_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
