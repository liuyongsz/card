#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;

#include "System_Xml_System_Xml_XPath_XPathNodeIterator3192332357.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.BaseIterator
struct  BaseIterator_t2454437973  : public XPathNodeIterator_t3192332357
{
public:
	// System.Xml.IXmlNamespaceResolver System.Xml.XPath.BaseIterator::_nsm
	Il2CppObject * ____nsm_1;
	// System.Int32 System.Xml.XPath.BaseIterator::position
	int32_t ___position_2;

public:
	inline static int32_t get_offset_of__nsm_1() { return static_cast<int32_t>(offsetof(BaseIterator_t2454437973, ____nsm_1)); }
	inline Il2CppObject * get__nsm_1() const { return ____nsm_1; }
	inline Il2CppObject ** get_address_of__nsm_1() { return &____nsm_1; }
	inline void set__nsm_1(Il2CppObject * value)
	{
		____nsm_1 = value;
		Il2CppCodeGenWriteBarrier(&____nsm_1, value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(BaseIterator_t2454437973, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
