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

// EffConfig
struct EffConfig_t565553813;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// AssetBundles.NormalRes
struct NormalRes_t3181316491;
// TD_Eff
struct TD_Eff_t548732316;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"
#include "AssemblyU2DCSharp_AssetBundles_NormalRes3181316491.h"

// System.Void EffConfig::.ctor()
extern "C"  void EffConfig__ctor_m764459924 (EffConfig_t565553813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffConfig::LoadXml(UnityEngine.Events.UnityAction)
extern "C"  void EffConfig_LoadXml_m1354916376 (EffConfig_t565553813 * __this, UnityAction_t4025899511 * ___loadedFun0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffConfig::onloaded(AssetBundles.NormalRes)
extern "C"  void EffConfig_onloaded_m3536247434 (EffConfig_t565553813 * __this, NormalRes_t3181316491 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TD_Eff EffConfig::GetItem(System.Int32)
extern "C"  TD_Eff_t548732316 * EffConfig_GetItem_m231179499 (EffConfig_t565553813 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
