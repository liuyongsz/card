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

// System.Xml.XmlDocumentNavigator
struct XmlDocumentNavigator_t2252362445;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// System.Xml.XmlAttribute
struct XmlAttribute_t175731005;
// System.String
struct String_t;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"
#include "System_Xml_System_Xml_XmlAttribute175731005.h"
#include "System_Xml_System_Xml_XPath_XPathNodeType817388867.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XPath_XPathNavigator3981235968.h"
#include "System_Xml_System_Xml_XPath_XPathNamespaceScope3601604274.h"

// System.Void System.Xml.XmlDocumentNavigator::.ctor(System.Xml.XmlNode)
extern "C"  void XmlDocumentNavigator__ctor_m3688675809 (XmlDocumentNavigator_t2252362445 * __this, XmlNode_t616554813 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentNavigator::System.Xml.IHasXmlNode.GetNode()
extern "C"  XmlNode_t616554813 * XmlDocumentNavigator_System_Xml_IHasXmlNode_GetNode_m928096848 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocumentNavigator::get_Document()
extern "C"  XmlDocument_t3649534162 * XmlDocumentNavigator_get_Document_m3240633823 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::get_HasAttributes()
extern "C"  bool XmlDocumentNavigator_get_HasAttributes_m928570878 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::get_HasChildren()
extern "C"  bool XmlDocumentNavigator_get_HasChildren_m3544021976 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocumentNavigator::get_NsNode()
extern "C"  XmlAttribute_t175731005 * XmlDocumentNavigator_get_NsNode_m2534287102 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentNavigator::set_NsNode(System.Xml.XmlAttribute)
extern "C"  void XmlDocumentNavigator_set_NsNode_m443944313 (XmlDocumentNavigator_t2252362445 * __this, XmlAttribute_t175731005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentNavigator::get_LocalName()
extern "C"  String_t* XmlDocumentNavigator_get_LocalName_m2011676932 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentNavigator::get_Name()
extern "C"  String_t* XmlDocumentNavigator_get_Name_m1362560879 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentNavigator::get_NamespaceURI()
extern "C"  String_t* XmlDocumentNavigator_get_NamespaceURI_m128971669 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeType System.Xml.XmlDocumentNavigator::get_NodeType()
extern "C"  int32_t XmlDocumentNavigator_get_NodeType_m1725791930 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentNavigator::get_Value()
extern "C"  String_t* XmlDocumentNavigator_get_Value_m3793632479 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentNavigator::get_XmlLang()
extern "C"  String_t* XmlDocumentNavigator_get_XmlLang_m2142707329 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::CheckNsNameAppearance(System.String,System.String)
extern "C"  bool XmlDocumentNavigator_CheckNsNameAppearance_m2847239896 (XmlDocumentNavigator_t2252362445 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XmlDocumentNavigator::Clone()
extern "C"  XPathNavigator_t3981235968 * XmlDocumentNavigator_Clone_m576164417 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::IsDescendant(System.Xml.XPath.XPathNavigator)
extern "C"  bool XmlDocumentNavigator_IsDescendant_m4132063396 (XmlDocumentNavigator_t2252362445 * __this, XPathNavigator_t3981235968 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator)
extern "C"  bool XmlDocumentNavigator_IsSamePosition_m51270650 (XmlDocumentNavigator_t2252362445 * __this, XPathNavigator_t3981235968 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::MoveTo(System.Xml.XPath.XPathNavigator)
extern "C"  bool XmlDocumentNavigator_MoveTo_m3837696167 (XmlDocumentNavigator_t2252362445 * __this, XPathNavigator_t3981235968 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlDocumentNavigator_MoveToAttribute_m3838287542 (XmlDocumentNavigator_t2252362445 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::MoveToFirstAttribute()
extern "C"  bool XmlDocumentNavigator_MoveToFirstAttribute_m2444503440 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::MoveToFirstChild()
extern "C"  bool XmlDocumentNavigator_MoveToFirstChild_m2439538326 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::MoveToFirstNamespace(System.Xml.XPath.XPathNamespaceScope)
extern "C"  bool XmlDocumentNavigator_MoveToFirstNamespace_m2445735546 (XmlDocumentNavigator_t2252362445 * __this, int32_t ___namespaceScope0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::MoveToId(System.String)
extern "C"  bool XmlDocumentNavigator_MoveToId_m1464803413 (XmlDocumentNavigator_t2252362445 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::MoveToNamespace(System.String)
extern "C"  bool XmlDocumentNavigator_MoveToNamespace_m2149862535 (XmlDocumentNavigator_t2252362445 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::MoveToNext()
extern "C"  bool XmlDocumentNavigator_MoveToNext_m442409397 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::MoveToNextAttribute()
extern "C"  bool XmlDocumentNavigator_MoveToNextAttribute_m2854152221 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::MoveToNextNamespace(System.Xml.XPath.XPathNamespaceScope)
extern "C"  bool XmlDocumentNavigator_MoveToNextNamespace_m2925724725 (XmlDocumentNavigator_t2252362445 * __this, int32_t ___namespaceScope0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentNavigator::MoveToParent()
extern "C"  bool XmlDocumentNavigator_MoveToParent_m2964482050 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentNavigator::MoveToRoot()
extern "C"  void XmlDocumentNavigator_MoveToRoot_m3182142216 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentNavigator::get_Node()
extern "C"  XmlNode_t616554813 * XmlDocumentNavigator_get_Node_m1947670847 (XmlDocumentNavigator_t2252362445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentNavigator::GetFirstChild(System.Xml.XmlNode)
extern "C"  XmlNode_t616554813 * XmlDocumentNavigator_GetFirstChild_m2276250677 (XmlDocumentNavigator_t2252362445 * __this, XmlNode_t616554813 * ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentNavigator::GetNextSibling(System.Xml.XmlNode)
extern "C"  XmlNode_t616554813 * XmlDocumentNavigator_GetNextSibling_m1728540654 (XmlDocumentNavigator_t2252362445 * __this, XmlNode_t616554813 * ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentNavigator::GetParentNode(System.Xml.XmlNode)
extern "C"  XmlNode_t616554813 * XmlDocumentNavigator_GetParentNode_m3060567421 (XmlDocumentNavigator_t2252362445 * __this, XmlNode_t616554813 * ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentNavigator::LookupNamespace(System.String)
extern "C"  String_t* XmlDocumentNavigator_LookupNamespace_m314674392 (XmlDocumentNavigator_t2252362445 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
