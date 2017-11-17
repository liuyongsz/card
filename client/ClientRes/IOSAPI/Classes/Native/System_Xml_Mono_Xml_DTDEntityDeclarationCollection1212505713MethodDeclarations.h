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

// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t1212505713;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t4283284771;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_Mono_Xml_DTDEntityDeclaration4283284771.h"

// System.Void Mono.Xml.DTDEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDEntityDeclarationCollection__ctor_m2378329400 (DTDEntityDeclarationCollection_t1212505713 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration Mono.Xml.DTDEntityDeclarationCollection::get_Item(System.String)
extern "C"  DTDEntityDeclaration_t4283284771 * DTDEntityDeclarationCollection_get_Item_m1259647026 (DTDEntityDeclarationCollection_t1212505713 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDEntityDeclaration)
extern "C"  void DTDEntityDeclarationCollection_Add_m2865807358 (DTDEntityDeclarationCollection_t1212505713 * __this, String_t* ___name0, DTDEntityDeclaration_t4283284771 * ___decl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
