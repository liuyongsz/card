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

// System.Xml.XmlDocumentType
struct XmlDocumentType_t824160610;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t145210370;
// System.Xml.XmlNode
struct XmlNode_t616554813;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlDocument3649534162.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"

// System.Void System.Xml.XmlDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlDocumentType__ctor_m2953202689 (XmlDocumentType_t824160610 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, XmlDocument_t3649534162 * ___doc4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::.ctor(Mono.Xml.DTDObjectModel,System.Xml.XmlDocument)
extern "C"  void XmlDocumentType__ctor_m724609597 (XmlDocumentType_t824160610 * __this, DTDObjectModel_t1113953282 * ___dtd0, XmlDocument_t3649534162 * ___doc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::ImportFromDTD()
extern "C"  void XmlDocumentType_ImportFromDTD_m358818970 (XmlDocumentType_t824160610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::get_DTD()
extern "C"  DTDObjectModel_t1113953282 * XmlDocumentType_get_DTD_m376130801 (XmlDocumentType_t824160610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::get_Entities()
extern "C"  XmlNamedNodeMap_t145210370 * XmlDocumentType_get_Entities_m2541368360 (XmlDocumentType_t824160610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentType::get_IsReadOnly()
extern "C"  bool XmlDocumentType_get_IsReadOnly_m2761044508 (XmlDocumentType_t824160610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_LocalName()
extern "C"  String_t* XmlDocumentType_get_LocalName_m2658721173 (XmlDocumentType_t824160610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_Name()
extern "C"  String_t* XmlDocumentType_get_Name_m1997601270 (XmlDocumentType_t824160610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentType::get_NodeType()
extern "C"  int32_t XmlDocumentType_get_NodeType_m609032580 (XmlDocumentType_t824160610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentType::CloneNode(System.Boolean)
extern "C"  XmlNode_t616554813 * XmlDocumentType_CloneNode_m3684399769 (XmlDocumentType_t824160610 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
