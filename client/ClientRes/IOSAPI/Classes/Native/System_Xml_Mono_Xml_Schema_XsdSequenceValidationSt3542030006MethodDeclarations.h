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

// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t3542030006;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t728414063;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t4119977941;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3545965403;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSequence728414063.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager4119977941.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.Schema.XsdSequenceValidationState::.ctor(System.Xml.Schema.XmlSchemaSequence,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdSequenceValidationState__ctor_m755636342 (XsdSequenceValidationState_t3542030006 * __this, XmlSchemaSequence_t728414063 * ___sequence0, XsdParticleStateManager_t4119977941 * ___manager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdSequenceValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t3545965403 * XsdSequenceValidationState_EvaluateStartElement_m2324246912 (XsdSequenceValidationState_t3542030006 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateEndElement()
extern "C"  bool XsdSequenceValidationState_EvaluateEndElement_m160952984 (XsdSequenceValidationState_t3542030006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdSequenceValidationState_EvaluateIsEmptiable_m2716179126 (XsdSequenceValidationState_t3542030006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
