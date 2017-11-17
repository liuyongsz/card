#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.NodeTest
struct NodeTest_t2072055152;

#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AxisIterator
struct  AxisIterator_t3253336785  : public BaseIterator_t2454437973
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.AxisIterator::_iter
	BaseIterator_t2454437973 * ____iter_3;
	// System.Xml.XPath.NodeTest System.Xml.XPath.AxisIterator::_test
	NodeTest_t2072055152 * ____test_4;

public:
	inline static int32_t get_offset_of__iter_3() { return static_cast<int32_t>(offsetof(AxisIterator_t3253336785, ____iter_3)); }
	inline BaseIterator_t2454437973 * get__iter_3() const { return ____iter_3; }
	inline BaseIterator_t2454437973 ** get_address_of__iter_3() { return &____iter_3; }
	inline void set__iter_3(BaseIterator_t2454437973 * value)
	{
		____iter_3 = value;
		Il2CppCodeGenWriteBarrier(&____iter_3, value);
	}

	inline static int32_t get_offset_of__test_4() { return static_cast<int32_t>(offsetof(AxisIterator_t3253336785, ____test_4)); }
	inline NodeTest_t2072055152 * get__test_4() const { return ____test_4; }
	inline NodeTest_t2072055152 ** get_address_of__test_4() { return &____test_4; }
	inline void set__test_4(NodeTest_t2072055152 * value)
	{
		____test_4 = value;
		Il2CppCodeGenWriteBarrier(&____test_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
