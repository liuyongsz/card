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

// UIEventListener/VectorDelegate
struct VectorDelegate_t3730950941;
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
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UIEventListener/VectorDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void VectorDelegate__ctor_m1317953826 (VectorDelegate_t3730950941 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VectorDelegate::Invoke(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void VectorDelegate_Invoke_m828430796 (VectorDelegate_t3730950941 * __this, GameObject_t1756533147 * ___go0, Vector2_t2243707579  ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIEventListener/VectorDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * VectorDelegate_BeginInvoke_m4126529039 (VectorDelegate_t3730950941 * __this, GameObject_t1756533147 * ___go0, Vector2_t2243707579  ___delta1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VectorDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void VectorDelegate_EndInvoke_m1537739132 (VectorDelegate_t3730950941 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
