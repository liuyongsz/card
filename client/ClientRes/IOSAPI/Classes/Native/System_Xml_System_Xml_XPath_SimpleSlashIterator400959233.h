#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XPath.NodeSet
struct NodeSet_t2895962396;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SimpleSlashIterator
struct  SimpleSlashIterator_t400959233  : public BaseIterator_t2454437973
{
public:
	// System.Xml.XPath.NodeSet System.Xml.XPath.SimpleSlashIterator::_expr
	NodeSet_t2895962396 * ____expr_3;
	// System.Xml.XPath.BaseIterator System.Xml.XPath.SimpleSlashIterator::_left
	BaseIterator_t2454437973 * ____left_4;
	// System.Xml.XPath.BaseIterator System.Xml.XPath.SimpleSlashIterator::_right
	BaseIterator_t2454437973 * ____right_5;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleSlashIterator::_current
	XPathNavigator_t3981235968 * ____current_6;

public:
	inline static int32_t get_offset_of__expr_3() { return static_cast<int32_t>(offsetof(SimpleSlashIterator_t400959233, ____expr_3)); }
	inline NodeSet_t2895962396 * get__expr_3() const { return ____expr_3; }
	inline NodeSet_t2895962396 ** get_address_of__expr_3() { return &____expr_3; }
	inline void set__expr_3(NodeSet_t2895962396 * value)
	{
		____expr_3 = value;
		Il2CppCodeGenWriteBarrier(&____expr_3, value);
	}

	inline static int32_t get_offset_of__left_4() { return static_cast<int32_t>(offsetof(SimpleSlashIterator_t400959233, ____left_4)); }
	inline BaseIterator_t2454437973 * get__left_4() const { return ____left_4; }
	inline BaseIterator_t2454437973 ** get_address_of__left_4() { return &____left_4; }
	inline void set__left_4(BaseIterator_t2454437973 * value)
	{
		____left_4 = value;
		Il2CppCodeGenWriteBarrier(&____left_4, value);
	}

	inline static int32_t get_offset_of__right_5() { return static_cast<int32_t>(offsetof(SimpleSlashIterator_t400959233, ____right_5)); }
	inline BaseIterator_t2454437973 * get__right_5() const { return ____right_5; }
	inline BaseIterator_t2454437973 ** get_address_of__right_5() { return &____right_5; }
	inline void set__right_5(BaseIterator_t2454437973 * value)
	{
		____right_5 = value;
		Il2CppCodeGenWriteBarrier(&____right_5, value);
	}

	inline static int32_t get_offset_of__current_6() { return static_cast<int32_t>(offsetof(SimpleSlashIterator_t400959233, ____current_6)); }
	inline XPathNavigator_t3981235968 * get__current_6() const { return ____current_6; }
	inline XPathNavigator_t3981235968 ** get_address_of__current_6() { return &____current_6; }
	inline void set__current_6(XPathNavigator_t3981235968 * value)
	{
		____current_6 = value;
		Il2CppCodeGenWriteBarrier(&____current_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
