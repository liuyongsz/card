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

// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3364835593;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2050913741;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Xml.XmlParserContext
struct XmlParserContext_t2728039553;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t1096449895;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Xml.XmlAttribute
struct XmlAttribute_t175731005;
// System.Exception
struct Exception_t1927440687;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t880472818;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t395083109;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t530453212;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t491156493;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t4015859774;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t313318308;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t4086789226;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable3364835593.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2050913741.h"
#include "System_Xml_System_Xml_XmlQualifiedName1944712516.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_Mono_Xml_Schema_XsdAnySimpleType1096449895.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_XmlAttribute175731005.h"
#include "mscorlib_System_Exception1927440687.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe3165007540.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaForm1143227640.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcess74226324.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaUse3553149267.h"
#include "System_Xml_System_Xml_Schema_XmlSchema880472818.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectCollect395083109.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnyAttribute530453212.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAttributeGrou491156493.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAttribute4015859774.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaComplexType4086789226.h"

// System.Void System.Xml.Schema.XmlSchemaUtil::.cctor()
extern "C"  void XmlSchemaUtil__cctor_m1412025169 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::AddToTable(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.XmlSchemaObject,System.Xml.XmlQualifiedName,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaUtil_AddToTable_m3433820912 (Il2CppObject * __this /* static, unused */, XmlSchemaObjectTable_t3364835593 * ___table0, XmlSchemaObject_t2050913741 * ___obj1, XmlQualifiedName_t1944712516 * ___qname2, ValidationEventHandler_t1580700381 * ___h3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::CompileID(System.String,System.Xml.Schema.XmlSchemaObject,System.Collections.Hashtable,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaUtil_CompileID_m2180972366 (Il2CppObject * __this /* static, unused */, String_t* ___id0, XmlSchemaObject_t2050913741 * ___xso1, Hashtable_t909839986 * ___idCollection2, ValidationEventHandler_t1580700381 * ___h3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckAnyUri(System.String)
extern "C"  bool XmlSchemaUtil_CheckAnyUri_m2554037140 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNormalizedString(System.String)
extern "C"  bool XmlSchemaUtil_CheckNormalizedString_m2252987888 (Il2CppObject * __this /* static, unused */, String_t* ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNCName(System.String)
extern "C"  bool XmlSchemaUtil_CheckNCName_m3658558736 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckQName(System.Xml.XmlQualifiedName)
extern "C"  bool XmlSchemaUtil_CheckQName_m932858176 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t1944712516 * ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.Schema.XmlSchemaUtil::GetParserContext(System.Xml.XmlReader)
extern "C"  XmlParserContext_t2728039553 * XmlSchemaUtil_GetParserContext_m1478813848 (Il2CppObject * __this /* static, unused */, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsBuiltInDatatypeName(System.Xml.XmlQualifiedName)
extern "C"  bool XmlSchemaUtil_IsBuiltInDatatypeName_m125089262 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t1944712516 * ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreSchemaDatatypeEqual(Mono.Xml.Schema.XsdAnySimpleType,System.Object,Mono.Xml.Schema.XsdAnySimpleType,System.Object)
extern "C"  bool XmlSchemaUtil_AreSchemaDatatypeEqual_m3499765393 (Il2CppObject * __this /* static, unused */, XsdAnySimpleType_t1096449895 * ___st10, Il2CppObject * ___v11, XsdAnySimpleType_t1096449895 * ___st22, Il2CppObject * ___v23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsValidQName(System.String)
extern "C"  bool XmlSchemaUtil_IsValidQName_m3829826368 (Il2CppObject * __this /* static, unused */, String_t* ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Schema.XmlSchemaUtil::SplitList(System.String)
extern "C"  StringU5BU5D_t1642385972* XmlSchemaUtil_SplitList_m3602217835 (Il2CppObject * __this /* static, unused */, String_t* ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ReadUnhandledAttribute(System.Xml.XmlReader,System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaUtil_ReadUnhandledAttribute_m2075900843 (Il2CppObject * __this /* static, unused */, XmlReader_t3675626668 * ___reader0, XmlSchemaObject_t2050913741 * ___xso1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ParseWsdlArrayType(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C"  void XmlSchemaUtil_ParseWsdlArrayType_m3661063451 (Il2CppObject * __this /* static, unused */, XmlReader_t3675626668 * ___reader0, XmlAttribute_t175731005 * ___attr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::ReadBoolAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  bool XmlSchemaUtil_ReadBoolAttribute_m6534952 (Il2CppObject * __this /* static, unused */, XmlReader_t3675626668 * ___reader0, Exception_t1927440687 ** ___innerExcpetion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::ReadDerivationAttribute(System.Xml.XmlReader,System.Exception&,System.String,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  int32_t XmlSchemaUtil_ReadDerivationAttribute_m1638656916 (Il2CppObject * __this /* static, unused */, XmlReader_t3675626668 * ___reader0, Exception_t1927440687 ** ___innerExcpetion1, String_t* ___name2, int32_t ___allowed3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::AddFlag(System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  int32_t XmlSchemaUtil_AddFlag_m3735098180 (Il2CppObject * __this /* static, unused */, int32_t ___dst0, int32_t ___add1, int32_t ___allowed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaUtil::ReadFormAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadFormAttribute_m2203736706 (Il2CppObject * __this /* static, unused */, XmlReader_t3675626668 * ___reader0, Exception_t1927440687 ** ___innerExcpetion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaUtil::ReadProcessingAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadProcessingAttribute_m4064511207 (Il2CppObject * __this /* static, unused */, XmlReader_t3675626668 * ___reader0, Exception_t1927440687 ** ___innerExcpetion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaUtil::ReadUseAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadUseAttribute_m1739542962 (Il2CppObject * __this /* static, unused */, XmlReader_t3675626668 * ___reader0, Exception_t1927440687 ** ___innerExcpetion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ReadQNameAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  XmlQualifiedName_t1944712516 * XmlSchemaUtil_ReadQNameAttribute_m2139815095 (Il2CppObject * __this /* static, unused */, XmlReader_t3675626668 * ___reader0, Exception_t1927440687 ** ___innerEx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ToQName(System.Xml.XmlReader,System.String,System.Exception&)
extern "C"  XmlQualifiedName_t1944712516 * XmlSchemaUtil_ToQName_m3333358766 (Il2CppObject * __this /* static, unused */, XmlReader_t3675626668 * ___reader0, String_t* ___qnamestr1, Exception_t1927440687 ** ___innerEx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaUtil::ValidateAttributesResolved(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.XmlSchemaAnyAttribute&,System.Xml.Schema.XmlSchemaAttributeGroup,System.Boolean)
extern "C"  int32_t XmlSchemaUtil_ValidateAttributesResolved_m380170463 (Il2CppObject * __this /* static, unused */, XmlSchemaObjectTable_t3364835593 * ___attributesResolved0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, XmlSchemaObjectCollection_t395083109 * ___attributes3, XmlSchemaAnyAttribute_t530453212 * ___anyAttribute4, XmlSchemaAnyAttribute_t530453212 ** ___anyAttributeUse5, XmlSchemaAttributeGroup_t491156493 * ___redefined6, bool ___skipEquivalent7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreAttributesEqual(System.Xml.Schema.XmlSchemaAttribute,System.Xml.Schema.XmlSchemaAttribute)
extern "C"  bool XmlSchemaUtil_AreAttributesEqual_m3886926111 (Il2CppObject * __this /* static, unused */, XmlSchemaAttribute_t4015859774 * ___one0, XmlSchemaAttribute_t4015859774 * ___another1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaUtil::FindAttributeDeclaration(System.String,System.Xml.Schema.XmlSchemaSet,System.Xml.Schema.XmlSchemaComplexType,System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaObject_t2050913741 * XmlSchemaUtil_FindAttributeDeclaration_m3428239080 (Il2CppObject * __this /* static, unused */, String_t* ___ns0, XmlSchemaSet_t313318308 * ___schemas1, XmlSchemaComplexType_t4086789226 * ___cType2, XmlQualifiedName_t1944712516 * ___qname3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AttributeWildcardItemValid(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.XmlQualifiedName,System.String)
extern "C"  bool XmlSchemaUtil_AttributeWildcardItemValid_m4032379552 (Il2CppObject * __this /* static, unused */, XmlSchemaAnyAttribute_t530453212 * ___anyAttr0, XmlQualifiedName_t1944712516 * ___qname1, String_t* ___ns2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
