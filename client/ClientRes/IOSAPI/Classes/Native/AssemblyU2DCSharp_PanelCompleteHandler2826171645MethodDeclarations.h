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

// PanelCompleteHandler
struct PanelCompleteHandler_t2826171645;
// System.Object
struct Il2CppObject;
// UIBase
struct UIBase_t4194425779;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_UIBase4194425779.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void PanelCompleteHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PanelCompleteHandler__ctor_m2627287026 (PanelCompleteHandler_t2826171645 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelCompleteHandler::Invoke(UIBase)
extern "C"  void PanelCompleteHandler_Invoke_m3271818249 (PanelCompleteHandler_t2826171645 * __this, UIBase_t4194425779 * ___uibase0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult PanelCompleteHandler::BeginInvoke(UIBase,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PanelCompleteHandler_BeginInvoke_m3133215264 (PanelCompleteHandler_t2826171645 * __this, UIBase_t4194425779 * ___uibase0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelCompleteHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PanelCompleteHandler_EndInvoke_m3407540188 (PanelCompleteHandler_t2826171645 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
