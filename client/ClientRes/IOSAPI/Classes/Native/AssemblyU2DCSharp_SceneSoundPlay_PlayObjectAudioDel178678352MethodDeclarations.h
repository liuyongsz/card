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

// SceneSoundPlay/PlayObjectAudioDelegate
struct PlayObjectAudioDelegate_t178678352;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void SceneSoundPlay/PlayObjectAudioDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void PlayObjectAudioDelegate__ctor_m745994821 (PlayObjectAudioDelegate_t178678352 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneSoundPlay/PlayObjectAudioDelegate::Invoke(UnityEngine.GameObject,System.String)
extern "C"  bool PlayObjectAudioDelegate_Invoke_m2271715231 (PlayObjectAudioDelegate_t178678352 * __this, GameObject_t1756533147 * ___oSource0, String_t* ___strAudioId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SceneSoundPlay/PlayObjectAudioDelegate::BeginInvoke(UnityEngine.GameObject,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PlayObjectAudioDelegate_BeginInvoke_m924681306 (PlayObjectAudioDelegate_t178678352 * __this, GameObject_t1756533147 * ___oSource0, String_t* ___strAudioId1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneSoundPlay/PlayObjectAudioDelegate::EndInvoke(System.IAsyncResult)
extern "C"  bool PlayObjectAudioDelegate_EndInvoke_m2091936511 (PlayObjectAudioDelegate_t178678352 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
