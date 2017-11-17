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

// UISprite/CallLoadAsset
struct CallLoadAsset_t3643317544;
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

// System.Void UISprite/CallLoadAsset::.ctor(System.Object,System.IntPtr)
extern "C"  void CallLoadAsset__ctor_m2829822865 (CallLoadAsset_t3643317544 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite/CallLoadAsset::Invoke(System.String,AssetCallBack)
extern "C"  void CallLoadAsset_Invoke_m1744963510 (CallLoadAsset_t3643317544 * __this, String_t* ___strFileName0, AssetCallBack_t726168895 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UISprite/CallLoadAsset::BeginInvoke(System.String,AssetCallBack,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CallLoadAsset_BeginInvoke_m1566156405 (CallLoadAsset_t3643317544 * __this, String_t* ___strFileName0, AssetCallBack_t726168895 * ___callback1, AsyncCallback_t163412349 * ____callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite/CallLoadAsset::EndInvoke(System.IAsyncResult)
extern "C"  void CallLoadAsset_EndInvoke_m785784711 (CallLoadAsset_t3643317544 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
