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

// HeroConfig
struct HeroConfig_t2998633770;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// AssetBundles.NormalRes
struct NormalRes_t3181316491;
// TD_Hero
struct TD_Hero_t2962140565;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"
#include "AssemblyU2DCSharp_AssetBundles_NormalRes3181316491.h"

// System.Void HeroConfig::.ctor()
extern "C"  void HeroConfig__ctor_m1066805537 (HeroConfig_t2998633770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroConfig::LoadXml(UnityEngine.Events.UnityAction)
extern "C"  void HeroConfig_LoadXml_m3352088845 (HeroConfig_t2998633770 * __this, UnityAction_t4025899511 * ___loadedFun0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroConfig::onloaded(AssetBundles.NormalRes)
extern "C"  void HeroConfig_onloaded_m769865309 (HeroConfig_t2998633770 * __this, NormalRes_t3181316491 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TD_Hero HeroConfig::GetItem(System.Int32)
extern "C"  TD_Hero_t2962140565 * HeroConfig_GetItem_m2164409355 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
