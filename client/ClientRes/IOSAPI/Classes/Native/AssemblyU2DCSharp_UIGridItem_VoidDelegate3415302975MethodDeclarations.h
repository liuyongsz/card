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

// UIGridItem/VoidDelegate
struct VoidDelegate_t3415302975;
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
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UIGridItem/VoidDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void VoidDelegate__ctor_m2545158654 (VoidDelegate_t3415302975 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGridItem/VoidDelegate::Invoke(UIGridItem)
extern "C"  void VoidDelegate_Invoke_m2397982715 (VoidDelegate_t3415302975 * __this, UIGridItem_t3654720203 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIGridItem/VoidDelegate::BeginInvoke(UIGridItem,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * VoidDelegate_BeginInvoke_m1995179126 (VoidDelegate_t3415302975 * __this, UIGridItem_t3654720203 * ___item0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGridItem/VoidDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void VoidDelegate_EndInvoke_m4249303008 (VoidDelegate_t3415302975 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
