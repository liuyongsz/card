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

// System.Xml.XPath.XPathExpression
struct XPathExpression_t452251917;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;
// System.Xml.Xsl.IStaticXsltContext
struct IStaticXsltContext_t1565976071;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Xml.XPath.XPathExpression::.ctor()
extern "C"  void XPathExpression__ctor_m646821629 (XPathExpression_t452251917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathExpression System.Xml.XPath.XPathExpression::Compile(System.String)
extern "C"  XPathExpression_t452251917 * XPathExpression_Compile_m2615308077 (Il2CppObject * __this /* static, unused */, String_t* ___xpath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathExpression System.Xml.XPath.XPathExpression::Compile(System.String,System.Xml.IXmlNamespaceResolver,System.Xml.Xsl.IStaticXsltContext)
extern "C"  XPathExpression_t452251917 * XPathExpression_Compile_m808279410 (Il2CppObject * __this /* static, unused */, String_t* ___xpath0, Il2CppObject * ___nsmgr1, Il2CppObject * ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
