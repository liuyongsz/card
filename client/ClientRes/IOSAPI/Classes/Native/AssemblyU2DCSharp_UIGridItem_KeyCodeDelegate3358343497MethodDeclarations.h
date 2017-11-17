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

// UIGridItem/KeyCodeDelegate
struct KeyCodeDelegate_t3358343497;
// System.Object
struct Il2CppObject;
// UIGridItem
struct UIGridItem_t3654720203;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_UIGridItem3654720203.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UIGridItem/KeyCodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void KeyCodeDelegate__ctor_m1645912206 (KeyCodeDelegate_t3358343497 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGridItem/KeyCodeDelegate::Invoke(UIGridItem,UnityEngine.KeyCode)
extern "C"  void KeyCodeDelegate_Invoke_m3506664202 (KeyCodeDelegate_t3358343497 * __this, UIGridItem_t3654720203 * ___item0, int32_t ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIGridItem/KeyCodeDelegate::BeginInvoke(UIGridItem,UnityEngine.KeyCode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * KeyCodeDelegate_BeginInvoke_m3536262811 (KeyCodeDelegate_t3358343497 * __this, UIGridItem_t3654720203 * ___item0, int32_t ___key1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGridItem/KeyCodeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void KeyCodeDelegate_EndInvoke_m2111488752 (KeyCodeDelegate_t3358343497 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
