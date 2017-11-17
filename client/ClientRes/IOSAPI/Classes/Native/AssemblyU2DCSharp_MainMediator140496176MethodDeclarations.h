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

// MainMediator
struct MainMediator_t140496176;
// mainpanel
struct mainpanel_t1886133187;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UIGridItem
struct UIGridItem_t3654720203;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_UIGridItem3654720203.h"

// System.Void MainMediator::.ctor()
extern "C"  void MainMediator__ctor_m3322387729 (MainMediator_t140496176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// mainpanel MainMediator::get_panel()
extern "C"  mainpanel_t1886133187 * MainMediator_get_panel_m1797739388 (MainMediator_t140496176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainMediator::OnStart(PureMVC.Interfaces.INotification)
extern "C"  void MainMediator_OnStart_m1807954498 (MainMediator_t140496176 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainMediator::OnShow(PureMVC.Interfaces.INotification)
extern "C"  void MainMediator_OnShow_m277790883 (MainMediator_t140496176 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainMediator::AddComponentEvents()
extern "C"  void MainMediator_AddComponentEvents_m3213192016 (MainMediator_t140496176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainMediator::OnClick(UnityEngine.GameObject)
extern "C"  void MainMediator_OnClick_m772544214 (MainMediator_t140496176 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainMediator::UpdateHeroGrid(UIGridItem)
extern "C"  void MainMediator_UpdateHeroGrid_m1930805209 (MainMediator_t140496176 * __this, UIGridItem_t3654720203 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainMediator::OnDestroy()
extern "C"  void MainMediator_OnDestroy_m1074377238 (MainMediator_t140496176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
