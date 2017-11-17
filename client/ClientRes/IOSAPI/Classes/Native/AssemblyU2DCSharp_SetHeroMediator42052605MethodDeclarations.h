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

// SetHeroMediator
struct SetHeroMediator_t42052605;
// setheropanel
struct setheropanel_t4103956286;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;
// TD_Hero
struct TD_Hero_t2962140565;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UIGridItem
struct UIGridItem_t3654720203;
// NetProtocal.CardDataMsg
struct CardDataMsg_t3125953747;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TD_Hero2962140565.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_UIGridItem3654720203.h"
#include "AssemblyU2DCSharp_NetProtocal_CardDataMsg3125953747.h"

// System.Void SetHeroMediator::.ctor()
extern "C"  void SetHeroMediator__ctor_m151604472 (SetHeroMediator_t42052605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// setheropanel SetHeroMediator::get_panel()
extern "C"  setheropanel_t4103956286 * SetHeroMediator_get_panel_m2857226724 (SetHeroMediator_t42052605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::OnStart(PureMVC.Interfaces.INotification)
extern "C"  void SetHeroMediator_OnStart_m1204646181 (SetHeroMediator_t42052605 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::OnSubmitCardName()
extern "C"  void SetHeroMediator_OnSubmitCardName_m1044534834 (SetHeroMediator_t42052605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::OnShow(PureMVC.Interfaces.INotification)
extern "C"  void SetHeroMediator_OnShow_m3300684052 (SetHeroMediator_t42052605 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::UpdateArcaneInfo(TD_Hero)
extern "C"  void SetHeroMediator_UpdateArcaneInfo_m1175896310 (SetHeroMediator_t42052605 * __this, TD_Hero_t2962140565 * ___hero0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::UpdateCardTeamInfo(TD_Hero)
extern "C"  void SetHeroMediator_UpdateCardTeamInfo_m3702374229 (SetHeroMediator_t42052605 * __this, TD_Hero_t2962140565 * ___hero0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::AddComponentEvents()
extern "C"  void SetHeroMediator_AddComponentEvents_m1011920045 (SetHeroMediator_t42052605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::OnClick(UnityEngine.GameObject)
extern "C"  void SetHeroMediator_OnClick_m3452498971 (SetHeroMediator_t42052605 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::OnFinishedCallback()
extern "C"  void SetHeroMediator_OnFinishedCallback_m912052350 (SetHeroMediator_t42052605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::UpdateCardFightGrid(UIGridItem)
extern "C"  void SetHeroMediator_UpdateCardFightGrid_m3977396 (SetHeroMediator_t42052605 * __this, UIGridItem_t3654720203 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::ChangeFightCard(System.Int32)
extern "C"  void SetHeroMediator_ChangeFightCard_m2918590463 (SetHeroMediator_t42052605 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::UpdateCardGrid(UIGridItem)
extern "C"  void SetHeroMediator_UpdateCardGrid_m2129685262 (SetHeroMediator_t42052605 * __this, UIGridItem_t3654720203 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NetProtocal.CardDataMsg SetHeroMediator::CheckCardIsHave(System.Int32)
extern "C"  CardDataMsg_t3125953747 * SetHeroMediator_CheckCardIsHave_m3955331432 (SetHeroMediator_t42052605 * __this, int32_t ___cardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::OnClickItem(UnityEngine.GameObject)
extern "C"  void SetHeroMediator_OnClickItem_m329617146 (SetHeroMediator_t42052605 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::PlayOver(System.Object[])
extern "C"  void SetHeroMediator_PlayOver_m3941320262 (SetHeroMediator_t42052605 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::ChooseArcane(UnityEngine.GameObject)
extern "C"  void SetHeroMediator_ChooseArcane_m1211486579 (SetHeroMediator_t42052605 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SetHeroMediator::OnDestroy()
extern "C"  void SetHeroMediator_OnDestroy_m4213512011 (SetHeroMediator_t42052605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SetHeroMediator::<OnShow>m__16(NetProtocal.CardDataMsg,NetProtocal.CardDataMsg)
extern "C"  int32_t SetHeroMediator_U3COnShowU3Em__16_m1838219484 (Il2CppObject * __this /* static, unused */, CardDataMsg_t3125953747 * ___x0, CardDataMsg_t3125953747 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
