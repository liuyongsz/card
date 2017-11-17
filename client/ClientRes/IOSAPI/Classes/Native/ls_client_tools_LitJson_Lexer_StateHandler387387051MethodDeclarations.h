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

// LitJson.Lexer/StateHandler
struct StateHandler_t387387051;
// System.Object
struct Il2CppObject;
// LitJson.FsmContext
struct FsmContext_t1296252303;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "ls_client_tools_LitJson_FsmContext1296252303.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void StateHandler__ctor_m1221567475 (StateHandler_t387387051 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
extern "C"  bool StateHandler_Invoke_m2637717599 (StateHandler_t387387051 * __this, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LitJson.Lexer/StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StateHandler_BeginInvoke_m2110842122 (StateHandler_t387387051 * __this, FsmContext_t1296252303 * ___ctx0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer/StateHandler::EndInvoke(System.IAsyncResult)
extern "C"  bool StateHandler_EndInvoke_m1961535681 (StateHandler_t387387051 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
