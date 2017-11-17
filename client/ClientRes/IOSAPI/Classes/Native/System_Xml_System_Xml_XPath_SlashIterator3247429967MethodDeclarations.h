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

// System.Xml.XPath.SlashIterator
struct SlashIterator_t3247429967;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.NodeSet
struct NodeSet_t2895962396;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_NodeSet2895962396.h"
#include "System_Xml_System_Xml_XPath_SlashIterator3247429967.h"

// System.Void System.Xml.XPath.SlashIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.NodeSet)
extern "C"  void SlashIterator__ctor_m2179623296 (SlashIterator_t3247429967 * __this, BaseIterator_t2454437973 * ___iter0, NodeSet_t2895962396 * ___expr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SlashIterator::.ctor(System.Xml.XPath.SlashIterator)
extern "C"  void SlashIterator__ctor_m903685129 (SlashIterator_t3247429967 * __this, SlashIterator_t3247429967 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.SlashIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * SlashIterator_Clone_m3505098941 (SlashIterator_t3247429967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.SlashIterator::MoveNextCore()
extern "C"  bool SlashIterator_MoveNextCore_m1518581578 (SlashIterator_t3247429967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SlashIterator::get_Current()
extern "C"  XPathNavigator_t3981235968 * SlashIterator_get_Current_m1732057423 (SlashIterator_t3247429967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
