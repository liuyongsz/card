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

// System.Xml.XPath.NodeTypeTest
struct NodeTypeTest_t383960256;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Axes2027048019.h"
#include "System_Xml_System_Xml_XPath_XPathNodeType817388867.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XPath_NodeTypeTest383960256.h"
#include "System_Xml_System_Xml_XPath_XPathNavigator3981235968.h"

// System.Void System.Xml.XPath.NodeTypeTest::.ctor(System.Xml.XPath.Axes)
extern "C"  void NodeTypeTest__ctor_m1541268008 (NodeTypeTest_t383960256 * __this, int32_t ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NodeTypeTest::.ctor(System.Xml.XPath.Axes,System.Xml.XPath.XPathNodeType)
extern "C"  void NodeTypeTest__ctor_m2299102808 (NodeTypeTest_t383960256 * __this, int32_t ___axis0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NodeTypeTest::.ctor(System.Xml.XPath.Axes,System.Xml.XPath.XPathNodeType,System.String)
extern "C"  void NodeTypeTest__ctor_m3056848320 (NodeTypeTest_t383960256 * __this, int32_t ___axis0, int32_t ___type1, String_t* ___param2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NodeTypeTest::.ctor(System.Xml.XPath.NodeTypeTest,System.Xml.XPath.Axes)
extern "C"  void NodeTypeTest__ctor_m2153027749 (NodeTypeTest_t383960256 * __this, NodeTypeTest_t383960256 * ___other0, int32_t ___axis1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.NodeTypeTest::ToString()
extern "C"  String_t* NodeTypeTest_ToString_m4056129163 (NodeTypeTest_t383960256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.NodeTypeTest::ToString(System.Xml.XPath.XPathNodeType)
extern "C"  String_t* NodeTypeTest_ToString_m1763359589 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.NodeTypeTest::Match(System.Xml.IXmlNamespaceResolver,System.Xml.XPath.XPathNavigator)
extern "C"  bool NodeTypeTest_Match_m426898727 (NodeTypeTest_t383960256 * __this, Il2CppObject * ___nsm0, XPathNavigator_t3981235968 * ___nav1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
