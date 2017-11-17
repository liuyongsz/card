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

// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t1228770437;
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

// System.Void Mono.Xml.DTDSequenceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  void DTDSequenceAutomata__ctor_m1055308478 (DTDSequenceAutomata_t1228770437 * __this, DTDObjectModel_t1113953282 * ___root0, DTDAutomata_t545990600 * ___left1, DTDAutomata_t545990600 * ___right2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t545990600 * DTDSequenceAutomata_TryStartElement_m1495651420 (DTDSequenceAutomata_t1228770437 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryEndElement()
extern "C"  DTDAutomata_t545990600 * DTDSequenceAutomata_TryEndElement_m3618194279 (DTDSequenceAutomata_t1228770437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDSequenceAutomata::get_Emptiable()
extern "C"  bool DTDSequenceAutomata_get_Emptiable_m2655948974 (DTDSequenceAutomata_t1228770437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
