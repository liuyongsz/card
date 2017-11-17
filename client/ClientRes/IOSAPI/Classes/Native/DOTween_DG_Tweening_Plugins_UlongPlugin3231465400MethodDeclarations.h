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

// DG.Tweening.Plugins.UlongPlugin
struct UlongPlugin_t3231465400;
// DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t2937657178;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<System.UInt64>
struct DOGetter_1_t396335760;
// DG.Tweening.Core.DOSetter`1<System.UInt64>
struct DOSetter_1_t272458604;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions2508431845.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.UlongPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void UlongPlugin_Reset_m465097296 (UlongPlugin_t3231465400 * __this, TweenerCore_3_t2937657178 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 DG.Tweening.Plugins.UlongPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>,System.UInt64)
extern "C"  uint64_t UlongPlugin_ConvertToStartValue_m77481419 (UlongPlugin_t3231465400 * __this, TweenerCore_3_t2937657178 * ___t0, uint64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UlongPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void UlongPlugin_SetRelativeEndValue_m3409537757 (UlongPlugin_t3231465400 * __this, TweenerCore_3_t2937657178 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UlongPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void UlongPlugin_SetChangeValue_m4268888190 (UlongPlugin_t3231465400 * __this, TweenerCore_3_t2937657178 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.UlongPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,System.UInt64)
extern "C"  float UlongPlugin_GetSpeedBasedDuration_m721011258 (UlongPlugin_t3231465400 * __this, NoOptions_t2508431845  ___options0, float ___unitsXSecond1, uint64_t ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UlongPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.UInt64>,DG.Tweening.Core.DOSetter`1<System.UInt64>,System.Single,System.UInt64,System.UInt64,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void UlongPlugin_EvaluateAndApply_m248710881 (UlongPlugin_t3231465400 * __this, NoOptions_t2508431845  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t396335760 * ___getter3, DOSetter_1_t272458604 * ___setter4, float ___elapsed5, uint64_t ___startValue6, uint64_t ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UlongPlugin::.ctor()
extern "C"  void UlongPlugin__ctor_m2560758085 (UlongPlugin_t3231465400 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
