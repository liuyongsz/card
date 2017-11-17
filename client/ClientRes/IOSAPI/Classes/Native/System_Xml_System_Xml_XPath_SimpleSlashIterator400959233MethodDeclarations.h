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

// System.Xml.XPath.SimpleSlashIterator
struct SimpleSlashIterator_t400959233;
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
#include "System_Xml_System_Xml_XPath_SimpleSlashIterator400959233.h"

// System.Void System.Xml.XPath.SimpleSlashIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.NodeSet)
extern "C"  void SimpleSlashIterator__ctor_m4293651922 (SimpleSlashIterator_t400959233 * __this, BaseIterator_t2454437973 * ___left0, NodeSet_t2895962396 * ___expr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SimpleSlashIterator::.ctor(System.Xml.XPath.SimpleSlashIterator)
extern "C"  void SimpleSlashIterator__ctor_m3945471625 (SimpleSlashIterator_t400959233 * __this, SimpleSlashIterator_t400959233 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.SimpleSlashIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * SimpleSlashIterator_Clone_m3337045963 (SimpleSlashIterator_t400959233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.SimpleSlashIterator::MoveNextCore()
extern "C"  bool SimpleSlashIterator_MoveNextCore_m1354955280 (SimpleSlashIterator_t400959233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleSlashIterator::get_Current()
extern "C"  XPathNavigator_t3981235968 * SimpleSlashIterator_get_Current_m2708506873 (SimpleSlashIterator_t400959233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
