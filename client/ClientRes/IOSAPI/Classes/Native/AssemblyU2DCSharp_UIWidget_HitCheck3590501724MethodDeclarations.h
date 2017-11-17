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

// UIWidget/HitCheck
struct HitCheck_t3590501724;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UIWidget/HitCheck::.ctor(System.Object,System.IntPtr)
extern "C"  void HitCheck__ctor_m3643541551 (HitCheck_t3590501724 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget/HitCheck::Invoke(UnityEngine.Vector3)
extern "C"  bool HitCheck_Invoke_m2489327010 (HitCheck_t3590501724 * __this, Vector3_t2243707580  ___worldPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIWidget/HitCheck::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HitCheck_BeginInvoke_m2348926761 (HitCheck_t3590501724 * __this, Vector3_t2243707580  ___worldPos0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget/HitCheck::EndInvoke(System.IAsyncResult)
extern "C"  bool HitCheck_EndInvoke_m738858617 (HitCheck_t3590501724 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
