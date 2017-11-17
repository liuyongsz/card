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

// Mono.Xml.DTDOneOrMoreAutomata
struct DTDOneOrMoreAutomata_t1559764132;
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

// System.Void Mono.Xml.DTDOneOrMoreAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata)
extern "C"  void DTDOneOrMoreAutomata__ctor_m312214869 (DTDOneOrMoreAutomata_t1559764132 * __this, DTDObjectModel_t1113953282 * ___root0, DTDAutomata_t545990600 * ___children1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t545990600 * DTDOneOrMoreAutomata_TryStartElement_m4166394021 (DTDOneOrMoreAutomata_t1559764132 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryEndElement()
extern "C"  DTDAutomata_t545990600 * DTDOneOrMoreAutomata_TryEndElement_m4268414708 (DTDOneOrMoreAutomata_t1559764132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
