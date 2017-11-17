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

// System.Xml.XmlElement
struct XmlElement_t2877111883;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1287616130;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t3359885287;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2533799901;
// System.Xml.XmlAttribute
struct XmlAttribute_t175731005;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlDocument3649534162.h"
#include "System_Xml_System_Xml_XmlLinkedNode1287616130.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "System_Xml_System_Xml_XPath_XPathNodeType817388867.h"
#include "System_Xml_System_Xml_XmlAttribute175731005.h"

// System.Void System.Xml.XmlElement::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean)
extern "C"  void XmlElement__ctor_m262953229 (XmlElement_t2877111883 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, XmlDocument_t3649534162 * ___doc3, bool ___atomizedNames4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlElement::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t1287616130 * XmlElement_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m3521152107 (XmlElement_t2877111883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlElement_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m1804431500 (XmlElement_t2877111883 * __this, XmlLinkedNode_t1287616130 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes()
extern "C"  XmlAttributeCollection_t3359885287 * XmlElement_get_Attributes_m3671402762 (XmlElement_t2877111883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlElement::get_HasAttributes()
extern "C"  bool XmlElement_get_HasAttributes_m1855891596 (XmlElement_t2877111883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_InnerText()
extern "C"  String_t* XmlElement_get_InnerText_m2647877625 (XmlElement_t2877111883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_IsEmpty(System.Boolean)
extern "C"  void XmlElement_set_IsEmpty_m2327524163 (XmlElement_t2877111883 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_LocalName()
extern "C"  String_t* XmlElement_get_LocalName_m3259393718 (XmlElement_t2877111883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Name()
extern "C"  String_t* XmlElement_get_Name_m2569422545 (XmlElement_t2877111883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_NamespaceURI()
extern "C"  String_t* XmlElement_get_NamespaceURI_m3521167919 (XmlElement_t2877111883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_NextSibling()
extern "C"  XmlNode_t616554813 * XmlElement_get_NextSibling_m2935712450 (XmlElement_t2877111883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlElement::get_NodeType()
extern "C"  int32_t XmlElement_get_NodeType_m3974281661 (XmlElement_t2877111883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeType System.Xml.XmlElement::get_XPathNodeType()
extern "C"  int32_t XmlElement_get_XPathNodeType_m3954431655 (XmlElement_t2877111883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlElement::get_OwnerDocument()
extern "C"  XmlDocument_t3649534162 * XmlElement_get_OwnerDocument_m1426767850 (XmlElement_t2877111883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Prefix()
extern "C"  String_t* XmlElement_get_Prefix_m1101246112 (XmlElement_t2877111883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_ParentNode()
extern "C"  XmlNode_t616554813 * XmlElement_get_ParentNode_m3484493257 (XmlElement_t2877111883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlElement_set_SchemaInfo_m3263409260 (XmlElement_t2877111883 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::CloneNode(System.Boolean)
extern "C"  XmlNode_t616554813 * XmlElement_CloneNode_m2544333692 (XmlElement_t2877111883 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::RemoveAll()
extern "C"  void XmlElement_RemoveAll_m3120466277 (XmlElement_t2877111883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String)
extern "C"  void XmlElement_SetAttribute_m1125736292 (XmlElement_t2877111883 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlElement::SetAttributeNode(System.Xml.XmlAttribute)
extern "C"  XmlAttribute_t175731005 * XmlElement_SetAttributeNode_m1796253755 (XmlElement_t2877111883 * __this, XmlAttribute_t175731005 * ___newAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
