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

// HeroTeamMediator
struct HeroTeamMediator_t1271218040;
// heroteampanel
struct heroteampanel_t776727761;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;
// NetProtocal.HeroListMsg
struct HeroListMsg_t3128201993;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Collections.Generic.List`1<NetProtocal.HeroInfo>
struct List_1_t3026393148;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UIGridItem
struct UIGridItem_t3654720203;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// NetProtocal.CardInfoListMsg
struct CardInfoListMsg_t972027215;
// NetProtocal.HeroInfo
struct HeroInfo_t3657272016;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_NetProtocal_HeroListMsg3128201993.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_UIGridItem3654720203.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_NetProtocal_CardInfoListMsg972027215.h"
#include "AssemblyU2DCSharp_NetProtocal_HeroInfo3657272016.h"

// System.Void HeroTeamMediator::.ctor()
extern "C"  void HeroTeamMediator__ctor_m1027280475 (HeroTeamMediator_t1271218040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// heroteampanel HeroTeamMediator::get_panel()
extern "C"  heroteampanel_t776727761 * HeroTeamMediator_get_panel_m870769820 (HeroTeamMediator_t1271218040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::OnStart(PureMVC.Interfaces.INotification)
extern "C"  void HeroTeamMediator_OnStart_m2818943058 (HeroTeamMediator_t1271218040 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::CopyTeam()
extern "C"  void HeroTeamMediator_CopyTeam_m837757723 (HeroTeamMediator_t1271218040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::CeateTeam()
extern "C"  void HeroTeamMediator_CeateTeam_m2849107494 (HeroTeamMediator_t1271218040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::ResetTeam()
extern "C"  void HeroTeamMediator_ResetTeam_m55635267 (HeroTeamMediator_t1271218040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::OnShow(PureMVC.Interfaces.INotification)
extern "C"  void HeroTeamMediator_OnShow_m1917416401 (HeroTeamMediator_t1271218040 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::UpdateTeamInfo(NetProtocal.HeroListMsg)
extern "C"  void HeroTeamMediator_UpdateTeamInfo_m664039299 (HeroTeamMediator_t1271218040 * __this, HeroListMsg_t3128201993 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> HeroTeamMediator::AddGridDataList(System.Int32,System.Collections.Generic.List`1<NetProtocal.HeroInfo>)
extern "C"  List_1_t2058570427 * HeroTeamMediator_AddGridDataList_m4246258803 (HeroTeamMediator_t1271218040 * __this, int32_t ___index0, List_1_t3026393148 * ___heroList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::AddComponentEvents()
extern "C"  void HeroTeamMediator_AddComponentEvents_m1149484664 (HeroTeamMediator_t1271218040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::OnClick(UnityEngine.GameObject)
extern "C"  void HeroTeamMediator_OnClick_m3622001074 (HeroTeamMediator_t1271218040 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::UpdateHeroGrid(UIGridItem)
extern "C"  void HeroTeamMediator_UpdateHeroGrid_m201286991 (HeroTeamMediator_t1271218040 * __this, UIGridItem_t3654720203 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::SeeHeroArcaneInfo(UIGridItem,System.Boolean)
extern "C"  void HeroTeamMediator_SeeHeroArcaneInfo_m3613368980 (HeroTeamMediator_t1271218040 * __this, UIGridItem_t3654720203 * ___item0, bool ___isPressed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::LoadComplete(System.String,UnityEngine.GameObject,System.Object)
extern "C"  void HeroTeamMediator_LoadComplete_m1694741728 (HeroTeamMediator_t1271218040 * __this, String_t* ___abName0, GameObject_t1756533147 * ___obj1, Il2CppObject * ___param2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::LoadFail(System.String)
extern "C"  void HeroTeamMediator_LoadFail_m309499485 (HeroTeamMediator_t1271218040 * __this, String_t* ___abName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::UpdateDownHeroGrid(UIGridItem)
extern "C"  void HeroTeamMediator_UpdateDownHeroGrid_m3909657053 (HeroTeamMediator_t1271218040 * __this, UIGridItem_t3654720203 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::CreateCardTeam(UnityEngine.GameObject)
extern "C"  void HeroTeamMediator_CreateCardTeam_m2636620650 (HeroTeamMediator_t1271218040 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::AddNewCardTeam(NetProtocal.CardInfoListMsg)
extern "C"  void HeroTeamMediator_AddNewCardTeam_m716778435 (HeroTeamMediator_t1271218040 * __this, CardInfoListMsg_t972027215 * ___cardInfoList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::SetHeroFight(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void HeroTeamMediator_SetHeroFight_m3450879833 (HeroTeamMediator_t1271218040 * __this, int32_t ___fightIndex0, int32_t ___index1, int32_t ___uuid2, int32_t ___configId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::SetHeroItem(UIGridItem)
extern "C"  void HeroTeamMediator_SetHeroItem_m128109877 (HeroTeamMediator_t1271218040 * __this, UIGridItem_t3654720203 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::ChooseItem(UIGridItem,System.Boolean)
extern "C"  void HeroTeamMediator_ChooseItem_m2383888129 (HeroTeamMediator_t1271218040 * __this, UIGridItem_t3654720203 * ___item0, bool ___onPress1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeamMediator::OnDestroy()
extern "C"  void HeroTeamMediator_OnDestroy_m3859667926 (HeroTeamMediator_t1271218040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HeroTeamMediator::<UpdateTeamInfo>m__13(NetProtocal.HeroInfo,NetProtocal.HeroInfo)
extern "C"  int32_t HeroTeamMediator_U3CUpdateTeamInfoU3Em__13_m2010757406 (Il2CppObject * __this /* static, unused */, HeroInfo_t3657272016 * ___x0, HeroInfo_t3657272016 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HeroTeamMediator::<UpdateTeamInfo>m__14(NetProtocal.HeroInfo,NetProtocal.HeroInfo)
extern "C"  int32_t HeroTeamMediator_U3CUpdateTeamInfoU3Em__14_m1609897645 (Il2CppObject * __this /* static, unused */, HeroInfo_t3657272016 * ___x0, HeroInfo_t3657272016 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
