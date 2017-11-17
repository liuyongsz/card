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

// System.Xml.XPath.ExprLiteral
struct ExprLiteral_t1691835634;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XPath_XPathResultType1521569578.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprLiteral::.ctor(System.String)
extern "C"  void ExprLiteral__ctor_m1514811498 (ExprLiteral_t1691835634 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprLiteral::ToString()
extern "C"  String_t* ExprLiteral_ToString_m3032984021 (ExprLiteral_t1691835634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprLiteral::get_ReturnType()
extern "C"  int32_t ExprLiteral_get_ReturnType_m2493754525 (ExprLiteral_t1691835634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprLiteral::get_Peer()
extern "C"  bool ExprLiteral_get_Peer_m92495169 (ExprLiteral_t1691835634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprLiteral::get_HasStaticValue()
extern "C"  bool ExprLiteral_get_HasStaticValue_m1269409794 (ExprLiteral_t1691835634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprLiteral::get_StaticValueAsString()
extern "C"  String_t* ExprLiteral_get_StaticValueAsString_m3725419350 (ExprLiteral_t1691835634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprLiteral::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprLiteral_Evaluate_m973856104 (ExprLiteral_t1691835634 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprLiteral::EvaluateString(System.Xml.XPath.BaseIterator)
extern "C"  String_t* ExprLiteral_EvaluateString_m2339807441 (ExprLiteral_t1691835634 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
