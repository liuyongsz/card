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

// System.Xml.Xsl.XsltContext
struct XsltContext_t2013960098;
// System.Xml.Xsl.IXsltContextVariable
struct IXsltContextVariable_t3385767465;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Xsl.IXsltContextFunction
struct IXsltContextFunction_t1467867933;
// System.Xml.XPath.XPathResultType[]
struct XPathResultTypeU5BU5D_t2966113519;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlQualifiedName1944712516.h"

// System.Xml.Xsl.IXsltContextVariable System.Xml.Xsl.XsltContext::ResolveVariable(System.Xml.XmlQualifiedName)
extern "C"  Il2CppObject * XsltContext_ResolveVariable_m2369667327 (XsltContext_t2013960098 * __this, XmlQualifiedName_t1944712516 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Xsl.IXsltContextFunction System.Xml.Xsl.XsltContext::ResolveFunction(System.Xml.XmlQualifiedName,System.Xml.XPath.XPathResultType[])
extern "C"  Il2CppObject * XsltContext_ResolveFunction_m50907708 (XsltContext_t2013960098 * __this, XmlQualifiedName_t1944712516 * ___name0, XPathResultTypeU5BU5D_t2966113519* ___argTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
