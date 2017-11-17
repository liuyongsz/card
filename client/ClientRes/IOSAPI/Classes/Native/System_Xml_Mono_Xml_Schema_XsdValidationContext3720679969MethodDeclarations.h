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

// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t3720679969;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t2433337156;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaElement2433337156.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.Schema.XsdValidationContext::.ctor()
extern "C"  void XsdValidationContext__ctor_m1083311227 (XsdValidationContext_t3720679969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::get_XsiType()
extern "C"  Il2CppObject * XsdValidationContext_get_XsiType_m2960940933 (XsdValidationContext_t3720679969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::set_XsiType(System.Object)
extern "C"  void XsdValidationContext_set_XsiType_m1323721444 (XsdValidationContext_t3720679969 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdValidationContext::get_Element()
extern "C"  XmlSchemaElement_t2433337156 * XsdValidationContext_get_Element_m1425722632 (XsdValidationContext_t3720679969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::PushCurrentElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  void XsdValidationContext_PushCurrentElement_m3212453151 (XsdValidationContext_t3720679969 * __this, XmlSchemaElement_t2433337156 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::PopCurrentElement()
extern "C"  void XsdValidationContext_PopCurrentElement_m93102503 (XsdValidationContext_t3720679969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::get_ActualType()
extern "C"  Il2CppObject * XsdValidationContext_get_ActualType_m632539417 (XsdValidationContext_t3720679969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidationContext::get_IsInvalid()
extern "C"  bool XsdValidationContext_get_IsInvalid_m2329543925 (XsdValidationContext_t3720679969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::Clone()
extern "C"  Il2CppObject * XsdValidationContext_Clone_m1553360189 (XsdValidationContext_t3720679969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::EvaluateStartElement(System.String,System.String)
extern "C"  void XsdValidationContext_EvaluateStartElement_m4175491926 (XsdValidationContext_t3720679969 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidationContext::EvaluateEndElement()
extern "C"  bool XsdValidationContext_EvaluateEndElement_m2551440813 (XsdValidationContext_t3720679969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
