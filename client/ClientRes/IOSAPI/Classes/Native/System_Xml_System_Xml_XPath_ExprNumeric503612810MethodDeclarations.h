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

// System.Xml.XPath.ExprNumeric
struct ExprNumeric_t503612810;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_XPathResultType1521569578.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprNumeric::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprNumeric__ctor_m3911350394 (ExprNumeric_t503612810 * __this, Expression_t1283317256 * ___left0, Expression_t1283317256 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprNumeric::get_ReturnType()
extern "C"  int32_t ExprNumeric_get_ReturnType_m1393931981 (ExprNumeric_t503612810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprNumeric::Optimize()
extern "C"  Expression_t1283317256 * ExprNumeric_Optimize_m1689956997 (ExprNumeric_t503612810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprNumeric::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprNumeric_Evaluate_m1267314416 (ExprNumeric_t503612810 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
