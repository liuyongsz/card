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

// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t212185564;
// System.Object
struct Il2CppObject;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ExitGames.Client.Photon.DeserializeStreamMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void DeserializeStreamMethod__ctor_m2163496654 (DeserializeStreamMethod_t212185564 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeStreamMethod::Invoke(System.IO.MemoryStream,System.Int16)
extern "C"  Il2CppObject * DeserializeStreamMethod_Invoke_m3974044424 (DeserializeStreamMethod_t212185564 * __this, MemoryStream_t743994179 * ___inStream0, int16_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.DeserializeStreamMethod::BeginInvoke(System.IO.MemoryStream,System.Int16,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DeserializeStreamMethod_BeginInvoke_m995515980 (DeserializeStreamMethod_t212185564 * __this, MemoryStream_t743994179 * ___inStream0, int16_t ___length1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeStreamMethod::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * DeserializeStreamMethod_EndInvoke_m3248429017 (DeserializeStreamMethod_t212185564 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
