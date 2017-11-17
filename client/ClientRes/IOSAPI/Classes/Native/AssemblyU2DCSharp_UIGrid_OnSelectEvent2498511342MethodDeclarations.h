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

// UIGrid/OnSelectEvent
struct OnSelectEvent_t2498511342;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UIGrid/OnSelectEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnSelectEvent__ctor_m927014245 (OnSelectEvent_t2498511342 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid/OnSelectEvent::Invoke(System.Int32,System.Boolean,System.Boolean)
extern "C"  void OnSelectEvent_Invoke_m4292031290 (OnSelectEvent_t2498511342 * __this, int32_t ___iSelect0, bool ___active1, bool ___select2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIGrid/OnSelectEvent::BeginInvoke(System.Int32,System.Boolean,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnSelectEvent_BeginInvoke_m2739170059 (OnSelectEvent_t2498511342 * __this, int32_t ___iSelect0, bool ___active1, bool ___select2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid/OnSelectEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnSelectEvent_EndInvoke_m3629283979 (OnSelectEvent_t2498511342 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
