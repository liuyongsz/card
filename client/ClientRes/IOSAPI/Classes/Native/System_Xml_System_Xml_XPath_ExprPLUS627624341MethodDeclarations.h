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

// System.Xml.XPath.ExprPLUS
struct ExprPLUS_t627624341;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprPLUS::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprPLUS__ctor_m590534703 (ExprPLUS_t627624341 * __this, Expression_t1283317256 * ___left0, Expression_t1283317256 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprPLUS::get_Operator()
extern "C"  String_t* ExprPLUS_get_Operator_m1560427547 (ExprPLUS_t627624341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprPLUS::get_StaticValueAsNumber()
extern "C"  double ExprPLUS_get_StaticValueAsNumber_m1021766317 (ExprPLUS_t627624341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprPLUS::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprPLUS_EvaluateNumber_m2717631946 (ExprPLUS_t627624341 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
