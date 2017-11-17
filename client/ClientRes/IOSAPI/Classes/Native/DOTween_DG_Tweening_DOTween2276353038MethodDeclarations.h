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

// DG.Tweening.IDOTweenInit
struct IDOTweenInit_t817564569;
// DG.Tweening.Core.DOTweenSettings
struct DOTweenSettings_t873123119;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t1108663466;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t4025813722;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t3901936566;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct TweenerCore_3_t3793077019;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_LogBehaviour3505725029.h"
#include "DOTween_DG_Tweening_Core_DOTweenSettings873123119.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen1768791344.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// DG.Tweening.LogBehaviour DG.Tweening.DOTween::get_logBehaviour()
extern "C"  int32_t DOTween_get_logBehaviour_m2168492577 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTween::set_logBehaviour(DG.Tweening.LogBehaviour)
extern "C"  void DOTween_set_logBehaviour_m2124595076 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTween::.cctor()
extern "C"  void DOTween__cctor_m3994335352 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTween::AutoInit()
extern "C"  void DOTween_AutoInit_m4125144064 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.IDOTweenInit DG.Tweening.DOTween::Init(DG.Tweening.Core.DOTweenSettings,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Boolean>,System.Nullable`1<DG.Tweening.LogBehaviour>)
extern "C"  Il2CppObject * DOTween_Init_m3935563765 (Il2CppObject * __this /* static, unused */, DOTweenSettings_t873123119 * ___settings0, Nullable_1_t2088641033  ___recycleAllByDefault1, Nullable_1_t2088641033  ___useSafeMode2, Nullable_1_t1768791344  ___logBehaviour3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTween::To(DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>,UnityEngine.Vector3,System.Single)
extern "C"  TweenerCore_3_t1108663466 * DOTween_To_m1457612583 (Il2CppObject * __this /* static, unused */, DOGetter_1_t4025813722 * ___getter0, DOSetter_1_t3901936566 * ___setter1, Vector3_t2243707580  ___endValue2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions> DG.Tweening.DOTween::Shake(DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>,System.Single,System.Single,System.Int32,System.Single,System.Boolean,System.Boolean)
extern "C"  TweenerCore_3_t3793077019 * DOTween_Shake_m2491128678 (Il2CppObject * __this /* static, unused */, DOGetter_1_t4025813722 * ___getter0, DOSetter_1_t3901936566 * ___setter1, float ___duration2, float ___strength3, int32_t ___vibrato4, float ___randomness5, bool ___ignoreZAxis6, bool ___fadeOut7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions> DG.Tweening.DOTween::Shake(DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean,System.Boolean,System.Boolean)
extern "C"  TweenerCore_3_t3793077019 * DOTween_Shake_m1527020091 (Il2CppObject * __this /* static, unused */, DOGetter_1_t4025813722 * ___getter0, DOSetter_1_t3901936566 * ___setter1, float ___duration2, Vector3_t2243707580  ___strength3, int32_t ___vibrato4, float ___randomness5, bool ___ignoreZAxis6, bool ___vectorBased7, bool ___fadeOut8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions> DG.Tweening.DOTween::ToArray(DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>,UnityEngine.Vector3[],System.Single[])
extern "C"  TweenerCore_3_t3793077019 * DOTween_ToArray_m2997520276 (Il2CppObject * __this /* static, unused */, DOGetter_1_t4025813722 * ___getter0, DOSetter_1_t3901936566 * ___setter1, Vector3U5BU5D_t1172311765* ___endValues2, SingleU5BU5D_t577127397* ___durations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTween::InitCheck()
extern "C"  void DOTween_InitCheck_m691380157 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
