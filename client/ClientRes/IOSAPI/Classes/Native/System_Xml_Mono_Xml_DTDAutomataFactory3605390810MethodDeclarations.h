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

// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t3605390810;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t2810241733;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t545990600;
// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t1228770437;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "System_Xml_Mono_Xml_DTDAutomata545990600.h"

// System.Void Mono.Xml.DTDAutomataFactory::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAutomataFactory__ctor_m708083521 (DTDAutomataFactory_t3605390810 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDChoiceAutomata Mono.Xml.DTDAutomataFactory::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDChoiceAutomata_t2810241733 * DTDAutomataFactory_Choice_m3232052724 (DTDAutomataFactory_t3605390810 * __this, DTDAutomata_t545990600 * ___left0, DTDAutomata_t545990600 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDSequenceAutomata Mono.Xml.DTDAutomataFactory::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDSequenceAutomata_t1228770437 * DTDAutomataFactory_Sequence_m967538580 (DTDAutomataFactory_t3605390810 * __this, DTDAutomata_t545990600 * ___left0, DTDAutomata_t545990600 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
