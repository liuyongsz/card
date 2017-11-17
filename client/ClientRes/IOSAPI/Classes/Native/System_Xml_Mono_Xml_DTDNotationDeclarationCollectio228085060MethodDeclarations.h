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

// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t228085060;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t1758408116;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_Mono_Xml_DTDNotationDeclaration1758408116.h"

// System.Void Mono.Xml.DTDNotationDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDNotationDeclarationCollection__ctor_m4118765985 (DTDNotationDeclarationCollection_t228085060 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration Mono.Xml.DTDNotationDeclarationCollection::get_Item(System.String)
extern "C"  DTDNotationDeclaration_t1758408116 * DTDNotationDeclarationCollection_get_Item_m414353938 (DTDNotationDeclarationCollection_t228085060 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNotationDeclarationCollection::Add(System.String,Mono.Xml.DTDNotationDeclaration)
extern "C"  void DTDNotationDeclarationCollection_Add_m3551274252 (DTDNotationDeclarationCollection_t228085060 * __this, String_t* ___name0, DTDNotationDeclaration_t1758408116 * ___decl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
