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

// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t1506407122;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t654568461;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t4119977941;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3545965403;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaChoice654568461.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager4119977941.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.Schema.XsdChoiceValidationState::.ctor(System.Xml.Schema.XmlSchemaChoice,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdChoiceValidationState__ctor_m3518997558 (XsdChoiceValidationState_t1506407122 * __this, XmlSchemaChoice_t654568461 * ___choice0, XsdParticleStateManager_t4119977941 * ___manager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdChoiceValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t3545965403 * XsdChoiceValidationState_EvaluateStartElement_m3636118166 (XsdChoiceValidationState_t1506407122 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::EvaluateEndElement()
extern "C"  bool XsdChoiceValidationState_EvaluateEndElement_m2171531230 (XsdChoiceValidationState_t1506407122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdChoiceValidationState_EvaluateIsEmptiable_m1353277504 (XsdChoiceValidationState_t1506407122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
