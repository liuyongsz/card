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

// ResourceManager/AssetCallBack
struct AssetCallBack_t676699937;
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

// System.Void ResourceManager/AssetCallBack::.ctor(System.Object,System.IntPtr)
extern "C"  void AssetCallBack__ctor_m3243491290 (AssetCallBack_t676699937 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager/AssetCallBack::Invoke(UnityEngine.GameObject)
extern "C"  void AssetCallBack_Invoke_m2546801558 (AssetCallBack_t676699937 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ResourceManager/AssetCallBack::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AssetCallBack_BeginInvoke_m734735639 (AssetCallBack_t676699937 * __this, GameObject_t1756533147 * ___go0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager/AssetCallBack::EndInvoke(System.IAsyncResult)
extern "C"  void AssetCallBack_EndInvoke_m2799815004 (AssetCallBack_t676699937 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
