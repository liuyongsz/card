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

// System.Xml.XPath.ExprSLASH
struct ExprSLASH_t1432925936;
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

// System.Void System.Xml.XPath.ExprSLASH::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.NodeSet)
extern "C"  void ExprSLASH__ctor_m1202842220 (ExprSLASH_t1432925936 * __this, Expression_t1283317256 * ___left0, NodeSet_t2895962396 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH::Optimize()
extern "C"  Expression_t1283317256 * ExprSLASH_Optimize_m738680151 (ExprSLASH_t1432925936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprSLASH::ToString()
extern "C"  String_t* ExprSLASH_ToString_m3585595435 (ExprSLASH_t1432925936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprSLASH::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprSLASH_Evaluate_m2650148646 (ExprSLASH_t1432925936 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprSLASH::get_RequireSorting()
extern "C"  bool ExprSLASH_get_RequireSorting_m668536682 (ExprSLASH_t1432925936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprSLASH::get_Peer()
extern "C"  bool ExprSLASH_get_Peer_m3087397935 (ExprSLASH_t1432925936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprSLASH::get_Subtree()
extern "C"  bool ExprSLASH_get_Subtree_m2302848663 (ExprSLASH_t1432925936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
