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

// System.Xml.XPath.XPathFunctionNumber
struct XPathFunctionNumber_t1210619362;
// System.Xml.XPath.FunctionArguments
struct FunctionArguments_t2900945452;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_FunctionArguments2900945452.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.XPathFunctionNumber::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionNumber__ctor_m2280431139 (XPathFunctionNumber_t1210619362 * __this, FunctionArguments_t2900945452 * ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionNumber::Optimize()
extern "C"  Expression_t1283317256 * XPathFunctionNumber_Optimize_m2168727705 (XPathFunctionNumber_t1210619362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathFunctionNumber::get_HasStaticValue()
extern "C"  bool XPathFunctionNumber_get_HasStaticValue_m3540922994 (XPathFunctionNumber_t1210619362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.XPathFunctionNumber::get_StaticValueAsNumber()
extern "C"  double XPathFunctionNumber_get_StaticValueAsNumber_m3218526562 (XPathFunctionNumber_t1210619362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathFunctionNumber::get_Peer()
extern "C"  bool XPathFunctionNumber_get_Peer_m572033157 (XPathFunctionNumber_t1210619362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.XPathFunctionNumber::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * XPathFunctionNumber_Evaluate_m3881007260 (XPathFunctionNumber_t1210619362 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.XPathFunctionNumber::ToString()
extern "C"  String_t* XPathFunctionNumber_ToString_m841233809 (XPathFunctionNumber_t1210619362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
