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

// CardConfig
struct CardConfig_t1934320288;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// AssetBundles.NormalRes
struct NormalRes_t3181316491;
// TD_Card
struct TD_Card_t45040677;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"
#include "AssemblyU2DCSharp_AssetBundles_NormalRes3181316491.h"

// System.Void CardConfig::.ctor()
extern "C"  void CardConfig__ctor_m4292843389 (CardConfig_t1934320288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardConfig::LoadXml(UnityEngine.Events.UnityAction)
extern "C"  void CardConfig_LoadXml_m85849513 (CardConfig_t1934320288 * __this, UnityAction_t4025899511 * ___loadedFun0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardConfig::onloaded(AssetBundles.NormalRes)
extern "C"  void CardConfig_onloaded_m1270947609 (CardConfig_t1934320288 * __this, NormalRes_t3181316491 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TD_Card CardConfig::GetItem(System.Int32)
extern "C"  TD_Card_t45040677 * CardConfig_GetItem_m1880513283 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
