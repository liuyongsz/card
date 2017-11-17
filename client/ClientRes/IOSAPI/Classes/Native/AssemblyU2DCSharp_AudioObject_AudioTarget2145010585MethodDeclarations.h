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

// AudioObject/AudioTarget
struct AudioTarget_t2145010585;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void AudioObject/AudioTarget::.ctor()
extern "C"  void AudioTarget__ctor_m957654552 (AudioTarget_t2145010585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject/AudioTarget::Clear()
extern "C"  void AudioTarget_Clear_m2434168869 (AudioTarget_t2145010585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject/AudioTarget::SetTransform(UnityEngine.Transform)
extern "C"  void AudioTarget_SetTransform_m3577659001 (AudioTarget_t2145010585 * __this, Transform_t3275118058 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject/AudioTarget::SetPosition(UnityEngine.Vector3)
extern "C"  void AudioTarget_SetPosition_m916326660 (AudioTarget_t2145010585 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AudioObject/AudioTarget::GetPosition()
extern "C"  Vector3_t2243707580  AudioTarget_GetPosition_m1068834493 (AudioTarget_t2145010585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioObject/AudioTarget::IsValid()
extern "C"  bool AudioTarget_IsValid_m4208808416 (AudioTarget_t2145010585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
