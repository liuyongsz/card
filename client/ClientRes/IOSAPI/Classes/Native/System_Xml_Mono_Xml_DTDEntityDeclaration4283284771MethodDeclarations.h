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

// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t4283284771;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Void Mono.Xml.DTDEntityDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDEntityDeclaration__ctor_m2690488300 (DTDEntityDeclaration_t4283284771 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_NotationName()
extern "C"  String_t* DTDEntityDeclaration_get_NotationName_m4063229687 (DTDEntityDeclaration_t4283284771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::set_NotationName(System.String)
extern "C"  void DTDEntityDeclaration_set_NotationName_m1696775068 (DTDEntityDeclaration_t4283284771 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEntityDeclaration::get_HasExternalReference()
extern "C"  bool DTDEntityDeclaration_get_HasExternalReference_m1249013021 (DTDEntityDeclaration_t4283284771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_EntityValue()
extern "C"  String_t* DTDEntityDeclaration_get_EntityValue_m3577133706 (DTDEntityDeclaration_t4283284771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::ScanEntityValue(System.Collections.ArrayList)
extern "C"  void DTDEntityDeclaration_ScanEntityValue_m4021782236 (DTDEntityDeclaration_t4283284771 * __this, ArrayList_t4252133567 * ___refs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
