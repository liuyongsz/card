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

// System.Xml.XPath.FunctionArguments
struct FunctionArguments_t2900945452;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XPath_FunctionArguments2900945452.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Void System.Xml.XPath.FunctionArguments::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.FunctionArguments)
extern "C"  void FunctionArguments__ctor_m3373139440 (FunctionArguments_t2900945452 * __this, Expression_t1283317256 * ___arg0, FunctionArguments_t2900945452 * ___tail1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.FunctionArguments::get_Arg()
extern "C"  Expression_t1283317256 * FunctionArguments_get_Arg_m1790516491 (FunctionArguments_t2900945452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.FunctionArguments System.Xml.XPath.FunctionArguments::get_Tail()
extern "C"  FunctionArguments_t2900945452 * FunctionArguments_get_Tail_m3947258239 (FunctionArguments_t2900945452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.FunctionArguments::ToArrayList(System.Collections.ArrayList)
extern "C"  void FunctionArguments_ToArrayList_m732226703 (FunctionArguments_t2900945452 * __this, ArrayList_t4252133567 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
