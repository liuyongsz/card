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

// System.Xml.XPath.DescendantIterator
struct DescendantIterator_t490680463;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_DescendantIterator490680463.h"

// System.Void System.Xml.XPath.DescendantIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void DescendantIterator__ctor_m409846733 (DescendantIterator_t490680463 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.DescendantIterator::.ctor(System.Xml.XPath.DescendantIterator)
extern "C"  void DescendantIterator__ctor_m2837112025 (DescendantIterator_t490680463 * __this, DescendantIterator_t490680463 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.DescendantIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * DescendantIterator_Clone_m892813865 (DescendantIterator_t490680463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.DescendantIterator::MoveNextCore()
extern "C"  bool DescendantIterator_MoveNextCore_m3521285866 (DescendantIterator_t490680463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
