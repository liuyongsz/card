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

// System.Xml.XPath.ExprMOD
struct ExprMOD_t3265849921;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprMOD::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprMOD__ctor_m487850911 (ExprMOD_t3265849921 * __this, Expression_t1283317256 * ___left0, Expression_t1283317256 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprMOD::get_Operator()
extern "C"  String_t* ExprMOD_get_Operator_m3512090839 (ExprMOD_t3265849921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprMOD::get_StaticValueAsNumber()
extern "C"  double ExprMOD_get_StaticValueAsNumber_m1067069709 (ExprMOD_t3265849921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprMOD::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprMOD_EvaluateNumber_m2545328220 (ExprMOD_t3265849921 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
