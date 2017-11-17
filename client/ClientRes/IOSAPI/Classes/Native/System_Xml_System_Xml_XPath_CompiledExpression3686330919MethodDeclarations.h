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

// System.Xml.XPath.CompiledExpression
struct CompiledExpression_t3686330919;
// System.String
struct String_t;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t486731501;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XPath_Expression1283317256.h"
#include "System_Xml_System_Xml_XmlNamespaceManager486731501.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.CompiledExpression::.ctor(System.String,System.Xml.XPath.Expression)
extern "C"  void CompiledExpression__ctor_m2948117888 (CompiledExpression_t3686330919 * __this, String_t* ___raw0, Expression_t1283317256 * ___expr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.CompiledExpression::SetContext(System.Xml.XmlNamespaceManager)
extern "C"  void CompiledExpression_SetContext_m336161017 (CompiledExpression_t3686330919 * __this, XmlNamespaceManager_t486731501 * ___nsManager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.CompiledExpression::SetContext(System.Xml.IXmlNamespaceResolver)
extern "C"  void CompiledExpression_SetContext_m2374743453 (CompiledExpression_t3686330919 * __this, Il2CppObject * ___nsResolver0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.IXmlNamespaceResolver System.Xml.XPath.CompiledExpression::get_NamespaceManager()
extern "C"  Il2CppObject * CompiledExpression_get_NamespaceManager_m4093303772 (CompiledExpression_t3686330919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.CompiledExpression::EvaluateNodeSet(System.Xml.XPath.BaseIterator)
extern "C"  XPathNodeIterator_t3192332357 * CompiledExpression_EvaluateNodeSet_m4253810175 (CompiledExpression_t3686330919 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
