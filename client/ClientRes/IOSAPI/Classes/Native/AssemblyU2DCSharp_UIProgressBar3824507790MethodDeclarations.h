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

// UIProgressBar
struct UIProgressBar_t3824507790;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;
// UIWidget
struct UIWidget_t1453041918;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIWidget1453041918.h"
#include "AssemblyU2DCSharp_UIProgressBar_FillDirection1824020367.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UIProgressBar::.ctor()
extern "C"  void UIProgressBar__ctor_m69316963 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIProgressBar::get_cachedTransform()
extern "C"  Transform_t3275118058 * UIProgressBar_get_cachedTransform_m2808618674 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UIProgressBar::get_cachedCamera()
extern "C"  Camera_t189460977 * UIProgressBar_get_cachedCamera_m355638192 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget UIProgressBar::get_foregroundWidget()
extern "C"  UIWidget_t1453041918 * UIProgressBar_get_foregroundWidget_m440298514 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_foregroundWidget(UIWidget)
extern "C"  void UIProgressBar_set_foregroundWidget_m2576539701 (UIProgressBar_t3824507790 * __this, UIWidget_t1453041918 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget UIProgressBar::get_backgroundWidget()
extern "C"  UIWidget_t1453041918 * UIProgressBar_get_backgroundWidget_m4280242015 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_backgroundWidget(UIWidget)
extern "C"  void UIProgressBar_set_backgroundWidget_m2265344254 (UIProgressBar_t3824507790 * __this, UIWidget_t1453041918 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIProgressBar/FillDirection UIProgressBar::get_fillDirection()
extern "C"  int32_t UIProgressBar_get_fillDirection_m611060096 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_fillDirection(UIProgressBar/FillDirection)
extern "C"  void UIProgressBar_set_fillDirection_m1357100741 (UIProgressBar_t3824507790 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::get_value()
extern "C"  float UIProgressBar_get_value_m2304185923 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_value(System.Single)
extern "C"  void UIProgressBar_set_value_m2947998192 (UIProgressBar_t3824507790 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::get_alpha()
extern "C"  float UIProgressBar_get_alpha_m3053136260 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_alpha(System.Single)
extern "C"  void UIProgressBar_set_alpha_m502200647 (UIProgressBar_t3824507790 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIProgressBar::get_isHorizontal()
extern "C"  bool UIProgressBar_get_isHorizontal_m2811118486 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIProgressBar::get_isInverted()
extern "C"  bool UIProgressBar_get_isInverted_m712671971 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::Start()
extern "C"  void UIProgressBar_Start_m1842350719 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::Upgrade()
extern "C"  void UIProgressBar_Upgrade_m2812970799 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::OnStart()
extern "C"  void UIProgressBar_OnStart_m3130095738 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::Update()
extern "C"  void UIProgressBar_Update_m660724600 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::OnValidate()
extern "C"  void UIProgressBar_OnValidate_m1496579718 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::ScreenToValue(UnityEngine.Vector2)
extern "C"  float UIProgressBar_ScreenToValue_m2426312213 (UIProgressBar_t3824507790 * __this, Vector2_t2243707579  ___screenPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::LocalToValue(UnityEngine.Vector2)
extern "C"  float UIProgressBar_LocalToValue_m4277657568 (UIProgressBar_t3824507790 * __this, Vector2_t2243707579  ___localPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::ForceUpdate()
extern "C"  void UIProgressBar_ForceUpdate_m1230521527 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::SetThumbPosition(UnityEngine.Vector3)
extern "C"  void UIProgressBar_SetThumbPosition_m1682099779 (UIProgressBar_t3824507790 * __this, Vector3_t2243707580  ___worldPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::OnDestroy()
extern "C"  void UIProgressBar_OnDestroy_m3957612256 (UIProgressBar_t3824507790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
