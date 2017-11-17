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

// System.Xml.XPath.ExprMULT
struct ExprMULT_t1293289955;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprMULT::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprMULT__ctor_m2583341689 (ExprMULT_t1293289955 * __this, Expression_t1283317256 * ___left0, Expression_t1283317256 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprMULT::get_Operator()
extern "C"  String_t* ExprMULT_get_Operator_m466861633 (ExprMULT_t1293289955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprMULT::get_StaticValueAsNumber()
extern "C"  double ExprMULT_get_StaticValueAsNumber_m3570573559 (ExprMULT_t1293289955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprMULT::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprMULT_EvaluateNumber_m680500800 (ExprMULT_t1293289955 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
