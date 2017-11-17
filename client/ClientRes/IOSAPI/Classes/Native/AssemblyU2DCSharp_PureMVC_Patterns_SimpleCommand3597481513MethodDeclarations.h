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

// PureMVC.Patterns.SimpleCommand
struct SimpleCommand_t3597481513;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;

#include "codegen/il2cpp-codegen.h"

// System.Void PureMVC.Patterns.SimpleCommand::.ctor()
extern "C"  void SimpleCommand__ctor_m2472365695 (SimpleCommand_t3597481513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.SimpleCommand::Execute(PureMVC.Interfaces.INotification)
extern "C"  void SimpleCommand_Execute_m2480070360 (SimpleCommand_t3597481513 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
