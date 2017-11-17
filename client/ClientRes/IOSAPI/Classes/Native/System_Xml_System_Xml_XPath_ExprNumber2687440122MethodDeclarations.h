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

// System.Xml.XPath.ExprNumber
struct ExprNumber_t2687440122;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_XPathResultType1521569578.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprNumber::.ctor(System.Double)
extern "C"  void ExprNumber__ctor_m2550519548 (ExprNumber_t2687440122 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprNumber::ToString()
extern "C"  String_t* ExprNumber_ToString_m2222077373 (ExprNumber_t2687440122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprNumber::get_ReturnType()
extern "C"  int32_t ExprNumber_get_ReturnType_m2604971689 (ExprNumber_t2687440122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprNumber::get_Peer()
extern "C"  bool ExprNumber_get_Peer_m2794274309 (ExprNumber_t2687440122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprNumber::get_HasStaticValue()
extern "C"  bool ExprNumber_get_HasStaticValue_m1864019152 (ExprNumber_t2687440122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprNumber::get_StaticValueAsNumber()
extern "C"  double ExprNumber_get_StaticValueAsNumber_m2317188914 (ExprNumber_t2687440122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprNumber::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprNumber_Evaluate_m1051780876 (ExprNumber_t2687440122 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprNumber::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprNumber_EvaluateNumber_m2844863115 (ExprNumber_t2687440122 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
