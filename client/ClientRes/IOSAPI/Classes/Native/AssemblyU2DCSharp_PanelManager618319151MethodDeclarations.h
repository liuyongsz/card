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

// PanelManager
struct PanelManager_t618319151;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// PanelCompleteHandler
struct PanelCompleteHandler_t2826171645;
// UIBase
struct UIBase_t4194425779;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_PanelCompleteHandler2826171645.h"
#include "AssemblyU2DCSharp_UIBase4194425779.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void PanelManager::.ctor()
extern "C"  void PanelManager__ctor_m4171694616 (PanelManager_t618319151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::.cctor()
extern "C"  void PanelManager__cctor_m1957614089 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::InitManager()
extern "C"  void PanelManager_InitManager_m3259264415 (PanelManager_t618319151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::OnDestroy()
extern "C"  void PanelManager_OnDestroy_m2371811573 (PanelManager_t618319151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PanelManager::get_Parent()
extern "C"  Transform_t3275118058 * PanelManager_get_Parent_m2031104123 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PanelManager::get_childCount()
extern "C"  int32_t PanelManager_get_childCount_m1346878972 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PanelManager::IsOpen(System.String)
extern "C"  bool PanelManager_IsOpen_m2359949246 (Il2CppObject * __this /* static, unused */, String_t* ___uiName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::OpenPanel(System.String,System.Boolean,System.Object[])
extern "C"  void PanelManager_OpenPanel_m3678753073 (Il2CppObject * __this /* static, unused */, String_t* ___uiName0, bool ___ismaxDepth1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::OpenPanelAsync(System.String,System.Boolean,PanelCompleteHandler,System.Object[])
extern "C"  void PanelManager_OpenPanelAsync_m439749286 (Il2CppObject * __this /* static, unused */, String_t* ___uiName0, bool ___ismaxDepth1, PanelCompleteHandler_t2826171645 * ___handler2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::ClosePanel(System.String)
extern "C"  void PanelManager_ClosePanel_m2266281922 (Il2CppObject * __this /* static, unused */, String_t* ___uiName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PanelManager::HidePanel(System.String)
extern "C"  bool PanelManager_HidePanel_m3011032574 (Il2CppObject * __this /* static, unused */, String_t* ___uiName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PanelManager::ShowPanel(System.String)
extern "C"  bool PanelManager_ShowPanel_m2801326269 (Il2CppObject * __this /* static, unused */, String_t* ___uiName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::SetPanelDepth(UIBase,System.Boolean)
extern "C"  void PanelManager_SetPanelDepth_m2175456357 (Il2CppObject * __this /* static, unused */, UIBase_t4194425779 * ___ui0, bool ___ismaxDepth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PanelManager::LoadPanelAsync(System.String,System.Boolean,PanelCompleteHandler,System.Object[])
extern "C"  Il2CppObject * PanelManager_LoadPanelAsync_m2920902130 (PanelManager_t618319151 * __this, String_t* ___uiName0, bool ___ismaxDepth1, PanelCompleteHandler_t2826171645 * ___handler2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIBase PanelManager::SetPanel(UnityEngine.GameObject,System.String,System.Boolean,PanelCompleteHandler,System.Object[])
extern "C"  UIBase_t4194425779 * PanelManager_SetPanel_m146189372 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, String_t* ___uiName1, bool ___ismaxDepth2, PanelCompleteHandler_t2826171645 * ___handler3, ObjectU5BU5D_t3614634134* ___args4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
