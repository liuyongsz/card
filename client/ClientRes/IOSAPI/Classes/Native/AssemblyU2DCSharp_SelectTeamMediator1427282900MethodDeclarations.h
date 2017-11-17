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

// SelectTeamMediator
struct SelectTeamMediator_t1427282900;
// selectteampanel
struct selectteampanel_t242691737;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UIGridItem
struct UIGridItem_t3654720203;
// NetProtocal.SelectTeamMsg
struct SelectTeamMsg_t2592243822;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_UIGridItem3654720203.h"
#include "AssemblyU2DCSharp_NetProtocal_SelectTeamMsg2592243822.h"

// System.Void SelectTeamMediator::.ctor()
extern "C"  void SelectTeamMediator__ctor_m4239951883 (SelectTeamMediator_t1427282900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// selectteampanel SelectTeamMediator::get_panel()
extern "C"  selectteampanel_t242691737 * SelectTeamMediator_get_panel_m2597232124 (SelectTeamMediator_t1427282900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectTeamMediator::OnStart(PureMVC.Interfaces.INotification)
extern "C"  void SelectTeamMediator_OnStart_m608482778 (SelectTeamMediator_t1427282900 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectTeamMediator::OnShow(PureMVC.Interfaces.INotification)
extern "C"  void SelectTeamMediator_OnShow_m2978110365 (SelectTeamMediator_t1427282900 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectTeamMediator::AddComponentEvents()
extern "C"  void SelectTeamMediator_AddComponentEvents_m1314442160 (SelectTeamMediator_t1427282900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectTeamMediator::OnClick(UnityEngine.GameObject)
extern "C"  void SelectTeamMediator_OnClick_m3755918534 (SelectTeamMediator_t1427282900 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectTeamMediator::UpdateTeamGrid(UIGridItem)
extern "C"  void SelectTeamMediator_UpdateTeamGrid_m3571812940 (SelectTeamMediator_t1427282900 * __this, UIGridItem_t3654720203 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectTeamMediator::ChooseItem(UIGridItem)
extern "C"  void SelectTeamMediator_ChooseItem_m2871636762 (SelectTeamMediator_t1427282900 * __this, UIGridItem_t3654720203 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectTeamMediator::CeateTeam(UnityEngine.GameObject)
extern "C"  void SelectTeamMediator_CeateTeam_m2907631316 (SelectTeamMediator_t1427282900 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectTeamMediator::OnDestroy()
extern "C"  void SelectTeamMediator_OnDestroy_m3529673666 (SelectTeamMediator_t1427282900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SelectTeamMediator::<OnShow>m__15(NetProtocal.SelectTeamMsg,NetProtocal.SelectTeamMsg)
extern "C"  int32_t SelectTeamMediator_U3COnShowU3Em__15_m1994490774 (Il2CppObject * __this /* static, unused */, SelectTeamMsg_t2592243822 * ___x0, SelectTeamMsg_t2592243822 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
