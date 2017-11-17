#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSortElement
struct  XPathSortElement_t1040291071  : public Il2CppObject
{
public:
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathSortElement::Navigator
	XPathNavigator_t3981235968 * ___Navigator_0;
	// System.Object[] System.Xml.XPath.XPathSortElement::Values
	ObjectU5BU5D_t3614634134* ___Values_1;

public:
	inline static int32_t get_offset_of_Navigator_0() { return static_cast<int32_t>(offsetof(XPathSortElement_t1040291071, ___Navigator_0)); }
	inline XPathNavigator_t3981235968 * get_Navigator_0() const { return ___Navigator_0; }
	inline XPathNavigator_t3981235968 ** get_address_of_Navigator_0() { return &___Navigator_0; }
	inline void set_Navigator_0(XPathNavigator_t3981235968 * value)
	{
		___Navigator_0 = value;
		Il2CppCodeGenWriteBarrier(&___Navigator_0, value);
	}

	inline static int32_t get_offset_of_Values_1() { return static_cast<int32_t>(offsetof(XPathSortElement_t1040291071, ___Values_1)); }
	inline ObjectU5BU5D_t3614634134* get_Values_1() const { return ___Values_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of_Values_1() { return &___Values_1; }
	inline void set_Values_1(ObjectU5BU5D_t3614634134* value)
	{
		___Values_1 = value;
		Il2CppCodeGenWriteBarrier(&___Values_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
