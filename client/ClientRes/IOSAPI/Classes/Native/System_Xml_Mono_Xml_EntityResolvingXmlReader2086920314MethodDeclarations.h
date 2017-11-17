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

// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t2086920314;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.XmlParserContext
struct XmlParserContext_t2728039553;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "System_Xml_System_Xml_ReadState3138905245.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"
#include "System_Xml_Mono_Xml_EntityResolvingXmlReader2086920314.h"
#include "System_Xml_System_Xml_EntityHandling3960499440.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.EntityResolvingXmlReader::.ctor(System.Xml.XmlReader)
extern "C"  void EntityResolvingXmlReader__ctor_m4081375253 (EntityResolvingXmlReader_t2086920314 * __this, XmlReader_t3675626668 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::.ctor(System.Xml.XmlReader,System.Boolean)
extern "C"  void EntityResolvingXmlReader__ctor_m2532479544 (EntityResolvingXmlReader_t2086920314 * __this, XmlReader_t3675626668 * ___entityContainer0, bool ___inside_attr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t2728039553 * EntityResolvingXmlReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m4207147944 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader Mono.Xml.EntityResolvingXmlReader::get_Current()
extern "C"  XmlReader_t3675626668 * EntityResolvingXmlReader_get_Current_m1207278328 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_AttributeCount()
extern "C"  int32_t EntityResolvingXmlReader_get_AttributeCount_m2534042497 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_BaseURI()
extern "C"  String_t* EntityResolvingXmlReader_get_BaseURI_m387548276 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_CanResolveEntity()
extern "C"  bool EntityResolvingXmlReader_get_CanResolveEntity_m2304062335 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_Depth()
extern "C"  int32_t EntityResolvingXmlReader_get_Depth_m204534287 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_EOF()
extern "C"  bool EntityResolvingXmlReader_get_EOF_m596853596 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_IsDefault()
extern "C"  bool EntityResolvingXmlReader_get_IsDefault_m3431707821 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_IsEmptyElement()
extern "C"  bool EntityResolvingXmlReader_get_IsEmptyElement_m3876178249 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_LocalName()
extern "C"  String_t* EntityResolvingXmlReader_get_LocalName_m202903207 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Name()
extern "C"  String_t* EntityResolvingXmlReader_get_Name_m300815226 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_NamespaceURI()
extern "C"  String_t* EntityResolvingXmlReader_get_NamespaceURI_m594212394 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.EntityResolvingXmlReader::get_NameTable()
extern "C"  XmlNameTable_t1345805268 * EntityResolvingXmlReader_get_NameTable_m1964952086 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.EntityResolvingXmlReader::get_NodeType()
extern "C"  int32_t EntityResolvingXmlReader_get_NodeType_m1243937590 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::get_ParserContext()
extern "C"  XmlParserContext_t2728039553 * EntityResolvingXmlReader_get_ParserContext_m91365372 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Prefix()
extern "C"  String_t* EntityResolvingXmlReader_get_Prefix_m3034795757 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.EntityResolvingXmlReader::get_ReadState()
extern "C"  int32_t EntityResolvingXmlReader_get_ReadState_m114881587 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Value()
extern "C"  String_t* EntityResolvingXmlReader_get_Value_m1864646876 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.EntityResolvingXmlReader::get_XmlSpace()
extern "C"  int32_t EntityResolvingXmlReader_get_XmlSpace_m2361802163 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::CopyProperties(Mono.Xml.EntityResolvingXmlReader)
extern "C"  void EntityResolvingXmlReader_CopyProperties_m1254780317 (EntityResolvingXmlReader_t2086920314 * __this, EntityResolvingXmlReader_t2086920314 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml.EntityResolvingXmlReader::get_EntityHandling()
extern "C"  int32_t EntityResolvingXmlReader_get_EntityHandling_m1355589523 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C"  void EntityResolvingXmlReader_set_EntityHandling_m2608504836 (EntityResolvingXmlReader_t2086920314 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_LineNumber()
extern "C"  int32_t EntityResolvingXmlReader_get_LineNumber_m2574082147 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_LinePosition()
extern "C"  int32_t EntityResolvingXmlReader_get_LinePosition_m2829035169 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::Close()
extern "C"  void EntityResolvingXmlReader_Close_m3730726215 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::GetAttribute(System.String)
extern "C"  String_t* EntityResolvingXmlReader_GetAttribute_m4110928634 (EntityResolvingXmlReader_t2086920314 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::GetAttribute(System.String,System.String)
extern "C"  String_t* EntityResolvingXmlReader_GetAttribute_m4179805090 (EntityResolvingXmlReader_t2086920314 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::LookupNamespace(System.String)
extern "C"  String_t* EntityResolvingXmlReader_LookupNamespace_m1506311187 (EntityResolvingXmlReader_t2086920314 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.Int32)
extern "C"  void EntityResolvingXmlReader_MoveToAttribute_m21645234 (EntityResolvingXmlReader_t2086920314 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.String)
extern "C"  bool EntityResolvingXmlReader_MoveToAttribute_m1079139985 (EntityResolvingXmlReader_t2086920314 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.String,System.String)
extern "C"  bool EntityResolvingXmlReader_MoveToAttribute_m1731385663 (EntityResolvingXmlReader_t2086920314 * __this, String_t* ___localName0, String_t* ___namespaceName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToElement()
extern "C"  bool EntityResolvingXmlReader_MoveToElement_m2336989673 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToFirstAttribute()
extern "C"  bool EntityResolvingXmlReader_MoveToFirstAttribute_m2971755425 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToNextAttribute()
extern "C"  bool EntityResolvingXmlReader_MoveToNextAttribute_m2903288998 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::Read()
extern "C"  bool EntityResolvingXmlReader_Read_m2957367175 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::ReadAttributeValue()
extern "C"  bool EntityResolvingXmlReader_ReadAttributeValue_m1013742048 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::ResolveEntity()
extern "C"  void EntityResolvingXmlReader_ResolveEntity_m1486612928 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::DoResolveEntity()
extern "C"  void EntityResolvingXmlReader_DoResolveEntity_m1725661089 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::Skip()
extern "C"  void EntityResolvingXmlReader_Skip_m2060222404 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::HasLineInfo()
extern "C"  bool EntityResolvingXmlReader_HasLineInfo_m2632229423 (EntityResolvingXmlReader_t2086920314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
