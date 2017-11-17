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

// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t2433337156;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1795078578;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t395083109;
// System.Object
struct Il2CppObject;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
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
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3786681597;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe3165007540.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlQualifiedName1944712516.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaType1795078578.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2050913741.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "System_Xml_System_Xml_Schema_XmlSchema880472818.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectCollect395083109.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaElement2433337156.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3365045970.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable3364835593.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3786681597.h"

// System.Void System.Xml.Schema.XmlSchemaElement::.ctor()
extern "C"  void XmlSchemaElement__ctor_m3530184206 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::InitPostCompileInformations()
extern "C"  void XmlSchemaElement_InitPostCompileInformations_m2095138184 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_IsAbstract()
extern "C"  bool XmlSchemaElement_get_IsAbstract_m3909049771 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_IsAbstract(System.Boolean)
extern "C"  void XmlSchemaElement_set_IsAbstract_m2516028150 (XmlSchemaElement_t2433337156 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_Final(System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  void XmlSchemaElement_set_Final_m3607506864 (XmlSchemaElement_t2433337156 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_Name(System.String)
extern "C"  void XmlSchemaElement_set_Name_m3751587508 (XmlSchemaElement_t2433337156 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_IsNillable()
extern "C"  bool XmlSchemaElement_get_IsNillable_m1382235314 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_IsNillable(System.Boolean)
extern "C"  void XmlSchemaElement_set_IsNillable_m587666929 (XmlSchemaElement_t2433337156 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_RefName()
extern "C"  XmlQualifiedName_t1944712516 * XmlSchemaElement_get_RefName_m3845908026 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_SubstitutionGroup()
extern "C"  XmlQualifiedName_t1944712516 * XmlSchemaElement_get_SubstitutionGroup_m1030856340 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_SchemaTypeName()
extern "C"  XmlQualifiedName_t1944712516 * XmlSchemaElement_get_SchemaTypeName_m2002581378 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_SchemaTypeName(System.Xml.XmlQualifiedName)
extern "C"  void XmlSchemaElement_set_SchemaTypeName_m3226741187 (XmlSchemaElement_t2433337156 * __this, XmlQualifiedName_t1944712516 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaElement::get_SchemaType()
extern "C"  XmlSchemaType_t1795078578 * XmlSchemaElement_get_SchemaType_m2904856246 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_SchemaType(System.Xml.Schema.XmlSchemaType)
extern "C"  void XmlSchemaElement_set_SchemaType_m898956943 (XmlSchemaElement_t2433337156 * __this, XmlSchemaType_t1795078578 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaElement::get_Constraints()
extern "C"  XmlSchemaObjectCollection_t395083109 * XmlSchemaElement_get_Constraints_m1833727398 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_QualifiedName()
extern "C"  XmlQualifiedName_t1944712516 * XmlSchemaElement_get_QualifiedName_m545714459 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaElement::get_ElementType()
extern "C"  Il2CppObject * XmlSchemaElement_get_ElementType_m669728376 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::get_BlockResolved()
extern "C"  int32_t XmlSchemaElement_get_BlockResolved_m3247069828 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::get_FinalResolved()
extern "C"  int32_t XmlSchemaElement_get_FinalResolved_m2733026007 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_ActualIsNillable()
extern "C"  bool XmlSchemaElement_get_ActualIsNillable_m2480425372 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_ActualIsAbstract()
extern "C"  bool XmlSchemaElement_get_ActualIsAbstract_m1857515677 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaElement::get_ValidatedDefaultValue()
extern "C"  String_t* XmlSchemaElement_get_ValidatedDefaultValue_m607160910 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaElement::get_ValidatedFixedValue()
extern "C"  String_t* XmlSchemaElement_get_ValidatedFixedValue_m1216296347 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Schema.XmlSchemaElement::get_SubstitutingElements()
extern "C"  ArrayList_t4252133567 * XmlSchemaElement_get_SubstitutingElements_m2295551251 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaElement_SetParent_m1553543404 (XmlSchemaElement_t2433337156 * __this, XmlSchemaObject_t2050913741 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaElement::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaElement_Compile_m2213677028 (XmlSchemaElement_t2433337156 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaElement::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3365045970 * XmlSchemaElement_GetOptimizedParticle_m1214111100 (XmlSchemaElement_t2433337156 * __this, bool ___isTop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::AddSubstElementRecursively(System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.XmlSchemaElement)
extern "C"  void XmlSchemaElement_AddSubstElementRecursively_m1199170100 (XmlSchemaElement_t2433337156 * __this, XmlSchemaObjectCollection_t395083109 * ___col0, XmlSchemaElement_t2433337156 * ___el1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::FillSubstitutionElementInfo()
extern "C"  void XmlSchemaElement_FillSubstitutionElementInfo_m3833952442 (XmlSchemaElement_t2433337156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaElement::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaElement_Validate_m172454659 (XmlSchemaElement_t2433337156 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaElement_ParticleEquals_m3125180506 (XmlSchemaElement_t2433337156 * __this, XmlSchemaParticle_t3365045970 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaElement_ValidateDerivationByRestriction_m3998842039 (XmlSchemaElement_t2433337156 * __this, XmlSchemaParticle_t3365045970 * ___baseParticle0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::ValidateDerivationByRestrictionNameAndTypeOK(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaElement_ValidateDerivationByRestrictionNameAndTypeOK_m1423696853 (XmlSchemaElement_t2433337156 * __this, XmlSchemaElement_t2433337156 * ___baseElement0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaElement_CheckRecursion_m3379964600 (XmlSchemaElement_t2433337156 * __this, int32_t ___depth0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaElement_ValidateUniqueParticleAttribution_m1358359730 (XmlSchemaElement_t2433337156 * __this, XmlSchemaObjectTable_t3364835593 * ___qnames0, ArrayList_t4252133567 * ___nsNames1, ValidationEventHandler_t1580700381 * ___h2, XmlSchema_t880472818 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaElement_ValidateUniqueTypeAttribution_m567175707 (XmlSchemaElement_t2433337156 * __this, XmlSchemaObjectTable_t3364835593 * ___labels0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::ValidateElementDefaultValidImmediate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaElement_ValidateElementDefaultValidImmediate_m3372431859 (XmlSchemaElement_t2433337156 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchemaElement::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaElement_t2433337156 * XmlSchemaElement_Read_m3531503088 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3786681597 * ___reader0, ValidationEventHandler_t1580700381 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
