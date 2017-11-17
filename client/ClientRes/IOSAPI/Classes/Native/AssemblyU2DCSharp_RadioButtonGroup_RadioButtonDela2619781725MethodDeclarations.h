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

// RadioButtonGroup/RadioButtonDelagate
struct RadioButtonDelagate_t2619781725;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void RadioButtonGroup/RadioButtonDelagate::.ctor(System.Object,System.IntPtr)
extern "C"  void RadioButtonDelagate__ctor_m561619584 (RadioButtonDelagate_t2619781725 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RadioButtonGroup/RadioButtonDelagate::Invoke(UnityEngine.GameObject)
extern "C"  void RadioButtonDelagate_Invoke_m1584157052 (RadioButtonDelagate_t2619781725 * __this, GameObject_t1756533147 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult RadioButtonGroup/RadioButtonDelagate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RadioButtonDelagate_BeginInvoke_m3206062027 (RadioButtonDelagate_t2619781725 * __this, GameObject_t1756533147 * ___button0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RadioButtonGroup/RadioButtonDelagate::EndInvoke(System.IAsyncResult)
extern "C"  void RadioButtonDelagate_EndInvoke_m552351634 (RadioButtonDelagate_t2619781725 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
