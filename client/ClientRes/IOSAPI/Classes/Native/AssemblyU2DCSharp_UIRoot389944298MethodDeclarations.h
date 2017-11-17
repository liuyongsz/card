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

// UIRoot
struct UIRoot_t389944298;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIRoot389944298.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UIRoot::.ctor()
extern "C"  void UIRoot__ctor_m2199352733 (UIRoot_t389944298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::.cctor()
extern "C"  void UIRoot__cctor_m1651998172 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIRoot::get_activeHeight()
extern "C"  int32_t UIRoot_get_activeHeight_m1319932901 (UIRoot_t389944298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::get_pixelSizeAdjustment()
extern "C"  float UIRoot_get_pixelSizeAdjustment_m3186451714 (UIRoot_t389944298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::SetUIRoot(UIRoot)
extern "C"  void UIRoot_SetUIRoot_m1513220627 (Il2CppObject * __this /* static, unused */, UIRoot_t389944298 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::GetPixelSizeAdjustment(UnityEngine.GameObject)
extern "C"  float UIRoot_GetPixelSizeAdjustment_m1162178703 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::GetPixelSizeAdjustment(System.Int32)
extern "C"  float UIRoot_GetPixelSizeAdjustment_m1714402472 (UIRoot_t389944298 * __this, int32_t ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Awake()
extern "C"  void UIRoot_Awake_m1567366330 (UIRoot_t389944298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::OnEnable()
extern "C"  void UIRoot_OnEnable_m875596181 (UIRoot_t389944298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::OnDisable()
extern "C"  void UIRoot_OnDisable_m3194748722 (UIRoot_t389944298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Start()
extern "C"  void UIRoot_Start_m3274221397 (UIRoot_t389944298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Update()
extern "C"  void UIRoot_Update_m3090523340 (UIRoot_t389944298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Broadcast(System.String)
extern "C"  void UIRoot_Broadcast_m2382930268 (Il2CppObject * __this /* static, unused */, String_t* ___funcName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Broadcast(System.String,System.Object)
extern "C"  void UIRoot_Broadcast_m317871714 (Il2CppObject * __this /* static, unused */, String_t* ___funcName0, Il2CppObject * ___param1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
