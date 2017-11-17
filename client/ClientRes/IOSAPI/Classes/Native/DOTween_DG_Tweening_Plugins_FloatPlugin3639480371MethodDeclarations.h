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

// DG.Tweening.Plugins.FloatPlugin
struct FloatPlugin_t3639480371;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t2279406887;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_t3858616074;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t3734738918;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_FloatOptions1421548266.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.FloatPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>)
extern "C"  void FloatPlugin_Reset_m1409276442 (FloatPlugin_t3639480371 * __this, TweenerCore_3_t2279406887 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.FloatPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>,System.Single)
extern "C"  float FloatPlugin_ConvertToStartValue_m1262983801 (FloatPlugin_t3639480371 * __this, TweenerCore_3_t2279406887 * ___t0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.FloatPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>)
extern "C"  void FloatPlugin_SetRelativeEndValue_m3966531475 (FloatPlugin_t3639480371 * __this, TweenerCore_3_t2279406887 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.FloatPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>)
extern "C"  void FloatPlugin_SetChangeValue_m134531078 (FloatPlugin_t3639480371 * __this, TweenerCore_3_t2279406887 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.FloatPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.FloatOptions,System.Single,System.Single)
extern "C"  float FloatPlugin_GetSpeedBasedDuration_m1649918496 (FloatPlugin_t3639480371 * __this, FloatOptions_t1421548266  ___options0, float ___unitsXSecond1, float ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.FloatPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.FloatOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.Single>,DG.Tweening.Core.DOSetter`1<System.Single>,System.Single,System.Single,System.Single,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void FloatPlugin_EvaluateAndApply_m3138927159 (FloatPlugin_t3639480371 * __this, FloatOptions_t1421548266  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t3858616074 * ___getter3, DOSetter_1_t3734738918 * ___setter4, float ___elapsed5, float ___startValue6, float ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.FloatPlugin::.ctor()
extern "C"  void FloatPlugin__ctor_m585502968 (FloatPlugin_t3639480371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
