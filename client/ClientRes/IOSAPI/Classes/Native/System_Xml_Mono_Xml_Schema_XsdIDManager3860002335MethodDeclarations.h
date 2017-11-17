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

// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t3860002335;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1195946242;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDatatype1195946242.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.Schema.XsdIDManager::.ctor()
extern "C"  void XsdIDManager__ctor_m3591151853 (XsdIDManager_t3860002335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.Schema.XsdIDManager::get_MissingIDReferences()
extern "C"  ArrayList_t4252133567 * XsdIDManager_get_MissingIDReferences_m1501425321 (XsdIDManager_t3860002335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIDManager::OnStartElement()
extern "C"  void XsdIDManager_OnStartElement_m3457010920 (XsdIDManager_t3860002335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdIDManager::AssessEachAttributeIdentityConstraint(System.Xml.Schema.XmlSchemaDatatype,System.Object,System.String)
extern "C"  String_t* XsdIDManager_AssessEachAttributeIdentityConstraint_m3507246183 (XsdIDManager_t3860002335 * __this, XmlSchemaDatatype_t1195946242 * ___dt0, Il2CppObject * ___parsedValue1, String_t* ___elementName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdIDManager::HasMissingIDReferences()
extern "C"  bool XsdIDManager_HasMissingIDReferences_m1955686820 (XsdIDManager_t3860002335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdIDManager::GetMissingIDString()
extern "C"  String_t* XsdIDManager_GetMissingIDString_m2808539860 (XsdIDManager_t3860002335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
