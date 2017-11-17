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

// Mono.Xml.Schema.XmlSchemaUri
struct XmlSchemaUri_t1295878664;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.Schema.UriValueType
struct UriValueType_t1626089757;
struct UriValueType_t1626089757_marshaled_pinvoke;
struct UriValueType_t1626089757_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_UriValueType1626089757.h"
#include "System_Xml_Mono_Xml_Schema_XmlSchemaUri1295878664.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Xml.Schema.UriValueType::.ctor(Mono.Xml.Schema.XmlSchemaUri)
extern "C"  void UriValueType__ctor_m1861705174 (UriValueType_t1626089757 * __this, XmlSchemaUri_t1295878664 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XmlSchemaUri System.Xml.Schema.UriValueType::get_Value()
extern "C"  XmlSchemaUri_t1295878664 * UriValueType_get_Value_m2081353401 (UriValueType_t1626089757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.UriValueType::Equals(System.Object)
extern "C"  bool UriValueType_Equals_m3564959542 (UriValueType_t1626089757 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.UriValueType::GetHashCode()
extern "C"  int32_t UriValueType_GetHashCode_m3676865518 (UriValueType_t1626089757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.UriValueType::ToString()
extern "C"  String_t* UriValueType_ToString_m1796386388 (UriValueType_t1626089757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.UriValueType::op_Equality(System.Xml.Schema.UriValueType,System.Xml.Schema.UriValueType)
extern "C"  bool UriValueType_op_Equality_m2997388051 (Il2CppObject * __this /* static, unused */, UriValueType_t1626089757  ___v10, UriValueType_t1626089757  ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct UriValueType_t1626089757;
struct UriValueType_t1626089757_marshaled_pinvoke;

extern "C" void UriValueType_t1626089757_marshal_pinvoke(const UriValueType_t1626089757& unmarshaled, UriValueType_t1626089757_marshaled_pinvoke& marshaled);
extern "C" void UriValueType_t1626089757_marshal_pinvoke_back(const UriValueType_t1626089757_marshaled_pinvoke& marshaled, UriValueType_t1626089757& unmarshaled);
extern "C" void UriValueType_t1626089757_marshal_pinvoke_cleanup(UriValueType_t1626089757_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct UriValueType_t1626089757;
struct UriValueType_t1626089757_marshaled_com;

extern "C" void UriValueType_t1626089757_marshal_com(const UriValueType_t1626089757& unmarshaled, UriValueType_t1626089757_marshaled_com& marshaled);
extern "C" void UriValueType_t1626089757_marshal_com_back(const UriValueType_t1626089757_marshaled_com& marshaled, UriValueType_t1626089757& unmarshaled);
extern "C" void UriValueType_t1626089757_marshal_com_cleanup(UriValueType_t1626089757_marshaled_com& marshaled);
