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

// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3365045970;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t880472818;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3364835593;
// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Decimal724701077.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "System_Xml_System_Xml_Schema_XmlSchema880472818.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3365045970.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable3364835593.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Void System.Xml.Schema.XmlSchemaParticle::.ctor()
extern "C"  void XmlSchemaParticle__ctor_m3924505810 (XmlSchemaParticle_t3365045970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::get_Empty()
extern "C"  XmlSchemaParticle_t3365045970 * XmlSchemaParticle_get_Empty_m3425435386 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MinOccursString()
extern "C"  String_t* XmlSchemaParticle_get_MinOccursString_m4057342960 (XmlSchemaParticle_t3365045970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccursString(System.String)
extern "C"  void XmlSchemaParticle_set_MinOccursString_m3041568289 (XmlSchemaParticle_t3365045970 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MaxOccursString()
extern "C"  String_t* XmlSchemaParticle_get_MaxOccursString_m365438406 (XmlSchemaParticle_t3365045970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccursString(System.String)
extern "C"  void XmlSchemaParticle_set_MaxOccursString_m1832574879 (XmlSchemaParticle_t3365045970 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MinOccurs()
extern "C"  Decimal_t724701077  XmlSchemaParticle_get_MinOccurs_m3507692149 (XmlSchemaParticle_t3365045970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccurs(System.Decimal)
extern "C"  void XmlSchemaParticle_set_MinOccurs_m3239146064 (XmlSchemaParticle_t3365045970 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MaxOccurs()
extern "C"  Decimal_t724701077  XmlSchemaParticle_get_MaxOccurs_m679464475 (XmlSchemaParticle_t3365045970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccurs(System.Decimal)
extern "C"  void XmlSchemaParticle_set_MaxOccurs_m2379698806 (XmlSchemaParticle_t3365045970 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMinOccurs()
extern "C"  Decimal_t724701077  XmlSchemaParticle_get_ValidatedMinOccurs_m690640807 (XmlSchemaParticle_t3365045970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMaxOccurs()
extern "C"  Decimal_t724701077  XmlSchemaParticle_get_ValidatedMaxOccurs_m1870857405 (XmlSchemaParticle_t3365045970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3365045970 * XmlSchemaParticle_GetOptimizedParticle_m1871672636 (XmlSchemaParticle_t3365045970 * __this, bool ___isTop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetShallowClone()
extern "C"  XmlSchemaParticle_t3365045970 * XmlSchemaParticle_GetShallowClone_m364707317 (XmlSchemaParticle_t3365045970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CompileOccurence(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_CompileOccurence_m2531407885 (XmlSchemaParticle_t3365045970 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
extern "C"  void XmlSchemaParticle_CopyInfo_m1114742570 (XmlSchemaParticle_t3365045970 * __this, XmlSchemaParticle_t3365045970 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateOccurenceRangeOK(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaParticle_ValidateOccurenceRangeOK_m35597825 (XmlSchemaParticle_t3365045970 * __this, XmlSchemaParticle_t3365045970 * ___other0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRange()
extern "C"  Decimal_t724701077  XmlSchemaParticle_GetMinEffectiveTotalRange_m687330041 (XmlSchemaParticle_t3365045970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRangeAllAndSequence()
extern "C"  Decimal_t724701077  XmlSchemaParticle_GetMinEffectiveTotalRangeAllAndSequence_m1304221946 (XmlSchemaParticle_t3365045970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateIsEmptiable()
extern "C"  bool XmlSchemaParticle_ValidateIsEmptiable_m516083941 (XmlSchemaParticle_t3365045970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaParticle_ValidateDerivationByRestriction_m231087025 (XmlSchemaParticle_t3365045970 * __this, XmlSchemaParticle_t3365045970 * ___baseParticle0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_ValidateUniqueParticleAttribution_m385884854 (XmlSchemaParticle_t3365045970 * __this, XmlSchemaObjectTable_t3364835593 * ___qnames0, ArrayList_t4252133567 * ___nsNames1, ValidationEventHandler_t1580700381 * ___h2, XmlSchema_t880472818 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_ValidateUniqueTypeAttribution_m3834210893 (XmlSchemaParticle_t3365045970 * __this, XmlSchemaObjectTable_t3364835593 * ___labels0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_CheckRecursion_m1307480516 (XmlSchemaParticle_t3365045970 * __this, int32_t ___depth0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaParticle_ParticleEquals_m3292208546 (XmlSchemaParticle_t3365045970 * __this, XmlSchemaParticle_t3365045970 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
