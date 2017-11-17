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

// Mono.Xml.XPath.XPathParser
struct XPathParser_t1120482700;
// System.Xml.Xsl.IStaticXsltContext
struct IStaticXsltContext_t1565976071;
// System.Xml.XPath.Expression
struct Expression_t1283317256;
// System.String
struct String_t;
// System.Xml.XPath.NodeSet
struct NodeSet_t2895962396;
// System.Object
struct Il2CppObject;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.XPath.NodeTest
struct NodeTest_t2072055152;
// Mono.Xml.XPath.yyParser.yyInput
struct yyInput_t303513088;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XPath_Axes2027048019.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Void Mono.Xml.XPath.XPathParser::.ctor(System.Xml.Xsl.IStaticXsltContext)
extern "C"  void XPathParser__ctor_m4072307614 (XPathParser_t1120482700 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XPath.XPathParser::.cctor()
extern "C"  void XPathParser__cctor_m1502960585 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression Mono.Xml.XPath.XPathParser::Compile(System.String)
extern "C"  Expression_t1283317256 * XPathParser_Compile_m2523640411 (XPathParser_t1120482700 * __this, String_t* ___xpath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.NodeSet Mono.Xml.XPath.XPathParser::CreateNodeTest(System.Xml.XPath.Axes,System.Object,System.Collections.ArrayList)
extern "C"  NodeSet_t2895962396 * XPathParser_CreateNodeTest_m1312136243 (XPathParser_t1120482700 * __this, int32_t ___axis0, Il2CppObject * ___nodeTest1, ArrayList_t4252133567 * ___plist2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.NodeTest Mono.Xml.XPath.XPathParser::CreateNodeTest(System.Xml.XPath.Axes,System.Object)
extern "C"  NodeTest_t2072055152 * XPathParser_CreateNodeTest_m378335628 (XPathParser_t1120482700 * __this, int32_t ___axis0, Il2CppObject * ___test1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XPath.XPathParser::yyname(System.Int32)
extern "C"  String_t* XPathParser_yyname_m3722315205 (Il2CppObject * __this /* static, unused */, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.XPath.XPathParser::yyDefault(System.Object)
extern "C"  Il2CppObject * XPathParser_yyDefault_m3568576630 (XPathParser_t1120482700 * __this, Il2CppObject * ___first0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.XPath.XPathParser::yyparse(Mono.Xml.XPath.yyParser.yyInput)
extern "C"  Il2CppObject * XPathParser_yyparse_m1286535330 (XPathParser_t1120482700 * __this, Il2CppObject * ___yyLex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
