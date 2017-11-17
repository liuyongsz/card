#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XPath.AxisSpecifier
struct AxisSpecifier_t201930955;

#include "System_Xml_System_Xml_XPath_NodeSet2895962396.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeTest
struct  NodeTest_t2072055152  : public NodeSet_t2895962396
{
public:
	// System.Xml.XPath.AxisSpecifier System.Xml.XPath.NodeTest::_axis
	AxisSpecifier_t201930955 * ____axis_0;

public:
	inline static int32_t get_offset_of__axis_0() { return static_cast<int32_t>(offsetof(NodeTest_t2072055152, ____axis_0)); }
	inline AxisSpecifier_t201930955 * get__axis_0() const { return ____axis_0; }
	inline AxisSpecifier_t201930955 ** get_address_of__axis_0() { return &____axis_0; }
	inline void set__axis_0(AxisSpecifier_t201930955 * value)
	{
		____axis_0 = value;
		Il2CppCodeGenWriteBarrier(&____axis_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
