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

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Camera
struct Camera_t189460977;
// UIRect
struct UIRect_t4127168124;
// UIWidget
struct UIWidget_t1453041918;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot752586349.h"
#include "AssemblyU2DCSharp_UIRect4127168124.h"
#include "AssemblyU2DCSharp_UIWidget1453041918.h"

// System.Single NGUIMath::Lerp(System.Single,System.Single,System.Single)
extern "C"  float NGUIMath_Lerp_m4160563120 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___factor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ClampIndex(System.Int32,System.Int32)
extern "C"  int32_t NGUIMath_ClampIndex_m476620637 (Il2CppObject * __this /* static, unused */, int32_t ___val0, int32_t ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::RepeatIndex(System.Int32,System.Int32)
extern "C"  int32_t NGUIMath_RepeatIndex_m1013157621 (Il2CppObject * __this /* static, unused */, int32_t ___val0, int32_t ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::WrapAngle(System.Single)
extern "C"  float NGUIMath_WrapAngle_m524740300 (Il2CppObject * __this /* static, unused */, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::Wrap01(System.Single)
extern "C"  float NGUIMath_Wrap01_m193665150 (Il2CppObject * __this /* static, unused */, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::HexToDecimal(System.Char)
extern "C"  int32_t NGUIMath_HexToDecimal_m3962609198 (Il2CppObject * __this /* static, unused */, Il2CppChar ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char NGUIMath::DecimalToHexChar(System.Int32)
extern "C"  Il2CppChar NGUIMath_DecimalToHexChar_m1509922988 (Il2CppObject * __this /* static, unused */, int32_t ___num0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex(System.Int32)
extern "C"  String_t* NGUIMath_DecimalToHex_m3932970939 (Il2CppObject * __this /* static, unused */, int32_t ___num0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ColorToInt(UnityEngine.Color)
extern "C"  int32_t NGUIMath_ColorToInt_m2187131583 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::IntToColor(System.Int32)
extern "C"  Color_t2020392075  NGUIMath_IntToColor_m749438299 (Il2CppObject * __this /* static, unused */, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::IntToBinary(System.Int32,System.Int32)
extern "C"  String_t* NGUIMath_IntToBinary_m327164504 (Il2CppObject * __this /* static, unused */, int32_t ___val0, int32_t ___bits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::HexToColor(System.UInt32)
extern "C"  Color_t2020392075  NGUIMath_HexToColor_m1114865386 (Il2CppObject * __this /* static, unused */, uint32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToTexCoords(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  Rect_t3681755626  NGUIMath_ConvertToTexCoords_m1525403936 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, int32_t ___width1, int32_t ___height2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C"  Rect_t3681755626  NGUIMath_ConvertToPixels_m601318253 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, int32_t ___width1, int32_t ___height2, bool ___round3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect)
extern "C"  Rect_t3681755626  NGUIMath_MakePixelPerfect_m3530781236 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  Rect_t3681755626  NGUIMath_MakePixelPerfect_m3895663778 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, int32_t ___width1, int32_t ___height2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ConstrainRect(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  NGUIMath_ConstrainRect_m818898166 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___minRect0, Vector2_t2243707579  ___maxRect1, Vector2_t2243707579  ___minArea2, Vector2_t2243707579  ___maxArea3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateAbsoluteWidgetBounds(UnityEngine.Transform)
extern "C"  Bounds_t3033363703  NGUIMath_CalculateAbsoluteWidgetBounds_m1075503082 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform)
extern "C"  Bounds_t3033363703  NGUIMath_CalculateRelativeWidgetBounds_m3170611449 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,System.Boolean)
extern "C"  Bounds_t3033363703  NGUIMath_CalculateRelativeWidgetBounds_m2537343960 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___trans0, bool ___considerInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  Bounds_t3033363703  NGUIMath_CalculateRelativeWidgetBounds_m2986008918 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___relativeTo0, Transform_t3275118058 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform,System.Boolean)
extern "C"  Bounds_t3033363703  NGUIMath_CalculateRelativeWidgetBounds_m2645181685 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___relativeTo0, Transform_t3275118058 * ___content1, bool ___considerInactive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds2(UnityEngine.Transform,UnityEngine.Transform,System.Boolean)
extern "C"  Bounds_t3033363703  NGUIMath_CalculateRelativeWidgetBounds2_m3880602031 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___relativeTo0, Transform_t3275118058 * ___content1, bool ___considerInactive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringDampen(UnityEngine.Vector3&,System.Single,System.Single)
extern "C"  Vector3_t2243707580  NGUIMath_SpringDampen_m652498637 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___velocity0, float ___strength1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringDampen(UnityEngine.Vector2&,System.Single,System.Single)
extern "C"  Vector2_t2243707579  NGUIMath_SpringDampen_m1684994705 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579 * ___velocity0, float ___strength1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single)
extern "C"  float NGUIMath_SpringLerp_m424965228 (Il2CppObject * __this /* static, unused */, float ___strength0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NGUIMath_SpringLerp_m39593484 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___strength2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringLerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
extern "C"  Vector2_t2243707579  NGUIMath_SpringLerp_m58986239 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___from0, Vector2_t2243707579  ___to1, float ___strength2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringLerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Vector3_t2243707580  NGUIMath_SpringLerp_m949404960 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___from0, Vector3_t2243707580  ___to1, float ___strength2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion NGUIMath::SpringLerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
extern "C"  Quaternion_t4030073918  NGUIMath_SpringLerp_m802629114 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___from0, Quaternion_t4030073918  ___to1, float ___strength2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::RotateTowards(System.Single,System.Single,System.Single)
extern "C"  float NGUIMath_RotateTowards_m2334146126 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___maxAngle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistancePointToLineSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float NGUIMath_DistancePointToLineSegment_m1610549093 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___point0, Vector2_t2243707579  ___a1, Vector2_t2243707579  ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector2[],UnityEngine.Vector2)
extern "C"  float NGUIMath_DistanceToRectangle_m1430486867 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t686124026* ___screenPoints0, Vector2_t2243707579  ___mousePos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector3[],UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  float NGUIMath_DistanceToRectangle_m4215934824 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t1172311765* ___worldPoints0, Vector2_t2243707579  ___mousePos1, Camera_t189460977 * ___cam2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::GetPivotOffset(UIWidget/Pivot)
extern "C"  Vector2_t2243707579  NGUIMath_GetPivotOffset_m479984401 (Il2CppObject * __this /* static, unused */, int32_t ___pv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot NGUIMath::GetPivot(UnityEngine.Vector2)
extern "C"  int32_t NGUIMath_GetPivot_m247598784 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___offset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::MoveWidget(UIRect,System.Single,System.Single)
extern "C"  void NGUIMath_MoveWidget_m390587443 (Il2CppObject * __this /* static, unused */, UIRect_t4127168124 * ___w0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::MoveRect(UIRect,System.Single,System.Single)
extern "C"  void NGUIMath_MoveRect_m461936939 (Il2CppObject * __this /* static, unused */, UIRect_t4127168124 * ___rect0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::ResizeWidget(UIWidget,UIWidget/Pivot,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  void NGUIMath_ResizeWidget_m2540503367 (Il2CppObject * __this /* static, unused */, UIWidget_t1453041918 * ___w0, int32_t ___pivot1, float ___x2, float ___y3, int32_t ___minWidth4, int32_t ___minHeight5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::ResizeWidget(UIWidget,UIWidget/Pivot,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void NGUIMath_ResizeWidget_m3807347739 (Il2CppObject * __this /* static, unused */, UIWidget_t1453041918 * ___w0, int32_t ___pivot1, float ___x2, float ___y3, int32_t ___minWidth4, int32_t ___minHeight5, int32_t ___maxWidth6, int32_t ___maxHeight7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single)
extern "C"  void NGUIMath_AdjustWidget_m356449699 (Il2CppObject * __this /* static, unused */, UIWidget_t1453041918 * ___w0, float ___left1, float ___bottom2, float ___right3, float ___top4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  void NGUIMath_AdjustWidget_m206116239 (Il2CppObject * __this /* static, unused */, UIWidget_t1453041918 * ___w0, float ___left1, float ___bottom2, float ___right3, float ___top4, int32_t ___minWidth5, int32_t ___minHeight6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void NGUIMath_AdjustWidget_m3568970723 (Il2CppObject * __this /* static, unused */, UIWidget_t1453041918 * ___w0, float ___left1, float ___bottom2, float ___right3, float ___top4, int32_t ___minWidth5, int32_t ___minHeight6, int32_t ___maxWidth7, int32_t ___maxHeight8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::AdjustByDPI(System.Single)
extern "C"  int32_t NGUIMath_AdjustByDPI_m2342209442 (Il2CppObject * __this /* static, unused */, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
