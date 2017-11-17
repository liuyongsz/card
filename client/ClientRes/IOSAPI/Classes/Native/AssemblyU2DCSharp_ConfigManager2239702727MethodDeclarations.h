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

// ConfigManager
struct ConfigManager_t2239702727;
// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AssetBundle2054978754.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ConfigManager::.ctor()
extern "C"  void ConfigManager__ctor_m3590754604 (ConfigManager_t2239702727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigManager::.cctor()
extern "C"  void ConfigManager__cctor_m2838130173 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigManager::InitManager()
extern "C"  void ConfigManager_InitManager_m639101119 (ConfigManager_t2239702727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigManager::OnLoad_CfgBundleComplete(UnityEngine.AssetBundle)
extern "C"  void ConfigManager_OnLoad_CfgBundleComplete_m4081526150 (ConfigManager_t2239702727 * __this, AssetBundle_t2054978754 * ___cfgAB0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigManager::OnLoad_CfgBundleError(System.String)
extern "C"  void ConfigManager_OnLoad_CfgBundleError_m1254500704 (ConfigManager_t2239702727 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
