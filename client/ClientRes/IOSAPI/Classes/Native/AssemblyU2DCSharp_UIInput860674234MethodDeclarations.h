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

// UIInput
struct UIInput_t860674234;
// System.String
struct String_t;
// UITexture
struct UITexture_t2537039969;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void UIInput::.ctor()
extern "C"  void UIInput__ctor_m3032812089 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::.cctor()
extern "C"  void UIInput__cctor_m3386500436 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::get_defaultText()
extern "C"  String_t* UIInput_get_defaultText_m4289739939 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_defaultText(System.String)
extern "C"  void UIInput_set_defaultText_m1999504542 (UIInput_t860674234 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIInput::get_inputShouldBeHidden()
extern "C"  bool UIInput_get_inputShouldBeHidden_m2216332954 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::get_text()
extern "C"  String_t* UIInput_get_text_m1153657420 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_text(System.String)
extern "C"  void UIInput_set_text_m421015327 (UIInput_t860674234 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::get_value()
extern "C"  String_t* UIInput_get_value_m2016753770 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_value(System.String)
extern "C"  void UIInput_set_value_m430904237 (UIInput_t860674234 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIInput::get_selected()
extern "C"  bool UIInput_get_selected_m3107423497 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_selected(System.Boolean)
extern "C"  void UIInput_set_selected_m3288496464 (UIInput_t860674234 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIInput::get_isSelected()
extern "C"  bool UIInput_get_isSelected_m2793903603 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_isSelected(System.Boolean)
extern "C"  void UIInput_set_isSelected_m1934364468 (UIInput_t860674234 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIInput::get_cursorPosition()
extern "C"  int32_t UIInput_get_cursorPosition_m2028330005 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_cursorPosition(System.Int32)
extern "C"  void UIInput_set_cursorPosition_m3237032564 (UIInput_t860674234 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIInput::get_selectionStart()
extern "C"  int32_t UIInput_get_selectionStart_m116763764 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_selectionStart(System.Int32)
extern "C"  void UIInput_set_selectionStart_m1765428137 (UIInput_t860674234 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIInput::get_selectionEnd()
extern "C"  int32_t UIInput_get_selectionEnd_m2411463977 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_selectionEnd(System.Int32)
extern "C"  void UIInput_set_selectionEnd_m373116562 (UIInput_t860674234 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UITexture UIInput::get_caret()
extern "C"  UITexture_t2537039969 * UIInput_get_caret_m3585569953 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::Validate(System.String)
extern "C"  String_t* UIInput_Validate_m4006471114 (UIInput_t860674234 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Start()
extern "C"  void UIInput_Start_m1606346049 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Init()
extern "C"  void UIInput_Init_m707991935 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::SaveToPlayerPrefs(System.String)
extern "C"  void UIInput_SaveToPlayerPrefs_m237300722 (UIInput_t860674234 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnSelect(System.Boolean)
extern "C"  void UIInput_OnSelect_m2265710855 (UIInput_t860674234 * __this, bool ___isSelected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnSelectEvent()
extern "C"  void UIInput_OnSelectEvent_m3111065762 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnDeselectEvent()
extern "C"  void UIInput_OnDeselectEvent_m818677489 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Update()
extern "C"  void UIInput_Update_m2730349724 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::DoBackspace()
extern "C"  void UIInput_DoBackspace_m4056806637 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Insert(System.String)
extern "C"  void UIInput_Insert_m943856494 (UIInput_t860674234 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::GetLeftText()
extern "C"  String_t* UIInput_GetLeftText_m15966750 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::GetRightText()
extern "C"  String_t* UIInput_GetRightText_m3185563183 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::GetSelection()
extern "C"  String_t* UIInput_GetSelection_m2632179308 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIInput::GetCharUnderMouse()
extern "C"  int32_t UIInput_GetCharUnderMouse_m3066611790 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnPress(System.Boolean)
extern "C"  void UIInput_OnPress_m545608652 (UIInput_t860674234 * __this, bool ___isPressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnDrag(UnityEngine.Vector2)
extern "C"  void UIInput_OnDrag_m3016279486 (UIInput_t860674234 * __this, Vector2_t2243707579  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnDisable()
extern "C"  void UIInput_OnDisable_m3560534770 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Cleanup()
extern "C"  void UIInput_Cleanup_m414209557 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Submit()
extern "C"  void UIInput_Submit_m162718125 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::UpdateLabel()
extern "C"  void UIInput_UpdateLabel_m3962699924 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::SetPivotToLeft()
extern "C"  void UIInput_SetPivotToLeft_m3955081423 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::SetPivotToRight()
extern "C"  void UIInput_SetPivotToRight_m2413252992 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::RestoreLabelPivot()
extern "C"  void UIInput_RestoreLabelPivot_m880623815 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput::Validate(System.String,System.Int32,System.Char)
extern "C"  Il2CppChar UIInput_Validate_m677554923 (UIInput_t860674234 * __this, String_t* ___text0, int32_t ___pos1, Il2CppChar ___ch2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::ExecuteOnChange()
extern "C"  void UIInput_ExecuteOnChange_m480883017 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::RemoveFocus()
extern "C"  void UIInput_RemoveFocus_m1458354703 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::SaveValue()
extern "C"  void UIInput_SaveValue_m2078848627 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::LoadValue()
extern "C"  void UIInput_LoadValue_m1537001604 (UIInput_t860674234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
