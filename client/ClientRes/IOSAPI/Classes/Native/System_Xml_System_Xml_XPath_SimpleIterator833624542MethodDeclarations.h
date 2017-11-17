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

// System.Xml.XPath.SimpleIterator
struct SimpleIterator_t833624542;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_SimpleIterator833624542.h"
#include "System_Xml_System_Xml_XPath_XPathNavigator3981235968.h"

// System.Void System.Xml.XPath.SimpleIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void SimpleIterator__ctor_m2252176958 (SimpleIterator_t833624542 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SimpleIterator::.ctor(System.Xml.XPath.SimpleIterator,System.Boolean)
extern "C"  void SimpleIterator__ctor_m3797102006 (SimpleIterator_t833624542 * __this, SimpleIterator_t833624542 * ___other0, bool ___clone1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SimpleIterator::.ctor(System.Xml.XPath.XPathNavigator,System.Xml.IXmlNamespaceResolver)
extern "C"  void SimpleIterator__ctor_m2887284244 (SimpleIterator_t833624542 * __this, XPathNavigator_t3981235968 * ___nav0, Il2CppObject * ___nsm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.SimpleIterator::MoveNext()
extern "C"  bool SimpleIterator_MoveNext_m1140821840 (SimpleIterator_t833624542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleIterator::get_Current()
extern "C"  XPathNavigator_t3981235968 * SimpleIterator_get_Current_m2245918294 (SimpleIterator_t833624542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
