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

// Mono.Xml.Schema.XsdValidatingReader
struct XsdValidatingReader_t1704923617;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t3720679969;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.XmlResolver
struct XmlResolver_t2024571559;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t313318308;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.XmlParserContext
struct XmlParserContext_t2728039553;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t486731501;
// System.Exception
struct Exception_t1927440687;
// System.Xml.Schema.XmlSchemaValidationException
struct XmlSchemaValidationException_t2387044366;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t2433337156;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1795078578;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t248156492;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1195946242;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t4086789226;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t4015859774;
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t3532015222;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t2980902100;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t1058613623;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t880472818;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlResolver2024571559.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"
#include "System_Xml_System_Xml_ValidationType1401987383.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "System_Xml_System_Xml_ReadState3138905245.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"
#include "mscorlib_System_Exception1927440687.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaValidationEx2387044366.h"
#include "System_Xml_System_Xml_XmlQualifiedName1944712516.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleType248156492.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDatatype1195946242.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe3165007540.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaComplexType4086789226.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAttribute4015859774.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyEntry3532015222.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaIdentityCons1058613623.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyTable2980902100.h"

// System.Void Mono.Xml.Schema.XsdValidatingReader::.ctor(System.Xml.XmlReader)
extern "C"  void XsdValidatingReader__ctor_m2816848109 (XsdValidatingReader_t1704923617 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::.cctor()
extern "C"  void XsdValidatingReader__cctor_m1053319682 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationContext Mono.Xml.Schema.XsdValidatingReader::get_Context()
extern "C"  XsdValidationContext_t3720679969 * XsdValidatingReader_get_Context_m1181067714 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::get_CurrentKeyFieldConsumers()
extern "C"  ArrayList_t4252133567 * XsdValidatingReader_get_CurrentKeyFieldConsumers_m511307765 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_XsiNilDepth()
extern "C"  int32_t XsdValidatingReader_get_XsiNilDepth_m1794585750 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XsdValidatingReader_set_XmlResolver_m644302998 (XsdValidatingReader_t1704923617 * __this, XmlResolver_t2024571559 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_Schemas(System.Xml.Schema.XmlSchemaSet)
extern "C"  void XsdValidatingReader_set_Schemas_m1699910151 (XsdValidatingReader_t1704923617 * __this, XmlSchemaSet_t313318308 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::get_SchemaType()
extern "C"  Il2CppObject * XsdValidatingReader_get_SchemaType_m1143042528 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::get_SourceReaderSchemaType()
extern "C"  Il2CppObject * XsdValidatingReader_get_SourceReaderSchemaType_m3259568594 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType Mono.Xml.Schema.XsdValidatingReader::get_ValidationType()
extern "C"  int32_t XsdValidatingReader_get_ValidationType_m591808099 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C"  void XsdValidatingReader_set_ValidationType_m2628954836 (XsdValidatingReader_t1704923617 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_AttributeCount()
extern "C"  int32_t XsdValidatingReader_get_AttributeCount_m1196147729 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_BaseURI()
extern "C"  String_t* XsdValidatingReader_get_BaseURI_m953752292 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_CanResolveEntity()
extern "C"  bool XsdValidatingReader_get_CanResolveEntity_m1392751727 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_Depth()
extern "C"  int32_t XsdValidatingReader_get_Depth_m981192479 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_EOF()
extern "C"  bool XsdValidatingReader_get_EOF_m1890240564 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_IsDefault()
extern "C"  bool XsdValidatingReader_get_IsDefault_m384222781 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_IsEmptyElement()
extern "C"  bool XsdValidatingReader_get_IsEmptyElement_m3384745305 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.String)
extern "C"  String_t* XsdValidatingReader_get_Item_m2576727580 (XsdValidatingReader_t1704923617 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.String,System.String)
extern "C"  String_t* XsdValidatingReader_get_Item_m3906282500 (XsdValidatingReader_t1704923617 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_LineNumber()
extern "C"  int32_t XsdValidatingReader_get_LineNumber_m2006587123 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_LinePosition()
extern "C"  int32_t XsdValidatingReader_get_LinePosition_m1090923281 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_LocalName()
extern "C"  String_t* XsdValidatingReader_get_LocalName_m1832176215 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Name()
extern "C"  String_t* XsdValidatingReader_get_Name_m1695020402 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_NamespaceURI()
extern "C"  String_t* XsdValidatingReader_get_NamespaceURI_m1170059634 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.Schema.XsdValidatingReader::get_NameTable()
extern "C"  XmlNameTable_t1345805268 * XsdValidatingReader_get_NameTable_m4153595654 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.Schema.XsdValidatingReader::get_NodeType()
extern "C"  int32_t XsdValidatingReader_get_NodeType_m1917435558 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.Schema.XsdValidatingReader::get_ParserContext()
extern "C"  XmlParserContext_t2728039553 * XsdValidatingReader_get_ParserContext_m2486267724 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager Mono.Xml.Schema.XsdValidatingReader::get_NamespaceManager()
extern "C"  XmlNamespaceManager_t486731501 * XsdValidatingReader_get_NamespaceManager_m91550246 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Prefix()
extern "C"  String_t* XsdValidatingReader_get_Prefix_m4133526301 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.Schema.XsdValidatingReader::get_ReadState()
extern "C"  int32_t XsdValidatingReader_get_ReadState_m2633947555 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Value()
extern "C"  String_t* XsdValidatingReader_get_Value_m1276725964 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.Schema.XsdValidatingReader::get_XmlSpace()
extern "C"  int32_t XsdValidatingReader_get_XmlSpace_m2682779171 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String)
extern "C"  void XsdValidatingReader_HandleError_m9342877 (XsdValidatingReader_t1704923617 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String,System.Exception)
extern "C"  void XsdValidatingReader_HandleError_m363187045 (XsdValidatingReader_t1704923617 * __this, String_t* ___error0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String,System.Exception,System.Boolean)
extern "C"  void XsdValidatingReader_HandleError_m3220822152 (XsdValidatingReader_t1704923617 * __this, String_t* ___error0, Exception_t1927440687 * ___innerException1, bool ___isWarning2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.Xml.Schema.XmlSchemaValidationException)
extern "C"  void XsdValidatingReader_HandleError_m1418278920 (XsdValidatingReader_t1704923617 * __this, XmlSchemaValidationException_t2387044366 * ___schemaException0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.Xml.Schema.XmlSchemaValidationException,System.Boolean)
extern "C"  void XsdValidatingReader_HandleError_m3406020971 (XsdValidatingReader_t1704923617 * __this, XmlSchemaValidationException_t2387044366 * ___schemaException0, bool ___isWarning1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdValidatingReader::FindElement(System.String,System.String)
extern "C"  XmlSchemaElement_t2433337156 * XsdValidatingReader_FindElement_m3081528320 (XsdValidatingReader_t1704923617 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType Mono.Xml.Schema.XsdValidatingReader::FindType(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaType_t1795078578 * XsdValidatingReader_FindType_m2233098252 (XsdValidatingReader_t1704923617 * __this, XmlQualifiedName_t1944712516 * ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateStartElementParticle()
extern "C"  void XsdValidatingReader_ValidateStartElementParticle_m2265552777 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndElementParticle()
extern "C"  void XsdValidatingReader_ValidateEndElementParticle_m1209316788 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateCharacters()
extern "C"  void XsdValidatingReader_ValidateCharacters_m2461191769 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndSimpleContent()
extern "C"  void XsdValidatingReader_ValidateEndSimpleContent_m170770303 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndSimpleContentCore()
extern "C"  void XsdValidatingReader_ValidateEndSimpleContentCore_m158428238 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStringValid(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype,System.String)
extern "C"  void XsdValidatingReader_AssessStringValid_m1229084264 (XsdValidatingReader_t1704923617 * __this, XmlSchemaSimpleType_t248156492 * ___st0, XmlSchemaDatatype_t1195946242 * ___dt1, String_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateRestrictedSimpleTypeValue(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype&,System.String)
extern "C"  void XsdValidatingReader_ValidateRestrictedSimpleTypeValue_m2809066085 (XsdValidatingReader_t1704923617 * __this, XmlSchemaSimpleType_t248156492 * ___st0, XmlSchemaDatatype_t1195946242 ** ___dt1, String_t* ___normalized2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::GetXsiType(System.String)
extern "C"  Il2CppObject * XsdValidatingReader_GetXsiType_m1975559572 (XsdValidatingReader_t1704923617 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessLocalTypeDerivationOK(System.Object,System.Object,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  void XsdValidatingReader_AssessLocalTypeDerivationOK_m1520444896 (XsdValidatingReader_t1704923617 * __this, Il2CppObject * ___xsiType0, Il2CppObject * ___baseType1, int32_t ___flag2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStartElementSchemaValidity()
extern "C"  void XsdValidatingReader_AssessStartElementSchemaValidity_m3956953704 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessElementLocallyValidElement(System.String)
extern "C"  void XsdValidatingReader_AssessElementLocallyValidElement_m3142873501 (XsdValidatingReader_t1704923617 * __this, String_t* ___xsiNilValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStartElementLocallyValidType(System.Object)
extern "C"  void XsdValidatingReader_AssessStartElementLocallyValidType_m3254538583 (XsdValidatingReader_t1704923617 * __this, Il2CppObject * ___schemaType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessElementLocallyValidComplexType(System.Xml.Schema.XmlSchemaComplexType)
extern "C"  void XsdValidatingReader_AssessElementLocallyValidComplexType_m1750516752 (XsdValidatingReader_t1704923617 * __this, XmlSchemaComplexType_t4086789226 * ___cType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessAttributeLocallyValid(System.Xml.Schema.XmlSchemaAttribute)
extern "C"  void XsdValidatingReader_AssessAttributeLocallyValid_m4243531920 (XsdValidatingReader_t1704923617 * __this, XmlSchemaAttribute_t4015859774 * ___attr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessAttributeLocallyValidUse(System.Xml.Schema.XmlSchemaAttribute)
extern "C"  void XsdValidatingReader_AssessAttributeLocallyValidUse_m3071771799 (XsdValidatingReader_t1704923617 * __this, XmlSchemaAttribute_t4015859774 * ___attr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessEndElementSchemaValidity()
extern "C"  void XsdValidatingReader_AssessEndElementSchemaValidity_m603390835 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndElementKeyConstraints()
extern "C"  void XsdValidatingReader_ValidateEndElementKeyConstraints_m288902099 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateKeySelectors()
extern "C"  void XsdValidatingReader_ValidateKeySelectors_m3250231594 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateKeyFields()
extern "C"  void XsdValidatingReader_ValidateKeyFields_m4191309861 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ProcessKeyEntry(Mono.Xml.Schema.XsdKeyEntry)
extern "C"  void XsdValidatingReader_ProcessKeyEntry_m3946425504 (XsdValidatingReader_t1704923617 * __this, XsdKeyEntry_t3532015222 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdKeyTable Mono.Xml.Schema.XsdValidatingReader::CreateNewKeyTable(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  XsdKeyTable_t2980902100 * XsdValidatingReader_CreateNewKeyTable_m2532340422 (XsdValidatingReader_t1704923617 * __this, XmlSchemaIdentityConstraint_t1058613623 * ___ident0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateSimpleContentIdentity(System.Xml.Schema.XmlSchemaDatatype,System.String)
extern "C"  void XsdValidatingReader_ValidateSimpleContentIdentity_m2503331531 (XsdValidatingReader_t1704923617 * __this, XmlSchemaDatatype_t1195946242 * ___dt0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::EndIdentityValidation(Mono.Xml.Schema.XsdKeyTable)
extern "C"  void XsdValidatingReader_EndIdentityValidation_m492349044 (XsdValidatingReader_t1704923617 * __this, XsdKeyTable_t2980902100 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::EndKeyrefValidation(Mono.Xml.Schema.XsdKeyTable,System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XsdValidatingReader_EndKeyrefValidation_m1654847604 (XsdValidatingReader_t1704923617 * __this, XsdKeyTable_t2980902100 * ___seq0, XmlSchemaIdentityConstraint_t1058613623 * ___targetIdent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::Close()
extern "C"  void XsdValidatingReader_Close_m1386997535 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.String)
extern "C"  String_t* XsdValidatingReader_GetAttribute_m3565307266 (XsdValidatingReader_t1704923617 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdValidatingReader::SplitQName(System.String)
extern "C"  XmlQualifiedName_t1944712516 * XsdValidatingReader_SplitQName_m3329678248 (XsdValidatingReader_t1704923617 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XsdValidatingReader_GetAttribute_m312263850 (XsdValidatingReader_t1704923617 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetDefaultAttribute(System.String,System.String)
extern "C"  String_t* XsdValidatingReader_GetDefaultAttribute_m3570766809 (XsdValidatingReader_t1704923617 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::FindDefaultAttribute(System.String,System.String)
extern "C"  int32_t XsdValidatingReader_FindDefaultAttribute_m647430089 (XsdValidatingReader_t1704923617 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::HasLineInfo()
extern "C"  bool XsdValidatingReader_HasLineInfo_m1437529503 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::LookupNamespace(System.String)
extern "C"  String_t* XsdValidatingReader_LookupNamespace_m2508134923 (XsdValidatingReader_t1704923617 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.Int32)
extern "C"  void XsdValidatingReader_MoveToAttribute_m991107930 (XsdValidatingReader_t1704923617 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.String)
extern "C"  bool XsdValidatingReader_MoveToAttribute_m38865249 (XsdValidatingReader_t1704923617 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XsdValidatingReader_MoveToAttribute_m2019291023 (XsdValidatingReader_t1704923617 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToDefaultAttribute(System.String,System.String)
extern "C"  bool XsdValidatingReader_MoveToDefaultAttribute_m4035478896 (XsdValidatingReader_t1704923617 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToElement()
extern "C"  bool XsdValidatingReader_MoveToElement_m3946379985 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToFirstAttribute()
extern "C"  bool XsdValidatingReader_MoveToFirstAttribute_m3952802825 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToNextAttribute()
extern "C"  bool XsdValidatingReader_MoveToNextAttribute_m3815838422 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema Mono.Xml.Schema.XsdValidatingReader::ReadExternalSchema(System.String)
extern "C"  XmlSchema_t880472818 * XsdValidatingReader_ReadExternalSchema_m2560685189 (XsdValidatingReader_t1704923617 * __this, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ExamineAdditionalSchema()
extern "C"  void XsdValidatingReader_ExamineAdditionalSchema_m3063904238 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::Read()
extern "C"  bool XsdValidatingReader_Read_m3160828759 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::ReadAttributeValue()
extern "C"  bool XsdValidatingReader_ReadAttributeValue_m4060832312 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ResolveEntity()
extern "C"  void XsdValidatingReader_ResolveEntity_m3447115112 (XsdValidatingReader_t1704923617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
