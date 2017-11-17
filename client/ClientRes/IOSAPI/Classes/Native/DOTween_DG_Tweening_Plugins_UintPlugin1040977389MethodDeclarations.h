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

// DG.Tweening.Plugins.UintPlugin
struct UintPlugin_t1040977389;
// DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>
struct TweenerCore_3_t1648829745;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<System.UInt32>
struct DOGetter_1_t3931788163;
// DG.Tweening.Core.DOSetter`1<System.UInt32>
struct DOSetter_1_t3807911007;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_UintOptions2267095136.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.UintPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>)
extern "C"  void UintPlugin_Reset_m3049541632 (UintPlugin_t1040977389 * __this, TweenerCore_3_t1648829745 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 DG.Tweening.Plugins.UintPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>,System.UInt32)
extern "C"  uint32_t UintPlugin_ConvertToStartValue_m765651541 (UintPlugin_t1040977389 * __this, TweenerCore_3_t1648829745 * ___t0, uint32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UintPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>)
extern "C"  void UintPlugin_SetRelativeEndValue_m2418783195 (UintPlugin_t1040977389 * __this, TweenerCore_3_t1648829745 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UintPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>)
extern "C"  void UintPlugin_SetChangeValue_m3466217300 (UintPlugin_t1040977389 * __this, TweenerCore_3_t1648829745 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.UintPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.UintOptions,System.Single,System.UInt32)
extern "C"  float UintPlugin_GetSpeedBasedDuration_m1986785747 (UintPlugin_t1040977389 * __this, UintOptions_t2267095136  ___options0, float ___unitsXSecond1, uint32_t ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UintPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.UintOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.UInt32>,DG.Tweening.Core.DOSetter`1<System.UInt32>,System.Single,System.UInt32,System.UInt32,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void UintPlugin_EvaluateAndApply_m3628556239 (UintPlugin_t1040977389 * __this, UintOptions_t2267095136  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t3931788163 * ___getter3, DOSetter_1_t3807911007 * ___setter4, float ___elapsed5, uint32_t ___startValue6, uint32_t ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UintPlugin::.ctor()
extern "C"  void UintPlugin__ctor_m1851929470 (UintPlugin_t1040977389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
