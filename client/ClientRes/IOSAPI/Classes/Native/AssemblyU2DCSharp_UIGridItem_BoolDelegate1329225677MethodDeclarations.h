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

// UIGridItem/BoolDelegate
struct BoolDelegate_t1329225677;
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

// System.Void UIGridItem/BoolDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void BoolDelegate__ctor_m3855037952 (BoolDelegate_t1329225677 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGridItem/BoolDelegate::Invoke(UIGridItem,System.Boolean)
extern "C"  void BoolDelegate_Invoke_m1888188572 (BoolDelegate_t1329225677 * __this, UIGridItem_t3654720203 * ___item0, bool ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIGridItem/BoolDelegate::BeginInvoke(UIGridItem,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BoolDelegate_BeginInvoke_m2518640997 (BoolDelegate_t1329225677 * __this, UIGridItem_t3654720203 * ___item0, bool ___state1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGridItem/BoolDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void BoolDelegate_EndInvoke_m4113428286 (BoolDelegate_t1329225677 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
