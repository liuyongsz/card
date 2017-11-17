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

// PureMVC.Patterns.MacroCommand
struct MacroCommand_t2790984453;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void PureMVC.Patterns.MacroCommand::.ctor()
extern "C"  void MacroCommand__ctor_m2626897271 (MacroCommand_t2790984453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.MacroCommand::Execute(PureMVC.Interfaces.INotification)
extern "C"  void MacroCommand_Execute_m4178078984 (MacroCommand_t2790984453 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.MacroCommand::InitializeMacroCommand()
extern "C"  void MacroCommand_InitializeMacroCommand_m1460317730 (MacroCommand_t2790984453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.MacroCommand::AddSubCommand(System.Type)
extern "C"  void MacroCommand_AddSubCommand_m2186526502 (MacroCommand_t2790984453 * __this, Type_t * ___commandType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
