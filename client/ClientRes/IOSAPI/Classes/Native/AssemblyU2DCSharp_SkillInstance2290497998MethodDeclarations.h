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

// SkillInstance
struct SkillInstance_t2290497998;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// ISkillTrigger
struct ISkillTrigger_t1432812828;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_E_SkillTiming1340641485.h"
#include "AssemblyU2DCSharp_E_SkillTrigger2341049369.h"

// System.Void SkillInstance::.ctor()
extern "C"  void SkillInstance__ctor_m1496496731 (SkillInstance_t2290497998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillInstance::Init(System.Int32,System.Int32,System.Boolean)
extern "C"  void SkillInstance_Init_m1929047492 (SkillInstance_t2290497998 * __this, int32_t ___skillId0, int32_t ___ownerId1, bool ___fromCfg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillInstance::CreateTriggerFromConfig()
extern "C"  void SkillInstance_CreateTriggerFromConfig_m4150180755 (SkillInstance_t2290497998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillInstance::LoaderPrefab(System.String)
extern "C"  void SkillInstance_LoaderPrefab_m2582374246 (SkillInstance_t2290497998 * __this, String_t* ___abName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillInstance::OnLoader_PrefabComplete(System.String,UnityEngine.GameObject)
extern "C"  void SkillInstance_OnLoader_PrefabComplete_m505059489 (SkillInstance_t2290497998 * __this, String_t* ___abName0, GameObject_t1756533147 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillInstance::OnLoader_Error(System.String)
extern "C"  void SkillInstance_OnLoader_Error_m3034671296 (SkillInstance_t2290497998 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillInstance::RemoveTrigger(ISkillTrigger)
extern "C"  void SkillInstance_RemoveTrigger_m974813353 (SkillInstance_t2290497998 * __this, Il2CppObject * ___trigger0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillInstance::Excute(E_SkillTiming)
extern "C"  void SkillInstance_Excute_m827255010 (SkillInstance_t2290497998 * __this, int32_t ___timing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillInstance::RemoveTrigger(E_SkillTiming,E_SkillTrigger,System.Int32)
extern "C"  void SkillInstance_RemoveTrigger_m3544656902 (SkillInstance_t2290497998 * __this, int32_t ___timing0, int32_t ___trigger1, int32_t ___ownerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
