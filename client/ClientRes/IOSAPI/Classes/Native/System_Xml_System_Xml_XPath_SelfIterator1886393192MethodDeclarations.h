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

// System.Xml.XPath.SelfIterator
struct SelfIterator_t1886393192;
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
#include "System_Xml_System_Xml_XPath_SelfIterator1886393192.h"

// System.Void System.Xml.XPath.SelfIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void SelfIterator__ctor_m764262410 (SelfIterator_t1886393192 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SelfIterator::.ctor(System.Xml.XPath.XPathNavigator,System.Xml.IXmlNamespaceResolver)
extern "C"  void SelfIterator__ctor_m1141263032 (SelfIterator_t1886393192 * __this, XPathNavigator_t3981235968 * ___nav0, Il2CppObject * ___nsm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SelfIterator::.ctor(System.Xml.XPath.SelfIterator,System.Boolean)
extern "C"  void SelfIterator__ctor_m4256633198 (SelfIterator_t1886393192 * __this, SelfIterator_t1886393192 * ___other0, bool ___clone1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.SelfIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * SelfIterator_Clone_m449942362 (SelfIterator_t1886393192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.SelfIterator::MoveNextCore()
extern "C"  bool SelfIterator_MoveNextCore_m2504688633 (SelfIterator_t1886393192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SelfIterator::get_Current()
extern "C"  XPathNavigator_t3981235968 * SelfIterator_get_Current_m1304239090 (SelfIterator_t1886393192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
