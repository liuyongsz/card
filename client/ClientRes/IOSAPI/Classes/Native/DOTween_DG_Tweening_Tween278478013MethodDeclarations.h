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

// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.TweenCallback
struct TweenCallback_t3697142134;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateMode2539919096.h"
#include "DOTween_DG_Tweening_TweenCallback3697142134.h"

// System.Void DG.Tweening.Tween::Reset()
extern "C"  void Tween_Reset_m2158413979 (Tween_t278478013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Tween::UpdateDelay(System.Single)
extern "C"  float Tween_UpdateDelay_m1702331541 (Tween_t278478013 * __this, float ___elapsed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Tween::DoGoto(DG.Tweening.Tween,System.Single,System.Int32,DG.Tweening.Core.Enums.UpdateMode)
extern "C"  bool Tween_DoGoto_m3340670294 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, float ___toPosition1, int32_t ___toCompletedLoops2, int32_t ___updateMode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Tween::OnTweenCallback(DG.Tweening.TweenCallback)
extern "C"  bool Tween_OnTweenCallback_m1044536921 (Il2CppObject * __this /* static, unused */, TweenCallback_t3697142134 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Tween::.ctor()
extern "C"  void Tween__ctor_m3822097368 (Tween_t278478013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
