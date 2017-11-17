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

// System.Xml.XPath.ParentIterator
struct ParentIterator_t1638759120;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_ParentIterator1638759120.h"

// System.Void System.Xml.XPath.ParentIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void ParentIterator__ctor_m2101420912 (ParentIterator_t1638759120 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ParentIterator::.ctor(System.Xml.XPath.ParentIterator,System.Boolean)
extern "C"  void ParentIterator__ctor_m196608558 (ParentIterator_t1638759120 * __this, ParentIterator_t1638759120 * ___other0, bool ___dummy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.ParentIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * ParentIterator_Clone_m520980768 (ParentIterator_t1638759120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ParentIterator::MoveNextCore()
extern "C"  bool ParentIterator_MoveNextCore_m3183336337 (ParentIterator_t1638759120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
