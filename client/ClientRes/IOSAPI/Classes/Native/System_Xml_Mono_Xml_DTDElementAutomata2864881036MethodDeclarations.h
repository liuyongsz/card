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

// Mono.Xml.DTDElementAutomata
struct DTDElementAutomata_t2864881036;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// System.String
struct String_t;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t545990600;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.DTDElementAutomata::.ctor(Mono.Xml.DTDObjectModel,System.String)
extern "C"  void DTDElementAutomata__ctor_m143188097 (DTDElementAutomata_t2864881036 * __this, DTDObjectModel_t1113953282 * ___root0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDElementAutomata::get_Name()
extern "C"  String_t* DTDElementAutomata_get_Name_m3413806664 (DTDElementAutomata_t2864881036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDElementAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t545990600 * DTDElementAutomata_TryStartElement_m938424475 (DTDElementAutomata_t2864881036 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
