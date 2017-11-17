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

// System.Xml.XPath.AncestorIterator
struct AncestorIterator_t4023303433;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_AncestorIterator4023303433.h"

// System.Void System.Xml.XPath.AncestorIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void AncestorIterator__ctor_m3520000287 (AncestorIterator_t4023303433 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.AncestorIterator::.ctor(System.Xml.XPath.AncestorIterator)
extern "C"  void AncestorIterator__ctor_m605014909 (AncestorIterator_t4023303433 * __this, AncestorIterator_t4023303433 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.AncestorIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * AncestorIterator_Clone_m535636195 (AncestorIterator_t4023303433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.AncestorIterator::CollectResults()
extern "C"  void AncestorIterator_CollectResults_m2818523607 (AncestorIterator_t4023303433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.AncestorIterator::MoveNextCore()
extern "C"  bool AncestorIterator_MoveNextCore_m1937878680 (AncestorIterator_t4023303433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.AncestorIterator::get_ReverseAxis()
extern "C"  bool AncestorIterator_get_ReverseAxis_m3932825465 (AncestorIterator_t4023303433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XPath.AncestorIterator::get_Count()
extern "C"  int32_t AncestorIterator_get_Count_m4130082235 (AncestorIterator_t4023303433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
