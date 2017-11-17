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

// UIGridItem/FloatDelegate
struct FloatDelegate_t530526327;
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

// System.Void UIGridItem/FloatDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void FloatDelegate__ctor_m655240042 (FloatDelegate_t530526327 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGridItem/FloatDelegate::Invoke(UIGridItem,System.Single)
extern "C"  void FloatDelegate_Invoke_m2803722356 (FloatDelegate_t530526327 * __this, UIGridItem_t3654720203 * ___item0, float ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIGridItem/FloatDelegate::BeginInvoke(UIGridItem,System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FloatDelegate_BeginInvoke_m874429677 (FloatDelegate_t530526327 * __this, UIGridItem_t3654720203 * ___item0, float ___delta1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGridItem/FloatDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void FloatDelegate_EndInvoke_m369612152 (FloatDelegate_t530526327 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
