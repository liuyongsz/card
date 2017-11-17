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

// ModelUIManager/LoadHighUiModelComplete
struct LoadHighUiModelComplete_t3509429131;
// System.Object
struct Il2CppObject;
// ModelUIManager/UIModelInfo
struct UIModelInfo_t2926380586;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_ModelUIManager_UIModelInfo2926380586.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ModelUIManager/LoadHighUiModelComplete::.ctor(System.Object,System.IntPtr)
extern "C"  void LoadHighUiModelComplete__ctor_m3471707956 (LoadHighUiModelComplete_t3509429131 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelUIManager/LoadHighUiModelComplete::Invoke(ModelUIManager/UIModelInfo)
extern "C"  void LoadHighUiModelComplete_Invoke_m714748008 (LoadHighUiModelComplete_t3509429131 * __this, UIModelInfo_t2926380586 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ModelUIManager/LoadHighUiModelComplete::BeginInvoke(ModelUIManager/UIModelInfo,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LoadHighUiModelComplete_BeginInvoke_m2627034115 (LoadHighUiModelComplete_t3509429131 * __this, UIModelInfo_t2926380586 * ___info0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelUIManager/LoadHighUiModelComplete::EndInvoke(System.IAsyncResult)
extern "C"  void LoadHighUiModelComplete_EndInvoke_m555772558 (LoadHighUiModelComplete_t3509429131 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
