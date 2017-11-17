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

// UIPanel
struct UIPanel_t1795085332;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Transform
struct Transform_t3275118058;
// UIWidget
struct UIWidget_t1453041918;
// AdaptiveRenderQueue
struct AdaptiveRenderQueue_t1296192991;
// UIDrawCall
struct UIDrawCall_t3291843512;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIPanel1795085332.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_UIDrawCall_Clipping4042448929.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "AssemblyU2DCSharp_UIWidget1453041918.h"
#include "AssemblyU2DCSharp_AdaptiveRenderQueue1296192991.h"
#include "AssemblyU2DCSharp_UIDrawCall3291843512.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

// System.Void UIPanel::.ctor()
extern "C"  void UIPanel__ctor_m1077500321 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::.cctor()
extern "C"  void UIPanel__cctor_m1130496102 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_nextUnusedDepth()
extern "C"  int32_t UIPanel_get_nextUnusedDepth_m4291327822 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_canBeAnchored()
extern "C"  bool UIPanel_get_canBeAnchored_m3332037491 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_alpha()
extern "C"  float UIPanel_get_alpha_m1725163322 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_alpha(System.Single)
extern "C"  void UIPanel_set_alpha_m2862667873 (UIPanel_t1795085332 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_depth()
extern "C"  int32_t UIPanel_get_depth_m1315426983 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_depth(System.Int32)
extern "C"  void UIPanel_set_depth_m1154554720 (UIPanel_t1795085332 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_sortingOrder()
extern "C"  int32_t UIPanel_get_sortingOrder_m3302552024 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_sortingOrder(System.Int32)
extern "C"  void UIPanel_set_sortingOrder_m3976800305 (UIPanel_t1795085332 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::CompareFunc(UIPanel,UIPanel)
extern "C"  int32_t UIPanel_CompareFunc_m2010974746 (Il2CppObject * __this /* static, unused */, UIPanel_t1795085332 * ___a0, UIPanel_t1795085332 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_width()
extern "C"  float UIPanel_get_width_m1103668186 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_height()
extern "C"  float UIPanel_get_height_m3866231201 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_halfPixelOffset()
extern "C"  bool UIPanel_get_halfPixelOffset_m2922990942 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_usedForUI()
extern "C"  bool UIPanel_get_usedForUI_m3578085152 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPanel::get_drawCallOffset()
extern "C"  Vector3_t2243707580  UIPanel_get_drawCallOffset_m1854552745 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/Clipping UIPanel::get_clipping()
extern "C"  int32_t UIPanel_get_clipping_m2023855476 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipping(UIDrawCall/Clipping)
extern "C"  void UIPanel_set_clipping_m3438397525 (UIPanel_t1795085332 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_clipsChildren()
extern "C"  bool UIPanel_get_clipsChildren_m11645102 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::get_clipOffset()
extern "C"  Vector2_t2243707579  UIPanel_get_clipOffset_m1165225790 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipOffset(UnityEngine.Vector2)
extern "C"  void UIPanel_set_clipOffset_m1085789407 (UIPanel_t1795085332 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_clipRange()
extern "C"  Vector4_t2243707581  UIPanel_get_clipRange_m3092452698 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipRange(UnityEngine.Vector4)
extern "C"  void UIPanel_set_clipRange_m4165490131 (UIPanel_t1795085332 * __this, Vector4_t2243707581  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_baseClipRegion()
extern "C"  Vector4_t2243707581  UIPanel_get_baseClipRegion_m1419566798 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_baseClipRegion(UnityEngine.Vector4)
extern "C"  void UIPanel_set_baseClipRegion_m1025429501 (UIPanel_t1795085332 * __this, Vector4_t2243707581  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_finalClipRegion()
extern "C"  Vector4_t2243707581  UIPanel_get_finalClipRegion_m2643655759 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::get_clipSoftness()
extern "C"  Vector2_t2243707579  UIPanel_get_clipSoftness_m3532280798 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipSoftness(UnityEngine.Vector2)
extern "C"  void UIPanel_set_clipSoftness_m4083594479 (UIPanel_t1795085332 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::get_localCorners()
extern "C"  Vector3U5BU5D_t1172311765* UIPanel_get_localCorners_m1885106741 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::get_worldCorners()
extern "C"  Vector3U5BU5D_t1172311765* UIPanel_get_worldCorners_m1323820866 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::GetSides(UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t1172311765* UIPanel_GetSides_m746970406 (UIPanel_t1795085332 * __this, Transform_t3275118058 * ___relativeTo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Invalidate(System.Boolean)
extern "C"  void UIPanel_Invalidate_m2936845819 (UIPanel_t1795085332 * __this, bool ___includeChildren0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::CalculateFinalAlpha(System.Int32)
extern "C"  float UIPanel_CalculateFinalAlpha_m2745935440 (UIPanel_t1795085332 * __this, int32_t ___frameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool UIPanel_IsVisible_m2318422237 (UIPanel_t1795085332 * __this, Vector3_t2243707580  ___a0, Vector3_t2243707580  ___b1, Vector3_t2243707580  ___c2, Vector3_t2243707580  ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3)
extern "C"  bool UIPanel_IsVisible_m1110511972 (UIPanel_t1795085332 * __this, Vector3_t2243707580  ___worldPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UIWidget)
extern "C"  bool UIPanel_IsVisible_m2056051053 (UIPanel_t1795085332 * __this, UIWidget_t1453041918 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RebuildAllDrawCalls()
extern "C"  void UIPanel_RebuildAllDrawCalls_m2421877910 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetDirty()
extern "C"  void UIPanel_SetDirty_m3427091389 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Awake()
extern "C"  void UIPanel_Awake_m2782953536 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnStart()
extern "C"  void UIPanel_OnStart_m536388736 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnInit()
extern "C"  void UIPanel_OnInit_m2622737120 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::AddRenderQuene(AdaptiveRenderQueue)
extern "C"  void UIPanel_AddRenderQuene_m1532352121 (UIPanel_t1795085332 * __this, AdaptiveRenderQueue_t1296192991 * ____renderQuene0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RemoveRenderQuene(AdaptiveRenderQueue)
extern "C"  void UIPanel_RemoveRenderQuene_m1668067116 (UIPanel_t1795085332 * __this, AdaptiveRenderQueue_t1296192991 * ____renderQuene0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnDisable()
extern "C"  void UIPanel_OnDisable_m3067137960 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateTransformMatrix()
extern "C"  void UIPanel_UpdateTransformMatrix_m3649354251 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnAnchor()
extern "C"  void UIPanel_OnAnchor_m4089075333 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::LateUpdate()
extern "C"  void UIPanel_LateUpdate_m3288864330 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateSelf()
extern "C"  void UIPanel_UpdateSelf_m1169223264 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SortWidgets()
extern "C"  void UIPanel_SortWidgets_m3912063282 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::FillAllDrawCalls()
extern "C"  void UIPanel_FillAllDrawCalls_m3695113220 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::FillDrawCall(UIDrawCall)
extern "C"  bool UIPanel_FillDrawCall_m4176261602 (UIPanel_t1795085332 * __this, UIDrawCall_t3291843512 * ___dc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateDrawCalls()
extern "C"  void UIPanel_UpdateDrawCalls_m1304568365 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateLayers()
extern "C"  void UIPanel_UpdateLayers_m2635080972 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateWidgets()
extern "C"  void UIPanel_UpdateWidgets_m936663019 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIPanel::FindDrawCall(UIWidget)
extern "C"  UIDrawCall_t3291843512 * UIPanel_FindDrawCall_m1532180859 (UIPanel_t1795085332 * __this, UIWidget_t1453041918 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::AddWidget(UIWidget)
extern "C"  void UIPanel_AddWidget_m318008474 (UIPanel_t1795085332 * __this, UIWidget_t1453041918 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RemoveWidget(UIWidget)
extern "C"  void UIPanel_RemoveWidget_m2792282035 (UIPanel_t1795085332 * __this, UIWidget_t1453041918 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Refresh()
extern "C"  void UIPanel_Refresh_m2638687940 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPanel::CalculateConstrainOffset(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector3_t2243707580  UIPanel_CalculateConstrainOffset_m3691366311 (UIPanel_t1795085332 * __this, Vector2_t2243707579  ___min0, Vector2_t2243707579  ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,UnityEngine.Bounds&,System.Boolean)
extern "C"  bool UIPanel_ConstrainTargetToBounds_m1477943687 (UIPanel_t1795085332 * __this, Transform_t3275118058 * ___target0, Bounds_t3033363703 * ___targetBounds1, bool ___immediate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,System.Boolean)
extern "C"  bool UIPanel_ConstrainTargetToBounds_m80268627 (UIPanel_t1795085332 * __this, Transform_t3275118058 * ___target0, bool ___immediate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform)
extern "C"  UIPanel_t1795085332 * UIPanel_Find_m3258837136 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform,System.Boolean)
extern "C"  UIPanel_t1795085332 * UIPanel_Find_m2413452129 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___trans0, bool ___createIfMissing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform,System.Boolean,System.Int32)
extern "C"  UIPanel_t1795085332 * UIPanel_Find_m3221384014 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___trans0, bool ___createIfMissing1, int32_t ___layer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::GetWindowSize()
extern "C"  Vector2_t2243707579  UIPanel_GetWindowSize_m1854683725 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::GetViewSize()
extern "C"  Vector2_t2243707579  UIPanel_GetViewSize_m3463760284 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
