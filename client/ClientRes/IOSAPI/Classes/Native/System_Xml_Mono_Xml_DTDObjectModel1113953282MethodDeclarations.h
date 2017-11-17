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

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.String
struct String_t;
// System.Xml.XmlResolver
struct XmlResolver_t2024571559;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t3605390810;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t2224069626;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t243645429;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t1212505713;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t3496720022;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t228085060;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t545990600;
// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t411530619;
// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t146446906;
// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t247674167;
// System.Xml.XmlException[]
struct XmlExceptionU5BU5D_t3132981017;
// System.Xml.XmlException
struct XmlException_t4188277960;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t511376973;
// System.Xml.XmlParserContext
struct XmlParserContext_t2728039553;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable1345805268.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlResolver2024571559.h"
#include "System_Xml_System_Xml_XmlException4188277960.h"
#include "System_Xml_System_Xml_XmlParserContext2728039553.h"

// System.Void Mono.Xml.DTDObjectModel::.ctor(System.Xml.XmlNameTable)
extern "C"  void DTDObjectModel__ctor_m3188704577 (DTDObjectModel_t1113953282 * __this, XmlNameTable_t1345805268 * ___nameTable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_BaseURI()
extern "C"  String_t* DTDObjectModel_get_BaseURI_m3240621308 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_BaseURI(System.String)
extern "C"  void DTDObjectModel_set_BaseURI_m1921096741 (DTDObjectModel_t1113953282 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_IsStandalone()
extern "C"  bool DTDObjectModel_get_IsStandalone_m126317583 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_IsStandalone(System.Boolean)
extern "C"  void DTDObjectModel_set_IsStandalone_m2449287916 (DTDObjectModel_t1113953282 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_Name()
extern "C"  String_t* DTDObjectModel_get_Name_m2021234090 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_Name(System.String)
extern "C"  void DTDObjectModel_set_Name_m1613468709 (DTDObjectModel_t1113953282 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::get_NameTable()
extern "C"  XmlNameTable_t1345805268 * DTDObjectModel_get_NameTable_m1220238702 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_PublicId()
extern "C"  String_t* DTDObjectModel_get_PublicId_m1500149869 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_PublicId(System.String)
extern "C"  void DTDObjectModel_set_PublicId_m1395674136 (DTDObjectModel_t1113953282 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_SystemId()
extern "C"  String_t* DTDObjectModel_get_SystemId_m106311485 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_SystemId(System.String)
extern "C"  void DTDObjectModel_set_SystemId_m3945659740 (DTDObjectModel_t1113953282 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_InternalSubset()
extern "C"  String_t* DTDObjectModel_get_InternalSubset_m2342065814 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubset(System.String)
extern "C"  void DTDObjectModel_set_InternalSubset_m3179625687 (DTDObjectModel_t1113953282 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_InternalSubsetHasPEReference()
extern "C"  bool DTDObjectModel_get_InternalSubsetHasPEReference_m970176805 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubsetHasPEReference(System.Boolean)
extern "C"  void DTDObjectModel_set_InternalSubsetHasPEReference_m525536928 (DTDObjectModel_t1113953282 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LineNumber()
extern "C"  int32_t DTDObjectModel_get_LineNumber_m117361963 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LineNumber(System.Int32)
extern "C"  void DTDObjectModel_set_LineNumber_m3202936032 (DTDObjectModel_t1113953282 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LinePosition()
extern "C"  int32_t DTDObjectModel_get_LinePosition_m3142029513 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LinePosition(System.Int32)
extern "C"  void DTDObjectModel_set_LinePosition_m1097996678 (DTDObjectModel_t1113953282 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::ResolveEntity(System.String)
extern "C"  String_t* DTDObjectModel_ResolveEntity_m1494500845 (DTDObjectModel_t1113953282 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::get_Resolver()
extern "C"  XmlResolver_t2024571559 * DTDObjectModel_get_Resolver_m3839048542 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void DTDObjectModel_set_XmlResolver_m1066414750 (DTDObjectModel_t1113953282 * __this, XmlResolver_t2024571559 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable Mono.Xml.DTDObjectModel::get_ExternalResources()
extern "C"  Hashtable_t909839986 * DTDObjectModel_get_ExternalResources_m2164608555 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::get_Factory()
extern "C"  DTDAutomataFactory_t3605390810 * DTDObjectModel_get_Factory_m20367355 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::get_ElementDecls()
extern "C"  DTDElementDeclarationCollection_t2224069626 * DTDObjectModel_get_ElementDecls_m2565187196 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::get_AttListDecls()
extern "C"  DTDAttListDeclarationCollection_t243645429 * DTDObjectModel_get_AttListDecls_m1461816028 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_EntityDecls()
extern "C"  DTDEntityDeclarationCollection_t1212505713 * DTDObjectModel_get_EntityDecls_m3681757084 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_PEDecls()
extern "C"  DTDParameterEntityDeclarationCollection_t3496720022 * DTDObjectModel_get_PEDecls_m3887496881 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::get_NotationDecls()
extern "C"  DTDNotationDeclarationCollection_t228085060 * DTDObjectModel_get_NotationDecls_m660985134 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDObjectModel::get_RootAutomata()
extern "C"  DTDAutomata_t545990600 * DTDObjectModel_get_RootAutomata_m1044191387 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEmptyAutomata Mono.Xml.DTDObjectModel::get_Empty()
extern "C"  DTDEmptyAutomata_t411530619 * DTDObjectModel_get_Empty_m429932175 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAnyAutomata Mono.Xml.DTDObjectModel::get_Any()
extern "C"  DTDAnyAutomata_t146446906 * DTDObjectModel_get_Any_m2474853587 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDInvalidAutomata Mono.Xml.DTDObjectModel::get_Invalid()
extern "C"  DTDInvalidAutomata_t247674167 * DTDObjectModel_get_Invalid_m3133341143 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException[] Mono.Xml.DTDObjectModel::get_Errors()
extern "C"  XmlExceptionU5BU5D_t3132981017* DTDObjectModel_get_Errors_m1934285968 (DTDObjectModel_t1113953282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::AddError(System.Xml.XmlException)
extern "C"  void DTDObjectModel_AddError_m358190804 (DTDObjectModel_t1113953282 * __this, XmlException_t4188277960 * ___ex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::GenerateEntityAttributeText(System.String)
extern "C"  String_t* DTDObjectModel_GenerateEntityAttributeText_m3127264623 (DTDObjectModel_t1113953282 * __this, String_t* ___entityName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader Mono.Xml.DTDObjectModel::GenerateEntityContentReader(System.String,System.Xml.XmlParserContext)
extern "C"  XmlTextReader_t511376973 * DTDObjectModel_GenerateEntityContentReader_m650571468 (DTDObjectModel_t1113953282 * __this, String_t* ___entityName0, XmlParserContext_t2728039553 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
