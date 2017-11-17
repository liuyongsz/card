#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Xml.XmlAttribute
struct XmlAttribute_t175731005;
// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "System_Xml_System_Xml_XPath_XPathNavigator3981235968.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocumentNavigator
struct  XmlDocumentNavigator_t2252362445  : public XPathNavigator_t3981235968
{
public:
	// System.Xml.XmlNode System.Xml.XmlDocumentNavigator::node
	XmlNode_t616554813 * ___node_2;
	// System.Xml.XmlAttribute System.Xml.XmlDocumentNavigator::nsNode
	XmlAttribute_t175731005 * ___nsNode_3;
	// System.Collections.ArrayList System.Xml.XmlDocumentNavigator::iteratedNsNames
	ArrayList_t4252133567 * ___iteratedNsNames_4;

public:
	inline static int32_t get_offset_of_node_2() { return static_cast<int32_t>(offsetof(XmlDocumentNavigator_t2252362445, ___node_2)); }
	inline XmlNode_t616554813 * get_node_2() const { return ___node_2; }
	inline XmlNode_t616554813 ** get_address_of_node_2() { return &___node_2; }
	inline void set_node_2(XmlNode_t616554813 * value)
	{
		___node_2 = value;
		Il2CppCodeGenWriteBarrier(&___node_2, value);
	}

	inline static int32_t get_offset_of_nsNode_3() { return static_cast<int32_t>(offsetof(XmlDocumentNavigator_t2252362445, ___nsNode_3)); }
	inline XmlAttribute_t175731005 * get_nsNode_3() const { return ___nsNode_3; }
	inline XmlAttribute_t175731005 ** get_address_of_nsNode_3() { return &___nsNode_3; }
	inline void set_nsNode_3(XmlAttribute_t175731005 * value)
	{
		___nsNode_3 = value;
		Il2CppCodeGenWriteBarrier(&___nsNode_3, value);
	}

	inline static int32_t get_offset_of_iteratedNsNames_4() { return static_cast<int32_t>(offsetof(XmlDocumentNavigator_t2252362445, ___iteratedNsNames_4)); }
	inline ArrayList_t4252133567 * get_iteratedNsNames_4() const { return ___iteratedNsNames_4; }
	inline ArrayList_t4252133567 ** get_address_of_iteratedNsNames_4() { return &___iteratedNsNames_4; }
	inline void set_iteratedNsNames_4(ArrayList_t4252133567 * value)
	{
		___iteratedNsNames_4 = value;
		Il2CppCodeGenWriteBarrier(&___iteratedNsNames_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
