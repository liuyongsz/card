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

// DelegateProxy
struct DelegateProxy_t3922175897;
// UnityEngine.Object
struct Object_t1021602117;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Object
struct Il2CppObject;
// AssetCallBack
struct AssetCallBack_t726168895;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t764358782;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t3188497603;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_AssetCallBack726168895.h"

// System.Void DelegateProxy::.ctor()
extern "C"  void DelegateProxy__ctor_m2114004912 (DelegateProxy_t3922175897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy::PopCache(UnityEngine.Object)
extern "C"  void DelegateProxy_PopCache_m2025949077 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DelegateProxy::StringBuilder(System.Object[])
extern "C"  String_t* DelegateProxy_StringBuilder_m3283681117 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy::GameDestory(UnityEngine.Object)
extern "C"  void DelegateProxy_GameDestory_m798979046 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy::GamePoolDestory(UnityEngine.GameObject)
extern "C"  void DelegateProxy_GamePoolDestory_m1332406794 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy::ShowView(System.String,System.Object)
extern "C"  void DelegateProxy_ShowView_m1246000730 (Il2CppObject * __this /* static, unused */, String_t* ___name0, Il2CppObject * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy::DestroyView(System.String)
extern "C"  void DelegateProxy_DestroyView_m3151266777 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy::LoadAsset(System.String,AssetCallBack)
extern "C"  void DelegateProxy_LoadAsset_m4199342141 (Il2CppObject * __this /* static, unused */, String_t* ___strFileName0, AssetCallBack_t726168895 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy::UnloadAsset(System.Object[])
extern "C"  void DelegateProxy_UnloadAsset_m3526447045 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy::DestroyEffect(UnityEngine.GameObject,System.Int32)
extern "C"  void DelegateProxy_DestroyEffect_m678665252 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DelegateProxy::HasView(System.String)
extern "C"  bool DelegateProxy_HasView_m4094181741 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy::HideView(System.String)
extern "C"  void DelegateProxy_HideView_m907621379 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy::PlayUIAudio(System.Int32)
extern "C"  void DelegateProxy_PlayUIAudio_m3338011359 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy::GetGuiCompent(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>,System.Collections.Generic.List`1<UnityEngine.Component>&,System.Collections.Generic.List`1<UnityEngine.Component>&)
extern "C"  void DelegateProxy_GetGuiCompent_m3497274885 (Il2CppObject * __this /* static, unused */, Dictionary_2_t764358782 * ___lastgameObject0, List_1_t3188497603 ** ___newPanels1, List_1_t3188497603 ** ___tempPanels2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy::OnShareCallback(System.String)
extern "C"  void DelegateProxy_OnShareCallback_m401941743 (Il2CppObject * __this /* static, unused */, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy::OnSendMessageCallback(System.Int32,System.Object[])
extern "C"  void DelegateProxy_OnSendMessageCallback_m3605412066 (Il2CppObject * __this /* static, unused */, int32_t ___iMSG0, ObjectU5BU5D_t3614634134* ___objects1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
