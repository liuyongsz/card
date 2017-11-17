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

// PureMVC.Patterns.Notifier
struct Notifier_t1290595654;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// PureMVC.Interfaces.IFacade
struct IFacade_t2963254751;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_NotificationID248744986.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void PureMVC.Patterns.Notifier::.ctor()
extern "C"  void Notifier__ctor_m3144710880 (Notifier_t1290595654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Notifier::SendNotification(NotificationID)
extern "C"  void Notifier_SendNotification_m3109121991 (Notifier_t1290595654 * __this, int32_t ___notificationName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Notifier::SendNotification(NotificationID,System.Object)
extern "C"  void Notifier_SendNotification_m3944320165 (Notifier_t1290595654 * __this, int32_t ___notificationName0, Il2CppObject * ___body1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Notifier::SendNotification(NotificationID,System.Object,System.String)
extern "C"  void Notifier_SendNotification_m2681170939 (Notifier_t1290595654 * __this, int32_t ___notificationName0, Il2CppObject * ___body1, String_t* ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PureMVC.Interfaces.IFacade PureMVC.Patterns.Notifier::get_Facade()
extern "C"  Il2CppObject * Notifier_get_Facade_m2426826857 (Notifier_t1290595654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
