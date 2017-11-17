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

// TextManager
struct TextManager_t1999779006;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// AssetBundles.NormalRes
struct NormalRes_t3181316491;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"
#include "AssemblyU2DCSharp_AssetBundles_NormalRes3181316491.h"
#include "mscorlib_System_String2029220233.h"

// System.Void TextManager::.ctor()
extern "C"  void TextManager__ctor_m3243299233 (TextManager_t1999779006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextManager::.cctor()
extern "C"  void TextManager__cctor_m3655903696 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextManager::SetQueryString()
extern "C"  void TextManager_SetQueryString_m1841857868 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextManager::Init(UnityEngine.Events.UnityAction)
extern "C"  void TextManager_Init_m3581708770 (Il2CppObject * __this /* static, unused */, UnityAction_t4025899511 * ___callBack0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextManager::CompleteCallback(AssetBundles.NormalRes)
extern "C"  void TextManager_CompleteCallback_m3420765883 (Il2CppObject * __this /* static, unused */, NormalRes_t3181316491 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextManager::ReadString(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>&)
extern "C"  void TextManager_ReadString_m2261807385 (Il2CppObject * __this /* static, unused */, String_t* ___strText0, Dictionary_2_t3943999495 ** ___DictMap1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TextManager::ConvertInt(System.String)
extern "C"  String_t* TextManager_ConvertInt_m2324671228 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TextManager::GetString(System.String)
extern "C"  String_t* TextManager_GetString_m42609485 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TextManager::GetString(System.String,System.Object[])
extern "C"  String_t* TextManager_GetString_m4287504709 (Il2CppObject * __this /* static, unused */, String_t* ___key0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TextManager::GetSystemString(System.String)
extern "C"  String_t* TextManager_GetSystemString_m1850135114 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TextManager::GetItemString(System.String)
extern "C"  String_t* TextManager_GetItemString_m3474722628 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TextManager::GetUIString(System.String)
extern "C"  String_t* TextManager_GetUIString_m2478789533 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TextManager::GetPropsString(System.String)
extern "C"  String_t* TextManager_GetPropsString_m2556745043 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextManager::CheckOver()
extern "C"  void TextManager_CheckOver_m4141284265 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextManager::clearAllData()
extern "C"  void TextManager_clearAllData_m1429862025 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
