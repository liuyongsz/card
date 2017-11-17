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

// System.Xml.XPath.ExprFunctionCall
struct ExprFunctionCall_t1376373777;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.XPath.FunctionArguments
struct FunctionArguments_t2900945452;
// System.Xml.Xsl.IStaticXsltContext
struct IStaticXsltContext_t1565976071;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathResultType[]
struct XPathResultTypeU5BU5D_t2966113519;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlQualifiedName1944712516.h"
#include "System_Xml_System_Xml_XPath_FunctionArguments2900945452.h"
#include "System_Xml_System_Xml_XPath_XPathResultType1521569578.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprFunctionCall::.ctor(System.Xml.XmlQualifiedName,System.Xml.XPath.FunctionArguments,System.Xml.Xsl.IStaticXsltContext)
extern "C"  void ExprFunctionCall__ctor_m2240543876 (ExprFunctionCall_t1376373777 * __this, XmlQualifiedName_t1944712516 * ___name0, FunctionArguments_t2900945452 * ___args1, Il2CppObject * ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprFunctionCall::Factory(System.Xml.XmlQualifiedName,System.Xml.XPath.FunctionArguments,System.Xml.Xsl.IStaticXsltContext)
extern "C"  Expression_t1283317256 * ExprFunctionCall_Factory_m3157012764 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t1944712516 * ___name0, FunctionArguments_t2900945452 * ___args1, Il2CppObject * ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprFunctionCall::ToString()
extern "C"  String_t* ExprFunctionCall_ToString_m1131155446 (ExprFunctionCall_t1376373777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprFunctionCall::get_ReturnType()
extern "C"  int32_t ExprFunctionCall_get_ReturnType_m2013438180 (ExprFunctionCall_t1376373777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprFunctionCall::GetReturnType(System.Xml.XPath.BaseIterator)
extern "C"  int32_t ExprFunctionCall_GetReturnType_m1982945361 (ExprFunctionCall_t1376373777 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType[] System.Xml.XPath.ExprFunctionCall::GetArgTypes(System.Xml.XPath.BaseIterator)
extern "C"  XPathResultTypeU5BU5D_t2966113519* ExprFunctionCall_GetArgTypes_m3510663456 (ExprFunctionCall_t1376373777 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprFunctionCall::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprFunctionCall_Evaluate_m3312131407 (ExprFunctionCall_t1376373777 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprFunctionCall::get_Peer()
extern "C"  bool ExprFunctionCall_get_Peer_m1678929818 (ExprFunctionCall_t1376373777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
