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

// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3786681597;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "System_Xml_System_Xml_ReadState3138905245.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Xml.Schema.XmlSchemaReader::.ctor(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaReader__ctor_m4192155307 (XmlSchemaReader_t3786681597 * __this, XmlReader_t3675626668 * ___reader0, ValidationEventHandler_t1580700381 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_FullName()
extern "C"  String_t* XmlSchemaReader_get_FullName_m1933600023 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.Schema.XmlSchemaReader::get_Reader()
extern "C"  XmlReader_t3675626668 * XmlSchemaReader_get_Reader_m2520404132 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::RaiseInvalidElementError()
extern "C"  void XmlSchemaReader_RaiseInvalidElementError_m3856609272 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::ReadNextElement()
extern "C"  bool XmlSchemaReader_ReadNextElement_m4053525544 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::SkipToEnd()
extern "C"  void XmlSchemaReader_SkipToEnd_m1890693490 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::HasLineInfo()
extern "C"  bool XmlSchemaReader_HasLineInfo_m3355753741 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_LineNumber()
extern "C"  int32_t XmlSchemaReader_get_LineNumber_m2459495381 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_LinePosition()
extern "C"  int32_t XmlSchemaReader_get_LinePosition_m1190681987 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_AttributeCount()
extern "C"  int32_t XmlSchemaReader_get_AttributeCount_m2363946383 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_BaseURI()
extern "C"  String_t* XmlSchemaReader_get_BaseURI_m3594469850 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_CanResolveEntity()
extern "C"  bool XmlSchemaReader_get_CanResolveEntity_m1203436701 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_Depth()
extern "C"  int32_t XmlSchemaReader_get_Depth_m3514966497 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_EOF()
extern "C"  bool XmlSchemaReader_get_EOF_m3835110890 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_HasAttributes()
extern "C"  bool XmlSchemaReader_get_HasAttributes_m1650190847 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_IsDefault()
extern "C"  bool XmlSchemaReader_get_IsDefault_m1618827787 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_IsEmptyElement()
extern "C"  bool XmlSchemaReader_get_IsEmptyElement_m3735103463 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Item(System.String)
extern "C"  String_t* XmlSchemaReader_get_Item_m2580254982 (XmlSchemaReader_t3786681597 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Item(System.String,System.String)
extern "C"  String_t* XmlSchemaReader_get_Item_m1032085806 (XmlSchemaReader_t3786681597 * __this, String_t* ___name0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_LocalName()
extern "C"  String_t* XmlSchemaReader_get_LocalName_m1902760577 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Name()
extern "C"  String_t* XmlSchemaReader_get_Name_m3650628644 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_NamespaceURI()
extern "C"  String_t* XmlSchemaReader_get_NamespaceURI_m1196551984 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaReader::get_NameTable()
extern "C"  XmlNameTable_t1345805268 * XmlSchemaReader_get_NameTable_m3322480368 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.Schema.XmlSchemaReader::get_NodeType()
extern "C"  int32_t XmlSchemaReader_get_NodeType_m1905650660 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Prefix()
extern "C"  String_t* XmlSchemaReader_get_Prefix_m2280850711 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.Schema.XmlSchemaReader::get_ReadState()
extern "C"  int32_t XmlSchemaReader_get_ReadState_m1354104529 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Value()
extern "C"  String_t* XmlSchemaReader_get_Value_m2922738774 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.Schema.XmlSchemaReader::get_XmlSpace()
extern "C"  int32_t XmlSchemaReader_get_XmlSpace_m1215449309 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::Close()
extern "C"  void XmlSchemaReader_Close_m115595393 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::Equals(System.Object)
extern "C"  bool XmlSchemaReader_Equals_m3193553574 (XmlSchemaReader_t3786681597 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.String)
extern "C"  String_t* XmlSchemaReader_GetAttribute_m3382102656 (XmlSchemaReader_t3786681597 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlSchemaReader_GetAttribute_m1363615848 (XmlSchemaReader_t3786681597 * __this, String_t* ___name0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::GetHashCode()
extern "C"  int32_t XmlSchemaReader_GetHashCode_m1668430134 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::LookupNamespace(System.String)
extern "C"  String_t* XmlSchemaReader_LookupNamespace_m1017283817 (XmlSchemaReader_t3786681597 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.Int32)
extern "C"  void XmlSchemaReader_MoveToAttribute_m3160088476 (XmlSchemaReader_t3786681597 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.String)
extern "C"  bool XmlSchemaReader_MoveToAttribute_m924365235 (XmlSchemaReader_t3786681597 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlSchemaReader_MoveToAttribute_m1080799773 (XmlSchemaReader_t3786681597 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToElement()
extern "C"  bool XmlSchemaReader_MoveToElement_m456207323 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToFirstAttribute()
extern "C"  bool XmlSchemaReader_MoveToFirstAttribute_m2455959043 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToNextAttribute()
extern "C"  bool XmlSchemaReader_MoveToNextAttribute_m4271188404 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::Read()
extern "C"  bool XmlSchemaReader_Read_m2554712789 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::ReadAttributeValue()
extern "C"  bool XmlSchemaReader_ReadAttributeValue_m4133885010 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadOuterXml()
extern "C"  String_t* XmlSchemaReader_ReadOuterXml_m3861259978 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ResolveEntity()
extern "C"  void XmlSchemaReader_ResolveEntity_m4011627670 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::Skip()
extern "C"  void XmlSchemaReader_Skip_m1320379710 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ToString()
extern "C"  String_t* XmlSchemaReader_ToString_m639841150 (XmlSchemaReader_t3786681597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
