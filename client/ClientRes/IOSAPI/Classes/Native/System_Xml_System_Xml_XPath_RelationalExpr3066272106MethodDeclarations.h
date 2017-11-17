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

// System.Xml.XPath.RelationalExpr
struct RelationalExpr_t3066272106;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.RelationalExpr::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void RelationalExpr__ctor_m74187936 (RelationalExpr_t3066272106 * __this, Expression_t1283317256 * ___left0, Expression_t1283317256 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.RelationalExpr::get_StaticValueAsBoolean()
extern "C"  bool RelationalExpr_get_StaticValueAsBoolean_m503504662 (RelationalExpr_t3066272106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.RelationalExpr::EvaluateBoolean(System.Xml.XPath.BaseIterator)
extern "C"  bool RelationalExpr_EvaluateBoolean_m3606690965 (RelationalExpr_t3066272106 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.RelationalExpr::Compare(System.Double,System.Double,System.Boolean)
extern "C"  bool RelationalExpr_Compare_m1531853226 (RelationalExpr_t3066272106 * __this, double ___arg10, double ___arg21, bool ___fReverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
