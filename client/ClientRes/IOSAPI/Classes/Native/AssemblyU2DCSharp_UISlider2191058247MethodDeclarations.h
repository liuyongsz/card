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

// UISlider
struct UISlider_t2191058247;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"

// System.Void UISlider::.ctor()
extern "C"  void UISlider__ctor_m285068726 (UISlider_t2191058247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UISlider::get_sliderValue()
extern "C"  float UISlider_get_sliderValue_m1340450083 (UISlider_t2191058247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::set_sliderValue(System.Single)
extern "C"  void UISlider_set_sliderValue_m3004766204 (UISlider_t2191058247 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISlider::get_inverted()
extern "C"  bool UISlider_get_inverted_m3388181670 (UISlider_t2191058247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::set_inverted(System.Boolean)
extern "C"  void UISlider_set_inverted_m926099815 (UISlider_t2191058247 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::Upgrade()
extern "C"  void UISlider_Upgrade_m1857535810 (UISlider_t2191058247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnStart()
extern "C"  void UISlider_OnStart_m635586947 (UISlider_t2191058247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPressBackground(UnityEngine.GameObject,System.Boolean)
extern "C"  void UISlider_OnPressBackground_m1072206825 (UISlider_t2191058247 * __this, GameObject_t1756533147 * ___go0, bool ___isPressed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnDragBackground(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void UISlider_OnDragBackground_m4106317333 (UISlider_t2191058247 * __this, GameObject_t1756533147 * ___go0, Vector2_t2243707579  ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPressForeground(UnityEngine.GameObject,System.Boolean)
extern "C"  void UISlider_OnPressForeground_m3495319808 (UISlider_t2191058247 * __this, GameObject_t1756533147 * ___go0, bool ___isPressed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnDragForeground(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void UISlider_OnDragForeground_m1047417346 (UISlider_t2191058247 * __this, GameObject_t1756533147 * ___go0, Vector2_t2243707579  ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnKey(UnityEngine.KeyCode)
extern "C"  void UISlider_OnKey_m3634739157 (UISlider_t2191058247 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
