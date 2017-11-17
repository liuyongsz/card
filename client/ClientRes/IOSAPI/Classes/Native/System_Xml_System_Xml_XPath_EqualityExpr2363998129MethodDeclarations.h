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

// System.Xml.XPath.EqualityExpr
struct EqualityExpr_t2363998129;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.EqualityExpr::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression,System.Boolean)
extern "C"  void EqualityExpr__ctor_m1448348824 (EqualityExpr_t2363998129 * __this, Expression_t1283317256 * ___left0, Expression_t1283317256 * ___right1, bool ___trueVal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.EqualityExpr::get_StaticValueAsBoolean()
extern "C"  bool EqualityExpr_get_StaticValueAsBoolean_m865809557 (EqualityExpr_t2363998129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.EqualityExpr::EvaluateBoolean(System.Xml.XPath.BaseIterator)
extern "C"  bool EqualityExpr_EvaluateBoolean_m1080165300 (EqualityExpr_t2363998129 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
