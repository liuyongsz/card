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

// UIGrid/OnClickSubItem
struct OnClickSubItem_t1478391043;
// System.Object
struct Il2CppObject;
// UIGridItem
struct UIGridItem_t3654720203;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_UIGridItem3654720203.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UIGrid/OnClickSubItem::.ctor(System.Object,System.IntPtr)
extern "C"  void OnClickSubItem__ctor_m4170233158 (OnClickSubItem_t1478391043 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid/OnClickSubItem::Invoke(UIGridItem,UnityEngine.GameObject)
extern "C"  void OnClickSubItem_Invoke_m164970787 (OnClickSubItem_t1478391043 * __this, UIGridItem_t3654720203 * ___oItem0, GameObject_t1756533147 * ___OSubItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIGrid/OnClickSubItem::BeginInvoke(UIGridItem,UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnClickSubItem_BeginInvoke_m734268570 (OnClickSubItem_t1478391043 * __this, UIGridItem_t3654720203 * ___oItem0, GameObject_t1756533147 * ___OSubItem1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid/OnClickSubItem::EndInvoke(System.IAsyncResult)
extern "C"  void OnClickSubItem_EndInvoke_m3633473604 (OnClickSubItem_t1478391043 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
