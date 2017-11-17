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

// LongClickEvent/LongClickCallBack
struct LongClickCallBack_t2060312060;
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

// System.Void LongClickEvent/LongClickCallBack::.ctor(System.Object,System.IntPtr)
extern "C"  void LongClickCallBack__ctor_m3065319697 (LongClickCallBack_t2060312060 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LongClickEvent/LongClickCallBack::Invoke(UnityEngine.GameObject,System.Boolean)
extern "C"  void LongClickCallBack_Invoke_m3890219692 (LongClickCallBack_t2060312060 * __this, GameObject_t1756533147 * ___go0, bool ___isPressed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LongClickEvent/LongClickCallBack::BeginInvoke(UnityEngine.GameObject,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LongClickCallBack_BeginInvoke_m2381388629 (LongClickCallBack_t2060312060 * __this, GameObject_t1756533147 * ___go0, bool ___isPressed1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LongClickEvent/LongClickCallBack::EndInvoke(System.IAsyncResult)
extern "C"  void LongClickCallBack_EndInvoke_m3946976883 (LongClickCallBack_t2060312060 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
