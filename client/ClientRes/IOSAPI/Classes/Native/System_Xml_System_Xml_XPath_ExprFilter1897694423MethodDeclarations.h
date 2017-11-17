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

// System.Xml.XPath.ExprFilter
struct ExprFilter_t1897694423;
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

// System.Void System.Xml.XPath.ExprFilter::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprFilter__ctor_m270632453 (ExprFilter_t1897694423 * __this, Expression_t1283317256 * ___expr0, Expression_t1283317256 * ___pred1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprFilter::Optimize()
extern "C"  Expression_t1283317256 * ExprFilter_Optimize_m847608970 (ExprFilter_t1897694423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprFilter::ToString()
extern "C"  String_t* ExprFilter_ToString_m106427444 (ExprFilter_t1897694423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprFilter::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprFilter_Evaluate_m3674294435 (ExprFilter_t1897694423 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprFilter::get_Peer()
extern "C"  bool ExprFilter_get_Peer_m2607609064 (ExprFilter_t1897694423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprFilter::get_Subtree()
extern "C"  bool ExprFilter_get_Subtree_m1199461472 (ExprFilter_t1897694423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
