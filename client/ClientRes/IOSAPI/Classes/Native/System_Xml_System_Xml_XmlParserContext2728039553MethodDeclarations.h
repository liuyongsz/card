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

// System.Xml.XmlParserContext
struct XmlParserContext_t2728039553;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t486731501;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t663144255;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable1345805268.h"
#include "System_Xml_System_Xml_XmlNamespaceManager486731501.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"

// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.Xml.XmlSpace)
extern "C"  void XmlParserContext__ctor_m2482392090 (XmlParserContext_t2728039553 * __this, XmlNameTable_t1345805268 * ___nt0, XmlNamespaceManager_t486731501 * ___nsMgr1, String_t* ___xmlLang2, int32_t ___xmlSpace3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.String,System.String,System.String,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C"  void XmlParserContext__ctor_m1851544767 (XmlParserContext_t2728039553 * __this, XmlNameTable_t1345805268 * ___nt0, XmlNamespaceManager_t486731501 * ___nsMgr1, String_t* ___docTypeName2, String_t* ___pubId3, String_t* ___sysId4, String_t* ___internalSubset5, String_t* ___baseURI6, String_t* ___xmlLang7, int32_t ___xmlSpace8, Encoding_t663144255 * ___enc9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,Mono.Xml.DTDObjectModel,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C"  void XmlParserContext__ctor_m326700379 (XmlParserContext_t2728039553 * __this, XmlNameTable_t1345805268 * ___nt0, XmlNamespaceManager_t486731501 * ___nsMgr1, DTDObjectModel_t1113953282 * ___dtd2, String_t* ___baseURI3, String_t* ___xmlLang4, int32_t ___xmlSpace5, Encoding_t663144255 * ___enc6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_BaseURI()
extern "C"  String_t* XmlParserContext_get_BaseURI_m2575991943 (XmlParserContext_t2728039553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_BaseURI(System.String)
extern "C"  void XmlParserContext_set_BaseURI_m2458286142 (XmlParserContext_t2728039553 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_DocTypeName(System.String)
extern "C"  void XmlParserContext_set_DocTypeName_m1519642006 (XmlParserContext_t2728039553 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::get_Dtd()
extern "C"  DTDObjectModel_t1113953282 * XmlParserContext_get_Dtd_m4293137434 (XmlParserContext_t2728039553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Dtd(Mono.Xml.DTDObjectModel)
extern "C"  void XmlParserContext_set_Dtd_m2638002721 (XmlParserContext_t2728039553 * __this, DTDObjectModel_t1113953282 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Encoding(System.Text.Encoding)
extern "C"  void XmlParserContext_set_Encoding_m2641870633 (XmlParserContext_t2728039553 * __this, Encoding_t663144255 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_InternalSubset()
extern "C"  String_t* XmlParserContext_get_InternalSubset_m1766817149 (XmlParserContext_t2728039553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_InternalSubset(System.String)
extern "C"  void XmlParserContext_set_InternalSubset_m2833820684 (XmlParserContext_t2728039553 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::get_NamespaceManager()
extern "C"  XmlNamespaceManager_t486731501 * XmlParserContext_get_NamespaceManager_m2279729855 (XmlParserContext_t2728039553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlParserContext::get_NameTable()
extern "C"  XmlNameTable_t1345805268 * XmlParserContext_get_NameTable_m1336186339 (XmlParserContext_t2728039553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_PublicId(System.String)
extern "C"  void XmlParserContext_set_PublicId_m150918571 (XmlParserContext_t2728039553 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_SystemId(System.String)
extern "C"  void XmlParserContext_set_SystemId_m936871959 (XmlParserContext_t2728039553 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_XmlLang()
extern "C"  String_t* XmlParserContext_get_XmlLang_m3907762133 (XmlParserContext_t2728039553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlLang(System.String)
extern "C"  void XmlParserContext_set_XmlLang_m3993744186 (XmlParserContext_t2728039553 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlParserContext::get_XmlSpace()
extern "C"  int32_t XmlParserContext_get_XmlSpace_m3665735814 (XmlParserContext_t2728039553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlSpace(System.Xml.XmlSpace)
extern "C"  void XmlParserContext_set_XmlSpace_m3801337749 (XmlParserContext_t2728039553 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PushScope()
extern "C"  void XmlParserContext_PushScope_m3308010002 (XmlParserContext_t2728039553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PopScope()
extern "C"  void XmlParserContext_PopScope_m4103748813 (XmlParserContext_t2728039553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
