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

// System.Xml.XmlDeclaration
struct XmlDeclaration_t1545359137;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// System.Xml.XmlNode
struct XmlNode_t616554813;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlDocument3649534162.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"

// System.Void System.Xml.XmlDeclaration::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlDeclaration__ctor_m3613373532 (XmlDeclaration_t1545359137 * __this, String_t* ___version0, String_t* ___encoding1, String_t* ___standalone2, XmlDocument_t3649534162 * ___doc3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Encoding()
extern "C"  String_t* XmlDeclaration_get_Encoding_m2665664307 (XmlDeclaration_t1545359137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Encoding(System.String)
extern "C"  void XmlDeclaration_set_Encoding_m3669560264 (XmlDeclaration_t1545359137 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_InnerText()
extern "C"  String_t* XmlDeclaration_get_InnerText_m1783541375 (XmlDeclaration_t1545359137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_LocalName()
extern "C"  String_t* XmlDeclaration_get_LocalName_m1424768510 (XmlDeclaration_t1545359137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Name()
extern "C"  String_t* XmlDeclaration_get_Name_m660448179 (XmlDeclaration_t1545359137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDeclaration::get_NodeType()
extern "C"  int32_t XmlDeclaration_get_NodeType_m2750696771 (XmlDeclaration_t1545359137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Standalone()
extern "C"  String_t* XmlDeclaration_get_Standalone_m2409785005 (XmlDeclaration_t1545359137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Standalone(System.String)
extern "C"  void XmlDeclaration_set_Standalone_m3263531570 (XmlDeclaration_t1545359137 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Value()
extern "C"  String_t* XmlDeclaration_get_Value_m730181699 (XmlDeclaration_t1545359137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Value(System.String)
extern "C"  void XmlDeclaration_set_Value_m555174288 (XmlDeclaration_t1545359137 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Version()
extern "C"  String_t* XmlDeclaration_get_Version_m1438414526 (XmlDeclaration_t1545359137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDeclaration::CloneNode(System.Boolean)
extern "C"  XmlNode_t616554813 * XmlDeclaration_CloneNode_m1712616536 (XmlDeclaration_t1545359137 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlDeclaration::SkipWhitespace(System.String,System.Int32)
extern "C"  int32_t XmlDeclaration_SkipWhitespace_m2134931711 (XmlDeclaration_t1545359137 * __this, String_t* ___input0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::ParseInput(System.String)
extern "C"  void XmlDeclaration_ParseInput_m1895505105 (XmlDeclaration_t1545359137 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
