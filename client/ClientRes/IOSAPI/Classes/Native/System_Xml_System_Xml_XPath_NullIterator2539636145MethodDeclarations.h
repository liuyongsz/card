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

// System.Xml.XPath.NullIterator
struct NullIterator_t2539636145;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_XPathNavigator3981235968.h"
#include "System_Xml_System_Xml_XPath_NullIterator2539636145.h"

// System.Void System.Xml.XPath.NullIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void NullIterator__ctor_m2745157407 (NullIterator_t2539636145 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NullIterator::.ctor(System.Xml.XPath.XPathNavigator,System.Xml.IXmlNamespaceResolver)
extern "C"  void NullIterator__ctor_m2816370923 (NullIterator_t2539636145 * __this, XPathNavigator_t3981235968 * ___nav0, Il2CppObject * ___nsm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NullIterator::.ctor(System.Xml.XPath.NullIterator)
extern "C"  void NullIterator__ctor_m3460484381 (NullIterator_t2539636145 * __this, NullIterator_t2539636145 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.NullIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * NullIterator_Clone_m850285811 (NullIterator_t2539636145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.NullIterator::MoveNextCore()
extern "C"  bool NullIterator_MoveNextCore_m596457672 (NullIterator_t2539636145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XPath.NullIterator::get_CurrentPosition()
extern "C"  int32_t NullIterator_get_CurrentPosition_m2475943594 (NullIterator_t2539636145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.NullIterator::get_Current()
extern "C"  XPathNavigator_t3981235968 * NullIterator_get_Current_m2455340661 (NullIterator_t2539636145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
