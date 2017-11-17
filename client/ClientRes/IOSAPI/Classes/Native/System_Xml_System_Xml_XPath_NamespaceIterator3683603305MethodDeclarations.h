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

// System.Xml.XPath.NamespaceIterator
struct NamespaceIterator_t3683603305;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_NamespaceIterator3683603305.h"

// System.Void System.Xml.XPath.NamespaceIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void NamespaceIterator__ctor_m2441326611 (NamespaceIterator_t3683603305 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NamespaceIterator::.ctor(System.Xml.XPath.NamespaceIterator)
extern "C"  void NamespaceIterator__ctor_m1760225225 (NamespaceIterator_t3683603305 * __this, NamespaceIterator_t3683603305 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.NamespaceIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * NamespaceIterator_Clone_m2131372859 (NamespaceIterator_t3683603305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.NamespaceIterator::MoveNextCore()
extern "C"  bool NamespaceIterator_MoveNextCore_m469711504 (NamespaceIterator_t3683603305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
