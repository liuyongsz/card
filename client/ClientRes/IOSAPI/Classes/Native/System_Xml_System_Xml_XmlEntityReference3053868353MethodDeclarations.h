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

// System.Xml.XmlEntityReference
struct XmlEntityReference_t3053868353;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1287616130;
// System.Xml.XmlEntity
struct XmlEntity_t4027255380;
// System.Xml.XmlNode
struct XmlNode_t616554813;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlDocument3649534162.h"
#include "System_Xml_System_Xml_XmlLinkedNode1287616130.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "System_Xml_System_Xml_XPath_XPathNodeType817388867.h"

// System.Void System.Xml.XmlEntityReference::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlEntityReference__ctor_m898794652 (XmlEntityReference_t3053868353 * __this, String_t* ___name0, XmlDocument_t3649534162 * ___doc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t1287616130 * XmlEntityReference_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m361127329 (XmlEntityReference_t3053868353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlEntityReference_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m3146699284 (XmlEntityReference_t3053868353 * __this, XmlLinkedNode_t1287616130 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_BaseURI()
extern "C"  String_t* XmlEntityReference_get_BaseURI_m506639787 (XmlEntityReference_t3053868353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntity System.Xml.XmlEntityReference::get_Entity()
extern "C"  XmlEntity_t4027255380 * XmlEntityReference_get_Entity_m1154089299 (XmlEntityReference_t3053868353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_ChildrenBaseURI()
extern "C"  String_t* XmlEntityReference_get_ChildrenBaseURI_m1538992350 (XmlEntityReference_t3053868353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntityReference::get_IsReadOnly()
extern "C"  bool XmlEntityReference_get_IsReadOnly_m3945320169 (XmlEntityReference_t3053868353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_LocalName()
extern "C"  String_t* XmlEntityReference_get_LocalName_m63162606 (XmlEntityReference_t3053868353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Name()
extern "C"  String_t* XmlEntityReference_get_Name_m366099251 (XmlEntityReference_t3053868353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntityReference::get_NodeType()
extern "C"  int32_t XmlEntityReference_get_NodeType_m1649658419 (XmlEntityReference_t3053868353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Value()
extern "C"  String_t* XmlEntityReference_get_Value_m1021408915 (XmlEntityReference_t3053868353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::set_Value(System.String)
extern "C"  void XmlEntityReference_set_Value_m1448626128 (XmlEntityReference_t3053868353 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeType System.Xml.XmlEntityReference::get_XPathNodeType()
extern "C"  int32_t XmlEntityReference_get_XPathNodeType_m1609095865 (XmlEntityReference_t3053868353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntityReference::CloneNode(System.Boolean)
extern "C"  XmlNode_t616554813 * XmlEntityReference_CloneNode_m12647448 (XmlEntityReference_t3053868353 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::SetReferencedEntityContent()
extern "C"  void XmlEntityReference_SetReferencedEntityContent_m2926932211 (XmlEntityReference_t3053868353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
