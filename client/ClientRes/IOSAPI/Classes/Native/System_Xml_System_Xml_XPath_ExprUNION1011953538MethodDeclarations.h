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

// System.Xml.XPath.ExprUNION
struct ExprUNION_t1011953538;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprUNION::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprUNION__ctor_m4264929410 (ExprUNION_t1011953538 * __this, Expression_t1283317256 * ___left0, Expression_t1283317256 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprUNION::Optimize()
extern "C"  Expression_t1283317256 * ExprUNION_Optimize_m2969677037 (ExprUNION_t1011953538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprUNION::ToString()
extern "C"  String_t* ExprUNION_ToString_m3627094365 (ExprUNION_t1011953538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprUNION::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprUNION_Evaluate_m2292994776 (ExprUNION_t1011953538 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprUNION::get_Peer()
extern "C"  bool ExprUNION_get_Peer_m2339909377 (ExprUNION_t1011953538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprUNION::get_Subtree()
extern "C"  bool ExprUNION_get_Subtree_m2570428941 (ExprUNION_t1011953538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
