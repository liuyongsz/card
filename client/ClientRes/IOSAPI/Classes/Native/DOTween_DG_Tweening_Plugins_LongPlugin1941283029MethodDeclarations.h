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

// DG.Tweening.Plugins.LongPlugin
struct LongPlugin_t1941283029;
// DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t3199111798;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<System.Int64>
struct DOGetter_1_t2691184179;
// DG.Tweening.Core.DOSetter`1<System.Int64>
struct DOSetter_1_t2567307023;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions2508431845.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.LongPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void LongPlugin_Reset_m4261321919 (LongPlugin_t1941283029 * __this, TweenerCore_3_t3199111798 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 DG.Tweening.Plugins.LongPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>,System.Int64)
extern "C"  int64_t LongPlugin_ConvertToStartValue_m603421758 (LongPlugin_t1941283029 * __this, TweenerCore_3_t3199111798 * ___t0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.LongPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void LongPlugin_SetRelativeEndValue_m4267326736 (LongPlugin_t1941283029 * __this, TweenerCore_3_t3199111798 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.LongPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void LongPlugin_SetChangeValue_m3050133269 (LongPlugin_t1941283029 * __this, TweenerCore_3_t3199111798 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.LongPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,System.Int64)
extern "C"  float LongPlugin_GetSpeedBasedDuration_m2541162194 (LongPlugin_t1941283029 * __this, NoOptions_t2508431845  ___options0, float ___unitsXSecond1, int64_t ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.LongPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.Int64>,DG.Tweening.Core.DOSetter`1<System.Int64>,System.Single,System.Int64,System.Int64,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void LongPlugin_EvaluateAndApply_m2985682968 (LongPlugin_t1941283029 * __this, NoOptions_t2508431845  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t2691184179 * ___getter3, DOSetter_1_t2567307023 * ___setter4, float ___elapsed5, int64_t ___startValue6, int64_t ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.LongPlugin::.ctor()
extern "C"  void LongPlugin__ctor_m2586876812 (LongPlugin_t1941283029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
