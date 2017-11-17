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

// Mono.Xml.XPath.XmlDocumentEditableNavigator
struct XmlDocumentEditableNavigator_t2430189771;
// Mono.Xml.XPath.XPathEditableDocument
struct XPathEditableDocument_t2475737110;
// System.String
struct String_t;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;
// System.Xml.XmlNode
struct XmlNode_t616554813;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_XPath_XPathEditableDocument2475737110.h"
#include "System_Xml_Mono_Xml_XPath_XmlDocumentEditableNavig2430189771.h"
#include "System_Xml_System_Xml_XPath_XPathNodeType817388867.h"
#include "System_Xml_System_Xml_XPath_XPathNavigator3981235968.h"
#include "System_Xml_System_Xml_XPath_XPathNamespaceScope3601604274.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlNodeOrder930453011.h"

// System.Void Mono.Xml.XPath.XmlDocumentEditableNavigator::.ctor(Mono.Xml.XPath.XPathEditableDocument)
extern "C"  void XmlDocumentEditableNavigator__ctor_m866387126 (XmlDocumentEditableNavigator_t2430189771 * __this, XPathEditableDocument_t2475737110 * ___doc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XPath.XmlDocumentEditableNavigator::.ctor(Mono.Xml.XPath.XmlDocumentEditableNavigator)
extern "C"  void XmlDocumentEditableNavigator__ctor_m314494813 (XmlDocumentEditableNavigator_t2430189771 * __this, XmlDocumentEditableNavigator_t2430189771 * ___nav0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XPath.XmlDocumentEditableNavigator::.cctor()
extern "C"  void XmlDocumentEditableNavigator__cctor_m451188124 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XPath.XmlDocumentEditableNavigator::get_LocalName()
extern "C"  String_t* XmlDocumentEditableNavigator_get_LocalName_m938129333 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XPath.XmlDocumentEditableNavigator::get_Name()
extern "C"  String_t* XmlDocumentEditableNavigator_get_Name_m4001347784 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XPath.XmlDocumentEditableNavigator::get_NamespaceURI()
extern "C"  String_t* XmlDocumentEditableNavigator_get_NamespaceURI_m1796213176 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeType Mono.Xml.XPath.XmlDocumentEditableNavigator::get_NodeType()
extern "C"  int32_t XmlDocumentEditableNavigator_get_NodeType_m3135107135 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XPath.XmlDocumentEditableNavigator::get_Value()
extern "C"  String_t* XmlDocumentEditableNavigator_get_Value_m499147018 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XPath.XmlDocumentEditableNavigator::get_XmlLang()
extern "C"  String_t* XmlDocumentEditableNavigator_get_XmlLang_m1218630474 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::get_HasChildren()
extern "C"  bool XmlDocumentEditableNavigator_get_HasChildren_m771647399 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::get_HasAttributes()
extern "C"  bool XmlDocumentEditableNavigator_get_HasAttributes_m3157637175 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator Mono.Xml.XPath.XmlDocumentEditableNavigator::Clone()
extern "C"  XPathNavigator_t3981235968 * XmlDocumentEditableNavigator_Clone_m2287115692 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode Mono.Xml.XPath.XmlDocumentEditableNavigator::GetNode()
extern "C"  XmlNode_t616554813 * XmlDocumentEditableNavigator_GetNode_m3239415759 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator)
extern "C"  bool XmlDocumentEditableNavigator_IsSamePosition_m664526351 (XmlDocumentEditableNavigator_t2430189771 * __this, XPathNavigator_t3981235968 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::MoveTo(System.Xml.XPath.XPathNavigator)
extern "C"  bool XmlDocumentEditableNavigator_MoveTo_m3562757886 (XmlDocumentEditableNavigator_t2430189771 * __this, XPathNavigator_t3981235968 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::MoveToFirstAttribute()
extern "C"  bool XmlDocumentEditableNavigator_MoveToFirstAttribute_m2876574523 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::MoveToFirstChild()
extern "C"  bool XmlDocumentEditableNavigator_MoveToFirstChild_m594204953 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::MoveToFirstNamespace(System.Xml.XPath.XPathNamespaceScope)
extern "C"  bool XmlDocumentEditableNavigator_MoveToFirstNamespace_m3136017003 (XmlDocumentEditableNavigator_t2430189771 * __this, int32_t ___scope0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::MoveToId(System.String)
extern "C"  bool XmlDocumentEditableNavigator_MoveToId_m995247284 (XmlDocumentEditableNavigator_t2430189771 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::MoveToNext()
extern "C"  bool XmlDocumentEditableNavigator_MoveToNext_m1461788538 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::MoveToNextAttribute()
extern "C"  bool XmlDocumentEditableNavigator_MoveToNextAttribute_m2483327436 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::MoveToNextNamespace(System.Xml.XPath.XPathNamespaceScope)
extern "C"  bool XmlDocumentEditableNavigator_MoveToNextNamespace_m2448480410 (XmlDocumentEditableNavigator_t2430189771 * __this, int32_t ___scope0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::MoveToParent()
extern "C"  bool XmlDocumentEditableNavigator_MoveToParent_m1006601533 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XPath.XmlDocumentEditableNavigator::MoveToRoot()
extern "C"  void XmlDocumentEditableNavigator_MoveToRoot_m1453425167 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::MoveToNamespace(System.String)
extern "C"  bool XmlDocumentEditableNavigator_MoveToNamespace_m2996981186 (XmlDocumentEditableNavigator_t2430189771 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::MoveToFirst()
extern "C"  bool XmlDocumentEditableNavigator_MoveToFirst_m1426982563 (XmlDocumentEditableNavigator_t2430189771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlDocumentEditableNavigator_MoveToAttribute_m917421849 (XmlDocumentEditableNavigator_t2430189771 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.XmlDocumentEditableNavigator::IsDescendant(System.Xml.XPath.XPathNavigator)
extern "C"  bool XmlDocumentEditableNavigator_IsDescendant_m864203637 (XmlDocumentEditableNavigator_t2430189771 * __this, XPathNavigator_t3981235968 * ___nav0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeOrder Mono.Xml.XPath.XmlDocumentEditableNavigator::ComparePosition(System.Xml.XPath.XPathNavigator)
extern "C"  int32_t XmlDocumentEditableNavigator_ComparePosition_m3855405444 (XmlDocumentEditableNavigator_t2430189771 * __this, XPathNavigator_t3981235968 * ___nav0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
