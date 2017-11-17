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

// ModelLoadEffect/LoadFuncDelegate
struct LoadFuncDelegate_t4054660464;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// AssetCallBack
struct AssetCallBack_t726168895;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_AssetCallBack726168895.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ModelLoadEffect/LoadFuncDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void LoadFuncDelegate__ctor_m1508147209 (LoadFuncDelegate_t4054660464 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelLoadEffect/LoadFuncDelegate::Invoke(System.String,AssetCallBack)
extern "C"  void LoadFuncDelegate_Invoke_m2709288062 (LoadFuncDelegate_t4054660464 * __this, String_t* ___strFileName0, AssetCallBack_t726168895 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ModelLoadEffect/LoadFuncDelegate::BeginInvoke(System.String,AssetCallBack,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LoadFuncDelegate_BeginInvoke_m1858930733 (LoadFuncDelegate_t4054660464 * __this, String_t* ___strFileName0, AssetCallBack_t726168895 * ___callback1, AsyncCallback_t163412349 * ____callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelLoadEffect/LoadFuncDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void LoadFuncDelegate_EndInvoke_m977548287 (LoadFuncDelegate_t4054660464 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
