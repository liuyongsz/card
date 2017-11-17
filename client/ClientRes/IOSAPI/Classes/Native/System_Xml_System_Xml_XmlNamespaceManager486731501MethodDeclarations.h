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

// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t486731501;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable1345805268.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlNamespaceManager__ctor_m3164566160 (XmlNamespaceManager_t486731501 * __this, XmlNameTable_t1345805268 * ___nameTable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::InitData()
extern "C"  void XmlNamespaceManager_InitData_m3477770228 (XmlNamespaceManager_t486731501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowDecls()
extern "C"  void XmlNamespaceManager_GrowDecls_m2859508936 (XmlNamespaceManager_t486731501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowScopes()
extern "C"  void XmlNamespaceManager_GrowScopes_m2950002396 (XmlNamespaceManager_t486731501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace()
extern "C"  String_t* XmlNamespaceManager_get_DefaultNamespace_m3196089042 (XmlNamespaceManager_t486731501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable()
extern "C"  XmlNameTable_t1345805268 * XmlNamespaceManager_get_NameTable_m2778517119 (XmlNamespaceManager_t486731501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String)
extern "C"  void XmlNamespaceManager_AddNamespace_m2220419410 (XmlNamespaceManager_t486731501 * __this, String_t* ___prefix0, String_t* ___uri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String,System.Boolean)
extern "C"  void XmlNamespaceManager_AddNamespace_m894615713 (XmlNamespaceManager_t486731501 * __this, String_t* ___prefix0, String_t* ___uri1, bool ___atomizedNames2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::IsValidDeclaration(System.String,System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_IsValidDeclaration_m3148002380 (Il2CppObject * __this /* static, unused */, String_t* ___prefix0, String_t* ___uri1, bool ___throwException2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamespaceManager::GetEnumerator()
extern "C"  Il2CppObject * XmlNamespaceManager_GetEnumerator_m798756962 (XmlNamespaceManager_t486731501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String)
extern "C"  String_t* XmlNamespaceManager_LookupNamespace_m2447392304 (XmlNamespaceManager_t486731501 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupNamespace_m4087961197 (XmlNamespaceManager_t486731501 * __this, String_t* ___prefix0, bool ___atomizedNames1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String)
extern "C"  String_t* XmlNamespaceManager_LookupPrefix_m2213437389 (XmlNamespaceManager_t486731501 * __this, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::CompareString(System.String,System.String,System.Boolean)
extern "C"  bool XmlNamespaceManager_CompareString_m4270482857 (XmlNamespaceManager_t486731501 * __this, String_t* ___s10, String_t* ___s21, bool ___atomizedNames2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupPrefix_m79475592 (XmlNamespaceManager_t486731501 * __this, String_t* ___uri0, bool ___atomizedName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixExclusive(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupPrefixExclusive_m1980314712 (XmlNamespaceManager_t486731501 * __this, String_t* ___uri0, bool ___atomizedName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixCore(System.String,System.Boolean,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupPrefixCore_m1101302650 (XmlNamespaceManager_t486731501 * __this, String_t* ___uri0, bool ___atomizedName1, bool ___excludeOverriden2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::IsOverriden(System.Int32)
extern "C"  bool XmlNamespaceManager_IsOverriden_m3317736709 (XmlNamespaceManager_t486731501 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::PopScope()
extern "C"  bool XmlNamespaceManager_PopScope_m2180989617 (XmlNamespaceManager_t486731501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::PushScope()
extern "C"  void XmlNamespaceManager_PushScope_m2590149744 (XmlNamespaceManager_t486731501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String)
extern "C"  void XmlNamespaceManager_RemoveNamespace_m326939873 (XmlNamespaceManager_t486731501 * __this, String_t* ___prefix0, String_t* ___uri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String,System.Boolean)
extern "C"  void XmlNamespaceManager_RemoveNamespace_m2582663710 (XmlNamespaceManager_t486731501 * __this, String_t* ___prefix0, String_t* ___uri1, bool ___atomizedNames2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
