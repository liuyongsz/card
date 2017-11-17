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

// DG.Tweening.Plugins.RectPlugin
struct RectPlugin_t391797831;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct TweenerCore_3_t3065187631;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>
struct DOGetter_1_t1168894472;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>
struct DOSetter_1_t1045017316;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "DOTween_DG_Tweening_Plugins_Options_RectOptions3393635162.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.RectPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>)
extern "C"  void RectPlugin_Reset_m36067126 (RectPlugin_t391797831 * __this, TweenerCore_3_t3065187631 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect DG.Tweening.Plugins.RectPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>,UnityEngine.Rect)
extern "C"  Rect_t3681755626  RectPlugin_ConvertToStartValue_m4260783945 (RectPlugin_t391797831 * __this, TweenerCore_3_t3065187631 * ___t0, Rect_t3681755626  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>)
extern "C"  void RectPlugin_SetRelativeEndValue_m1255493911 (RectPlugin_t391797831 * __this, TweenerCore_3_t3065187631 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>)
extern "C"  void RectPlugin_SetChangeValue_m2964213558 (RectPlugin_t391797831 * __this, TweenerCore_3_t3065187631 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.RectPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.RectOptions,System.Single,UnityEngine.Rect)
extern "C"  float RectPlugin_GetSpeedBasedDuration_m4207891958 (RectPlugin_t391797831 * __this, RectOptions_t3393635162  ___options0, float ___unitsXSecond1, Rect_t3681755626  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.RectOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>,DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>,System.Single,UnityEngine.Rect,UnityEngine.Rect,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void RectPlugin_EvaluateAndApply_m120801595 (RectPlugin_t391797831 * __this, RectOptions_t3393635162  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t1168894472 * ___getter3, DOSetter_1_t1045017316 * ___setter4, float ___elapsed5, Rect_t3681755626  ___startValue6, Rect_t3681755626  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectPlugin::.ctor()
extern "C"  void RectPlugin__ctor_m403056936 (RectPlugin_t391797831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
