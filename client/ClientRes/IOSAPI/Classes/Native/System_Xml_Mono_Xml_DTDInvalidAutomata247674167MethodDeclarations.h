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

// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t247674167;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t545990600;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.DTDInvalidAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDInvalidAutomata__ctor_m3193134520 (DTDInvalidAutomata_t247674167 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryEndElement()
extern "C"  DTDAutomata_t545990600 * DTDInvalidAutomata_TryEndElement_m3030642457 (DTDInvalidAutomata_t247674167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t545990600 * DTDInvalidAutomata_TryStartElement_m3827937640 (DTDInvalidAutomata_t247674167 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
