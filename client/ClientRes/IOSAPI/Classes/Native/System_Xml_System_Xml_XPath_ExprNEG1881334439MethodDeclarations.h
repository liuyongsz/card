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

// System.Xml.XPath.ExprNEG
struct ExprNEG_t1881334439;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_XPathResultType1521569578.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprNEG::.ctor(System.Xml.XPath.Expression)
extern "C"  void ExprNEG__ctor_m1227531688 (ExprNEG_t1881334439 * __this, Expression_t1283317256 * ___expr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprNEG::ToString()
extern "C"  String_t* ExprNEG_ToString_m1779903146 (ExprNEG_t1881334439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprNEG::get_ReturnType()
extern "C"  int32_t ExprNEG_get_ReturnType_m3466200034 (ExprNEG_t1881334439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprNEG::Optimize()
extern "C"  Expression_t1283317256 * ExprNEG_Optimize_m3393993942 (ExprNEG_t1881334439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprNEG::get_Peer()
extern "C"  bool ExprNEG_get_Peer_m4256889460 (ExprNEG_t1881334439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprNEG::get_HasStaticValue()
extern "C"  bool ExprNEG_get_HasStaticValue_m3048864529 (ExprNEG_t1881334439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprNEG::get_StaticValueAsNumber()
extern "C"  double ExprNEG_get_StaticValueAsNumber_m2531581051 (ExprNEG_t1881334439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprNEG::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprNEG_Evaluate_m3677173463 (ExprNEG_t1881334439 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprNEG::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprNEG_EvaluateNumber_m1479147226 (ExprNEG_t1881334439 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
