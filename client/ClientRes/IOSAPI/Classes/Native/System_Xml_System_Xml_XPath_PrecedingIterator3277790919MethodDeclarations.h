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

// System.Xml.XPath.PrecedingIterator
struct PrecedingIterator_t3277790919;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_PrecedingIterator3277790919.h"

// System.Void System.Xml.XPath.PrecedingIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void PrecedingIterator__ctor_m2120110569 (PrecedingIterator_t3277790919 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.PrecedingIterator::.ctor(System.Xml.XPath.PrecedingIterator)
extern "C"  void PrecedingIterator__ctor_m1194628873 (PrecedingIterator_t3277790919 * __this, PrecedingIterator_t3277790919 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.PrecedingIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * PrecedingIterator_Clone_m649964845 (PrecedingIterator_t3277790919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.PrecedingIterator::MoveNextCore()
extern "C"  bool PrecedingIterator_MoveNextCore_m2428394970 (PrecedingIterator_t3277790919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.PrecedingIterator::get_ReverseAxis()
extern "C"  bool PrecedingIterator_get_ReverseAxis_m3044266963 (PrecedingIterator_t3277790919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
