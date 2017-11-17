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

// BaseMediator
struct BaseMediator_t1205744884;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<NotificationID>
struct IList_1_t789685587;
// System.Action`1<PureMVC.Interfaces.INotification>
struct Action_1_t418690292;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_NotificationID248744986.h"

// System.Void BaseMediator::.ctor(System.String)
extern "C"  void BaseMediator__ctor_m3461280829 (BaseMediator_t1205744884 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<NotificationID> BaseMediator::ListNotificationInterests()
extern "C"  Il2CppObject* BaseMediator_ListNotificationInterests_m2556458461 (BaseMediator_t1205744884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseMediator::RegistPanelCall(NotificationID,System.Action`1<PureMVC.Interfaces.INotification>)
extern "C"  void BaseMediator_RegistPanelCall_m2955271211 (BaseMediator_t1205744884 * __this, int32_t ___notificationID0, Action_1_t418690292 * ___handle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseMediator::UnRegistPanelCall(NotificationID)
extern "C"  void BaseMediator_UnRegistPanelCall_m3256987696 (BaseMediator_t1205744884 * __this, int32_t ___notificationID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseMediator::HandleNotification(PureMVC.Interfaces.INotification)
extern "C"  void BaseMediator_HandleNotification_m1608673280 (BaseMediator_t1205744884 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
