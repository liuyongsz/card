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

// System.Xml.XPath.ParensIterator
struct ParensIterator_t1637647049;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_ParensIterator1637647049.h"

// System.Void System.Xml.XPath.ParensIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void ParensIterator__ctor_m1979878911 (ParensIterator_t1637647049 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ParensIterator::.ctor(System.Xml.XPath.ParensIterator)
extern "C"  void ParensIterator__ctor_m3622123101 (ParensIterator_t1637647049 * __this, ParensIterator_t1637647049 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.ParensIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * ParensIterator_Clone_m111320099 (ParensIterator_t1637647049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ParensIterator::MoveNextCore()
extern "C"  bool ParensIterator_MoveNextCore_m3078902680 (ParensIterator_t1637647049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.ParensIterator::get_Current()
extern "C"  XPathNavigator_t3981235968 * ParensIterator_get_Current_m2546291297 (ParensIterator_t1637647049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XPath.ParensIterator::get_Count()
extern "C"  int32_t ParensIterator_get_Count_m1107234859 (ParensIterator_t1637647049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
