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

// UtilTools
struct UtilTools_t4052809681;
// System.String
struct String_t;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t897193173;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>
struct UnityAction_1_t3123118898;
// UILabel
struct UILabel_t1795115428;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Action
struct Action_t3226471752;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// System.Int32[,]
struct Int32U5BU2CU5D_t3030399642;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UtilTools/OnWaitFrame
struct OnWaitFrame_t3231839477;
// UtilTools/OnCapture
struct OnCapture_t2745582047;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// UnityEngine.Object[]
struct ObjectU5BU5D_t4217747464;
// UISprite
struct UISprite_t603616735;
// UIScrollView
struct UIScrollView_t3033954930;
// UIGrid
struct UIGrid_t2420180906;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// RichContent
struct RichContent_t180955143;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RuntimePlatform1869584967.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UI_UnityEngine_UI_Toggle3976754468.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UILabel1795115428.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_UtilTools_OnWaitFrame3231839477.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "AssemblyU2DCSharp_UtilTools_OnCapture2745582047.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_UISprite603616735.h"
#include "AssemblyU2DCSharp_UIScrollView3033954930.h"
#include "AssemblyU2DCSharp_UIGrid2420180906.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_RichContent180955143.h"

// System.Void UtilTools::.ctor()
extern "C"  void UtilTools__ctor_m2440056122 (UtilTools_t4052809681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::.cctor()
extern "C"  void UtilTools__cctor_m2361685451 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::GetPlatformName()
extern "C"  String_t* UtilTools_GetPlatformName_m2090796867 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::GetPlatformForAssetBundles(UnityEngine.RuntimePlatform)
extern "C"  String_t* UtilTools_GetPlatformForAssetBundles_m3809724528 (Il2CppObject * __this /* static, unused */, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UtilTools::GetCameraFovPositionByDistance(UnityEngine.Camera,System.Single)
extern "C"  Vector3U5BU5D_t1172311765* UtilTools_GetCameraFovPositionByDistance_m668621770 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___cam0, float ___distance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::GetDataTime()
extern "C"  String_t* UtilTools_GetDataTime_m707689582 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::ConfigLoadError(System.String)
extern "C"  void UtilTools_ConfigLoadError_m361998612 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::AddToggleEvent(UnityEngine.UI.Toggle,UnityEngine.Events.UnityAction`1<System.Boolean>)
extern "C"  void UtilTools_AddToggleEvent_m1265136891 (Il2CppObject * __this /* static, unused */, Toggle_t3976754468 * ___toggle0, UnityAction_1_t897193173 * ___fun1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::RemoveAllChild(UnityEngine.Transform)
extern "C"  void UtilTools_RemoveAllChild_m3093141280 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::RemoveAllChild(UnityEngine.GameObject)
extern "C"  void UtilTools_RemoveAllChild_m3588151033 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::RemoveAllChild(UnityEngine.MonoBehaviour)
extern "C"  void UtilTools_RemoveAllChild_m3066857878 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___compenont0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::AddButtonEvent(UnityEngine.GameObject,UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>)
extern "C"  void UtilTools_AddButtonEvent_m3076590183 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, UnityAction_1_t3123118898 * ___unityAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::SetTextColor(UILabel,System.Int32)
extern "C"  void UtilTools_SetTextColor_m1044790893 (Il2CppObject * __this /* static, unused */, UILabel_t1795115428 * ___text0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UtilTools::GetGroundHeightAt(UnityEngine.Vector3)
extern "C"  float UtilTools_GetGroundHeightAt_m888002094 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::pointMouse(UnityEngine.Transform,System.Int32)
extern "C"  void UtilTools_pointMouse_m2713539223 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___target0, int32_t ___mod1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UtilTools::FormatStringDot(System.String)
extern "C"  StringU5BU5D_t1642385972* UtilTools_FormatStringDot_m3126522728 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::Int2String(System.Int32,System.String)
extern "C"  String_t* UtilTools_Int2String_m3711164690 (Il2CppObject * __this /* static, unused */, int32_t ___num0, String_t* ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::ConvertNumber(System.Int64)
extern "C"  String_t* UtilTools_ConvertNumber_m2757628775 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UtilTools::FormatStringVector3(System.String)
extern "C"  Vector3_t2243707580  UtilTools_FormatStringVector3_m3981175124 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UtilTools::FormatKeyNumber(System.String)
extern "C"  Dictionary_2_t3986656710 * UtilTools_FormatKeyNumber_m649392030 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UtilTools::FormatKeyNumberDot(System.String)
extern "C"  Dictionary_2_t3986656710 * UtilTools_FormatKeyNumberDot_m3063556093 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UtilTools::FormatKeyNumberDot2(System.String)
extern "C"  Dictionary_2_t3986656710 * UtilTools_FormatKeyNumberDot2_m1372665239 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UtilTools::FormatKeyNumberDot3(System.String)
extern "C"  Dictionary_2_t3986656710 * UtilTools_FormatKeyNumberDot3_m1303472978 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UtilTools::FormatKeyString(System.String,System.Char[],System.Char[])
extern "C"  Dictionary_2_t3943999495 * UtilTools_FormatKeyString_m4024947503 (Il2CppObject * __this /* static, unused */, String_t* ___value0, CharU5BU5D_t1328083999* ___splt11, CharU5BU5D_t1328083999* ___splt22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UtilTools::FormatKeyNumber(System.String,System.Char[],System.Char[])
extern "C"  Dictionary_2_t3986656710 * UtilTools_FormatKeyNumber_m2448199102 (Il2CppObject * __this /* static, unused */, String_t* ___value0, CharU5BU5D_t1328083999* ___first1, CharU5BU5D_t1328083999* ___second2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UtilTools::IntParse(System.String,System.Int32)
extern "C"  int32_t UtilTools_IntParse_m2360538751 (Il2CppObject * __this /* static, unused */, String_t* ___value0, int32_t ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UtilTools::LongParse(System.String,System.Int64)
extern "C"  int64_t UtilTools_LongParse_m3258746924 (Il2CppObject * __this /* static, unused */, String_t* ___value0, int64_t ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UtilTools::FloatParse(System.String,System.Single)
extern "C"  float UtilTools_FloatParse_m618279428 (Il2CppObject * __this /* static, unused */, String_t* ___value0, float ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UtilTools::KeepFloat(System.Single,System.Int32)
extern "C"  float UtilTools_KeepFloat_m2749671949 (Il2CppObject * __this /* static, unused */, float ___f0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UtilTools::BoolParse(System.String,System.Boolean)
extern "C"  bool UtilTools_BoolParse_m2573152282 (Il2CppObject * __this /* static, unused */, String_t* ___value0, bool ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::OnStringFileLoaded(System.Action,System.Int32,System.Boolean[])
extern "C"  void UtilTools_OnStringFileLoaded_m3918956264 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___completeCallback0, int32_t ___iTotal1, BooleanU5BU5D_t3568034315* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UtilTools::Split(System.String,System.Char)
extern "C"  StringU5BU5D_t1642385972* UtilTools_Split_m1848437060 (Il2CppObject * __this /* static, unused */, String_t* ___src0, Il2CppChar ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UtilTools::isEmpty(System.String)
extern "C"  bool UtilTools_isEmpty_m2619870189 (Il2CppObject * __this /* static, unused */, String_t* ___src0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UtilTools::ParseVector4(System.String)
extern "C"  Vector4_t2243707581  UtilTools_ParseVector4_m1395863911 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UtilTools::ParseVector3(System.String)
extern "C"  Vector3_t2243707580  UtilTools_ParseVector3_m2464607015 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UtilTools::TryParseVector3(System.String,UnityEngine.Vector3&)
extern "C"  bool UtilTools_TryParseVector3_m2312631949 (Il2CppObject * __this /* static, unused */, String_t* ___str0, Vector3_t2243707580 * ___vector1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UtilTools::ParseVector2(System.String)
extern "C"  Vector2_t2243707579  UtilTools_ParseVector2_m3562754535 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::Vector3String(UnityEngine.Vector3)
extern "C"  String_t* UtilTools_Vector3String_m974152051 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[,] UtilTools::ParseInts(System.String)
extern "C"  Int32U5BU2CU5D_t3030399642* UtilTools_ParseInts_m3093353543 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::StringBuilder(System.Object[])
extern "C"  String_t* UtilTools_StringBuilder_m4112611037 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UtilTools::WaitForEndOfFrame(UtilTools/OnWaitFrame)
extern "C"  Il2CppObject * UtilTools_WaitForEndOfFrame_m1288425832 (Il2CppObject * __this /* static, unused */, OnWaitFrame_t3231839477 * ___onWaitFrame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UtilTools::CaptureScreenshot(UnityEngine.Rect,UtilTools/OnCapture)
extern "C"  Il2CppObject * UtilTools_CaptureScreenshot_m3129330184 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rt0, OnCapture_t2745582047 * ___onCapture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::SaveScreenShot(System.String,UnityEngine.Texture2D)
extern "C"  void UtilTools_SaveScreenShot_m2736908501 (Il2CppObject * __this /* static, unused */, String_t* ___strFileName0, Texture2D_t3542995729 * ___tex2d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::GetUrlValue(System.String)
extern "C"  String_t* UtilTools_GetUrlValue_m1103375817 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UtilTools::GetTodayIndex()
extern "C"  int32_t UtilTools_GetTodayIndex_m838382609 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UtilTools::GetRandomPos(UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Vector3_t2243707580  UtilTools_GetRandomPos_m2418807522 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___pos0, float ___minDis1, float ___maxDis2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UtilTools::GetBoxObjectPos(UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Int32)
extern "C"  Vector3_t2243707580  UtilTools_GetBoxObjectPos_m2841748506 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___pos0, Quaternion_t4030073918  ___qua1, int32_t ___z2, int32_t ___x3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UtilTools::GetBoxObjectRandomPos(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Single,System.Single,System.Single)
extern "C"  Vector3_t2243707580  UtilTools_GetBoxObjectRandomPos_m1663402225 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___pos0, Quaternion_t4030073918  ___qua1, float ___fminz2, float ___fmaxz3, float ___fminx4, float ___fmaxx5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::TimeFormat(System.Int32)
extern "C"  String_t* UtilTools_TimeFormat_m1106678584 (Il2CppObject * __this /* static, unused */, int32_t ___sceond0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::formatDuring(System.Double)
extern "C"  String_t* UtilTools_formatDuring_m2800142495 (Il2CppObject * __this /* static, unused */, double ___mss0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::GetMaxTimeFomat(System.Double)
extern "C"  String_t* UtilTools_GetMaxTimeFomat_m1862947721 (Il2CppObject * __this /* static, unused */, double ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::GetGMTDateTime(System.Int64)
extern "C"  String_t* UtilTools_GetGMTDateTime_m1145419982 (Il2CppObject * __this /* static, unused */, int64_t ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::GetDateTime(System.Int64)
extern "C"  String_t* UtilTools_GetDateTime_m1908038226 (Il2CppObject * __this /* static, unused */, int64_t ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::GetUpperCaseNumber(System.Int32)
extern "C"  String_t* UtilTools_GetUpperCaseNumber_m800763723 (Il2CppObject * __this /* static, unused */, int32_t ___day0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::GetRandomNumber(System.Int32)
extern "C"  String_t* UtilTools_GetRandomNumber_m1165343656 (Il2CppObject * __this /* static, unused */, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UtilTools::GetNumber(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t UtilTools_GetNumber_m1656747502 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___numberList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> UtilTools::GetStringSplit(System.String,System.Char)
extern "C"  List_1_t1398341365 * UtilTools_GetStringSplit_m884683343 (Il2CppObject * __this /* static, unused */, String_t* ___str0, Il2CppChar ___split1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::SetLayer(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C"  void UtilTools_SetLayer_m290016313 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, int32_t ___layer1, int32_t ___ignoreLayer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::DestroyGameObject(UnityEngine.GameObject)
extern "C"  void UtilTools_DestroyGameObject_m2067678897 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::DestroyGameObject(UnityEngine.Object[])
extern "C"  void UtilTools_DestroyGameObject_m799312197 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t4217747464* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UtilTools::Vec2Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float UtilTools_Vec2Distance_m226277587 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___obj10, Vector3_t2243707580  ___obj21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UtilTools::Vec3Direction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  UtilTools_Vec3Direction_m205827762 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___target0, Vector3_t2243707580  ___self1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::DestroyChild(UnityEngine.GameObject)
extern "C"  void UtilTools_DestroyChild_m948172974 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UtilTools::GetSKillTypeName(System.Int32)
extern "C"  String_t* UtilTools_GetSKillTypeName_m2987945320 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UtilTools::GetFloatDot(System.Single)
extern "C"  float UtilTools_GetFloatDot_m2152474738 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::SetParentWithPosition(UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void UtilTools_SetParentWithPosition_m1232172793 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___trans0, Transform_t3275118058 * ___parent1, Vector3_t2243707580  ___position2, Vector3_t2243707580  ___size3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::SetMoneySprite(System.Int32,UISprite)
extern "C"  void UtilTools_SetMoneySprite_m2166737959 (Il2CppObject * __this /* static, unused */, int32_t ___type0, UISprite_t603616735 * ___money1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::UpdateScroViewPosition(UIScrollView,UIGrid,UnityEngine.Vector3,UnityEngine.Vector4,System.Int32,System.Int32,System.Int32)
extern "C"  void UtilTools_UpdateScroViewPosition_m1715433720 (Il2CppObject * __this /* static, unused */, UIScrollView_t3033954930 * ___view0, UIGrid_t2420180906 * ___grid1, Vector3_t2243707580  ___viewPosition2, Vector4_t2243707581  ___clipPosition3, int32_t ___maxPerLine4, int32_t ___cellWidth5, int32_t ___cellHeight6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> UtilTools::ToIntList(System.Collections.Generic.List`1<System.Object>)
extern "C"  List_1_t1440998580 * UtilTools_ToIntList_m411655836 (Il2CppObject * __this /* static, unused */, List_1_t2058570427 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UtilTools::ClearMemory()
extern "C"  void UtilTools_ClearMemory_m4137729396 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UtilTools::GetColorByLinkType(RichContent)
extern "C"  Color_t2020392075  UtilTools_GetColorByLinkType_m957529866 (Il2CppObject * __this /* static, unused */, RichContent_t180955143 * ___richcontent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
