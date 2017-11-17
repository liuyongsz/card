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

// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t1914323912;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t4119977941;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3545965403;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager4119977941.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.Schema.XsdEmptyValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdEmptyValidationState__ctor_m1287823072 (XsdEmptyValidationState_t1914323912 * __this, XsdParticleStateManager_t4119977941 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdEmptyValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t3545965403 * XsdEmptyValidationState_EvaluateStartElement_m1598832882 (XsdEmptyValidationState_t1914323912 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdEmptyValidationState::EvaluateEndElement()
extern "C"  bool XsdEmptyValidationState_EvaluateEndElement_m4061620696 (XsdEmptyValidationState_t1914323912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdEmptyValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdEmptyValidationState_EvaluateIsEmptiable_m485512090 (XsdEmptyValidationState_t1914323912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
