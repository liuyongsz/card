#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.XmlAttribute
struct XmlAttribute_t175731005;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1287616130;
// System.Xml.XmlElement
struct XmlElement_t2877111883;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2533799901;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3692870749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlDocument3649534162.h"
#include "System_Xml_System_Xml_XmlLinkedNode1287616130.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "System_Xml_System_Xml_XPath_XPathNodeType817388867.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"

// System.Void System.Xml.XmlAttribute::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean,System.Boolean)
extern "C"  void XmlAttribute__ctor_m1588215154 (XmlAttribute_t175731005 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, XmlDocument_t3649534162 * ___doc3, bool ___atomizedNames4, bool ___checkNamespace5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t1287616130 * XmlAttribute_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m3268657293 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlAttribute_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m1804158872 (XmlAttribute_t175731005 * __this, XmlLinkedNode_t1287616130 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_BaseURI()
extern "C"  String_t* XmlAttribute_get_BaseURI_m916085959 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_LocalName()
extern "C"  String_t* XmlAttribute_get_LocalName_m499106298 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Name()
extern "C"  String_t* XmlAttribute_get_Name_m183548223 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_NamespaceURI()
extern "C"  String_t* XmlAttribute_get_NamespaceURI_m2001982069 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlAttribute::get_NodeType()
extern "C"  int32_t XmlAttribute_get_NodeType_m1017000255 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeType System.Xml.XmlAttribute::get_XPathNodeType()
extern "C"  int32_t XmlAttribute_get_XPathNodeType_m941305685 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlAttribute::get_OwnerDocument()
extern "C"  XmlDocument_t3649534162 * XmlAttribute_get_OwnerDocument_m1604229074 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlAttribute::get_OwnerElement()
extern "C"  XmlElement_t2877111883 * XmlAttribute_get_OwnerElement_m2262927554 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::get_ParentNode()
extern "C"  XmlNode_t616554813 * XmlAttribute_get_ParentNode_m3481517235 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Prefix()
extern "C"  String_t* XmlAttribute_get_Prefix_m3102413808 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlAttribute_set_SchemaInfo_m1144215300 (XmlAttribute_t175731005 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttribute::get_Specified()
extern "C"  bool XmlAttribute_get_Specified_m3722241155 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Value()
extern "C"  String_t* XmlAttribute_get_Value_m2044678127 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_Value(System.String)
extern "C"  void XmlAttribute_set_Value_m1419419476 (XmlAttribute_t175731005 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_XmlLang()
extern "C"  String_t* XmlAttribute_get_XmlLang_m4179737745 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlAttribute::get_XmlSpace()
extern "C"  int32_t XmlAttribute_get_XmlSpace_m2379457552 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::AppendChild(System.Xml.XmlNode)
extern "C"  XmlNode_t616554813 * XmlAttribute_AppendChild_m697146055 (XmlAttribute_t175731005 * __this, XmlNode_t616554813 * ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  XmlNode_t616554813 * XmlAttribute_InsertBefore_m1985518268 (XmlAttribute_t175731005 * __this, XmlNode_t616554813 * ___newChild0, XmlNode_t616554813 * ___refChild1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::RemoveChild(System.Xml.XmlNode)
extern "C"  XmlNode_t616554813 * XmlAttribute_RemoveChild_m321403647 (XmlAttribute_t175731005 * __this, XmlNode_t616554813 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::CloneNode(System.Boolean)
extern "C"  XmlNode_t616554813 * XmlAttribute_CloneNode_m1501462364 (XmlAttribute_t175731005 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::SetDefault()
extern "C"  void XmlAttribute_SetDefault_m3959153509 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.XmlAttribute::GetAttributeDefinition()
extern "C"  DTDAttributeDefinition_t3692870749 * XmlAttribute_GetAttributeDefinition_m3287587367 (XmlAttribute_t175731005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
