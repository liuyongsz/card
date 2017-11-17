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

// System.Xml.XPath.ExprSLASH2
struct ExprSLASH2_t1892232446;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.Xml.XPath.NodeSet
struct NodeSet_t2895962396;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_NodeSet2895962396.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprSLASH2::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.NodeSet)
extern "C"  void ExprSLASH2__ctor_m1398951532 (ExprSLASH2_t1892232446 * __this, Expression_t1283317256 * ___left0, NodeSet_t2895962396 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ExprSLASH2::.cctor()
extern "C"  void ExprSLASH2__cctor_m2618812045 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH2::Optimize()
extern "C"  Expression_t1283317256 * ExprSLASH2_Optimize_m437799169 (ExprSLASH2_t1892232446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprSLASH2::ToString()
extern "C"  String_t* ExprSLASH2_ToString_m3695217289 (ExprSLASH2_t1892232446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprSLASH2::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprSLASH2_Evaluate_m785907416 (ExprSLASH2_t1892232446 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprSLASH2::get_RequireSorting()
extern "C"  bool ExprSLASH2_get_RequireSorting_m4122098814 (ExprSLASH2_t1892232446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprSLASH2::get_Peer()
extern "C"  bool ExprSLASH2_get_Peer_m2563437705 (ExprSLASH2_t1892232446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprSLASH2::get_Subtree()
extern "C"  bool ExprSLASH2_get_Subtree_m4228423837 (ExprSLASH2_t1892232446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
