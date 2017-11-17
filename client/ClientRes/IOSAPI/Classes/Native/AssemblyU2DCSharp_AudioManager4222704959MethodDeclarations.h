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

// AudioManager
struct AudioManager_t4222704959;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// UnityEngine.Transform
struct Transform_t3275118058;
// AudioObject
struct AudioObject_t2332520225;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_t959546644;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameEventTypes243168119.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_AudioObject2332520225.h"
#include "AssemblyU2DCSharp_AudioGroupTypes423657466.h"

// System.Void AudioManager::.ctor()
extern "C"  void AudioManager__ctor_m653321928 (AudioManager_t4222704959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::.cctor()
extern "C"  void AudioManager__cctor_m584421913 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::InitManager()
extern "C"  void AudioManager_InitManager_m1515787807 (AudioManager_t4222704959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::OnEnterScene(GameEventTypes,System.Object[])
extern "C"  void AudioManager_OnEnterScene_m3745804014 (Il2CppObject * __this /* static, unused */, int32_t ___eventType0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::DestroyExistingListener()
extern "C"  void AudioManager_DestroyExistingListener_m140029025 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::SetListener(UnityEngine.Transform)
extern "C"  void AudioManager_SetListener_m3829369353 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AudioObject AudioManager::PlayAudio(System.Int32,UnityEngine.Vector3)
extern "C"  AudioObject_t2332520225 * AudioManager_PlayAudio_m1092193228 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Vector3_t2243707580  ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AudioObject AudioManager::PlayAudio(System.Int32,UnityEngine.Transform)
extern "C"  AudioObject_t2332520225 * AudioManager_PlayAudio_m1241581724 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Transform_t3275118058 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AudioObject AudioManager::FetchAudioObject(System.Int32)
extern "C"  AudioObject_t2332520225 * AudioManager_FetchAudioObject_m1868391384 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AudioObject AudioManager::CreateAudioObject(System.Int32)
extern "C"  AudioObject_t2332520225 * AudioManager_CreateAudioObject_m685208298 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AudioObject AudioManager::FetchFromPool(System.Int32)
extern "C"  AudioObject_t2332520225 * AudioManager_FetchFromPool_m1347784857 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::Update()
extern "C"  void AudioManager_Update_m3534410143 (AudioManager_t4222704959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::ProcessExpiredEffect(AudioObject)
extern "C"  void AudioManager_ProcessExpiredEffect_m1519854270 (Il2CppObject * __this /* static, unused */, AudioObject_t2332520225 * ___audioObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AudioObject AudioManager::Find(System.Int32)
extern "C"  AudioObject_t2332520225 * AudioManager_Find_m332194454 (Il2CppObject * __this /* static, unused */, int32_t ___audioID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Audio.AudioMixerGroup AudioManager::GetMixerGroup(AudioGroupTypes)
extern "C"  AudioMixerGroup_t959546644 * AudioManager_GetMixerGroup_m2739143608 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
