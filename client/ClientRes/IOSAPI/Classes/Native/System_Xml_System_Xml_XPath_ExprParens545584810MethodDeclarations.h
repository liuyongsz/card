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

// System.Xml.XPath.ExprParens
struct ExprParens_t545584810;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_XPathResultType1521569578.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprParens::.ctor(System.Xml.XPath.Expression)
extern "C"  void ExprParens__ctor_m1021086987 (ExprParens_t545584810 * __this, Expression_t1283317256 * ___expr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprParens::Optimize()
extern "C"  Expression_t1283317256 * ExprParens_Optimize_m1100045985 (ExprParens_t545584810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprParens::get_HasStaticValue()
extern "C"  bool ExprParens_get_HasStaticValue_m3092854544 (ExprParens_t545584810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprParens::get_StaticValue()
extern "C"  Il2CppObject * ExprParens_get_StaticValue_m2479353285 (ExprParens_t545584810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprParens::get_StaticValueAsString()
extern "C"  String_t* ExprParens_get_StaticValueAsString_m719334750 (ExprParens_t545584810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprParens::get_StaticValueAsNumber()
extern "C"  double ExprParens_get_StaticValueAsNumber_m400950398 (ExprParens_t545584810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprParens::get_StaticValueAsBoolean()
extern "C"  bool ExprParens_get_StaticValueAsBoolean_m623097110 (ExprParens_t545584810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprParens::ToString()
extern "C"  String_t* ExprParens_ToString_m2502050489 (ExprParens_t545584810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprParens::get_ReturnType()
extern "C"  int32_t ExprParens_get_ReturnType_m2192683405 (ExprParens_t545584810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprParens::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprParens_Evaluate_m1322745176 (ExprParens_t545584810 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprParens::get_Peer()
extern "C"  bool ExprParens_get_Peer_m3294753201 (ExprParens_t545584810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
