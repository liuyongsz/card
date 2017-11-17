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

// System.Xml.XPath.PredicateIterator
struct PredicateIterator_t2401536495;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_PredicateIterator2401536495.h"

// System.Void System.Xml.XPath.PredicateIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.Expression)
extern "C"  void PredicateIterator__ctor_m1086788680 (PredicateIterator_t2401536495 * __this, BaseIterator_t2454437973 * ___iter0, Expression_t1283317256 * ___pred1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.PredicateIterator::.ctor(System.Xml.XPath.PredicateIterator)
extern "C"  void PredicateIterator__ctor_m2693872265 (PredicateIterator_t2401536495 * __this, PredicateIterator_t2401536495 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.PredicateIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * PredicateIterator_Clone_m3419677725 (PredicateIterator_t2401536495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.PredicateIterator::MoveNextCore()
extern "C"  bool PredicateIterator_MoveNextCore_m4045382242 (PredicateIterator_t2401536495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.PredicateIterator::get_Current()
extern "C"  XPathNavigator_t3981235968 * PredicateIterator_get_Current_m1554018227 (PredicateIterator_t2401536495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.PredicateIterator::get_ReverseAxis()
extern "C"  bool PredicateIterator_get_ReverseAxis_m3815710583 (PredicateIterator_t2401536495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.PredicateIterator::ToString()
extern "C"  String_t* PredicateIterator_ToString_m1641570218 (PredicateIterator_t2401536495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
