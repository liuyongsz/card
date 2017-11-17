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
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t3942566441;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_UpdateType3357224513.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateMode2539919096.h"
#include "DOTween_DG_Tweening_Core_TweenManager_CapacityIncr1969140739.h"

// System.Void DG.Tweening.Core.TweenManager::Despawn(DG.Tweening.Tween,System.Boolean)
extern "C"  void TweenManager_Despawn_m1933822120 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, bool ___modifyActiveLists1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::SetCapacities(System.Int32,System.Int32)
extern "C"  void TweenManager_SetCapacities_m2919421098 (Il2CppObject * __this /* static, unused */, int32_t ___tweenersCapacity0, int32_t ___sequencesCapacity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::Update(DG.Tweening.UpdateType,System.Single,System.Single)
extern "C"  void TweenManager_Update_m378595860 (Il2CppObject * __this /* static, unused */, int32_t ___updateType0, float ___deltaTime1, float ___independentTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Complete(DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.Enums.UpdateMode)
extern "C"  bool TweenManager_Complete_m1525644904 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, bool ___modifyActiveLists1, int32_t ___updateMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ForceInit(DG.Tweening.Tween,System.Boolean)
extern "C"  void TweenManager_ForceInit_m163553463 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, bool ___isSequenced1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Goto(DG.Tweening.Tween,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateMode)
extern "C"  bool TweenManager_Goto_m3404683021 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, float ___to1, bool ___andPlay2, int32_t ___updateMode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::MarkForKilling(DG.Tweening.Tween)
extern "C"  void TweenManager_MarkForKilling_m1319382931 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::AddActiveTween(DG.Tweening.Tween)
extern "C"  void TweenManager_AddActiveTween_m1611214199 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ReorganizeActiveTweens()
extern "C"  void TweenManager_ReorganizeActiveTweens_m3706676790 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::DespawnActiveTweens(System.Collections.Generic.List`1<DG.Tweening.Tween>)
extern "C"  void TweenManager_DespawnActiveTweens_m3761818125 (Il2CppObject * __this /* static, unused */, List_1_t3942566441 * ___tweens0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::RemoveActiveTween(DG.Tweening.Tween)
extern "C"  void TweenManager_RemoveActiveTween_m3416564700 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::IncreaseCapacities(DG.Tweening.Core.TweenManager/CapacityIncreaseMode)
extern "C"  void TweenManager_IncreaseCapacities_m2843870263 (Il2CppObject * __this /* static, unused */, int32_t ___increaseMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::.cctor()
extern "C"  void TweenManager__cctor_m3795227095 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
