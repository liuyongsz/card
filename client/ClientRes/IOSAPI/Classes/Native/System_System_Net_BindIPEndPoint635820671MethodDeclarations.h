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

// System.Net.BindIPEndPoint
struct BindIPEndPoint_t635820671;
// System.Object
struct Il2CppObject;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// System.Net.ServicePoint
struct ServicePoint_t2765344313;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_ServicePoint2765344313.h"
#include "System_System_Net_IPEndPoint2615413766.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
extern "C"  void BindIPEndPoint__ctor_m2014121651 (BindIPEndPoint_t635820671 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
extern "C"  IPEndPoint_t2615413766 * BindIPEndPoint_Invoke_m4182856584 (BindIPEndPoint_t635820671 * __this, ServicePoint_t2765344313 * ___servicePoint0, IPEndPoint_t2615413766 * ___remoteEndPoint1, int32_t ___retryCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.BindIPEndPoint::BeginInvoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BindIPEndPoint_BeginInvoke_m801006666 (BindIPEndPoint_t635820671 * __this, ServicePoint_t2765344313 * ___servicePoint0, IPEndPoint_t2615413766 * ___remoteEndPoint1, int32_t ___retryCount2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::EndInvoke(System.IAsyncResult)
extern "C"  IPEndPoint_t2615413766 * BindIPEndPoint_EndInvoke_m2822459026 (BindIPEndPoint_t635820671 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
