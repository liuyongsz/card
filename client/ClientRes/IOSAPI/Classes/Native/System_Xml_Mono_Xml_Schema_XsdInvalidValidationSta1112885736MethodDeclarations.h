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

// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t1112885736;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t4119977941;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3545965403;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager4119977941.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.Schema.XsdInvalidValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdInvalidValidationState__ctor_m4106430974 (XsdInvalidValidationState_t1112885736 * __this, XsdParticleStateManager_t4119977941 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdInvalidValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t3545965403 * XsdInvalidValidationState_EvaluateStartElement_m1966840380 (XsdInvalidValidationState_t1112885736 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdInvalidValidationState::EvaluateEndElement()
extern "C"  bool XsdInvalidValidationState_EvaluateEndElement_m3326960086 (XsdInvalidValidationState_t1112885736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdInvalidValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdInvalidValidationState_EvaluateIsEmptiable_m3877227020 (XsdInvalidValidationState_t1112885736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
