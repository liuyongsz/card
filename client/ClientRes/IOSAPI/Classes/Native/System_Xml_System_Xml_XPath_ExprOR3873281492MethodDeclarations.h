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

// System.Xml.XPath.ExprOR
struct ExprOR_t3873281492;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprOR::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprOR__ctor_m171195364 (ExprOR_t3873281492 * __this, Expression_t1283317256 * ___left0, Expression_t1283317256 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprOR::get_Operator()
extern "C"  String_t* ExprOR_get_Operator_m1637601894 (ExprOR_t3873281492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprOR::get_StaticValueAsBoolean()
extern "C"  bool ExprOR_get_StaticValueAsBoolean_m2222865922 (ExprOR_t3873281492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprOR::EvaluateBoolean(System.Xml.XPath.BaseIterator)
extern "C"  bool ExprOR_EvaluateBoolean_m3987370499 (ExprOR_t3873281492 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
