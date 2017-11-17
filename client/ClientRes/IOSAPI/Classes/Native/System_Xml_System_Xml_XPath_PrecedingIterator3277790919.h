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

#include "System_Xml_System_Xml_XPath_SimpleIterator833624542.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.PrecedingIterator
struct  PrecedingIterator_t3277790919  : public SimpleIterator_t833624542
{
public:
	// System.Boolean System.Xml.XPath.PrecedingIterator::finished
	bool ___finished_6;
	// System.Boolean System.Xml.XPath.PrecedingIterator::started
	bool ___started_7;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.PrecedingIterator::startPosition
	XPathNavigator_t3981235968 * ___startPosition_8;

public:
	inline static int32_t get_offset_of_finished_6() { return static_cast<int32_t>(offsetof(PrecedingIterator_t3277790919, ___finished_6)); }
	inline bool get_finished_6() const { return ___finished_6; }
	inline bool* get_address_of_finished_6() { return &___finished_6; }
	inline void set_finished_6(bool value)
	{
		___finished_6 = value;
	}

	inline static int32_t get_offset_of_started_7() { return static_cast<int32_t>(offsetof(PrecedingIterator_t3277790919, ___started_7)); }
	inline bool get_started_7() const { return ___started_7; }
	inline bool* get_address_of_started_7() { return &___started_7; }
	inline void set_started_7(bool value)
	{
		___started_7 = value;
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(PrecedingIterator_t3277790919, ___startPosition_8)); }
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
