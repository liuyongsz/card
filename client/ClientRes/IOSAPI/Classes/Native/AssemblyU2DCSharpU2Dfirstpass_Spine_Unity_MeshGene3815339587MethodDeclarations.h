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

// Spine.Unity.MeshGeneratorDelegate
struct MeshGeneratorDelegate_t3815339587;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_MeshGene3606452635.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Spine.Unity.MeshGeneratorDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void MeshGeneratorDelegate__ctor_m988200792 (MeshGeneratorDelegate_t3815339587 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneratorDelegate::Invoke(Spine.Unity.MeshGeneratorBuffers)
extern "C"  void MeshGeneratorDelegate_Invoke_m3431516921 (MeshGeneratorDelegate_t3815339587 * __this, MeshGeneratorBuffers_t3606452635  ___buffers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.Unity.MeshGeneratorDelegate::BeginInvoke(Spine.Unity.MeshGeneratorBuffers,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MeshGeneratorDelegate_BeginInvoke_m84848454 (MeshGeneratorDelegate_t3815339587 * __this, MeshGeneratorBuffers_t3606452635  ___buffers0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneratorDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void MeshGeneratorDelegate_EndInvoke_m707690646 (MeshGeneratorDelegate_t3815339587 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
