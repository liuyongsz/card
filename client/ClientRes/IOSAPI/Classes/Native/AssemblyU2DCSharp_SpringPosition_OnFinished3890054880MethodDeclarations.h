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

// SpringPosition/OnFinished
struct OnFinished_t3890054880;
// System.Object
struct Il2CppObject;
// SpringPosition
struct SpringPosition_t434217086;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_SpringPosition434217086.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void SpringPosition/OnFinished::.ctor(System.Object,System.IntPtr)
extern "C"  void OnFinished__ctor_m932607119 (OnFinished_t3890054880 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition/OnFinished::Invoke(SpringPosition)
extern "C"  void OnFinished_Invoke_m1601915967 (OnFinished_t3890054880 * __this, SpringPosition_t434217086 * ___spring0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SpringPosition/OnFinished::BeginInvoke(SpringPosition,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnFinished_BeginInvoke_m622573734 (OnFinished_t3890054880 * __this, SpringPosition_t434217086 * ___spring0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition/OnFinished::EndInvoke(System.IAsyncResult)
extern "C"  void OnFinished_EndInvoke_m1929061697 (OnFinished_t3890054880 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
