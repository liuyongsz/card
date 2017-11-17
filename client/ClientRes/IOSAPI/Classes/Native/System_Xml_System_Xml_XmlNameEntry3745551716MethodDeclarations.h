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

// System.Xml.XmlNameEntry
struct XmlNameEntry_t3745551716;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t3855584002;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_XmlNameEntryCache3855584002.h"

// System.Void System.Xml.XmlNameEntry::.ctor(System.String,System.String,System.String)
extern "C"  void XmlNameEntry__ctor_m3965185189 (XmlNameEntry_t3745551716 * __this, String_t* ___prefix0, String_t* ___local1, String_t* ___ns2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNameEntry::Update(System.String,System.String,System.String)
extern "C"  void XmlNameEntry_Update_m670586864 (XmlNameEntry_t3745551716 * __this, String_t* ___prefix0, String_t* ___local1, String_t* ___ns2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNameEntry::Equals(System.Object)
extern "C"  bool XmlNameEntry_Equals_m2491241348 (XmlNameEntry_t3745551716 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNameEntry::GetHashCode()
extern "C"  int32_t XmlNameEntry_GetHashCode_m203390488 (XmlNameEntry_t3745551716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNameEntry::GetPrefixedName(System.Xml.XmlNameEntryCache)
extern "C"  String_t* XmlNameEntry_GetPrefixedName_m3491264144 (XmlNameEntry_t3745551716 * __this, XmlNameEntryCache_t3855584002 * ___owner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
