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

// System.Xml.XPath.ExprBoolean
struct ExprBoolean_t2584142721;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_XPathResultType1521569578.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprBoolean::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprBoolean__ctor_m4187124049 (ExprBoolean_t2584142721 * __this, Expression_t1283317256 * ___left0, Expression_t1283317256 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprBoolean::Optimize()
extern "C"  Expression_t1283317256 * ExprBoolean_Optimize_m2205475132 (ExprBoolean_t2584142721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprBoolean::get_ReturnType()
extern "C"  int32_t ExprBoolean_get_ReturnType_m328331712 (ExprBoolean_t2584142721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprBoolean::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprBoolean_Evaluate_m2935262587 (ExprBoolean_t2584142721 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprBoolean::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprBoolean_EvaluateNumber_m3917453064 (ExprBoolean_t2584142721 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprBoolean::EvaluateString(System.Xml.XPath.BaseIterator)
extern "C"  String_t* ExprBoolean_EvaluateString_m4251131864 (ExprBoolean_t2584142721 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
