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

// UIRichText
struct UIRichText_t2941036835;
// System.String
struct String_t;
// RichData
struct RichData_t3375335906;
// RichContent
struct RichContent_t180955143;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_RichData3375335906.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_OwnerType1657261651.h"
#include "AssemblyU2DCSharp_RichContent180955143.h"
#include "AssemblyU2DCSharp_RichEnum989386705.h"
#include "AssemblyU2DCSharp_LinkType3478309428.h"

// System.Void UIRichText::.ctor()
extern "C"  void UIRichText__ctor_m2695661190 (UIRichText_t2941036835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::Awake()
extern "C"  void UIRichText_Awake_m2066118243 (UIRichText_t2941036835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::GetRichGameObject()
extern "C"  void UIRichText_GetRichGameObject_m2000497039 (UIRichText_t2941036835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::set_text(System.String)
extern "C"  void UIRichText_set_text_m680192056 (UIRichText_t2941036835 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIRichText::get_text()
extern "C"  String_t* UIRichText_get_text_m3171498479 (UIRichText_t2941036835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::set_richData(RichData)
extern "C"  void UIRichText_set_richData_m2084876347 (UIRichText_t2941036835 * __this, RichData_t3375335906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RichData UIRichText::get_richData()
extern "C"  RichData_t3375335906 * UIRichText_get_richData_m2847247450 (UIRichText_t2941036835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::set_cellHeight(System.Single)
extern "C"  void UIRichText_set_cellHeight_m3579827867 (UIRichText_t2941036835 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRichText::get_cellHeight()
extern "C"  float UIRichText_get_cellHeight_m1299381304 (UIRichText_t2941036835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::set_textColor(UnityEngine.Color)
extern "C"  void UIRichText_set_textColor_m4215706233 (UIRichText_t2941036835 * __this, Color_t2020392075  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UIRichText::get_textColor()
extern "C"  Color_t2020392075  UIRichText_get_textColor_m1820777942 (UIRichText_t2941036835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::set_localPosition(UnityEngine.Vector3)
extern "C"  void UIRichText_set_localPosition_m3883777574 (UIRichText_t2941036835 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIRichText::get_localPosition()
extern "C"  Vector3_t2243707580  UIRichText_get_localPosition_m2217430725 (UIRichText_t2941036835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::set_maxWidth(System.Single)
extern "C"  void UIRichText_set_maxWidth_m614461548 (UIRichText_t2941036835 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRichText::get_maxWidth()
extern "C"  float UIRichText_get_maxWidth_m272052259 (UIRichText_t2941036835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRichText::get_richHeight()
extern "C"  float UIRichText_get_richHeight_m2402907426 (UIRichText_t2941036835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRichText::get_richWidth()
extern "C"  float UIRichText_get_richWidth_m1990313027 (UIRichText_t2941036835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::set_owerType(OwnerType)
extern "C"  void UIRichText_set_owerType_m2780478569 (UIRichText_t2941036835 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OwnerType UIRichText::get_owerType()
extern "C"  int32_t UIRichText_get_owerType_m2454842200 (UIRichText_t2941036835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::Parse(RichData)
extern "C"  void UIRichText_Parse_m873129571 (UIRichText_t2941036835 * __this, RichData_t3375335906 * ___richdata0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::Parse(System.String)
extern "C"  void UIRichText_Parse_m3620650161 (UIRichText_t2941036835 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::AddContent(RichContent)
extern "C"  void UIRichText_AddContent_m4215498751 (UIRichText_t2941036835 * __this, RichContent_t180955143 * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::CreateVoiceLink()
extern "C"  void UIRichText_CreateVoiceLink_m4228375328 (UIRichText_t2941036835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::SetCurrWidth(System.Single)
extern "C"  void UIRichText_SetCurrWidth_m3878150185 (UIRichText_t2941036835 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::ParseWrapText(System.String,RichContent)
extern "C"  void UIRichText_ParseWrapText_m1117725329 (UIRichText_t2941036835 * __this, String_t* ___value0, RichContent_t180955143 * ___richcontent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::AddTextContent(RichContent)
extern "C"  void UIRichText_AddTextContent_m234868708 (UIRichText_t2941036835 * __this, RichContent_t180955143 * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::AddIconContent(RichContent)
extern "C"  void UIRichText_AddIconContent_m3410836442 (UIRichText_t2941036835 * __this, RichContent_t180955143 * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::AddHrefContent(RichContent)
extern "C"  void UIRichText_AddHrefContent_m3960689370 (UIRichText_t2941036835 * __this, RichContent_t180955143 * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::ParseWrapHref(System.String,RichContent)
extern "C"  void UIRichText_ParseWrapHref_m2456614841 (UIRichText_t2941036835 * __this, String_t* ___value0, RichContent_t180955143 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::AddBtnContent(RichContent)
extern "C"  void UIRichText_AddBtnContent_m76370363 (UIRichText_t2941036835 * __this, RichContent_t180955143 * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRichText::AddVoiceContent(RichContent)
extern "C"  void UIRichText_AddVoiceContent_m317262881 (UIRichText_t2941036835 * __this, RichContent_t180955143 * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RichContent UIRichText::CreateRichContent(System.String,RichEnum,LinkType,System.Object[])
extern "C"  RichContent_t180955143 * UIRichText_CreateRichContent_m779749468 (Il2CppObject * __this /* static, unused */, String_t* ___content0, int32_t ___richEnum1, int32_t ___linkType2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
