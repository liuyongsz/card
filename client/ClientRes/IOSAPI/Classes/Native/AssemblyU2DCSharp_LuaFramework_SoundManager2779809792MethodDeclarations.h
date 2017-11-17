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

// LuaFramework.SoundManager
struct SoundManager_t2779809792;
// AssetBundles.NormalRes
struct NormalRes_t3181316491;
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AssetBundles_NormalRes3181316491.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void LuaFramework.SoundManager::.ctor()
extern "C"  void SoundManager__ctor_m87449005 (SoundManager_t2779809792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.SoundManager::Start()
extern "C"  void SoundManager_Start_m931221669 (SoundManager_t2779809792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.SoundManager::onloaded(AssetBundles.NormalRes)
extern "C"  void SoundManager_onloaded_m3853310353 (SoundManager_t2779809792 * __this, NormalRes_t3181316491 * ___normalRes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.SoundManager::errorload(System.String)
extern "C"  void SoundManager_errorload_m4230285477 (SoundManager_t2779809792 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.SoundManager::Add(System.String,UnityEngine.AudioClip)
extern "C"  void SoundManager_Add_m2956908165 (SoundManager_t2779809792 * __this, String_t* ___key0, AudioClip_t1932558630 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip LuaFramework.SoundManager::Get(System.String)
extern "C"  AudioClip_t1932558630 * SoundManager_Get_m2659334085 (SoundManager_t2779809792 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip LuaFramework.SoundManager::LoadAudioClip(System.String)
extern "C"  AudioClip_t1932558630 * SoundManager_LoadAudioClip_m1562089637 (SoundManager_t2779809792 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LuaFramework.SoundManager::CanPlayBackSound()
extern "C"  bool SoundManager_CanPlayBackSound_m2374898145 (SoundManager_t2779809792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.SoundManager::PlayBacksound(System.String,System.Boolean)
extern "C"  void SoundManager_PlayBacksound_m4139092012 (SoundManager_t2779809792 * __this, String_t* ___name0, bool ___canPlay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LuaFramework.SoundManager::CanPlaySoundEffect()
extern "C"  bool SoundManager_CanPlaySoundEffect_m944662305 (SoundManager_t2779809792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.SoundManager::Play(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C"  void SoundManager_Play_m1927019699 (SoundManager_t2779809792 * __this, AudioClip_t1932558630 * ___clip0, Vector3_t2243707580  ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
