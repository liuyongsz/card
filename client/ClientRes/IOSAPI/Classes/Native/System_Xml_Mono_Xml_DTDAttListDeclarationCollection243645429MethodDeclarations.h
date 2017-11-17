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

// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t243645429;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t2272374839;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_Mono_Xml_DTDAttListDeclaration2272374839.h"

// System.Void Mono.Xml.DTDAttListDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAttListDeclarationCollection__ctor_m4199523704 (DTDAttListDeclarationCollection_t243645429 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration Mono.Xml.DTDAttListDeclarationCollection::get_Item(System.String)
extern "C"  DTDAttListDeclaration_t2272374839 * DTDAttListDeclarationCollection_get_Item_m2551642928 (DTDAttListDeclarationCollection_t243645429 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclarationCollection::Add(System.String,Mono.Xml.DTDAttListDeclaration)
extern "C"  void DTDAttListDeclarationCollection_Add_m496519038 (DTDAttListDeclarationCollection_t243645429 * __this, String_t* ___name0, DTDAttListDeclaration_t2272374839 * ___decl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
