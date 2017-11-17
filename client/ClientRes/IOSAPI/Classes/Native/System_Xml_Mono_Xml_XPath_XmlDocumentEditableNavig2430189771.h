#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.XPath.XPathEditableDocument
struct XPathEditableDocument_t2475737110;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "System_Xml_System_Xml_XPath_XPathNavigator3981235968.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.XPath.XmlDocumentEditableNavigator
struct  XmlDocumentEditableNavigator_t2430189771  : public XPathNavigator_t3981235968
{
public:
	// Mono.Xml.XPath.XPathEditableDocument Mono.Xml.XPath.XmlDocumentEditableNavigator::document
	XPathEditableDocument_t2475737110 * ___document_3;
	// System.Xml.XPath.XPathNavigator Mono.Xml.XPath.XmlDocumentEditableNavigator::navigator
	XPathNavigator_t3981235968 * ___navigator_4;

public:
	inline static int32_t get_offset_of_document_3() { return static_cast<int32_t>(offsetof(XmlDocumentEditableNavigator_t2430189771, ___document_3)); }
	inline XPathEditableDocument_t2475737110 * get_document_3() const { return ___document_3; }
	inline XPathEditableDocument_t2475737110 ** get_address_of_document_3() { return &___document_3; }
	inline void set_document_3(XPathEditableDocument_t2475737110 * value)
	{
		___document_3 = value;
		Il2CppCodeGenWriteBarrier(&___document_3, value);
	}

	inline static int32_t get_offset_of_navigator_4() { return static_cast<int32_t>(offsetof(XmlDocumentEditableNavigator_t2430189771, ___navigator_4)); }
	inline XPathNavigator_t3981235968 * get_navigator_4() const { return ___navigator_4; }
	inline XPathNavigator_t3981235968 ** get_address_of_navigator_4() { return &___navigator_4; }
	inline void set_navigator_4(XPathNavigator_t3981235968 * value)
	{
		___navigator_4 = value;
		Il2CppCodeGenWriteBarrier(&___navigator_4, value);
	}
};

struct XmlDocumentEditableNavigator_t2430189771_StaticFields
{
public:
	// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::isXmlDocumentNavigatorImpl
	bool ___isXmlDocumentNavigatorImpl_2;

public:
	inline static int32_t get_offset_of_isXmlDocumentNavigatorImpl_2() { return static_cast<int32_t>(offsetof(XmlDocumentEditableNavigator_t2430189771_StaticFields, ___isXmlDocumentNavigatorImpl_2)); }
	inline bool get_isXmlDocumentNavigatorImpl_2() const { return ___isXmlDocumentNavigatorImpl_2; }
	inline bool* get_address_of_isXmlDocumentNavigatorImpl_2() { return &___isXmlDocumentNavigatorImpl_2; }
	inline void set_isXmlDocumentNavigatorImpl_2(bool value)
	{
		___isXmlDocumentNavigatorImpl_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
