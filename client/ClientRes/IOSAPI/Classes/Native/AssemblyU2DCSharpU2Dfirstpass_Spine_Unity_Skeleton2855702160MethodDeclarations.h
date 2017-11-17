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

// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate
struct SkeletonRendererDelegate_t2855702160;
// System.Object
struct Il2CppObject;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton2265953470.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SkeletonRendererDelegate__ctor_m1274307911 (SkeletonRendererDelegate_t2855702160 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate::Invoke(Spine.Unity.SkeletonRenderer)
extern "C"  void SkeletonRendererDelegate_Invoke_m2312953381 (SkeletonRendererDelegate_t2855702160 * __this, SkeletonRenderer_t2265953470 * ___skeletonRenderer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate::BeginInvoke(Spine.Unity.SkeletonRenderer,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SkeletonRendererDelegate_BeginInvoke_m2140662444 (SkeletonRendererDelegate_t2855702160 * __this, SkeletonRenderer_t2265953470 * ___skeletonRenderer0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void SkeletonRendererDelegate_EndInvoke_m60050177 (SkeletonRendererDelegate_t2855702160 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
