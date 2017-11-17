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

// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XPath.XPathExpression
struct XPathExpression_t452251917;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeOrder930453011.h"
#include "System_Xml_System_Xml_XPath_XPathNavigator3981235968.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XPath_XPathExpression452251917.h"
#include "System_Xml_System_Xml_XPath_XPathNodeType817388867.h"

// System.Void System.Xml.XPath.XPathNavigator::.ctor()
extern "C"  void XPathNavigator__ctor_m3760155520 (XPathNavigator_t3981235968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathNavigator::.cctor()
extern "C"  void XPathNavigator__cctor_m1668901011 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.XPathNavigator::System.ICloneable.Clone()
extern "C"  Il2CppObject * XPathNavigator_System_ICloneable_Clone_m3220185747 (XPathNavigator_t3981235968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::get_HasAttributes()
extern "C"  bool XPathNavigator_get_HasAttributes_m3776636292 (XPathNavigator_t3981235968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::get_HasChildren()
extern "C"  bool XPathNavigator_get_HasChildren_m3105216106 (XPathNavigator_t3981235968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.XPathNavigator::get_XmlLang()
extern "C"  String_t* XPathNavigator_get_XmlLang_m1158727745 (XPathNavigator_t3981235968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeOrder System.Xml.XPath.XPathNavigator::ComparePosition(System.Xml.XPath.XPathNavigator)
extern "C"  int32_t XPathNavigator_ComparePosition_m2001546875 (XPathNavigator_t3981235968 * __this, XPathNavigator_t3981235968 * ___nav0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathExpression System.Xml.XPath.XPathNavigator::Compile(System.String)
extern "C"  XPathExpression_t452251917 * XPathNavigator_Compile_m2646144820 (XPathNavigator_t3981235968 * __this, String_t* ___xpath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::IsDescendant(System.Xml.XPath.XPathNavigator)
extern "C"  bool XPathNavigator_IsDescendant_m2690514350 (XPathNavigator_t3981235968 * __this, XPathNavigator_t3981235968 * ___nav0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToAttribute(System.String,System.String)
extern "C"  bool XPathNavigator_MoveToAttribute_m3716628652 (XPathNavigator_t3981235968 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToNamespace(System.String)
extern "C"  bool XPathNavigator_MoveToNamespace_m419780955 (XPathNavigator_t3981235968 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirst()
extern "C"  bool XPathNavigator_MoveToFirst_m2987745696 (XPathNavigator_t3981235968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathNavigator::MoveToRoot()
extern "C"  void XPathNavigator_MoveToRoot_m3740159050 (XPathNavigator_t3981235968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstImpl()
extern "C"  bool XPathNavigator_MoveToFirstImpl_m1135523502 (XPathNavigator_t3981235968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstNamespace()
extern "C"  bool XPathNavigator_MoveToFirstNamespace_m3677738759 (XPathNavigator_t3981235968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToNextNamespace()
extern "C"  bool XPathNavigator_MoveToNextNamespace_m3661588194 (XPathNavigator_t3981235968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNavigator::Select(System.Xml.XPath.XPathExpression)
extern "C"  XPathNodeIterator_t3192332357 * XPathNavigator_Select_m65000375 (XPathNavigator_t3981235968 * __this, XPathExpression_t452251917 * ___expr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNavigator::Select(System.Xml.XPath.XPathExpression,System.Xml.IXmlNamespaceResolver)
extern "C"  XPathNodeIterator_t3192332357 * XPathNavigator_Select_m2045522580 (XPathNavigator_t3981235968 * __this, XPathExpression_t452251917 * ___expr0, Il2CppObject * ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable System.Xml.XPath.XPathNavigator::EnumerateChildren(System.Xml.XPath.XPathNavigator,System.Xml.XPath.XPathNodeType)
extern "C"  Il2CppObject * XPathNavigator_EnumerateChildren_m1107095336 (Il2CppObject * __this /* static, unused */, XPathNavigator_t3981235968 * ___n0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNavigator::SelectChildren(System.Xml.XPath.XPathNodeType)
extern "C"  XPathNodeIterator_t3192332357 * XPathNavigator_SelectChildren_m4089331250 (XPathNavigator_t3981235968 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.XPathNavigator::ToString()
extern "C"  String_t* XPathNavigator_ToString_m921348895 (XPathNavigator_t3981235968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.XPathNavigator::LookupNamespace(System.String)
extern "C"  String_t* XPathNavigator_LookupNamespace_m2791382698 (XPathNavigator_t3981235968 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
