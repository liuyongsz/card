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

// System.Xml.XmlTextReader
struct XmlTextReader_t3514170725;
// System.IO.Stream
struct Stream_t3255436806;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.String
struct String_t;
// System.Xml.XmlParserContext
struct XmlParserContext_t2728039553;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t511376973;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1578612233;
// System.Xml.XmlResolver
struct XmlResolver_t2024571559;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_Xml_System_Xml_XmlNameTable1345805268.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "System_Xml_System_Xml_XmlParserContext2728039553.h"
#include "System_Xml_Mono_Xml2_XmlTextReader511376973.h"
#include "System_Xml_System_Xml_ReadState3138905245.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"
#include "System_Xml_System_Xml_ConformanceLevel3761201363.h"
#include "System_Xml_System_Xml_XmlTextReader3514170725.h"
#include "System_Xml_System_Xml_EntityHandling3960499440.h"
#include "System_Xml_System_Xml_WhitespaceHandling3754063142.h"
#include "System_Xml_System_Xml_XmlResolver2024571559.h"

// System.Void System.Xml.XmlTextReader::.ctor(System.IO.Stream,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m2606967807 (XmlTextReader_t3514170725 * __this, Stream_t3255436806 * ___input0, XmlNameTable_t1345805268 * ___nt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m2818404075 (XmlTextReader_t3514170725 * __this, TextReader_t1561828458 * ___input0, XmlNameTable_t1345805268 * ___nt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m1046692209 (XmlTextReader_t3514170725 * __this, String_t* ___url0, Stream_t3255436806 * ___input1, XmlNameTable_t1345805268 * ___nt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m96591873 (XmlTextReader_t3514170725 * __this, String_t* ___url0, TextReader_t1561828458 * ___input1, XmlNameTable_t1345805268 * ___nt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C"  void XmlTextReader__ctor_m2282919614 (XmlTextReader_t3514170725 * __this, String_t* ___xmlFragment0, int32_t ___fragType1, XmlParserContext_t2728039553 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(Mono.Xml2.XmlTextReader,System.Boolean)
extern "C"  void XmlTextReader__ctor_m3758831050 (XmlTextReader_t3514170725 * __this, XmlTextReader_t511376973 * ___entityContainer0, bool ___insideAttribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t2728039553 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m1426092337 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlTextReader::get_Current()
extern "C"  XmlReader_t3675626668 * XmlTextReader_get_Current_m3589084287 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_AttributeCount()
extern "C"  int32_t XmlTextReader_get_AttributeCount_m1001059248 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_BaseURI()
extern "C"  String_t* XmlTextReader_get_BaseURI_m2982419183 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CanResolveEntity()
extern "C"  bool XmlTextReader_get_CanResolveEntity_m1527694286 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_Depth()
extern "C"  int32_t XmlTextReader_get_Depth_m748873622 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_EOF()
extern "C"  bool XmlTextReader_get_EOF_m1684972589 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsDefault()
extern "C"  bool XmlTextReader_get_IsDefault_m3021919442 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsEmptyElement()
extern "C"  bool XmlTextReader_get_IsEmptyElement_m3782446924 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_LocalName()
extern "C"  String_t* XmlTextReader_get_LocalName_m1651208486 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Name()
extern "C"  String_t* XmlTextReader_get_Name_m221688903 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_NamespaceURI()
extern "C"  String_t* XmlTextReader_get_NamespaceURI_m3796085121 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlTextReader::get_NameTable()
extern "C"  XmlNameTable_t1345805268 * XmlTextReader_get_NameTable_m2253726787 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType()
extern "C"  int32_t XmlTextReader_get_NodeType_m328447747 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::get_ParserContext()
extern "C"  XmlParserContext_t2728039553 * XmlTextReader_get_ParserContext_m3439535043 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Prefix()
extern "C"  String_t* XmlTextReader_get_Prefix_m1078406760 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState()
extern "C"  int32_t XmlTextReader_get_ReadState_m1321400188 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings()
extern "C"  XmlReaderSettings_t1578612233 * XmlTextReader_get_Settings_m3650863210 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Value()
extern "C"  String_t* XmlTextReader_get_Value_m1922999607 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlTextReader::get_XmlSpace()
extern "C"  int32_t XmlTextReader_get_XmlSpace_m411691670 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CharacterChecking()
extern "C"  bool XmlTextReader_get_CharacterChecking_m3375874784 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C"  void XmlTextReader_set_CharacterChecking_m912958969 (XmlTextReader_t3514170725 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CloseInput()
extern "C"  bool XmlTextReader_get_CloseInput_m2818556257 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CloseInput(System.Boolean)
extern "C"  void XmlTextReader_set_CloseInput_m3746594548 (XmlTextReader_t3514170725 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C"  void XmlTextReader_set_Conformance_m3248170723 (XmlTextReader_t3514170725 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C"  XmlResolver_t2024571559 * XmlTextReader_get_Resolver_m2282894011 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CopyProperties(System.Xml.XmlTextReader)
extern "C"  void XmlTextReader_CopyProperties_m563245497 (XmlTextReader_t3514170725 * __this, XmlTextReader_t3514170725 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling System.Xml.XmlTextReader::get_EntityHandling()
extern "C"  int32_t XmlTextReader_get_EntityHandling_m1838405564 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LineNumber()
extern "C"  int32_t XmlTextReader_get_LineNumber_m2626706892 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LinePosition()
extern "C"  int32_t XmlTextReader_get_LinePosition_m874032802 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_Namespaces()
extern "C"  bool XmlTextReader_get_Namespaces_m1948277805 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_Normalization()
extern "C"  bool XmlTextReader_get_Normalization_m4114164702 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Normalization(System.Boolean)
extern "C"  void XmlTextReader_set_Normalization_m3360837615 (XmlTextReader_t3514170725 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling System.Xml.XmlTextReader::get_WhitespaceHandling()
extern "C"  int32_t XmlTextReader_get_WhitespaceHandling_m1287983836 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C"  void XmlTextReader_set_WhitespaceHandling_m65663601 (XmlTextReader_t3514170725 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XmlTextReader_set_XmlResolver_m1816060921 (XmlTextReader_t3514170725 * __this, XmlResolver_t2024571559 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::SkipTextDeclaration()
extern "C"  void XmlTextReader_SkipTextDeclaration_m807582922 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Close()
extern "C"  void XmlTextReader_Close_m3997488826 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String)
extern "C"  String_t* XmlTextReader_GetAttribute_m367308401 (XmlTextReader_t3514170725 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlTextReader_GetAttribute_m3206364399 (XmlTextReader_t3514170725 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::LookupNamespace(System.String)
extern "C"  String_t* XmlTextReader_LookupNamespace_m2461338842 (XmlTextReader_t3514170725 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::MoveToAttribute(System.Int32)
extern "C"  void XmlTextReader_MoveToAttribute_m4154328907 (XmlTextReader_t3514170725 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String)
extern "C"  bool XmlTextReader_MoveToAttribute_m4282079054 (XmlTextReader_t3514170725 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlTextReader_MoveToAttribute_m4102925422 (XmlTextReader_t3514170725 * __this, String_t* ___localName0, String_t* ___namespaceName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToElement()
extern "C"  bool XmlTextReader_MoveToElement_m2457340348 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute()
extern "C"  bool XmlTextReader_MoveToFirstAttribute_m1946880260 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute()
extern "C"  bool XmlTextReader_MoveToNextAttribute_m2954530581 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::Read()
extern "C"  bool XmlTextReader_Read_m3231167046 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::ReadAttributeValue()
extern "C"  bool XmlTextReader_ReadAttributeValue_m3307727945 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::ResolveEntity()
extern "C"  void XmlTextReader_ResolveEntity_m1075836727 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CloseEntity()
extern "C"  void XmlTextReader_CloseEntity_m118217717 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Skip()
extern "C"  void XmlTextReader_Skip_m2709499665 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.Xml.XmlTextReader::GetRemainder()
extern "C"  TextReader_t1561828458 * XmlTextReader_GetRemainder_m1012190985 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::HasLineInfo()
extern "C"  bool XmlTextReader_HasLineInfo_m193578174 (XmlTextReader_t3514170725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
