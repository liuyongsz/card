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

// SkinManager
struct SkinManager_t2298573004;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;
// AssetBundles.NormalRes
struct NormalRes_t3181316491;
// SkinManagerItem
struct SkinManagerItem_t1216107303;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_E_SkinPart4274317620.h"
#include "AssemblyU2DCSharp_AssetBundles_NormalRes3181316491.h"

// System.Void SkinManager::.ctor()
extern "C"  void SkinManager__ctor_m224693771 (SkinManager_t2298573004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SkinManager SkinManager::get_Instance()
extern "C"  SkinManager_t2298573004 * SkinManager_get_Instance_m4003967154 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkinManager::SetGKSkin(System.Boolean,UnityEngine.Transform)
extern "C"  void SkinManager_SetGKSkin_m1744187998 (SkinManager_t2298573004 * __this, bool ___isMain0, Transform_t3275118058 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkinManager::SetSkin(System.Int32,UnityEngine.Transform)
extern "C"  void SkinManager_SetSkin_m3972402500 (SkinManager_t2298573004 * __this, int32_t ___cfgId0, Transform_t3275118058 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkinManager::SetSkin(UnityEngine.Transform,System.String,E_SkinPart)
extern "C"  void SkinManager_SetSkin_m1715131041 (SkinManager_t2298573004 * __this, Transform_t3275118058 * ___target0, String_t* ___skinId1, int32_t ___part2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkinManager::OnLoader_Complete(AssetBundles.NormalRes)
extern "C"  void SkinManager_OnLoader_Complete_m2693788615 (SkinManager_t2298573004 * __this, NormalRes_t3181316491 * ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkinManager::OnLoader_Error(System.String)
extern "C"  void SkinManager_OnLoader_Error_m2961707118 (SkinManager_t2298573004 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SkinManagerItem SkinManager::GetItem(UnityEngine.Transform)
extern "C"  SkinManagerItem_t1216107303 * SkinManager_GetItem_m3287635369 (SkinManager_t2298573004 * __this, Transform_t3275118058 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkinManager::RemoveItem(UnityEngine.Transform)
extern "C"  void SkinManager_RemoveItem_m1862371619 (SkinManager_t2298573004 * __this, Transform_t3275118058 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkinManager::Clear()
extern "C"  void SkinManager_Clear_m47144646 (SkinManager_t2298573004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
