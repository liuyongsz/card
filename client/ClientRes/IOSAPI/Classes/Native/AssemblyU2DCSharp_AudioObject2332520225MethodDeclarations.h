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

// AudioObject
struct AudioObject_t2332520225;
// AudioCfg
struct AudioCfg_t138726916;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AudioCfg138726916.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void AudioObject::.ctor(AudioCfg,UnityEngine.Transform)
extern "C"  void AudioObject__ctor_m3430793175 (AudioObject_t2332520225 * __this, AudioCfg_t138726916 * ___config0, Transform_t3275118058 * ___root1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::set_AudioID(System.Int32)
extern "C"  void AudioObject_set_AudioID_m4257007379 (AudioObject_t2332520225 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AudioObject::get_AudioID()
extern "C"  int32_t AudioObject_get_AudioID_m492429334 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioObject::get_Expired()
extern "C"  bool AudioObject_get_Expired_m3097409804 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioObject::get_IsLoop()
extern "C"  bool AudioObject_get_IsLoop_m480095735 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::LoadAsset()
extern "C"  void AudioObject_LoadAsset_m3388451388 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::Play(UnityEngine.Transform)
extern "C"  void AudioObject_Play_m1402940227 (AudioObject_t2332520225 * __this, Transform_t3275118058 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::Play(UnityEngine.Vector3)
extern "C"  void AudioObject_Play_m4281795265 (AudioObject_t2332520225 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::Stop()
extern "C"  void AudioObject_Stop_m3114310178 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::StopImmediate()
extern "C"  void AudioObject_StopImmediate_m2959512981 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::Destroy()
extern "C"  void AudioObject_Destroy_m37854114 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::PlayInternal()
extern "C"  void AudioObject_PlayInternal_m1430913563 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::Update()
extern "C"  void AudioObject_Update_m1201253285 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::ResetState()
extern "C"  void AudioObject_ResetState_m4027897298 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::MoveToNextState()
extern "C"  void AudioObject_MoveToNextState_m1669858514 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::Enable()
extern "C"  void AudioObject_Enable_m3922542545 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::Disable()
extern "C"  void AudioObject_Disable_m2665820272 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::UpdateState()
extern "C"  void AudioObject_UpdateState_m2167482102 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::UpdatePosition()
extern "C"  void AudioObject_UpdatePosition_m1057820972 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioObject::CheckLoading()
extern "C"  void AudioObject_CheckLoading_m2708605682 (AudioObject_t2332520225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
