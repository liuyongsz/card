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

// TweenVolume
struct TweenVolume_t1729630735;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void TweenVolume::.ctor()
extern "C"  void TweenVolume__ctor_m522940976 (TweenVolume_t1729630735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource TweenVolume::get_audioSource()
extern "C"  AudioSource_t1135106623 * TweenVolume_get_audioSource_m2278700439 (TweenVolume_t1729630735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenVolume::get_volume()
extern "C"  float TweenVolume_get_volume_m2872497069 (TweenVolume_t1729630735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::set_volume(System.Single)
extern "C"  void TweenVolume_set_volume_m109879146 (TweenVolume_t1729630735 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenVolume::get_value()
extern "C"  float TweenVolume_get_value_m601152848 (TweenVolume_t1729630735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::set_value(System.Single)
extern "C"  void TweenVolume_set_value_m1496914329 (TweenVolume_t1729630735 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenVolume_OnUpdate_m3718001018 (TweenVolume_t1729630735 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenVolume TweenVolume::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  TweenVolume_t1729630735 * TweenVolume_Begin_m1242297979 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, float ___duration1, float ___targetVolume2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::SetStartToCurrentValue()
extern "C"  void TweenVolume_SetStartToCurrentValue_m292770769 (TweenVolume_t1729630735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::SetEndToCurrentValue()
extern "C"  void TweenVolume_SetEndToCurrentValue_m3281019168 (TweenVolume_t1729630735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
