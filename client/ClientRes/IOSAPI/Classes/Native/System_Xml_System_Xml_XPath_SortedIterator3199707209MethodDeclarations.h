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

// System.Xml.XPath.SortedIterator
struct SortedIterator_t3199707209;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_SortedIterator3199707209.h"

// System.Void System.Xml.XPath.SortedIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void SortedIterator__ctor_m2930137647 (SortedIterator_t3199707209 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SortedIterator::.ctor(System.Xml.XPath.SortedIterator)
extern "C"  void SortedIterator__ctor_m757794909 (SortedIterator_t3199707209 * __this, SortedIterator_t3199707209 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.SortedIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * SortedIterator_Clone_m3751009075 (SortedIterator_t3199707209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.SortedIterator::MoveNextCore()
extern "C"  bool SortedIterator_MoveNextCore_m3186544536 (SortedIterator_t3199707209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SortedIterator::get_Current()
extern "C"  XPathNavigator_t3981235968 * SortedIterator_get_Current_m193959665 (SortedIterator_t3199707209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XPath.SortedIterator::get_Count()
extern "C"  int32_t SortedIterator_get_Count_m2296583083 (SortedIterator_t3199707209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
