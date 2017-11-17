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

// DelegateProxy/GetGuiCompentDelegateProxy
struct GetGuiCompentDelegateProxy_t3807282088;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t764358782;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t3188497603;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void DelegateProxy/GetGuiCompentDelegateProxy::.ctor(System.Object,System.IntPtr)
extern "C"  void GetGuiCompentDelegateProxy__ctor_m1563334875 (GetGuiCompentDelegateProxy_t3807282088 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/GetGuiCompentDelegateProxy::Invoke(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>,System.Collections.Generic.List`1<UnityEngine.Component>&,System.Collections.Generic.List`1<UnityEngine.Component>&)
extern "C"  void GetGuiCompentDelegateProxy_Invoke_m634078533 (GetGuiCompentDelegateProxy_t3807282088 * __this, Dictionary_2_t764358782 * ___lastgameObject0, List_1_t3188497603 ** ___newPanels1, List_1_t3188497603 ** ___tempPanels2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DelegateProxy/GetGuiCompentDelegateProxy::BeginInvoke(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>,System.Collections.Generic.List`1<UnityEngine.Component>&,System.Collections.Generic.List`1<UnityEngine.Component>&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetGuiCompentDelegateProxy_BeginInvoke_m3647337366 (GetGuiCompentDelegateProxy_t3807282088 * __this, Dictionary_2_t764358782 * ___lastgameObject0, List_1_t3188497603 ** ___newPanels1, List_1_t3188497603 ** ___tempPanels2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/GetGuiCompentDelegateProxy::EndInvoke(System.Collections.Generic.List`1<UnityEngine.Component>&,System.Collections.Generic.List`1<UnityEngine.Component>&,System.IAsyncResult)
extern "C"  void GetGuiCompentDelegateProxy_EndInvoke_m3957330993 (GetGuiCompentDelegateProxy_t3807282088 * __this, List_1_t3188497603 ** ___newPanels0, List_1_t3188497603 ** ___tempPanels1, Il2CppObject * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
