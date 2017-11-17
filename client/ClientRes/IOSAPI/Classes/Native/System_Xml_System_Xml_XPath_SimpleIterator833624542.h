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

#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SimpleIterator
struct  SimpleIterator_t833624542  : public BaseIterator_t2454437973
{
public:
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleIterator::_nav
	XPathNavigator_t3981235968 * ____nav_3;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleIterator::_current
	XPathNavigator_t3981235968 * ____current_4;
	// System.Boolean System.Xml.XPath.SimpleIterator::skipfirst
	bool ___skipfirst_5;

public:
	inline static int32_t get_offset_of__nav_3() { return static_cast<int32_t>(offsetof(SimpleIterator_t833624542, ____nav_3)); }
	inline XPathNavigator_t3981235968 * get__nav_3() const { return ____nav_3; }
	inline XPathNavigator_t3981235968 ** get_address_of__nav_3() { return &____nav_3; }
	inline void set__nav_3(XPathNavigator_t3981235968 * value)
	{
		____nav_3 = value;
		Il2CppCodeGenWriteBarrier(&____nav_3, value);
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(SimpleIterator_t833624542, ____current_4)); }
	inline XPathNavigator_t3981235968 * get__current_4() const { return ____current_4; }
	inline XPathNavigator_t3981235968 ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(XPathNavigator_t3981235968 * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier(&____current_4, value);
	}

	inline static int32_t get_offset_of_skipfirst_5() { return static_cast<int32_t>(offsetof(SimpleIterator_t833624542, ___skipfirst_5)); }
	inline bool get_skipfirst_5() const { return ___skipfirst_5; }
	inline bool* get_address_of_skipfirst_5() { return &___skipfirst_5; }
	inline void set_skipfirst_5(bool value)
	{
		___skipfirst_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
