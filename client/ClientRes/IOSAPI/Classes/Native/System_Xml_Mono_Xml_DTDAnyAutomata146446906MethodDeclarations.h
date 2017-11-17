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

// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t146446906;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t545990600;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.DTDAnyAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAnyAutomata__ctor_m1919275235 (DTDAnyAutomata_t146446906 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryEndElement()
extern "C"  DTDAutomata_t545990600 * DTDAnyAutomata_TryEndElement_m2419739934 (DTDAnyAutomata_t146446906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t545990600 * DTDAnyAutomata_TryStartElement_m2233058479 (DTDAnyAutomata_t146446906 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAnyAutomata::get_Emptiable()
extern "C"  bool DTDAnyAutomata_get_Emptiable_m1047480621 (DTDAnyAutomata_t146446906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
