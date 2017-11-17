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

// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t654568461;
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

// System.Void System.Xml.Schema.XmlSchemaChoice::.ctor()
extern "C"  void XmlSchemaChoice__ctor_m3595221981 (XmlSchemaChoice_t654568461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaChoice::get_Items()
extern "C"  XmlSchemaObjectCollection_t395083109 * XmlSchemaChoice_get_Items_m2428646513 (XmlSchemaChoice_t654568461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaChoice_SetParent_m2416929477 (XmlSchemaChoice_t654568461 * __this, XmlSchemaObject_t2050913741 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaChoice::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaChoice_Compile_m1428300581 (XmlSchemaChoice_t654568461 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaChoice::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3365045970 * XmlSchemaChoice_GetOptimizedParticle_m1139600405 (XmlSchemaChoice_t654568461 * __this, bool ___isTop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaChoice::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaChoice_Validate_m324162824 (XmlSchemaChoice_t654568461 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaChoice::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaChoice_ValidateDerivationByRestriction_m3325339546 (XmlSchemaChoice_t654568461 * __this, XmlSchemaParticle_t3365045970 * ___baseParticle0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaChoice::GetMinEffectiveTotalRange()
extern "C"  Decimal_t724701077  XmlSchemaChoice_GetMinEffectiveTotalRange_m2853805448 (XmlSchemaChoice_t654568461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaChoice_ValidateUniqueParticleAttribution_m207481681 (XmlSchemaChoice_t654568461 * __this, XmlSchemaObjectTable_t3364835593 * ___qnames0, ArrayList_t4252133567 * ___nsNames1, ValidationEventHandler_t1580700381 * ___h2, XmlSchema_t880472818 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaChoice_ValidateUniqueTypeAttribution_m3683697346 (XmlSchemaChoice_t654568461 * __this, XmlSchemaObjectTable_t3364835593 * ___labels0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaChoice System.Xml.Schema.XmlSchemaChoice::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaChoice_t654568461 * XmlSchemaChoice_Read_m4280104562 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3786681597 * ___reader0, ValidationEventHandler_t1580700381 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
