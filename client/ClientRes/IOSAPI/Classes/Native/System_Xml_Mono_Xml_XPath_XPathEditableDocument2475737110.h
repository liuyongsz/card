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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.XPath.XPathEditableDocument
struct  XPathEditableDocument_t2475737110  : public Il2CppObject
{
public:
	// System.Xml.XmlNode Mono.Xml.XPath.XPathEditableDocument::node
	XmlNode_t616554813 * ___node_0;

public:
	inline static int32_t get_offset_of_node_0() { return static_cast<int32_t>(offsetof(XPathEditableDocument_t2475737110, ___node_0)); }
	inline XmlNode_t616554813 * get_node_0() const { return ___node_0; }
	inline XmlNode_t616554813 ** get_address_of_node_0() { return &___node_0; }
	inline void set_node_0(XmlNode_t616554813 * value)
	{
		___node_0 = value;
		Il2CppCodeGenWriteBarrier(&___node_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
