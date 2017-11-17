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

// EnhanceScrollView
struct EnhanceScrollView_t607619674;
// EnhanceItem
struct EnhanceItem_t1489569341;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_EnhanceItem1489569341.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void EnhanceScrollView::.ctor()
extern "C"  void EnhanceScrollView__ctor_m3252425753 (EnhanceScrollView_t607619674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::EnableDrag(System.Boolean)
extern "C"  void EnhanceScrollView_EnableDrag_m601513575 (EnhanceScrollView_t607619674 * __this, bool ___isEnabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EnhanceScrollView EnhanceScrollView::get_GetInstance()
extern "C"  EnhanceScrollView_t607619674 * EnhanceScrollView_get_GetInstance_m2683901354 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::OnDestroy()
extern "C"  void EnhanceScrollView_OnDestroy_m2739507504 (EnhanceScrollView_t607619674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::Awake()
extern "C"  void EnhanceScrollView_Awake_m2951691002 (EnhanceScrollView_t607619674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::Start()
extern "C"  void EnhanceScrollView_Start_m1825951137 (EnhanceScrollView_t607619674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::LerpTweenToTarget(System.Single,System.Single,System.Boolean)
extern "C"  void EnhanceScrollView_LerpTweenToTarget_m1042428304 (EnhanceScrollView_t607619674 * __this, float ___originValue0, float ___targetValue1, bool ___needTween2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::DisableLerpTween()
extern "C"  void EnhanceScrollView_DisableLerpTween_m3370795059 (EnhanceScrollView_t607619674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::UpdateEnhanceScrollView(System.Single)
extern "C"  void EnhanceScrollView_UpdateEnhanceScrollView_m245285891 (EnhanceScrollView_t607619674 * __this, float ___fValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::Update()
extern "C"  void EnhanceScrollView_Update_m1217124668 (EnhanceScrollView_t607619674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::TweenViewToTarget()
extern "C"  void EnhanceScrollView_TweenViewToTarget_m2597189523 (EnhanceScrollView_t607619674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::OnTweenOver()
extern "C"  void EnhanceScrollView_OnTweenOver_m2877935723 (EnhanceScrollView_t607619674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EnhanceScrollView::GetScaleValue(System.Single,System.Single)
extern "C"  float EnhanceScrollView_GetScaleValue_m325007302 (EnhanceScrollView_t607619674 * __this, float ___sliderValue0, float ___added1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EnhanceScrollView::GetXPosValue(System.Single,System.Single)
extern "C"  float EnhanceScrollView_GetXPosValue_m446970410 (EnhanceScrollView_t607619674 * __this, float ___sliderValue0, float ___added1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EnhanceScrollView::GetYPosValue(System.Single,System.Single)
extern "C"  float EnhanceScrollView_GetYPosValue_m3322045483 (EnhanceScrollView_t607619674 * __this, float ___sliderValue0, float ___added1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EnhanceScrollView::GetMoveCurveFactorCount(EnhanceItem,EnhanceItem)
extern "C"  int32_t EnhanceScrollView_GetMoveCurveFactorCount_m2490727421 (EnhanceScrollView_t607619674 * __this, EnhanceItem_t1489569341 * ___preCenterItem0, EnhanceItem_t1489569341 * ___newCenterItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EnhanceScrollView::SortPosition(EnhanceItem,EnhanceItem)
extern "C"  int32_t EnhanceScrollView_SortPosition_m4012205570 (Il2CppObject * __this /* static, unused */, EnhanceItem_t1489569341 * ___a0, EnhanceItem_t1489569341 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::SortEnhanceItem()
extern "C"  void EnhanceScrollView_SortEnhanceItem_m567269980 (EnhanceScrollView_t607619674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::SetHorizontalTargetItemIndex(EnhanceItem)
extern "C"  void EnhanceScrollView_SetHorizontalTargetItemIndex_m391717912 (EnhanceScrollView_t607619674 * __this, EnhanceItem_t1489569341 * ___selectItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::OnBtnRightClick()
extern "C"  void EnhanceScrollView_OnBtnRightClick_m528215332 (EnhanceScrollView_t607619674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::OnBtnLeftClick()
extern "C"  void EnhanceScrollView_OnBtnLeftClick_m947532017 (EnhanceScrollView_t607619674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::OnDragEnhanceViewMove(UnityEngine.Vector2)
extern "C"  void EnhanceScrollView_OnDragEnhanceViewMove_m1177454866 (EnhanceScrollView_t607619674 * __this, Vector2_t2243707579  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollView::OnDragEnhanceViewEnd()
extern "C"  void EnhanceScrollView_OnDragEnhanceViewEnd_m189122314 (EnhanceScrollView_t607619674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
