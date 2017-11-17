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

// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t3811767860;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t395083109;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3365045970;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t880472818;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3277730824;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaGroupBase3811767860.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3365045970.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "System_Xml_System_Xml_Schema_XmlSchema880472818.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny3277730824.h"

// System.Void System.Xml.Schema.XmlSchemaGroupBase::.ctor()
extern "C"  void XmlSchemaGroupBase__ctor_m2369132284 (XmlSchemaGroupBase_t3811767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaGroupBase::get_CompiledItems()
extern "C"  XmlSchemaObjectCollection_t395083109 * XmlSchemaGroupBase_get_CompiledItems_m1894191985 (XmlSchemaGroupBase_t3811767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CopyOptimizedItems(System.Xml.Schema.XmlSchemaGroupBase)
extern "C"  void XmlSchemaGroupBase_CopyOptimizedItems_m583365047 (XmlSchemaGroupBase_t3811767860 * __this, XmlSchemaGroupBase_t3811767860 * ___gb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaGroupBase_ParticleEquals_m4104163352 (XmlSchemaGroupBase_t3811767860 * __this, XmlSchemaParticle_t3365045970 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaGroupBase_CheckRecursion_m2590962666 (XmlSchemaGroupBase_t3811767860 * __this, int32_t ___depth0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateNSRecurseCheckCardinality(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateNSRecurseCheckCardinality_m1764454527 (XmlSchemaGroupBase_t3811767860 * __this, XmlSchemaAny_t3277730824 * ___any0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateRecurse(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateRecurse_m1636481350 (XmlSchemaGroupBase_t3811767860 * __this, XmlSchemaGroupBase_t3811767860 * ___baseGroup0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateSeqRecurseMapSumCommon(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean,System.Boolean,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateSeqRecurseMapSumCommon_m2049345283 (XmlSchemaGroupBase_t3811767860 * __this, XmlSchemaGroupBase_t3811767860 * ___baseGroup0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, bool ___isLax3, bool ___isMapAndSum4, bool ___raiseError5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
