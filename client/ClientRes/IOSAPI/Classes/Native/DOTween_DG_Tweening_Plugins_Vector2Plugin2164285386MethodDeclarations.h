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

// DG.Tweening.Plugins.Vector2Plugin
struct Vector2Plugin_t2164285386;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t3250868854;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t4025813721;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t3901936565;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "DOTween_DG_Tweening_Plugins_Options_VectorOptions293385261.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.Vector2Plugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector2Plugin_Reset_m4169839166 (Vector2Plugin_t2164285386 * __this, TweenerCore_3_t3250868854 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 DG.Tweening.Plugins.Vector2Plugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  Vector2Plugin_ConvertToStartValue_m2155639343 (Vector2Plugin_t2164285386 * __this, TweenerCore_3_t3250868854 * ___t0, Vector2_t2243707579  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector2Plugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector2Plugin_SetRelativeEndValue_m1117473221 (Vector2Plugin_t2164285386 * __this, TweenerCore_3_t3250868854 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector2Plugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector2Plugin_SetChangeValue_m1996895644 (Vector2Plugin_t2164285386 * __this, TweenerCore_3_t3250868854 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Vector2Plugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.VectorOptions,System.Single,UnityEngine.Vector2)
extern "C"  float Vector2Plugin_GetSpeedBasedDuration_m1810585513 (Vector2Plugin_t2164285386 * __this, VectorOptions_t293385261  ___options0, float ___unitsXSecond1, Vector2_t2243707579  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector2Plugin::EvaluateAndApply(DG.Tweening.Plugins.Options.VectorOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>,System.Single,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void Vector2Plugin_EvaluateAndApply_m4227295577 (Vector2Plugin_t2164285386 * __this, VectorOptions_t293385261  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t4025813721 * ___getter3, DOSetter_1_t3901936565 * ___setter4, float ___elapsed5, Vector2_t2243707579  ___startValue6, Vector2_t2243707579  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector2Plugin::.ctor()
extern "C"  void Vector2Plugin__ctor_m1113015805 (Vector2Plugin_t2164285386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
