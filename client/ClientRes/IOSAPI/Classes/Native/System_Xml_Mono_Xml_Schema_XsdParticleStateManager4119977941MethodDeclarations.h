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

// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t4119977941;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3545965403;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2050913741;
// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t152111323;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t2433337156;
// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t3542030006;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t728414063;
// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t1506407122;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t654568461;
// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t1028212608;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t1805755215;
// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t204702461;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3277730824;
// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t1914323912;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcess74226324.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2050913741.h"
#include "System_Xml_Mono_Xml_Schema_XsdValidationState3545965403.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaElement2433337156.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSequence728414063.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaChoice654568461.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAll1805755215.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny3277730824.h"

// System.Void Mono.Xml.Schema.XsdParticleStateManager::.ctor()
extern "C"  void XsdParticleStateManager__ctor_m2539252931 (XsdParticleStateManager_t4119977941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdParticleStateManager::get_ProcessContents()
extern "C"  int32_t XsdParticleStateManager_get_ProcessContents_m3269794617 (XsdParticleStateManager_t4119977941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PushContext()
extern "C"  void XsdParticleStateManager_PushContext_m2773125792 (XsdParticleStateManager_t4119977941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PopContext()
extern "C"  void XsdParticleStateManager_PopContext_m3641816743 (XsdParticleStateManager_t4119977941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::SetProcessContents(System.Xml.Schema.XmlSchemaContentProcessing)
extern "C"  void XsdParticleStateManager_SetProcessContents_m1075346173 (XsdParticleStateManager_t4119977941 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::Create(System.Xml.Schema.XmlSchemaObject)
extern "C"  XsdValidationState_t3545965403 * XsdParticleStateManager_Create_m2387283472 (XsdParticleStateManager_t4119977941 * __this, XmlSchemaObject_t2050913741 * ___xsobj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::MakeSequence(Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C"  XsdValidationState_t3545965403 * XsdParticleStateManager_MakeSequence_m3327915519 (XsdParticleStateManager_t4119977941 * __this, XsdValidationState_t3545965403 * ___head0, XsdValidationState_t3545965403 * ___rest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdElementValidationState Mono.Xml.Schema.XsdParticleStateManager::AddElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  XsdElementValidationState_t152111323 * XsdParticleStateManager_AddElement_m2444051694 (XsdParticleStateManager_t4119977941 * __this, XmlSchemaElement_t2433337156 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdSequenceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddSequence(System.Xml.Schema.XmlSchemaSequence)
extern "C"  XsdSequenceValidationState_t3542030006 * XsdParticleStateManager_AddSequence_m1663841407 (XsdParticleStateManager_t4119977941 * __this, XmlSchemaSequence_t728414063 * ___sequence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdChoiceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddChoice(System.Xml.Schema.XmlSchemaChoice)
extern "C"  XsdChoiceValidationState_t1506407122 * XsdParticleStateManager_AddChoice_m1005712687 (XsdParticleStateManager_t4119977941 * __this, XmlSchemaChoice_t654568461 * ___choice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAllValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAll(System.Xml.Schema.XmlSchemaAll)
extern "C"  XsdAllValidationState_t1028212608 * XsdParticleStateManager_AddAll_m2378030737 (XsdParticleStateManager_t4119977941 * __this, XmlSchemaAll_t1805755215 * ___all0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAny(System.Xml.Schema.XmlSchemaAny)
extern "C"  XsdAnyValidationState_t204702461 * XsdParticleStateManager_AddAny_m1034656764 (XsdParticleStateManager_t4119977941 * __this, XmlSchemaAny_t3277730824 * ___any0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdEmptyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddEmpty()
extern "C"  XsdEmptyValidationState_t1914323912 * XsdParticleStateManager_AddEmpty_m3168339139 (XsdParticleStateManager_t4119977941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
