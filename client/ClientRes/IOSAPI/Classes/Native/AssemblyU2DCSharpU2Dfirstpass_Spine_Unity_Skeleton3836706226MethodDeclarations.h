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

// Spine.Unity.SkeletonRenderer/InstructionDelegate
struct InstructionDelegate_t3836706226;
// System.Object
struct Il2CppObject;
// Spine.Unity.SkeletonRendererInstruction
struct SkeletonRendererInstruction_t1881716398;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton1881716398.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Spine.Unity.SkeletonRenderer/InstructionDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void InstructionDelegate__ctor_m427606723 (InstructionDelegate_t3836706226 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer/InstructionDelegate::Invoke(Spine.Unity.SkeletonRendererInstruction)
extern "C"  void InstructionDelegate_Invoke_m2053992885 (InstructionDelegate_t3836706226 * __this, SkeletonRendererInstruction_t1881716398 * ___instruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.Unity.SkeletonRenderer/InstructionDelegate::BeginInvoke(Spine.Unity.SkeletonRendererInstruction,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InstructionDelegate_BeginInvoke_m654060144 (InstructionDelegate_t3836706226 * __this, SkeletonRendererInstruction_t1881716398 * ___instruction0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer/InstructionDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void InstructionDelegate_EndInvoke_m2685492189 (InstructionDelegate_t3836706226 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
