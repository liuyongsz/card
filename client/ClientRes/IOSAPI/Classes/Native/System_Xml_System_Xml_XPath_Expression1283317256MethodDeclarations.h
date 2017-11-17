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

// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_XPathResultType1521569578.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Xml.XPath.Expression::.ctor()
extern "C"  void Expression__ctor_m725173434 (Expression_t1283317256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.Expression::GetReturnType(System.Xml.XPath.BaseIterator)
extern "C"  int32_t Expression_GetReturnType_m2273447408 (Expression_t1283317256 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.Expression::Optimize()
extern "C"  Expression_t1283317256 * Expression_Optimize_m345812027 (Expression_t1283317256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.Expression::get_HasStaticValue()
extern "C"  bool Expression_get_HasStaticValue_m3331905548 (Expression_t1283317256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.Expression::get_StaticValue()
extern "C"  Il2CppObject * Expression_get_StaticValue_m1871621471 (Expression_t1283317256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.Expression::get_StaticValueAsString()
extern "C"  String_t* Expression_get_StaticValueAsString_m3864069486 (Expression_t1283317256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber()
extern "C"  double Expression_get_StaticValueAsNumber_m2983544590 (Expression_t1283317256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.Expression::get_StaticValueAsBoolean()
extern "C"  bool Expression_get_StaticValueAsBoolean_m2155867646 (Expression_t1283317256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.Expression::get_StaticValueAsNavigator()
extern "C"  XPathNavigator_t3981235968 * Expression_get_StaticValueAsNavigator_m4265404257 (Expression_t1283317256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator)
extern "C"  BaseIterator_t2454437973 * Expression_EvaluateNodeSet_m1570730192 (Expression_t1283317256 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.Expression::GetReturnType(System.Object)
extern "C"  int32_t Expression_GetReturnType_m3843317410 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.Expression::get_Peer()
extern "C"  bool Expression_get_Peer_m1532922779 (Expression_t1283317256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double Expression_EvaluateNumber_m4286540905 (Expression_t1283317256 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator)
extern "C"  String_t* Expression_EvaluateString_m2960143547 (Expression_t1283317256 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.Expression::EvaluateBoolean(System.Xml.XPath.BaseIterator)
extern "C"  bool Expression_EvaluateBoolean_m801949587 (Expression_t1283317256 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.Expression::EvaluateAs(System.Xml.XPath.BaseIterator,System.Xml.XPath.XPathResultType)
extern "C"  Il2CppObject * Expression_EvaluateAs_m1036586339 (Expression_t1283317256 * __this, BaseIterator_t2454437973 * ___iter0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.Expression::get_RequireSorting()
extern "C"  bool Expression_get_RequireSorting_m3115888362 (Expression_t1283317256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
