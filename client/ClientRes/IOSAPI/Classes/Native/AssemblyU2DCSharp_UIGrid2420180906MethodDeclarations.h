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

// UIGrid
struct UIGrid_t2420180906;
// UIGrid/OnUpdateDataRow
struct OnUpdateDataRow_t314779399;
// UIGridItem
struct UIGridItem_t3654720203;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// UnityEngine.Transform
struct Transform_t3275118058;
// BetterList`1<UnityEngine.Transform>
struct BetterList_1_t3495506700;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIGrid_OnUpdateDataRow314779399.h"
#include "AssemblyU2DCSharp_UIGridItem3654720203.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "System_Core_System_Action3226471752.h"

// System.Void UIGrid::.ctor()
extern "C"  void UIGrid__ctor_m2802562027 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::get_OffestRow()
extern "C"  int32_t UIGrid_get_OffestRow_m2929962411 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::BindCustomCallBack(UIGrid/OnUpdateDataRow)
extern "C"  void UIGrid_BindCustomCallBack_m3024616157 (UIGrid_t2420180906 * __this, OnUpdateDataRow_t314779399 * ___fn_ChangeRow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnClickItem(UIGridItem,UnityEngine.GameObject)
extern "C"  void UIGrid_OnClickItem_m2203352998 (UIGrid_t2420180906 * __this, UIGridItem_t3654720203 * ___oItem0, GameObject_t1756533147 * ___OSubItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::ClearCustomGrid()
extern "C"  void UIGrid_ClearCustomGrid_m865252449 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::ClearCustomData()
extern "C"  void UIGrid_ClearCustomData_m785973901 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::DeleteCustomData(System.Object,System.Boolean)
extern "C"  void UIGrid_DeleteCustomData_m1542058506 (UIGrid_t2420180906 * __this, Il2CppObject * ___oData0, bool ___updateView1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::UpdateCustomData(System.Object)
extern "C"  void UIGrid_UpdateCustomData_m2416631563 (UIGrid_t2420180906 * __this, Il2CppObject * ___odata0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::UpdateCustomDataList(System.Collections.Generic.List`1<System.Object>)
extern "C"  void UIGrid_UpdateCustomDataList_m844372675 (UIGrid_t2420180906 * __this, List_1_t2058570427 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::UpdateCustomDataListAll(System.Collections.Generic.List`1<System.Object>)
extern "C"  void UIGrid_UpdateCustomDataListAll_m3565797758 (UIGrid_t2420180906 * __this, List_1_t2058570427 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::AddCustomDataList(System.Collections.Generic.List`1<System.Object>)
extern "C"  void UIGrid_AddCustomDataList_m2942263475 (UIGrid_t2420180906 * __this, List_1_t2058570427 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::AddCustomData(System.Object)
extern "C"  void UIGrid_AddCustomData_m3723443971 (UIGrid_t2420180906 * __this, Il2CppObject * ___oData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnCustomDrag()
extern "C"  void UIGrid_OnCustomDrag_m1327262869 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIGrid::GetFreeTrans()
extern "C"  Transform_t3275118058 * UIGrid_GetFreeTrans_m2606815251 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::UpdateCustomView()
extern "C"  void UIGrid_UpdateCustomView_m1136778478 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::set_repositionNow(System.Boolean)
extern "C"  void UIGrid_set_repositionNow_m283086129 (UIGrid_t2420180906 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::GoToPosition(System.Int32,System.Int32,System.Int32)
extern "C"  void UIGrid_GoToPosition_m325873114 (UIGrid_t2420180906 * __this, int32_t ___index0, int32_t ___ofx1, int32_t ___ofy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::GetSelectedIndex()
extern "C"  int32_t UIGrid_GetSelectedIndex_m971142540 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::SetSelect(System.Int32)
extern "C"  void UIGrid_SetSelect_m163883300 (UIGrid_t2420180906 * __this, int32_t ___iSelectIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::SetSelect(System.Object)
extern "C"  void UIGrid_SetSelect_m1264439203 (UIGrid_t2420180906 * __this, Il2CppObject * ___oData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UIGrid::GetSelected()
extern "C"  Il2CppObject * UIGrid_GetSelected_m3026248457 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIGrid::GetSelected(System.Int32)
extern "C"  GameObject_t1756533147 * UIGrid_GetSelected_m1764997850 (UIGrid_t2420180906 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIGrid::GetSelectedItem()
extern "C"  Transform_t3275118058 * UIGrid_GetSelectedItem_m363424389 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIGridItem UIGrid::GetSelectedGridItem()
extern "C"  UIGridItem_t3654720203 * UIGrid_GetSelectedGridItem_m3323774619 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UIGrid::GetCustomDataItem(System.Int32)
extern "C"  Il2CppObject * UIGrid_GetCustomDataItem_m782848503 (UIGrid_t2420180906 * __this, int32_t ___iIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIGridItem UIGrid::GetCustomGridItem(System.Object)
extern "C"  UIGridItem_t3654720203 * UIGrid_GetCustomGridItem_m1610431755 (UIGrid_t2420180906 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIGrid::GetCustomTransItem(System.Int32)
extern "C"  Transform_t3275118058 * UIGrid_GetCustomTransItem_m1078891114 (UIGrid_t2420180906 * __this, int32_t ___iIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIGridItem UIGrid::GetCustomGridItem(System.Int32)
extern "C"  UIGridItem_t3654720203 * UIGrid_GetCustomGridItem_m4148206640 (UIGrid_t2420180906 * __this, int32_t ___iIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnClick(UIGridItem)
extern "C"  void UIGrid_OnClick_m573106141 (UIGrid_t2420180906 * __this, UIGridItem_t3654720203 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnSubmit(UIGridItem)
extern "C"  void UIGrid_OnSubmit_m2817837403 (UIGrid_t2420180906 * __this, UIGridItem_t3654720203 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnDoubleClick(UIGridItem)
extern "C"  void UIGrid_OnDoubleClick_m1849896082 (UIGrid_t2420180906 * __this, UIGridItem_t3654720203 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnHover(UIGridItem,System.Boolean)
extern "C"  void UIGrid_OnHover_m4249828954 (UIGrid_t2420180906 * __this, UIGridItem_t3654720203 * ___item0, bool ___isOver1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnPress(UIGridItem,System.Boolean)
extern "C"  void UIGrid_OnPress_m3272170135 (UIGrid_t2420180906 * __this, UIGridItem_t3654720203 * ___item0, bool ___isPressed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnSelect(UIGridItem,System.Boolean)
extern "C"  void UIGrid_OnSelect_m1006467330 (UIGrid_t2420180906 * __this, UIGridItem_t3654720203 * ___item0, bool ___selected1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnScroll(System.Single)
extern "C"  void UIGrid_OnScroll_m482575738 (UIGrid_t2420180906 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnDrag(UIGridItem,UnityEngine.Vector2)
extern "C"  void UIGrid_OnDrag_m3677886959 (UIGrid_t2420180906 * __this, UIGridItem_t3654720203 * ___item0, Vector2_t2243707579  ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnDrop(UIGridItem,UnityEngine.GameObject)
extern "C"  void UIGrid_OnDrop_m1359164126 (UIGrid_t2420180906 * __this, UIGridItem_t3654720203 * ___item0, GameObject_t1756533147 * ___go1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnKey(UIGridItem,UnityEngine.KeyCode)
extern "C"  void UIGrid_OnKey_m3289104897 (UIGrid_t2420180906 * __this, UIGridItem_t3654720203 * ___item0, int32_t ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Init()
extern "C"  void UIGrid_Init_m4113844497 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Start()
extern "C"  void UIGrid_Start_m1752024759 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::StartCustom()
extern "C"  void UIGrid_StartCustom_m1212849814 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGrid::HasInit()
extern "C"  bool UIGrid_HasInit_m142708195 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::PanelReset()
extern "C"  void UIGrid_PanelReset_m276158032 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Update()
extern "C"  void UIGrid_Update_m1841310228 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortByName(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t UIGrid_SortByName_m2117232175 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___a0, Transform_t3275118058 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortHorizontal(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t UIGrid_SortHorizontal_m4102275981 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___a0, Transform_t3275118058 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortVertical(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t UIGrid_SortVertical_m3913489617 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___a0, Transform_t3275118058 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Sort(BetterList`1<UnityEngine.Transform>)
extern "C"  void UIGrid_Sort_m2646753851 (UIGrid_t2420180906 * __this, BetterList_1_t3495506700 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Reposition()
extern "C"  void UIGrid_Reposition_m1337808537 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::StartCustom(System.Int32)
extern "C"  void UIGrid_StartCustom_m3832021485 (UIGrid_t2420180906 * __this, int32_t ___numPerFrame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::AddCustomDataListByFrame(System.Collections.Generic.List`1<System.Object>,System.Action,System.Action,System.Boolean)
extern "C"  void UIGrid_AddCustomDataListByFrame_m2357098920 (UIGrid_t2420180906 * __this, List_1_t2058570427 * ___list0, Action_t3226471752 * ___startAction1, Action_t3226471752 * ___endAction2, bool ___goToFirstLineWhileFinish3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::UpdateItemByFrame()
extern "C"  void UIGrid_UpdateItemByFrame_m2820411065 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnDestroy()
extern "C"  void UIGrid_OnDestroy_m724590096 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
