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

// System.Reflection.ModuleResolveEventHandler
struct ModuleResolveEventHandler_t403447254;
// System.Object
struct Il2CppObject;
// System.Reflection.Module
struct Module_t4282841206;
// System.ResolveEventArgs
struct ResolveEventArgs_t1859808873;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_ResolveEventArgs1859808873.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Reflection.ModuleResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ModuleResolveEventHandler__ctor_m3296951596 (ModuleResolveEventHandler_t403447254 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.ModuleResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C"  Module_t4282841206 * ModuleResolveEventHandler_Invoke_m2850853509 (ModuleResolveEventHandler_t403447254 * __this, Il2CppObject * ___sender0, ResolveEventArgs_t1859808873 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.ModuleResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ModuleResolveEventHandler_BeginInvoke_m292066857 (ModuleResolveEventHandler_t403447254 * __this, Il2CppObject * ___sender0, ResolveEventArgs_t1859808873 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.ModuleResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  Module_t4282841206 * ModuleResolveEventHandler_EndInvoke_m2050274873 (ModuleResolveEventHandler_t403447254 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
