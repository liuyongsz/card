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

// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t2810241733;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t545990600;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "System_Xml_Mono_Xml_DTDAutomata545990600.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.DTDChoiceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  void DTDChoiceAutomata__ctor_m910036128 (DTDChoiceAutomata_t2810241733 * __this, DTDObjectModel_t1113953282 * ___root0, DTDAutomata_t545990600 * ___left1, DTDAutomata_t545990600 * ___right2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t545990600 * DTDChoiceAutomata_TryStartElement_m935543754 (DTDChoiceAutomata_t2810241733 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryEndElement()
extern "C"  DTDAutomata_t545990600 * DTDChoiceAutomata_TryEndElement_m2966112383 (DTDChoiceAutomata_t2810241733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDChoiceAutomata::get_Emptiable()
extern "C"  bool DTDChoiceAutomata_get_Emptiable_m3702499064 (DTDChoiceAutomata_t2810241733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
