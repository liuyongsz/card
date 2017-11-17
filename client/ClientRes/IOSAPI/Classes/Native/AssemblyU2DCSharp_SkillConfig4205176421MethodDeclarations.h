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

// SkillConfig
struct SkillConfig_t4205176421;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// AssetBundles.NormalRes
struct NormalRes_t3181316491;
// TD_Skill
struct TD_Skill_t1146843494;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"
#include "AssemblyU2DCSharp_AssetBundles_NormalRes3181316491.h"

// System.Void SkillConfig::.ctor()
extern "C"  void SkillConfig__ctor_m2218260302 (SkillConfig_t4205176421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillConfig::LoadXml(UnityEngine.Events.UnityAction)
extern "C"  void SkillConfig_LoadXml_m187236018 (SkillConfig_t4205176421 * __this, UnityAction_t4025899511 * ___loadedFun0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillConfig::onloaded(AssetBundles.NormalRes)
extern "C"  void SkillConfig_onloaded_m3346728248 (SkillConfig_t4205176421 * __this, NormalRes_t3181316491 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TD_Skill SkillConfig::GetItem(System.Int32)
extern "C"  TD_Skill_t1146843494 * SkillConfig_GetItem_m2880816843 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
