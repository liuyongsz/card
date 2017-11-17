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

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t2224069626;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t8748002;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_Mono_Xml_DTDElementDeclaration8748002.h"

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDElementDeclarationCollection__ctor_m3313494511 (DTDElementDeclarationCollection_t2224069626 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::get_Item(System.String)
extern "C"  DTDElementDeclaration_t8748002 * DTDElementDeclarationCollection_get_Item_m4263471506 (DTDElementDeclarationCollection_t2224069626 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::Get(System.String)
extern "C"  DTDElementDeclaration_t8748002 * DTDElementDeclarationCollection_Get_m4168718146 (DTDElementDeclarationCollection_t2224069626 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C"  void DTDElementDeclarationCollection_Add_m4044840190 (DTDElementDeclarationCollection_t2224069626 * __this, String_t* ___name0, DTDElementDeclaration_t8748002 * ___decl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
