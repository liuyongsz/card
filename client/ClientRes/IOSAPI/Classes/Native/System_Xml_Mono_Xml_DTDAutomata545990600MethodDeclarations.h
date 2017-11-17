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

// Mono.Xml.DTDAutomata
struct DTDAutomata_t545990600;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "System_Xml_Mono_Xml_DTDAutomata545990600.h"

// System.Void Mono.Xml.DTDAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAutomata__ctor_m335448265 (DTDAutomata_t545990600 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDAutomata::get_Root()
extern "C"  DTDObjectModel_t1113953282 * DTDAutomata_get_Root_m2011140545 (DTDAutomata_t545990600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::MakeChoice(Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t545990600 * DTDAutomata_MakeChoice_m3766843623 (DTDAutomata_t545990600 * __this, DTDAutomata_t545990600 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::MakeSequence(Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t545990600 * DTDAutomata_MakeSequence_m1050862079 (DTDAutomata_t545990600 * __this, DTDAutomata_t545990600 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::TryEndElement()
extern "C"  DTDAutomata_t545990600 * DTDAutomata_TryEndElement_m40813362 (DTDAutomata_t545990600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAutomata::get_Emptiable()
extern "C"  bool DTDAutomata_get_Emptiable_m2338362783 (DTDAutomata_t545990600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
