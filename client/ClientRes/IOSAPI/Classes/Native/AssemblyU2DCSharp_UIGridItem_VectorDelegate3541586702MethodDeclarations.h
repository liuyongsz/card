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

// UIGridItem/VectorDelegate
struct VectorDelegate_t3541586702;
// System.Object
struct Il2CppObject;
// UIGridItem
struct UIGridItem_t3654720203;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_UIGridItem3654720203.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UIGridItem/VectorDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void VectorDelegate__ctor_m3494053335 (VectorDelegate_t3541586702 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGridItem/VectorDelegate::Invoke(UIGridItem,UnityEngine.Vector2)
extern "C"  void VectorDelegate_Invoke_m757623904 (VectorDelegate_t3541586702 * __this, UIGridItem_t3654720203 * ___item0, Vector2_t2243707579  ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIGridItem/VectorDelegate::BeginInvoke(UIGridItem,UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * VectorDelegate_BeginInvoke_m858453869 (VectorDelegate_t3541586702 * __this, UIGridItem_t3654720203 * ___item0, Vector2_t2243707579  ___delta1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGridItem/VectorDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void VectorDelegate_EndInvoke_m955099985 (VectorDelegate_t3541586702 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
