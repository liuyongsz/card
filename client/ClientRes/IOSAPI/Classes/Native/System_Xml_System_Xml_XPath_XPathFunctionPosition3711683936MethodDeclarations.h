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

// System.Xml.XPath.XPathFunctionPosition
struct XPathFunctionPosition_t3711683936;
// System.Xml.XPath.FunctionArguments
struct FunctionArguments_t2900945452;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_FunctionArguments2900945452.h"
#include "System_Xml_System_Xml_XPath_XPathResultType1521569578.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.XPathFunctionPosition::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionPosition__ctor_m3434234893 (XPathFunctionPosition_t3711683936 * __this, FunctionArguments_t2900945452 * ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionPosition::get_ReturnType()
extern "C"  int32_t XPathFunctionPosition_get_ReturnType_m3265774891 (XPathFunctionPosition_t3711683936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathFunctionPosition::get_Peer()
extern "C"  bool XPathFunctionPosition_get_Peer_m2851184435 (XPathFunctionPosition_t3711683936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.XPathFunctionPosition::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * XPathFunctionPosition_Evaluate_m1355803762 (XPathFunctionPosition_t3711683936 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.XPathFunctionPosition::ToString()
extern "C"  String_t* XPathFunctionPosition_ToString_m1517479791 (XPathFunctionPosition_t3711683936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
