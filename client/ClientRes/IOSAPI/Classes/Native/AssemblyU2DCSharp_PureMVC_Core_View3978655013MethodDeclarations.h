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

// PureMVC.Core.View
struct View_t3978655013;
// PureMVC.Interfaces.IObserver
struct IObserver_t4002405327;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;
// System.Object
struct Il2CppObject;
// PureMVC.Interfaces.IMediator
struct IMediator_t2826681040;
// System.String
struct String_t;
// PureMVC.Interfaces.IView
struct IView_t1431556072;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_NotificationID248744986.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void PureMVC.Core.View::.ctor()
extern "C"  void View__ctor_m1832064479 (View_t3978655013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Core.View::.cctor()
extern "C"  void View__cctor_m2248532324 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Core.View::RegisterObserver(NotificationID,PureMVC.Interfaces.IObserver)
extern "C"  void View_RegisterObserver_m3724964263 (View_t3978655013 * __this, int32_t ___notificationName0, Il2CppObject * ___observer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Core.View::NotifyObservers(PureMVC.Interfaces.INotification)
extern "C"  void View_NotifyObservers_m1474396095 (View_t3978655013 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Core.View::RemoveObserver(NotificationID,System.Object)
extern "C"  void View_RemoveObserver_m1192598503 (View_t3978655013 * __this, int32_t ___notificationName0, Il2CppObject * ___notifyContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Core.View::RegisterMediator(PureMVC.Interfaces.IMediator)
extern "C"  void View_RegisterMediator_m333899339 (View_t3978655013 * __this, Il2CppObject * ___mediator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PureMVC.Interfaces.IMediator PureMVC.Core.View::RetrieveMediator(System.String)
extern "C"  Il2CppObject * View_RetrieveMediator_m1945557513 (View_t3978655013 * __this, String_t* ___mediatorName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PureMVC.Interfaces.IMediator PureMVC.Core.View::RemoveMediator(System.String)
extern "C"  Il2CppObject * View_RemoveMediator_m1061699601 (View_t3978655013 * __this, String_t* ___mediatorName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PureMVC.Core.View::HasMediator(System.String)
extern "C"  bool View_HasMediator_m3676406044 (View_t3978655013 * __this, String_t* ___mediatorName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PureMVC.Interfaces.IView PureMVC.Core.View::get_Instance()
extern "C"  Il2CppObject * View_get_Instance_m2958950250 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Core.View::InitializeView()
extern "C"  void View_InitializeView_m2277027026 (View_t3978655013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
