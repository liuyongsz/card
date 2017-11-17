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

// System.Xml.XmlNotation
struct XmlNotation_t206561061;
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

// System.Void System.Xml.XmlNotation::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlNotation__ctor_m863705312 (XmlNotation_t206561061 * __this, String_t* ___localName0, String_t* ___prefix1, String_t* ___publicId2, String_t* ___systemId3, XmlDocument_t3649534162 * ___doc4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNotation::get_IsReadOnly()
extern "C"  bool XmlNotation_get_IsReadOnly_m2032481741 (XmlNotation_t206561061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_LocalName()
extern "C"  String_t* XmlNotation_get_LocalName_m2258279188 (XmlNotation_t206561061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_Name()
extern "C"  String_t* XmlNotation_get_Name_m3350021499 (XmlNotation_t206561061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNotation::get_NodeType()
extern "C"  int32_t XmlNotation_get_NodeType_m237777463 (XmlNotation_t206561061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNotation::CloneNode(System.Boolean)
extern "C"  XmlNode_t616554813 * XmlNotation_CloneNode_m3154570360 (XmlNotation_t206561061 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
