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

// ConfigBase
struct ConfigBase_t2330146533;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// AssetBundles.NormalRes
struct NormalRes_t3181316491;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"
#include "AssemblyU2DCSharp_AssetBundles_NormalRes3181316491.h"

// System.Void ConfigBase::.ctor()
extern "C"  void ConfigBase__ctor_m3534789378 (ConfigBase_t2330146533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigBase::LoadData(System.String,UnityEngine.Events.UnityAction)
extern "C"  void ConfigBase_LoadData_m691574331 (ConfigBase_t2330146533 * __this, String_t* ___name0, UnityAction_t4025899511 * ___loadedFun1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigBase::onloaded(AssetBundles.NormalRes)
extern "C"  void ConfigBase_onloaded_m2380940724 (ConfigBase_t2330146533 * __this, NormalRes_t3181316491 * ___normalRes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigBase::errorload(System.String)
extern "C"  void ConfigBase_errorload_m3372873010 (ConfigBase_t2330146533 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
