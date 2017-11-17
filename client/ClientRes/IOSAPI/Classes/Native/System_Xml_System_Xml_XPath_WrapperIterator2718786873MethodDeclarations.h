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

// System.Xml.XPath.WrapperIterator
struct WrapperIterator_t2718786873;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_XPathNodeIterator3192332357.h"
#include "System_Xml_System_Xml_XPath_WrapperIterator2718786873.h"

// System.Void System.Xml.XPath.WrapperIterator::.ctor(System.Xml.XPath.XPathNodeIterator,System.Xml.IXmlNamespaceResolver)
extern "C"  void WrapperIterator__ctor_m904768110 (WrapperIterator_t2718786873 * __this, XPathNodeIterator_t3192332357 * ___iter0, Il2CppObject * ___nsm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.WrapperIterator::.ctor(System.Xml.XPath.WrapperIterator)
extern "C"  void WrapperIterator__ctor_m1032265289 (WrapperIterator_t2718786873 * __this, WrapperIterator_t2718786873 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.WrapperIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * WrapperIterator_Clone_m505403979 (WrapperIterator_t2718786873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.WrapperIterator::MoveNextCore()
extern "C"  bool WrapperIterator_MoveNextCore_m3426467008 (WrapperIterator_t2718786873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.WrapperIterator::get_Current()
extern "C"  XPathNavigator_t3981235968 * WrapperIterator_get_Current_m2295829889 (WrapperIterator_t2718786873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
