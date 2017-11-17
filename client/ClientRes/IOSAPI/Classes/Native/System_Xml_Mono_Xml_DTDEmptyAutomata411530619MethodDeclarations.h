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

// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t411530619;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t545990600;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.DTDEmptyAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDEmptyAutomata__ctor_m931997910 (DTDEmptyAutomata_t411530619 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDEmptyAutomata::TryEndElement()
extern "C"  DTDAutomata_t545990600 * DTDEmptyAutomata_TryEndElement_m2167376797 (DTDEmptyAutomata_t411530619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDEmptyAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t545990600 * DTDEmptyAutomata_TryStartElement_m2504543214 (DTDEmptyAutomata_t411530619 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEmptyAutomata::get_Emptiable()
extern "C"  bool DTDEmptyAutomata_get_Emptiable_m2000665274 (DTDEmptyAutomata_t411530619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
