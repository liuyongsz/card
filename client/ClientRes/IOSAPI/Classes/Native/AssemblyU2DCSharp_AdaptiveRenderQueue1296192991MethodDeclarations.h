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

// AdaptiveRenderQueue
struct AdaptiveRenderQueue_t1296192991;
// UIPanel
struct UIPanel_t1795085332;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Renderer
struct Renderer_t257310565;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_AdaptiveRenderQueue1296192991.h"
#include "UnityEngine_UnityEngine_Renderer257310565.h"

// System.Void AdaptiveRenderQueue::.ctor()
extern "C"  void AdaptiveRenderQueue__ctor_m2178757044 (AdaptiveRenderQueue_t1296192991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AdaptiveRenderQueue::get_GetDrawCalls()
extern "C"  int32_t AdaptiveRenderQueue_get_GetDrawCalls_m4294856546 (AdaptiveRenderQueue_t1296192991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdaptiveRenderQueue::Awake()
extern "C"  void AdaptiveRenderQueue_Awake_m659375867 (AdaptiveRenderQueue_t1296192991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdaptiveRenderQueue::OnEnable()
extern "C"  void AdaptiveRenderQueue_OnEnable_m4026352624 (AdaptiveRenderQueue_t1296192991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdaptiveRenderQueue::OnDisable()
extern "C"  void AdaptiveRenderQueue_OnDisable_m699918919 (AdaptiveRenderQueue_t1296192991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdaptiveRenderQueue::Init()
extern "C"  void AdaptiveRenderQueue_Init_m3716709316 (AdaptiveRenderQueue_t1296192991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdaptiveRenderQueue::RefreshRenderer()
extern "C"  void AdaptiveRenderQueue_RefreshRenderer_m1964631792 (AdaptiveRenderQueue_t1296192991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdaptiveRenderQueue::setUnderUI(System.Boolean)
extern "C"  void AdaptiveRenderQueue_setUnderUI_m38431127 (AdaptiveRenderQueue_t1296192991 * __this, bool ___under0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdaptiveRenderQueue::OnUpdate(System.Int32,System.Int32,System.Boolean)
extern "C"  void AdaptiveRenderQueue_OnUpdate_m1181203949 (AdaptiveRenderQueue_t1296192991 * __this, int32_t ___renderQuene0, int32_t ___drawCalls1, bool ___bnow2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdaptiveRenderQueue::OnDestroy()
extern "C"  void AdaptiveRenderQueue_OnDestroy_m3327876497 (AdaptiveRenderQueue_t1296192991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel AdaptiveRenderQueue::GetRootPanel(UnityEngine.GameObject)
extern "C"  UIPanel_t1795085332 * AdaptiveRenderQueue_GetRootPanel_m3499314965 (AdaptiveRenderQueue_t1296192991 * __this, GameObject_t1756533147 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdaptiveRenderQueue::SetRenderQuene()
extern "C"  void AdaptiveRenderQueue_SetRenderQuene_m377718110 (AdaptiveRenderQueue_t1296192991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AdaptiveRenderQueue::RenderQueueCompareFunc(AdaptiveRenderQueue,AdaptiveRenderQueue)
extern "C"  int32_t AdaptiveRenderQueue_RenderQueueCompareFunc_m1627107042 (Il2CppObject * __this /* static, unused */, AdaptiveRenderQueue_t1296192991 * ___left0, AdaptiveRenderQueue_t1296192991 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AdaptiveRenderQueue::RendererCompareFunc(UnityEngine.Renderer,UnityEngine.Renderer)
extern "C"  int32_t AdaptiveRenderQueue_RendererCompareFunc_m3770115708 (AdaptiveRenderQueue_t1296192991 * __this, Renderer_t257310565 * ___renA0, Renderer_t257310565 * ___renB1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
