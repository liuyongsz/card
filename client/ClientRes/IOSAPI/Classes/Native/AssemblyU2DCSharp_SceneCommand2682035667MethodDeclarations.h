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

// SceneCommand
struct SceneCommand_t2682035667;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;
// System.Object
struct Il2CppObject;
// SceneVO
struct SceneVO_t1660251545;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_SceneVO1660251545.h"

// System.Void SceneCommand::.ctor()
extern "C"  void SceneCommand__ctor_m4271497004 (SceneCommand_t2682035667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneCommand::Execute(PureMVC.Interfaces.INotification)
extern "C"  void SceneCommand_Execute_m1653335825 (SceneCommand_t2682035667 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneCommand::OnSceneLoadComplete(System.Object)
extern "C"  void SceneCommand_OnSceneLoadComplete_m2643396724 (SceneCommand_t2682035667 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneCommand::OnInit(SceneVO)
extern "C"  void SceneCommand_OnInit_m2331352228 (SceneCommand_t2682035667 * __this, SceneVO_t1660251545 * ___vo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
