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

// System.Xml.XPath.NodeNameTest
struct NodeNameTest_t972157009;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Xsl.IStaticXsltContext
struct IStaticXsltContext_t1565976071;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Axes2027048019.h"
#include "System_Xml_System_Xml_XmlQualifiedName1944712516.h"
#include "System_Xml_System_Xml_XPath_NodeNameTest972157009.h"
#include "System_Xml_System_Xml_XPath_XPathNavigator3981235968.h"

// System.Void System.Xml.XPath.NodeNameTest::.ctor(System.Xml.XPath.Axes,System.Xml.XmlQualifiedName,System.Xml.Xsl.IStaticXsltContext)
extern "C"  void NodeNameTest__ctor_m3399929787 (NodeNameTest_t972157009 * __this, int32_t ___axis0, XmlQualifiedName_t1944712516 * ___name1, Il2CppObject * ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NodeNameTest::.ctor(System.Xml.XPath.NodeNameTest,System.Xml.XPath.Axes)
extern "C"  void NodeNameTest__ctor_m3503464117 (NodeNameTest_t972157009 * __this, NodeNameTest_t972157009 * ___source0, int32_t ___axis1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.NodeNameTest::ToString()
extern "C"  String_t* NodeNameTest_ToString_m2241085618 (NodeNameTest_t972157009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.NodeNameTest::Match(System.Xml.IXmlNamespaceResolver,System.Xml.XPath.XPathNavigator)
extern "C"  bool NodeNameTest_Match_m1141714964 (NodeNameTest_t972157009 * __this, Il2CppObject * ___nsm0, XPathNavigator_t3981235968 * ___nav1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
