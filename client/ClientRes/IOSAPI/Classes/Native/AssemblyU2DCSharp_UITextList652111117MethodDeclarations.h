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

// UITextList
struct UITextList_t652111117;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UITextList::.ctor()
extern "C"  void UITextList__ctor_m945538068 (UITextList_t652111117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITextList::get_isValid()
extern "C"  bool UITextList_get_isValid_m1395533333 (UITextList_t652111117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITextList::get_scrollValue()
extern "C"  float UITextList_get_scrollValue_m1245017849 (UITextList_t652111117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::set_scrollValue(System.Single)
extern "C"  void UITextList_set_scrollValue_m2861315410 (UITextList_t652111117 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITextList::get_lineHeight()
extern "C"  float UITextList_get_lineHeight_m559118804 (UITextList_t652111117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UITextList::get_scrollHeight()
extern "C"  int32_t UITextList_get_scrollHeight_m3325452733 (UITextList_t652111117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Clear()
extern "C"  void UITextList_Clear_m1605232637 (UITextList_t652111117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Start()
extern "C"  void UITextList_Start_m1777509580 (UITextList_t652111117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Update()
extern "C"  void UITextList_Update_m2085441525 (UITextList_t652111117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::OnScroll(System.Single)
extern "C"  void UITextList_OnScroll_m639944265 (UITextList_t652111117 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::OnDrag(UnityEngine.Vector2)
extern "C"  void UITextList_OnDrag_m3886357045 (UITextList_t652111117 * __this, Vector2_t2243707579  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::OnScrollBar()
extern "C"  void UITextList_OnScrollBar_m455483597 (UITextList_t652111117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Add(System.String)
extern "C"  void UITextList_Add_m1545079287 (UITextList_t652111117 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Add(System.String,System.Boolean)
extern "C"  void UITextList_Add_m1153660786 (UITextList_t652111117 * __this, String_t* ___text0, bool ___updateVisible1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Rebuild()
extern "C"  void UITextList_Rebuild_m254765041 (UITextList_t652111117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::UpdateVisibleText()
extern "C"  void UITextList_UpdateVisibleText_m266365474 (UITextList_t652111117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
