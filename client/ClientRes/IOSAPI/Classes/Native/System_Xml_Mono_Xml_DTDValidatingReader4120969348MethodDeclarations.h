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

// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t4120969348;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t3416770767;
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t2086920314;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t4082200141;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t2272374839;
// Mono.Xml.DTDValidatingReader/AttributeSlot
struct AttributeSlot_t1499247213;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.XmlParserContext
struct XmlParserContext_t2728039553;
// System.Object
struct Il2CppObject;
// System.Xml.XmlResolver
struct XmlResolver_t2024571559;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlValidatingReader3416770767.h"
#include "System_Xml_System_Xml_EntityHandling3960499440.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_Schema_XmlSeverityType3547578624.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaException4082200141.h"
#include "System_Xml_Mono_Xml_DTDAttListDeclaration2272374839.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "System_Xml_System_Xml_ReadState3138905245.h"
#include "System_Xml_System_Xml_XmlResolver2024571559.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"

// System.Void Mono.Xml.DTDValidatingReader::.ctor(System.Xml.XmlReader,System.Xml.XmlValidatingReader)
extern "C"  void DTDValidatingReader__ctor_m3045608250 (DTDValidatingReader_t4120969348 * __this, XmlReader_t3675626668 * ___reader0, XmlValidatingReader_t3416770767 * ___validatingReader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::System.Xml.IXmlLineInfo.HasLineInfo()
extern "C"  bool DTDValidatingReader_System_Xml_IXmlLineInfo_HasLineInfo_m3613651285 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::get_Source()
extern "C"  EntityResolvingXmlReader_t2086920314 * DTDValidatingReader_get_Source_m1575924790 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::get_DTD()
extern "C"  DTDObjectModel_t1113953282 * DTDValidatingReader_get_DTD_m3254992183 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml.DTDValidatingReader::get_EntityHandling()
extern "C"  int32_t DTDValidatingReader_get_EntityHandling_m3708468051 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C"  void DTDValidatingReader_set_EntityHandling_m436085094 (DTDValidatingReader_t4120969348 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::Close()
extern "C"  void DTDValidatingReader_Close_m1578495811 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::GetAttributeIndex(System.String)
extern "C"  int32_t DTDValidatingReader_GetAttributeIndex_m2212000513 (DTDValidatingReader_t4120969348 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::GetAttributeIndex(System.String,System.String)
extern "C"  int32_t DTDValidatingReader_GetAttributeIndex_m1406731159 (DTDValidatingReader_t4120969348 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.String)
extern "C"  String_t* DTDValidatingReader_GetAttribute_m3703127686 (DTDValidatingReader_t4120969348 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.String,System.String)
extern "C"  String_t* DTDValidatingReader_GetAttribute_m1474977286 (DTDValidatingReader_t4120969348 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::LookupNamespace(System.String)
extern "C"  String_t* DTDValidatingReader_LookupNamespace_m2639727731 (DTDValidatingReader_t4120969348 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::MoveToAttribute(System.Int32)
extern "C"  void DTDValidatingReader_MoveToAttribute_m1071262652 (DTDValidatingReader_t4120969348 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToAttribute(System.String)
extern "C"  bool DTDValidatingReader_MoveToAttribute_m407795309 (DTDValidatingReader_t4120969348 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToAttribute(System.String,System.String)
extern "C"  bool DTDValidatingReader_MoveToAttribute_m4238068323 (DTDValidatingReader_t4120969348 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToElement()
extern "C"  bool DTDValidatingReader_MoveToElement_m1029397573 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToFirstAttribute()
extern "C"  bool DTDValidatingReader_MoveToFirstAttribute_m3204174061 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToNextAttribute()
extern "C"  bool DTDValidatingReader_MoveToNextAttribute_m1388163668 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::Read()
extern "C"  bool DTDValidatingReader_Read_m2017057147 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ReadContent()
extern "C"  bool DTDValidatingReader_ReadContent_m257052186 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ProcessContent()
extern "C"  bool DTDValidatingReader_ProcessContent_m1151002511 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::FillAttributes()
extern "C"  void DTDValidatingReader_FillAttributes_m2732595853 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateText()
extern "C"  void DTDValidatingReader_ValidateText_m1125562600 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateWhitespaceNode()
extern "C"  void DTDValidatingReader_ValidateWhitespaceNode_m46201782 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::HandleError(System.String,System.Xml.Schema.XmlSeverityType)
extern "C"  void DTDValidatingReader_HandleError_m1374861996 (DTDValidatingReader_t4120969348 * __this, String_t* ___message0, int32_t ___severity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::HandleError(System.Xml.Schema.XmlSchemaException,System.Xml.Schema.XmlSeverityType)
extern "C"  void DTDValidatingReader_HandleError_m2947691888 (DTDValidatingReader_t4120969348 * __this, XmlSchemaException_t4082200141 * ___ex0, int32_t ___severity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateAttributes(Mono.Xml.DTDAttListDeclaration,System.Boolean)
extern "C"  void DTDValidatingReader_ValidateAttributes_m856560910 (DTDValidatingReader_t4120969348 * __this, DTDAttListDeclaration_t2272374839 * ___decl0, bool ___validate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDValidatingReader/AttributeSlot Mono.Xml.DTDValidatingReader::GetAttributeSlot()
extern "C"  AttributeSlot_t1499247213 * DTDValidatingReader_GetAttributeSlot_m330458815 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::DtdValidateAttributes(Mono.Xml.DTDAttListDeclaration,System.Boolean)
extern "C"  void DTDValidatingReader_DtdValidateAttributes_m1077202122 (DTDValidatingReader_t4120969348 * __this, DTDAttListDeclaration_t2272374839 * ___decl0, bool ___validate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ReadDoctype()
extern "C"  void DTDValidatingReader_ReadDoctype_m3281664971 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ProcessStartElement()
extern "C"  void DTDValidatingReader_ProcessStartElement_m2737775300 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ProcessEndElement()
extern "C"  void DTDValidatingReader_ProcessEndElement_m2725810051 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::VerifyDeclaredAttributes(Mono.Xml.DTDAttListDeclaration)
extern "C"  void DTDValidatingReader_VerifyDeclaredAttributes_m153125790 (DTDValidatingReader_t4120969348 * __this, DTDAttListDeclaration_t2272374839 * ___decl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ReadAttributeValue()
extern "C"  bool DTDValidatingReader_ReadAttributeValue_m673397930 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ResolveEntity()
extern "C"  void DTDValidatingReader_ResolveEntity_m1464129198 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_AttributeCount()
extern "C"  int32_t DTDValidatingReader_get_AttributeCount_m1770876089 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_BaseURI()
extern "C"  String_t* DTDValidatingReader_get_BaseURI_m619824688 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_CanResolveEntity()
extern "C"  bool DTDValidatingReader_get_CanResolveEntity_m3744367211 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_Depth()
extern "C"  int32_t DTDValidatingReader_get_Depth_m3770347795 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_EOF()
extern "C"  bool DTDValidatingReader_get_EOF_m2335717350 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_IsDefault()
extern "C"  bool DTDValidatingReader_get_IsDefault_m60103081 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_IsEmptyElement()
extern "C"  bool DTDValidatingReader_get_IsEmptyElement_m1131002213 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.String)
extern "C"  String_t* DTDValidatingReader_get_Item_m864387408 (DTDValidatingReader_t4120969348 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.String,System.String)
extern "C"  String_t* DTDValidatingReader_get_Item_m1946258832 (DTDValidatingReader_t4120969348 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_LineNumber()
extern "C"  int32_t DTDValidatingReader_get_LineNumber_m3798492071 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_LinePosition()
extern "C"  int32_t DTDValidatingReader_get_LinePosition_m2241952441 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_LocalName()
extern "C"  String_t* DTDValidatingReader_get_LocalName_m1242472599 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Name()
extern "C"  String_t* DTDValidatingReader_get_Name_m898270950 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_NamespaceURI()
extern "C"  String_t* DTDValidatingReader_get_NamespaceURI_m1687620118 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDValidatingReader::get_NameTable()
extern "C"  XmlNameTable_t1345805268 * DTDValidatingReader_get_NameTable_m1262217466 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.DTDValidatingReader::get_NodeType()
extern "C"  int32_t DTDValidatingReader_get_NodeType_m2198407568 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.DTDValidatingReader::get_ParserContext()
extern "C"  XmlParserContext_t2728039553 * DTDValidatingReader_get_ParserContext_m2096406778 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Prefix()
extern "C"  String_t* DTDValidatingReader_get_Prefix_m3070545061 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.DTDValidatingReader::get_ReadState()
extern "C"  int32_t DTDValidatingReader_get_ReadState_m1732578527 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDValidatingReader::get_SchemaType()
extern "C"  Il2CppObject * DTDValidatingReader_get_SchemaType_m425277996 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::FilterNormalization(System.String,System.String)
extern "C"  String_t* DTDValidatingReader_FilterNormalization_m2554435657 (DTDValidatingReader_t4120969348 * __this, String_t* ___attrName0, String_t* ___rawValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Value()
extern "C"  String_t* DTDValidatingReader_get_Value_m4258893064 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void DTDValidatingReader_set_XmlResolver_m4292169244 (DTDValidatingReader_t4120969348 * __this, XmlResolver_t2024571559 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.DTDValidatingReader::get_XmlSpace()
extern "C"  int32_t DTDValidatingReader_get_XmlSpace_m1941916375 (DTDValidatingReader_t4120969348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
