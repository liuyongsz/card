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

// SkillSystem
struct SkillSystem_t3526268960;
// SkillInstance
struct SkillInstance_t2290497998;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_E_SkillTiming1340641485.h"
#include "AssemblyU2DCSharp_E_SkillTrigger2341049369.h"
#include "AssemblyU2DCSharp_SkillInstance2290497998.h"

// System.Void SkillSystem::.ctor()
extern "C"  void SkillSystem__ctor_m3497898347 (SkillSystem_t3526268960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillSystem::Update()
extern "C"  void SkillSystem_Update_m2148365182 (SkillSystem_t3526268960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SkillInstance SkillSystem::CreateInstance(System.Int32,System.Int32,System.Boolean)
extern "C"  SkillInstance_t2290497998 * SkillSystem_CreateInstance_m4143444394 (SkillSystem_t3526268960 * __this, int32_t ___skillId0, int32_t ___ownerId1, bool ___fromCfg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillSystem::RemoveTrigger(E_SkillTiming,E_SkillTrigger,System.Int32)
extern "C"  void SkillSystem_RemoveTrigger_m2301931036 (SkillSystem_t3526268960 * __this, int32_t ___timing0, int32_t ___trigger1, int32_t ___ownerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillSystem::Excute(E_SkillTiming)
extern "C"  void SkillSystem_Excute_m750684564 (SkillSystem_t3526268960 * __this, int32_t ___timing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillSystem::RemoveInstance(SkillInstance)
extern "C"  void SkillSystem_RemoveInstance_m2191063800 (SkillSystem_t3526268960 * __this, SkillInstance_t2290497998 * ___ins0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
