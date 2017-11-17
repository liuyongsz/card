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

// PromptMediator
struct PromptMediator_t470138123;
// promptpanel
struct promptpanel_t545155156;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void PromptMediator::.ctor()
extern "C"  void PromptMediator__ctor_m3737575230 (PromptMediator_t470138123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// promptpanel PromptMediator::get_panel()
extern "C"  promptpanel_t545155156 * PromptMediator_get_panel_m1015777820 (PromptMediator_t470138123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PromptMediator::OnStart(PureMVC.Interfaces.INotification)
extern "C"  void PromptMediator_OnStart_m2529454623 (PromptMediator_t470138123 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PromptMediator::OnShow(PureMVC.Interfaces.INotification)
extern "C"  void PromptMediator_OnShow_m820396702 (PromptMediator_t470138123 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PromptMediator::AddComponentEvents()
extern "C"  void PromptMediator_AddComponentEvents_m3193141051 (PromptMediator_t470138123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PromptMediator::OnClick(UnityEngine.GameObject)
extern "C"  void PromptMediator_OnClick_m1383895893 (PromptMediator_t470138123 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
