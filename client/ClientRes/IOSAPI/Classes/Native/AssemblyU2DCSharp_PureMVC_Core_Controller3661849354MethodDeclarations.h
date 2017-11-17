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

// PureMVC.Core.Controller
struct Controller_t3661849354;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;
// System.Type
struct Type_t;
// PureMVC.Interfaces.IController
struct IController_t1783054623;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_NotificationID248744986.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void PureMVC.Core.Controller::.ctor()
extern "C"  void Controller__ctor_m1732247490 (Controller_t3661849354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Core.Controller::.cctor()
extern "C"  void Controller__cctor_m2677217873 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Core.Controller::ExecuteCommand(PureMVC.Interfaces.INotification)
extern "C"  void Controller_ExecuteCommand_m3717018622 (Controller_t3661849354 * __this, Il2CppObject * ___note0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Core.Controller::RegisterCommand(NotificationID,System.Type)
extern "C"  void Controller_RegisterCommand_m1976799395 (Controller_t3661849354 * __this, int32_t ___notificationName0, Type_t * ___commandType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PureMVC.Core.Controller::HasCommand(NotificationID)
extern "C"  bool Controller_HasCommand_m2285744295 (Controller_t3661849354 * __this, int32_t ___notificationName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Core.Controller::RemoveCommand(NotificationID)
extern "C"  void Controller_RemoveCommand_m3337971291 (Controller_t3661849354 * __this, int32_t ___notificationName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PureMVC.Interfaces.IController PureMVC.Core.Controller::get_Instance()
extern "C"  Il2CppObject * Controller_get_Instance_m1106382442 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Core.Controller::InitializeController()
extern "C"  void Controller_InitializeController_m1332592850 (Controller_t3661849354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
