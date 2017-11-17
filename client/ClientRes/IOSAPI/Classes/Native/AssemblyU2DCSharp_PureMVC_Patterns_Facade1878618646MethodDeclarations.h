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

// PureMVC.Patterns.Facade
struct Facade_t1878618646;
// PureMVC.Interfaces.IProxy
struct IProxy_t766166127;
// System.Type
struct Type_t;
// PureMVC.Interfaces.IMediator
struct IMediator_t2826681040;
// System.String
struct String_t;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;
// System.Object
struct Il2CppObject;
// PureMVC.Interfaces.IFacade
struct IFacade_t2963254751;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProxyID3273241327.h"
#include "AssemblyU2DCSharp_NotificationID248744986.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void PureMVC.Patterns.Facade::.ctor()
extern "C"  void Facade__ctor_m211929040 (Facade_t1878618646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Facade::.cctor()
extern "C"  void Facade__cctor_m2832976197 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Facade::RegisterProxy(PureMVC.Interfaces.IProxy)
extern "C"  void Facade_RegisterProxy_m3461982442 (Facade_t1878618646 * __this, Il2CppObject * ___proxy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PureMVC.Interfaces.IProxy PureMVC.Patterns.Facade::RetrieveProxy(ProxyID)
extern "C"  Il2CppObject * Facade_RetrieveProxy_m1229723571 (Facade_t1878618646 * __this, int32_t ___proxyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PureMVC.Interfaces.IProxy PureMVC.Patterns.Facade::RemoveProxy(ProxyID)
extern "C"  Il2CppObject * Facade_RemoveProxy_m1340604859 (Facade_t1878618646 * __this, int32_t ___proxyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PureMVC.Patterns.Facade::HasProxy(ProxyID)
extern "C"  bool Facade_HasProxy_m4278347005 (Facade_t1878618646 * __this, int32_t ___proxyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Facade::RegisterCommand(NotificationID,System.Type)
extern "C"  void Facade_RegisterCommand_m3365985991 (Facade_t1878618646 * __this, int32_t ___notificationName0, Type_t * ___commandType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Facade::RemoveCommand(NotificationID)
extern "C"  void Facade_RemoveCommand_m991300895 (Facade_t1878618646 * __this, int32_t ___notificationName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PureMVC.Patterns.Facade::HasCommand(NotificationID)
extern "C"  bool Facade_HasCommand_m3905507483 (Facade_t1878618646 * __this, int32_t ___notificationName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Facade::RegisterMediator(PureMVC.Interfaces.IMediator)
extern "C"  void Facade_RegisterMediator_m4256659786 (Facade_t1878618646 * __this, Il2CppObject * ___mediator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PureMVC.Interfaces.IMediator PureMVC.Patterns.Facade::RetrieveMediator(System.String)
extern "C"  Il2CppObject * Facade_RetrieveMediator_m3607334492 (Facade_t1878618646 * __this, String_t* ___mediatorName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PureMVC.Interfaces.IMediator PureMVC.Patterns.Facade::RemoveMediator(System.String)
extern "C"  Il2CppObject * Facade_RemoveMediator_m795888324 (Facade_t1878618646 * __this, String_t* ___mediatorName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PureMVC.Patterns.Facade::HasMediator(System.String)
extern "C"  bool Facade_HasMediator_m4011521263 (Facade_t1878618646 * __this, String_t* ___mediatorName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Facade::NotifyObservers(PureMVC.Interfaces.INotification)
extern "C"  void Facade_NotifyObservers_m2760345798 (Facade_t1878618646 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Facade::SendNotification(NotificationID)
extern "C"  void Facade_SendNotification_m3076721207 (Facade_t1878618646 * __this, int32_t ___notificationName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Facade::SendNotification(NotificationID,System.Object)
extern "C"  void Facade_SendNotification_m4047733077 (Facade_t1878618646 * __this, int32_t ___notificationName0, Il2CppObject * ___body1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Facade::SendNotification(NotificationID,System.Object,System.String)
extern "C"  void Facade_SendNotification_m3329859083 (Facade_t1878618646 * __this, int32_t ___notificationName0, Il2CppObject * ___body1, String_t* ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PureMVC.Interfaces.IFacade PureMVC.Patterns.Facade::get_Instance()
extern "C"  Il2CppObject * Facade_get_Instance_m177834454 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Facade::InitializeFacade()
extern "C"  void Facade_InitializeFacade_m928428002 (Facade_t1878618646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Facade::InitializeController()
extern "C"  void Facade_InitializeController_m399642400 (Facade_t1878618646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Facade::InitializeModel()
extern "C"  void Facade_InitializeModel_m1741723513 (Facade_t1878618646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Facade::InitializeView()
extern "C"  void Facade_InitializeView_m2958679731 (Facade_t1878618646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
