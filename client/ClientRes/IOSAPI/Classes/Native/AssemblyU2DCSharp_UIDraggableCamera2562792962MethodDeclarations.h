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

// UIDraggableCamera
struct UIDraggableCamera_t2562792962;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UIDraggableCamera::.ctor()
extern "C"  void UIDraggableCamera__ctor_m2834373395 (UIDraggableCamera_t2562792962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIDraggableCamera::get_currentMomentum()
extern "C"  Vector2_t2243707579  UIDraggableCamera_get_currentMomentum_m2437439902 (UIDraggableCamera_t2562792962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::set_currentMomentum(UnityEngine.Vector2)
extern "C"  void UIDraggableCamera_set_currentMomentum_m1687843687 (UIDraggableCamera_t2562792962 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Awake()
extern "C"  void UIDraggableCamera_Awake_m1767492306 (UIDraggableCamera_t2562792962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Start()
extern "C"  void UIDraggableCamera_Start_m1433129031 (UIDraggableCamera_t2562792962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIDraggableCamera::CalculateConstrainOffset()
extern "C"  Vector3_t2243707580  UIDraggableCamera_CalculateConstrainOffset_m1012085893 (UIDraggableCamera_t2562792962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggableCamera::ConstrainToBounds(System.Boolean)
extern "C"  bool UIDraggableCamera_ConstrainToBounds_m2526589435 (UIDraggableCamera_t2562792962 * __this, bool ___immediate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Press(System.Boolean)
extern "C"  void UIDraggableCamera_Press_m1285316955 (UIDraggableCamera_t2562792962 * __this, bool ___isPressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Drag(UnityEngine.Vector2)
extern "C"  void UIDraggableCamera_Drag_m539508139 (UIDraggableCamera_t2562792962 * __this, Vector2_t2243707579  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Scroll(System.Single)
extern "C"  void UIDraggableCamera_Scroll_m4105814779 (UIDraggableCamera_t2562792962 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Update()
extern "C"  void UIDraggableCamera_Update_m3834348912 (UIDraggableCamera_t2562792962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::OnDestroy()
extern "C"  void UIDraggableCamera_OnDestroy_m329972636 (UIDraggableCamera_t2562792962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
