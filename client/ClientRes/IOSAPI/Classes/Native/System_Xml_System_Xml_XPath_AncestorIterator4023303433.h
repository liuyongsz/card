#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "System_Xml_System_Xml_XPath_SimpleIterator833624542.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AncestorIterator
struct  AncestorIterator_t4023303433  : public SimpleIterator_t833624542
{
public:
	// System.Int32 System.Xml.XPath.AncestorIterator::currentPosition
	int32_t ___currentPosition_6;
	// System.Collections.ArrayList System.Xml.XPath.AncestorIterator::navigators
	ArrayList_t4252133567 * ___navigators_7;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.AncestorIterator::startPosition
	XPathNavigator_t3981235968 * ___startPosition_8;

public:
	inline static int32_t get_offset_of_currentPosition_6() { return static_cast<int32_t>(offsetof(AncestorIterator_t4023303433, ___currentPosition_6)); }
	inline int32_t get_currentPosition_6() const { return ___currentPosition_6; }
	inline int32_t* get_address_of_currentPosition_6() { return &___currentPosition_6; }
	inline void set_currentPosition_6(int32_t value)
	{
		___currentPosition_6 = value;
	}

	inline static int32_t get_offset_of_navigators_7() { return static_cast<int32_t>(offsetof(AncestorIterator_t4023303433, ___navigators_7)); }
	inline ArrayList_t4252133567 * get_navigators_7() const { return ___navigators_7; }
	inline ArrayList_t4252133567 ** get_address_of_navigators_7() { return &___navigators_7; }
	inline void set_navigators_7(ArrayList_t4252133567 * value)
	{
		___navigators_7 = value;
		Il2CppCodeGenWriteBarrier(&___navigators_7, value);
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(AncestorIterator_t4023303433, ___startPosition_8)); }
	inline XPathNavigator_t3981235968 * get_startPosition_8() const { return ___startPosition_8; }
	inline XPathNavigator_t3981235968 ** get_address_of_startPosition_8() { return &___startPosition_8; }
	inline void set_startPosition_8(XPathNavigator_t3981235968 * value)
	{
		___startPosition_8 = value;
		Il2CppCodeGenWriteBarrier(&___startPosition_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
