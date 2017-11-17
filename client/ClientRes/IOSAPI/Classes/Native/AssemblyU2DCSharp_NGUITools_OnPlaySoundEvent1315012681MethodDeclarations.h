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

// NGUITools/OnPlaySoundEvent
struct OnPlaySoundEvent_t1315012681;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void NGUITools/OnPlaySoundEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnPlaySoundEvent__ctor_m380431426 (OnPlaySoundEvent_t1315012681 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools/OnPlaySoundEvent::Invoke(System.Int32)
extern "C"  void OnPlaySoundEvent_Invoke_m2438267173 (OnPlaySoundEvent_t1315012681 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult NGUITools/OnPlaySoundEvent::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnPlaySoundEvent_BeginInvoke_m1878976476 (OnPlaySoundEvent_t1315012681 * __this, int32_t ___index0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools/OnPlaySoundEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnPlaySoundEvent_EndInvoke_m1549712464 (OnPlaySoundEvent_t1315012681 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
