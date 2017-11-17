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

// UITweener
struct UITweener_t2986641582;
// EventDelegate/Callback
struct Callback_t2100910411;
// EventDelegate
struct EventDelegate_t3496309181;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction1874854737.h"
#include "AssemblyU2DCSharp_EventDelegate_Callback2100910411.h"
#include "AssemblyU2DCSharp_EventDelegate3496309181.h"

// System.Void UITweener::.ctor()
extern "C"  void UITweener__ctor_m917972421 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITweener::get_amountPerDelta()
extern "C"  float UITweener_get_amountPerDelta_m3796492245 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITweener::get_tweenFactor()
extern "C"  float UITweener_get_tweenFactor_m2296894208 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::set_tweenFactor(System.Single)
extern "C"  void UITweener_set_tweenFactor_m1495142921 (UITweener_t2986641582 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AnimationOrTween.Direction UITweener::get_direction()
extern "C"  int32_t UITweener_get_direction_m4271232255 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Reset()
extern "C"  void UITweener_Reset_m3160010834 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Start()
extern "C"  void UITweener_Start_m2851143413 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Update()
extern "C"  void UITweener_Update_m479104912 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::OnDestroy()
extern "C"  void UITweener_OnDestroy_m2742464684 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::SetOnFinished(EventDelegate/Callback)
extern "C"  void UITweener_SetOnFinished_m903184381 (UITweener_t2986641582 * __this, Callback_t2100910411 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::SetOnFinished(EventDelegate)
extern "C"  void UITweener_SetOnFinished_m1906887343 (UITweener_t2986641582 * __this, EventDelegate_t3496309181 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::AddOnFinished(EventDelegate/Callback)
extern "C"  void UITweener_AddOnFinished_m3855136488 (UITweener_t2986641582 * __this, Callback_t2100910411 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::AddOnFinished(EventDelegate)
extern "C"  void UITweener_AddOnFinished_m612184772 (UITweener_t2986641582 * __this, EventDelegate_t3496309181 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::RemoveOnFinished(EventDelegate)
extern "C"  void UITweener_RemoveOnFinished_m319361519 (UITweener_t2986641582 * __this, EventDelegate_t3496309181 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::OnDisable()
extern "C"  void UITweener_OnDisable_m463720406 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Sample(System.Single,System.Boolean)
extern "C"  void UITweener_Sample_m1859435509 (UITweener_t2986641582 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITweener::BounceLogic(System.Single)
extern "C"  float UITweener_BounceLogic_m2277565082 (UITweener_t2986641582 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Play()
extern "C"  void UITweener_Play_m1499013141 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::PlayForward()
extern "C"  void UITweener_PlayForward_m3772341562 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::PlayReverse()
extern "C"  void UITweener_PlayReverse_m4027828489 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Play(System.Boolean)
extern "C"  void UITweener_Play_m3572442510 (UITweener_t2986641582 * __this, bool ___forward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::ResetToBeginning()
extern "C"  void UITweener_ResetToBeginning_m1313982072 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Toggle()
extern "C"  void UITweener_Toggle_m2998214231 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::SetStartToCurrentValue()
extern "C"  void UITweener_SetStartToCurrentValue_m4060138518 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::SetEndToCurrentValue()
extern "C"  void UITweener_SetEndToCurrentValue_m4110510197 (UITweener_t2986641582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
