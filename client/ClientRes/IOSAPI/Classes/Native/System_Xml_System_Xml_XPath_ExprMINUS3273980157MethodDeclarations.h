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

// System.Xml.XPath.ExprMINUS
struct ExprMINUS_t3273980157;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprMINUS::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprMINUS__ctor_m2297431477 (ExprMINUS_t3273980157 * __this, Expression_t1283317256 * ___left0, Expression_t1283317256 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprMINUS::get_Operator()
extern "C"  String_t* ExprMINUS_get_Operator_m128811897 (ExprMINUS_t3273980157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprMINUS::get_StaticValueAsNumber()
extern "C"  double ExprMINUS_get_StaticValueAsNumber_m2889888519 (ExprMINUS_t3273980157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprMINUS::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprMINUS_EvaluateNumber_m3559451588 (ExprMINUS_t3273980157 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
