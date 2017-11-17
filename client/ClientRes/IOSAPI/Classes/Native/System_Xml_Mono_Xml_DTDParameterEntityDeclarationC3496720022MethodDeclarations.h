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

// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t3496720022;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t252230634;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_Mono_Xml_DTDParameterEntityDeclaration252230634.h"

// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDParameterEntityDeclarationCollection__ctor_m3697537683 (DTDParameterEntityDeclarationCollection_t3496720022 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration Mono.Xml.DTDParameterEntityDeclarationCollection::get_Item(System.String)
extern "C"  DTDParameterEntityDeclaration_t252230634 * DTDParameterEntityDeclarationCollection_get_Item_m2160586090 (DTDParameterEntityDeclarationCollection_t3496720022 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDParameterEntityDeclaration)
extern "C"  void DTDParameterEntityDeclarationCollection_Add_m942333182 (DTDParameterEntityDeclarationCollection_t3496720022 * __this, String_t* ___name0, DTDParameterEntityDeclaration_t252230634 * ___decl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
