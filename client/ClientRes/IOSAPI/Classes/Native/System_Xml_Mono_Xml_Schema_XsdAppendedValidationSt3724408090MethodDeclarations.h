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

// Mono.Xml.Schema.XsdAppendedValidationState
struct XsdAppendedValidationState_t3724408090;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t4119977941;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3545965403;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager4119977941.h"
#include "System_Xml_Mono_Xml_Schema_XsdValidationState3545965403.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.Schema.XsdAppendedValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager,Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C"  void XsdAppendedValidationState__ctor_m1581076540 (XsdAppendedValidationState_t3724408090 * __this, XsdParticleStateManager_t4119977941 * ___manager0, XsdValidationState_t3545965403 * ___head1, XsdValidationState_t3545965403 * ___rest2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t3545965403 * XsdAppendedValidationState_EvaluateStartElement_m872242020 (XsdAppendedValidationState_t3724408090 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateEndElement()
extern "C"  bool XsdAppendedValidationState_EvaluateEndElement_m1016635352 (XsdAppendedValidationState_t3724408090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdAppendedValidationState_EvaluateIsEmptiable_m2682718990 (XsdAppendedValidationState_t3724408090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
