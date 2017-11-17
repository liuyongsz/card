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

// SymbolInput
struct SymbolInput_t2222729392;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void SymbolInput::.ctor()
extern "C"  void SymbolInput__ctor_m1094232327 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SymbolInput::get_defaultText()
extern "C"  String_t* SymbolInput_get_defaultText_m2388125729 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::set_defaultText(System.String)
extern "C"  void SymbolInput_set_defaultText_m2325005900 (SymbolInput_t2222729392 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SymbolInput::get_text()
extern "C"  String_t* SymbolInput_get_text_m4210496974 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::set_text(System.String)
extern "C"  void SymbolInput_set_text_m3690057101 (SymbolInput_t2222729392 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SymbolInput::get_value()
extern "C"  String_t* SymbolInput_get_value_m3157310576 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::set_value(System.String)
extern "C"  void SymbolInput_set_value_m105938899 (SymbolInput_t2222729392 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SymbolInput::get_selected()
extern "C"  bool SymbolInput_get_selected_m2652888599 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::set_selected(System.Boolean)
extern "C"  void SymbolInput_set_selected_m2061809222 (SymbolInput_t2222729392 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SymbolInput::get_isSelected()
extern "C"  bool SymbolInput_get_isSelected_m712719601 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::set_isSelected(System.Boolean)
extern "C"  void SymbolInput_set_isSelected_m3028828154 (SymbolInput_t2222729392 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SymbolInput::get_cursorPosition()
extern "C"  int32_t SymbolInput_get_cursorPosition_m3791999355 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::set_cursorPosition(System.Int32)
extern "C"  void SymbolInput_set_cursorPosition_m2500001398 (SymbolInput_t2222729392 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SymbolInput::get_selectionStart()
extern "C"  int32_t SymbolInput_get_selectionStart_m947818222 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::set_selectionStart(System.Int32)
extern "C"  void SymbolInput_set_selectionStart_m4223890183 (SymbolInput_t2222729392 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SymbolInput::get_selectionEnd()
extern "C"  int32_t SymbolInput_get_selectionEnd_m171951515 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::set_selectionEnd(System.Int32)
extern "C"  void SymbolInput_set_selectionEnd_m198734552 (SymbolInput_t2222729392 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SymbolInput::Validate(System.String)
extern "C"  String_t* SymbolInput_Validate_m3877957072 (SymbolInput_t2222729392 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::Start()
extern "C"  void SymbolInput_Start_m897088395 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::Init()
extern "C"  void SymbolInput_Init_m2547106277 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::SaveToPlayerPrefs(System.String)
extern "C"  void SymbolInput_SaveToPlayerPrefs_m891023156 (SymbolInput_t2222729392 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::OnSelect(System.Boolean)
extern "C"  void SymbolInput_OnSelect_m1336851045 (SymbolInput_t2222729392 * __this, bool ___isSelected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::OnSelectEvent()
extern "C"  void SymbolInput_OnSelectEvent_m1063600116 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::OnDeselectEvent()
extern "C"  void SymbolInput_OnDeselectEvent_m4211663779 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::Update()
extern "C"  void SymbolInput_Update_m880337810 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::Submit()
extern "C"  void SymbolInput_Submit_m2270006043 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::UpdateLabel()
extern "C"  void SymbolInput_UpdateLabel_m3866955238 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::SetPivotToLeft()
extern "C"  void SymbolInput_SetPivotToLeft_m2054265201 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::SetPivotToRight()
extern "C"  void SymbolInput_SetPivotToRight_m3047965022 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::RestoreLabelPivot()
extern "C"  void SymbolInput_RestoreLabelPivot_m1081708877 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char SymbolInput::Validate(System.String,System.Int32,System.Char)
extern "C"  Il2CppChar SymbolInput_Validate_m2194496717 (SymbolInput_t2222729392 * __this, String_t* ___text0, int32_t ___pos1, Il2CppChar ___ch2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SymbolInput::ExecuteOnChange()
extern "C"  void SymbolInput_ExecuteOnChange_m2321503375 (SymbolInput_t2222729392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
