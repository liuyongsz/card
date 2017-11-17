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

// UIPopupList
struct UIPopupList_t109953940;
// UnityEngine.Object
struct Object_t1021602117;
// UIPopupList/LegacyEvent
struct LegacyEvent_t3991167770;
// System.String
struct String_t;
// UILabel
struct UILabel_t1795115428;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UIWidget
struct UIWidget_t1453041918;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "AssemblyU2DCSharp_UIPopupList_LegacyEvent3991167770.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_UILabel1795115428.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "AssemblyU2DCSharp_UIWidget1453041918.h"

// System.Void UIPopupList::.ctor()
extern "C"  void UIPopupList__ctor_m3338802731 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UIPopupList::get_ambigiousFont()
extern "C"  Object_t1021602117 * UIPopupList_get_ambigiousFont_m3463565250 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_ambigiousFont(UnityEngine.Object)
extern "C"  void UIPopupList_set_ambigiousFont_m399399271 (UIPopupList_t109953940 * __this, Object_t1021602117 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPopupList/LegacyEvent UIPopupList::get_onSelectionChange()
extern "C"  LegacyEvent_t3991167770 * UIPopupList_get_onSelectionChange_m1699294634 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_onSelectionChange(UIPopupList/LegacyEvent)
extern "C"  void UIPopupList_set_onSelectionChange_m2788919155 (UIPopupList_t109953940 * __this, LegacyEvent_t3991167770 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_isOpen()
extern "C"  bool UIPopupList_get_isOpen_m3249812516 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIPopupList::get_value()
extern "C"  String_t* UIPopupList_get_value_m575903892 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_value(System.String)
extern "C"  void UIPopupList_set_value_m875118895 (UIPopupList_t109953940 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIPopupList::get_selection()
extern "C"  String_t* UIPopupList_get_selection_m997601135 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_selection(System.String)
extern "C"  void UIPopupList_set_selection_m3939670660 (UIPopupList_t109953940 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_handleEvents()
extern "C"  bool UIPopupList_get_handleEvents_m2841786107 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_handleEvents(System.Boolean)
extern "C"  void UIPopupList_set_handleEvents_m1462537660 (UIPopupList_t109953940 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_isValid()
extern "C"  bool UIPopupList_get_isValid_m4164922024 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPopupList::get_activeFontSize()
extern "C"  int32_t UIPopupList_get_activeFontSize_m135126970 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPopupList::get_activeFontScale()
extern "C"  float UIPopupList_get_activeFontScale_m3174173723 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::TriggerCallbacks()
extern "C"  void UIPopupList_TriggerCallbacks_m356672801 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnEnable()
extern "C"  void UIPopupList_OnEnable_m1090770415 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnValidate()
extern "C"  void UIPopupList_OnValidate_m202729408 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Start()
extern "C"  void UIPopupList_Start_m2613035247 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnLocalize()
extern "C"  void UIPopupList_OnLocalize_m3535238941 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Highlight(UILabel,System.Boolean)
extern "C"  void UIPopupList_Highlight_m1849085542 (UIPopupList_t109953940 * __this, UILabel_t1795115428 * ___lbl0, bool ___instant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemHover(UnityEngine.GameObject,System.Boolean)
extern "C"  void UIPopupList_OnItemHover_m1576403776 (UIPopupList_t109953940 * __this, GameObject_t1756533147 * ___go0, bool ___isOver1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Select(UILabel,System.Boolean)
extern "C"  void UIPopupList_Select_m2235339614 (UIPopupList_t109953940 * __this, UILabel_t1795115428 * ___lbl0, bool ___instant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemPress(UnityEngine.GameObject,System.Boolean)
extern "C"  void UIPopupList_OnItemPress_m1085254023 (UIPopupList_t109953940 * __this, GameObject_t1756533147 * ___go0, bool ___isPressed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnKey(UnityEngine.KeyCode)
extern "C"  void UIPopupList_OnKey_m2466108486 (UIPopupList_t109953940 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnSelect(System.Boolean)
extern "C"  void UIPopupList_OnSelect_m2611281985 (UIPopupList_t109953940 * __this, bool ___isSelected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Close()
extern "C"  void UIPopupList_Close_m908070173 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimateColor(UIWidget)
extern "C"  void UIPopupList_AnimateColor_m1413828557 (UIPopupList_t109953940 * __this, UIWidget_t1453041918 * ___widget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimatePosition(UIWidget,System.Boolean,System.Single)
extern "C"  void UIPopupList_AnimatePosition_m3828712831 (UIPopupList_t109953940 * __this, UIWidget_t1453041918 * ___widget0, bool ___placeAbove1, float ___bottom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimateScale(UIWidget,System.Boolean,System.Single)
extern "C"  void UIPopupList_AnimateScale_m3082539226 (UIPopupList_t109953940 * __this, UIWidget_t1453041918 * ___widget0, bool ___placeAbove1, float ___bottom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Animate(UIWidget,System.Boolean,System.Single)
extern "C"  void UIPopupList_Animate_m830149314 (UIPopupList_t109953940 * __this, UIWidget_t1453041918 * ___widget0, bool ___placeAbove1, float ___bottom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnClick()
extern "C"  void UIPopupList_OnClick_m1709324516 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
