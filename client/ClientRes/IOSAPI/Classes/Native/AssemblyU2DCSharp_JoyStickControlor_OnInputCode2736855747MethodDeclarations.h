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

// JoyStickControlor/OnInputCode
struct OnInputCode_t2736855747;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_JoyStickControlor_StickButtonCod3147683260.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void JoyStickControlor/OnInputCode::.ctor(System.Object,System.IntPtr)
extern "C"  void OnInputCode__ctor_m1948601958 (OnInputCode_t2736855747 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor/OnInputCode::Invoke(JoyStickControlor/StickButtonCode)
extern "C"  void OnInputCode_Invoke_m2560119126 (OnInputCode_t2736855747 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult JoyStickControlor/OnInputCode::BeginInvoke(JoyStickControlor/StickButtonCode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnInputCode_BeginInvoke_m692938531 (OnInputCode_t2736855747 * __this, int32_t ___code0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor/OnInputCode::EndInvoke(System.IAsyncResult)
extern "C"  void OnInputCode_EndInvoke_m733595364 (OnInputCode_t2736855747 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
