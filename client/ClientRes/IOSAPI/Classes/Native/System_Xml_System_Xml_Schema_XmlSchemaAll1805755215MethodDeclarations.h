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

// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t1805755215;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t395083109;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2050913741;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t880472818;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3365045970;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3364835593;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3786681597;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2050913741.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "System_Xml_System_Xml_Schema_XmlSchema880472818.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3365045970.h"
#include "mscorlib_System_Decimal724701077.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable3364835593.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3786681597.h"

// System.Void System.Xml.Schema.XmlSchemaAll::.ctor()
extern "C"  void XmlSchemaAll__ctor_m3828467903 (XmlSchemaAll_t1805755215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAll::get_Items()
extern "C"  XmlSchemaObjectCollection_t395083109 * XmlSchemaAll_get_Items_m1357727627 (XmlSchemaAll_t1805755215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAll::get_Emptiable()
extern "C"  bool XmlSchemaAll_get_Emptiable_m2764128769 (XmlSchemaAll_t1805755215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaAll_SetParent_m3319800143 (XmlSchemaAll_t1805755215 * __this, XmlSchemaObject_t2050913741 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAll::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAll_Compile_m4105658471 (XmlSchemaAll_t1805755215 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaAll::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3365045970 * XmlSchemaAll_GetOptimizedParticle_m2361839183 (XmlSchemaAll_t1805755215 * __this, bool ___isTop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAll::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAll_Validate_m231523442 (XmlSchemaAll_t1805755215 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ComputeEmptiable()
extern "C"  void XmlSchemaAll_ComputeEmptiable_m1576143917 (XmlSchemaAll_t1805755215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAll::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaAll_ValidateDerivationByRestriction_m3150099572 (XmlSchemaAll_t1805755215 * __this, XmlSchemaParticle_t3365045970 * ___baseParticle0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaAll::GetMinEffectiveTotalRange()
extern "C"  Decimal_t724701077  XmlSchemaAll_GetMinEffectiveTotalRange_m1912756572 (XmlSchemaAll_t1805755215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAll_ValidateUniqueParticleAttribution_m2930400307 (XmlSchemaAll_t1805755215 * __this, XmlSchemaObjectTable_t3364835593 * ___qnames0, ArrayList_t4252133567 * ___nsNames1, ValidationEventHandler_t1580700381 * ___h2, XmlSchema_t880472818 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAll_ValidateUniqueTypeAttribution_m3991295172 (XmlSchemaAll_t1805755215 * __this, XmlSchemaObjectTable_t3364835593 * ___labels0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAll System.Xml.Schema.XmlSchemaAll::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAll_t1805755215 * XmlSchemaAll_Read_m1097547562 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3786681597 * ___reader0, ValidationEventHandler_t1580700381 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
