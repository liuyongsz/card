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

// AngleScrollView
struct AngleScrollView_t1318527455;
// UIPanel
struct UIPanel_t1795085332;
// UIProgressBar
struct UIProgressBar_t3824507790;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_UIProgressBar3824507790.h"

// System.Void AngleScrollView::.ctor()
extern "C"  void AngleScrollView__ctor_m2801794934 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::.cctor()
extern "C"  void AngleScrollView__cctor_m1072078741 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel AngleScrollView::get_panel()
extern "C"  UIPanel_t1795085332 * AngleScrollView_get_panel_m3626313426 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AngleScrollView::get_isDragging()
extern "C"  bool AngleScrollView_get_isDragging_m1873222830 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AngleScrollView::get_isSpring()
extern "C"  bool AngleScrollView_get_isSpring_m939965666 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AngleScrollView::get_isRuning()
extern "C"  bool AngleScrollView_get_isRuning_m3127580012 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AngleScrollView::get_Run()
extern "C"  bool AngleScrollView_get_Run_m4177692042 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds AngleScrollView::get_bounds()
extern "C"  Bounds_t3033363703  AngleScrollView_get_bounds_m48812619 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AngleScrollView::get_canMoveHorizontally()
extern "C"  bool AngleScrollView_get_canMoveHorizontally_m1417147369 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AngleScrollView::get_canMoveVertically()
extern "C"  bool AngleScrollView_get_canMoveVertically_m1715261981 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AngleScrollView::get_shouldMoveHorizontally()
extern "C"  bool AngleScrollView_get_shouldMoveHorizontally_m2402374854 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AngleScrollView::get_shouldMoveVertically()
extern "C"  bool AngleScrollView_get_shouldMoveVertically_m2880835904 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AngleScrollView::get_shouldMove()
extern "C"  bool AngleScrollView_get_shouldMove_m2662374415 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AngleScrollView::get_currentMomentum()
extern "C"  Vector3_t2243707580  AngleScrollView_get_currentMomentum_m2080101296 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::set_currentMomentum(UnityEngine.Vector3)
extern "C"  void AngleScrollView_set_currentMomentum_m2372849679 (AngleScrollView_t1318527455 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::Awake()
extern "C"  void AngleScrollView_Awake_m3147573439 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::OnEnable()
extern "C"  void AngleScrollView_OnEnable_m2076721786 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::OnDisable()
extern "C"  void AngleScrollView_OnDisable_m1782917411 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::Start()
extern "C"  void AngleScrollView_Start_m4150085306 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AngleScrollView::RestrictWithinBounds(System.Boolean)
extern "C"  bool AngleScrollView_RestrictWithinBounds_m960401797 (AngleScrollView_t1318527455 * __this, bool ___instant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AngleScrollView::RestrictWithinBounds(System.Boolean,System.Boolean,System.Boolean)
extern "C"  bool AngleScrollView_RestrictWithinBounds_m3264854421 (AngleScrollView_t1318527455 * __this, bool ___instant0, bool ___horizontal1, bool ___vertical2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::OnSpringPanelFinished()
extern "C"  void AngleScrollView_OnSpringPanelFinished_m1236446110 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::DisableSpring()
extern "C"  void AngleScrollView_DisableSpring_m3286558447 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::UpdateScrollbars(System.Boolean)
extern "C"  void AngleScrollView_UpdateScrollbars_m81458719 (AngleScrollView_t1318527455 * __this, bool ___recalculateBounds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::UpdateScrollbars(UIProgressBar,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C"  void AngleScrollView_UpdateScrollbars_m621088767 (AngleScrollView_t1318527455 * __this, UIProgressBar_t3824507790 * ___slider0, float ___contentMin1, float ___contentMax2, float ___contentSize3, float ___viewSize4, bool ___inverted5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::SetDragAmount(System.Single,System.Single,System.Boolean)
extern "C"  void AngleScrollView_SetDragAmount_m221355695 (AngleScrollView_t1318527455 * __this, float ___x0, float ___y1, bool ___updateScrollbars2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::ResetPosition()
extern "C"  void AngleScrollView_ResetPosition_m2495250894 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::UpdatePosition()
extern "C"  void AngleScrollView_UpdatePosition_m1577084138 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::OnScrollBar()
extern "C"  void AngleScrollView_OnScrollBar_m3618741463 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::MoveRelative(UnityEngine.Vector3)
extern "C"  void AngleScrollView_MoveRelative_m396178946 (AngleScrollView_t1318527455 * __this, Vector3_t2243707580  ___relative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::MoveAbsolute(UnityEngine.Vector3)
extern "C"  void AngleScrollView_MoveAbsolute_m2181174565 (AngleScrollView_t1318527455 * __this, Vector3_t2243707580  ___absolute0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::Press(System.Boolean)
extern "C"  void AngleScrollView_Press_m1039095288 (AngleScrollView_t1318527455 * __this, bool ___pressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::Drag()
extern "C"  void AngleScrollView_Drag_m818531074 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::Scroll(System.Single)
extern "C"  void AngleScrollView_Scroll_m2120484766 (AngleScrollView_t1318527455 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView::LateUpdate()
extern "C"  void AngleScrollView_LateUpdate_m2556034671 (AngleScrollView_t1318527455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
