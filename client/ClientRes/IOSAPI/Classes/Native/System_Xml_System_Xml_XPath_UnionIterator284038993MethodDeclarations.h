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

// System.Xml.XPath.UnionIterator
struct UnionIterator_t284038993;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_UnionIterator284038993.h"
#include "System_Xml_System_Xml_XPath_XPathNodeIterator3192332357.h"

// System.Void System.Xml.XPath.UnionIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.BaseIterator,System.Xml.XPath.BaseIterator)
extern "C"  void UnionIterator__ctor_m1084240979 (UnionIterator_t284038993 * __this, BaseIterator_t2454437973 * ___iter0, BaseIterator_t2454437973 * ___left1, BaseIterator_t2454437973 * ___right2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.UnionIterator::.ctor(System.Xml.XPath.UnionIterator)
extern "C"  void UnionIterator__ctor_m4092451913 (UnionIterator_t284038993 * __this, UnionIterator_t284038993 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.UnionIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * UnionIterator_Clone_m1320492971 (UnionIterator_t284038993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.UnionIterator::MoveNextCore()
extern "C"  bool UnionIterator_MoveNextCore_m1749077616 (UnionIterator_t284038993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.UnionIterator::SetCurrent(System.Xml.XPath.XPathNodeIterator)
extern "C"  void UnionIterator_SetCurrent_m33191664 (UnionIterator_t284038993 * __this, XPathNodeIterator_t3192332357 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.UnionIterator::get_Current()
extern "C"  XPathNavigator_t3981235968 * UnionIterator_get_Current_m343168637 (UnionIterator_t284038993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
