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

// System.Xml.XPath.ExprVariable
struct ExprVariable_t3362236065;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Xsl.IStaticXsltContext
struct IStaticXsltContext_t1565976071;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlQualifiedName1944712516.h"
#include "System_Xml_System_Xml_XPath_XPathResultType1521569578.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.ExprVariable::.ctor(System.Xml.XmlQualifiedName,System.Xml.Xsl.IStaticXsltContext)
extern "C"  void ExprVariable__ctor_m2705806963 (ExprVariable_t3362236065 * __this, XmlQualifiedName_t1944712516 * ___name0, Il2CppObject * ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprVariable::ToString()
extern "C"  String_t* ExprVariable_ToString_m2972414094 (ExprVariable_t3362236065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprVariable::get_ReturnType()
extern "C"  int32_t ExprVariable_get_ReturnType_m1334800212 (ExprVariable_t3362236065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprVariable::GetReturnType(System.Xml.XPath.BaseIterator)
extern "C"  int32_t ExprVariable_GetReturnType_m182254999 (ExprVariable_t3362236065 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprVariable::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprVariable_Evaluate_m1000265021 (ExprVariable_t3362236065 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprVariable::get_Peer()
extern "C"  bool ExprVariable_get_Peer_m3451623602 (ExprVariable_t3362236065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
