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

// System.Xml.XPath.AxisIterator
struct AxisIterator_t3253336785;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.NodeTest
struct NodeTest_t2072055152;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_NodeTest2072055152.h"
#include "System_Xml_System_Xml_XPath_AxisIterator3253336785.h"

// System.Void System.Xml.XPath.AxisIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.NodeTest)
extern "C"  void AxisIterator__ctor_m2531535532 (AxisIterator_t3253336785 * __this, BaseIterator_t2454437973 * ___iter0, NodeTest_t2072055152 * ___test1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.AxisIterator::.ctor(System.Xml.XPath.AxisIterator)
extern "C"  void AxisIterator__ctor_m1369712637 (AxisIterator_t3253336785 * __this, AxisIterator_t3253336785 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.AxisIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * AxisIterator_Clone_m2225184099 (AxisIterator_t3253336785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.AxisIterator::MoveNextCore()
extern "C"  bool AxisIterator_MoveNextCore_m3369854824 (AxisIterator_t3253336785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.AxisIterator::get_Current()
extern "C"  XPathNavigator_t3981235968 * AxisIterator_get_Current_m3219215401 (AxisIterator_t3253336785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.AxisIterator::get_ReverseAxis()
extern "C"  bool AxisIterator_get_ReverseAxis_m1076220197 (AxisIterator_t3253336785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
