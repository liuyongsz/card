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

// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t2272374839;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// System.String
struct String_t;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3692870749;
// System.Collections.IList
struct IList_t3321498491;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_Mono_Xml_DTDAttributeDefinition3692870749.h"

// System.Void Mono.Xml.DTDAttListDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAttListDeclaration__ctor_m3756114148 (DTDAttListDeclaration_t2272374839 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttListDeclaration::get_Name()
extern "C"  String_t* DTDAttListDeclaration_get_Name_m672497659 (DTDAttListDeclaration_t2272374839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::set_Name(System.String)
extern "C"  void DTDAttListDeclaration_set_Name_m3245118514 (DTDAttListDeclaration_t2272374839 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.Int32)
extern "C"  DTDAttributeDefinition_t3692870749 * DTDAttListDeclaration_get_Item_m1297205765 (DTDAttListDeclaration_t2272374839 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.String)
extern "C"  DTDAttributeDefinition_t3692870749 * DTDAttListDeclaration_get_Item_m206042238 (DTDAttListDeclaration_t2272374839 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.Int32)
extern "C"  DTDAttributeDefinition_t3692870749 * DTDAttListDeclaration_Get_m4237133207 (DTDAttListDeclaration_t2272374839 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.String)
extern "C"  DTDAttributeDefinition_t3692870749 * DTDAttListDeclaration_Get_m2606960742 (DTDAttListDeclaration_t2272374839 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Mono.Xml.DTDAttListDeclaration::get_Definitions()
extern "C"  Il2CppObject * DTDAttListDeclaration_get_Definitions_m117770611 (DTDAttListDeclaration_t2272374839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::Add(Mono.Xml.DTDAttributeDefinition)
extern "C"  void DTDAttListDeclaration_Add_m371192978 (DTDAttListDeclaration_t2272374839 * __this, DTDAttributeDefinition_t3692870749 * ___def0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
