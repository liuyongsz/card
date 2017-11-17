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

// UIEventListener/ObjectDelegate
struct ObjectDelegate_t2995362177;
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

// System.Void UIEventListener/ObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ObjectDelegate__ctor_m1395193878 (ObjectDelegate_t2995362177 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/ObjectDelegate::Invoke(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void ObjectDelegate_Invoke_m1713526662 (ObjectDelegate_t2995362177 * __this, GameObject_t1756533147 * ___go0, GameObject_t1756533147 * ___draggedObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIEventListener/ObjectDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ObjectDelegate_BeginInvoke_m1902928887 (ObjectDelegate_t2995362177 * __this, GameObject_t1756533147 * ___go0, GameObject_t1756533147 * ___draggedObject1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/ObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void ObjectDelegate_EndInvoke_m3481509560 (ObjectDelegate_t2995362177 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
