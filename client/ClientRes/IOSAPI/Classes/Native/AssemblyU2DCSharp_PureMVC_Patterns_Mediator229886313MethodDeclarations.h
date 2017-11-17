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

// PureMVC.Patterns.Mediator
struct Mediator_t229886313;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IList`1<NotificationID>
struct IList_1_t789685587;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void PureMVC.Patterns.Mediator::.ctor()
extern "C"  void Mediator__ctor_m995508871 (Mediator_t229886313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Mediator::.ctor(System.String)
extern "C"  void Mediator__ctor_m4121568613 (Mediator_t229886313 * __this, String_t* ___mediatorName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Mediator::.ctor(System.String,System.Object)
extern "C"  void Mediator__ctor_m2019170115 (Mediator_t229886313 * __this, String_t* ___mediatorName0, Il2CppObject * ___viewComponent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<NotificationID> PureMVC.Patterns.Mediator::ListNotificationInterests()
extern "C"  Il2CppObject* Mediator_ListNotificationInterests_m1894396877 (Mediator_t229886313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Mediator::HandleNotification(PureMVC.Interfaces.INotification)
extern "C"  void Mediator_HandleNotification_m831670566 (Mediator_t229886313 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Mediator::OnRegister()
extern "C"  void Mediator_OnRegister_m2813106927 (Mediator_t229886313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Mediator::OnRemove()
extern "C"  void Mediator_OnRemove_m1787912144 (Mediator_t229886313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PureMVC.Patterns.Mediator::get_MediatorName()
extern "C"  String_t* Mediator_get_MediatorName_m2316925521 (Mediator_t229886313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PureMVC.Patterns.Mediator::get_ViewComponent()
extern "C"  Il2CppObject * Mediator_get_ViewComponent_m3465588929 (Mediator_t229886313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Mediator::set_ViewComponent(System.Object)
extern "C"  void Mediator_set_ViewComponent_m444137526 (Mediator_t229886313 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
