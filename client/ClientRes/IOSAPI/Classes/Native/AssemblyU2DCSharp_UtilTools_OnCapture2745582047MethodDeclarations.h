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

// UtilTools/OnCapture
struct OnCapture_t2745582047;
// System.Object
struct Il2CppObject;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UtilTools/OnCapture::.ctor(System.Object,System.IntPtr)
extern "C"  void OnCapture__ctor_m3960465292 (OnCapture_t2745582047 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools/OnCapture::Invoke(UnityEngine.Texture2D)
extern "C"  void OnCapture_Invoke_m623709040 (OnCapture_t2745582047 * __this, Texture2D_t3542995729 * ___tex2d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UtilTools/OnCapture::BeginInvoke(UnityEngine.Texture2D,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnCapture_BeginInvoke_m1803041779 (OnCapture_t2745582047 * __this, Texture2D_t3542995729 * ___tex2d0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools/OnCapture::EndInvoke(System.IAsyncResult)
extern "C"  void OnCapture_EndInvoke_m1335341034 (OnCapture_t2745582047 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
