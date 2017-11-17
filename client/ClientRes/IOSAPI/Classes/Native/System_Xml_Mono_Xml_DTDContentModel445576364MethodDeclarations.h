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

// Mono.Xml.DTDContentModel
struct DTDContentModel_t445576364;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// System.String
struct String_t;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t3164170484;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t8748002;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t545990600;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_Mono_Xml_DTDOccurence99371501.h"
#include "System_Xml_Mono_Xml_DTDContentOrderType3150259539.h"
#include "System_Xml_Mono_Xml_DTDAutomata545990600.h"

// System.Void Mono.Xml.DTDContentModel::.ctor(Mono.Xml.DTDObjectModel,System.String)
extern "C"  void DTDContentModel__ctor_m3157775975 (DTDContentModel_t445576364 * __this, DTDObjectModel_t1113953282 * ___root0, String_t* ___ownerElementName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModelCollection Mono.Xml.DTDContentModel::get_ChildModels()
extern "C"  DTDContentModelCollection_t3164170484 * DTDContentModel_get_ChildModels_m3548121267 (DTDContentModel_t445576364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDContentModel::get_ElementDecl()
extern "C"  DTDElementDeclaration_t8748002 * DTDContentModel_get_ElementDecl_m3150553055 (DTDContentModel_t445576364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDContentModel::get_ElementName()
extern "C"  String_t* DTDContentModel_get_ElementName_m548033030 (DTDContentModel_t445576364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_ElementName(System.String)
extern "C"  void DTDContentModel_set_ElementName_m2289916771 (DTDContentModel_t445576364 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDOccurence Mono.Xml.DTDContentModel::get_Occurence()
extern "C"  int32_t DTDContentModel_get_Occurence_m3701064433 (DTDContentModel_t445576364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_Occurence(Mono.Xml.DTDOccurence)
extern "C"  void DTDContentModel_set_Occurence_m2708496106 (DTDContentModel_t445576364 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentOrderType Mono.Xml.DTDContentModel::get_OrderType()
extern "C"  int32_t DTDContentModel_get_OrderType_m48408306 (DTDContentModel_t445576364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_OrderType(Mono.Xml.DTDContentOrderType)
extern "C"  void DTDContentModel_set_OrderType_m3392436687 (DTDContentModel_t445576364 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::GetAutomata()
extern "C"  DTDAutomata_t545990600 * DTDContentModel_GetAutomata_m1091193238 (DTDContentModel_t445576364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Compile()
extern "C"  DTDAutomata_t545990600 * DTDContentModel_Compile_m2124906911 (DTDContentModel_t445576364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::CompileInternal()
extern "C"  DTDAutomata_t545990600 * DTDContentModel_CompileInternal_m3643272280 (DTDContentModel_t445576364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::GetBasicContentAutomata()
extern "C"  DTDAutomata_t545990600 * DTDContentModel_GetBasicContentAutomata_m712422789 (DTDContentModel_t445576364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t545990600 * DTDContentModel_Sequence_m2750156817 (DTDContentModel_t445576364 * __this, DTDAutomata_t545990600 * ___l0, DTDAutomata_t545990600 * ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t545990600 * DTDContentModel_Choice_m2743504309 (DTDContentModel_t445576364 * __this, DTDAutomata_t545990600 * ___l0, DTDAutomata_t545990600 * ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
