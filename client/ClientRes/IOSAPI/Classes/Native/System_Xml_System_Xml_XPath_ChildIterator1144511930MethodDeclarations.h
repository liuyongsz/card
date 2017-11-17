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

// System.Xml.XPath.ChildIterator
struct ChildIterator_t1144511930;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_ChildIterator1144511930.h"

// System.Void System.Xml.XPath.ChildIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void ChildIterator__ctor_m2955912824 (ChildIterator_t1144511930 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ChildIterator::.ctor(System.Xml.XPath.ChildIterator)
extern "C"  void ChildIterator__ctor_m948324009 (ChildIterator_t1144511930 * __this, ChildIterator_t1144511930 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.ChildIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * ChildIterator_Clone_m2661925690 (ChildIterator_t1144511930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ChildIterator::MoveNextCore()
extern "C"  bool ChildIterator_MoveNextCore_m906608335 (ChildIterator_t1144511930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.ChildIterator::get_Current()
extern "C"  XPathNavigator_t3981235968 * ChildIterator_get_Current_m2308780016 (ChildIterator_t1144511930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
