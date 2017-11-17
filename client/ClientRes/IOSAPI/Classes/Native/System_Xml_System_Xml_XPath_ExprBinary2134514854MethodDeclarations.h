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

// System.Xml.XPath.ExprBinary
struct ExprBinary_t2134514854;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"

// System.Void System.Xml.XPath.ExprBinary::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprBinary__ctor_m3916081124 (ExprBinary_t2134514854 * __this, Expression_t1283317256 * ___left0, Expression_t1283317256 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprBinary::Optimize()
extern "C"  Expression_t1283317256 * ExprBinary_Optimize_m556785865 (ExprBinary_t2134514854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprBinary::get_HasStaticValue()
extern "C"  bool ExprBinary_get_HasStaticValue_m3099588012 (ExprBinary_t2134514854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprBinary::ToString()
extern "C"  String_t* ExprBinary_ToString_m205434409 (ExprBinary_t2134514854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprBinary::get_Peer()
extern "C"  bool ExprBinary_get_Peer_m161504177 (ExprBinary_t2134514854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
