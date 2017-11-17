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

// DG.Tweening.Plugins.RectOffsetPlugin
struct RectOffsetPlugin_t664509336;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t1975182638;
// UnityEngine.RectOffset
struct RectOffset_t3387826427;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<UnityEngine.RectOffset>
struct DOGetter_1_t874965273;
// DG.Tweening.Core.DOSetter`1<UnityEngine.RectOffset>
struct DOSetter_1_t751088117;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectOffset3387826427.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions2508431845.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.RectOffsetPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void RectOffsetPlugin_Reset_m4095272056 (RectOffsetPlugin_t664509336 * __this, TweenerCore_3_t1975182638 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset DG.Tweening.Plugins.RectOffsetPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>,UnityEngine.RectOffset)
extern "C"  RectOffset_t3387826427 * RectOffsetPlugin_ConvertToStartValue_m3269101313 (RectOffsetPlugin_t664509336 * __this, TweenerCore_3_t1975182638 * ___t0, RectOffset_t3387826427 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectOffsetPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void RectOffsetPlugin_SetRelativeEndValue_m3222695535 (RectOffsetPlugin_t664509336 * __this, TweenerCore_3_t1975182638 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectOffsetPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void RectOffsetPlugin_SetChangeValue_m4017675218 (RectOffsetPlugin_t664509336 * __this, TweenerCore_3_t1975182638 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.RectOffsetPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,UnityEngine.RectOffset)
extern "C"  float RectOffsetPlugin_GetSpeedBasedDuration_m3064219017 (RectOffsetPlugin_t664509336 * __this, NoOptions_t2508431845  ___options0, float ___unitsXSecond1, RectOffset_t3387826427 * ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectOffsetPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.RectOffset>,DG.Tweening.Core.DOSetter`1<UnityEngine.RectOffset>,System.Single,UnityEngine.RectOffset,UnityEngine.RectOffset,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void RectOffsetPlugin_EvaluateAndApply_m2322178099 (RectOffsetPlugin_t664509336 * __this, NoOptions_t2508431845  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t874965273 * ___getter3, DOSetter_1_t751088117 * ___setter4, float ___elapsed5, RectOffset_t3387826427 * ___startValue6, RectOffset_t3387826427 * ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectOffsetPlugin::.ctor()
extern "C"  void RectOffsetPlugin__ctor_m3970399647 (RectOffsetPlugin_t664509336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectOffsetPlugin::.cctor()
extern "C"  void RectOffsetPlugin__cctor_m4059289360 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
