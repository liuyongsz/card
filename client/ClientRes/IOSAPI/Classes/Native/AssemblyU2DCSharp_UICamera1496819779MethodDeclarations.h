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

// UICamera
struct UICamera_t1496819779;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UICamera/OnNotifyUIEvent
struct OnNotifyUIEvent_t3025032372;
// UICamera/MouseOrTouch
struct MouseOrTouch_t2470076277;
// UICamera/PressureTouch[]
struct PressureTouchU5BU5D_t4245130885;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_UICamera_ControlScheme3098588360.h"
#include "AssemblyU2DCSharp_UICamera1496819779.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry974746545.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_UICamera_OnNotifyUIEvent3025032372.h"
#include "UnityEngine_UnityEngine_TouchPhase2458120420.h"
#include "AssemblyU2DCSharp_JoyStickControlor_StickButtonCod3147683260.h"

// System.Void UICamera::.ctor()
extern "C"  void UICamera__ctor_m3166615176 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::.cctor()
extern "C"  void UICamera__cctor_m2426361557 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_stickyPress()
extern "C"  bool UICamera_get_stickyPress_m1278227735 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UICamera::get_currentRay()
extern "C"  Ray_t2469606224  UICamera_get_currentRay_m1984465614 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_handlesEvents()
extern "C"  bool UICamera_get_handlesEvents_m968479517 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_cachedCamera()
extern "C"  Camera_t189460977 * UICamera_get_cachedCamera_m2689485703 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_touchesCount()
extern "C"  int32_t UICamera_get_touchesCount_m3186195097 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_selectedObject()
extern "C"  GameObject_t1756533147 * UICamera_get_selectedObject_m317248128 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_selectedObject(UnityEngine.GameObject)
extern "C"  void UICamera_set_selectedObject_m3213041587 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsPressed(UnityEngine.GameObject)
extern "C"  bool UICamera_IsPressed_m545745070 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::SetSelection(UnityEngine.GameObject,UICamera/ControlScheme)
extern "C"  void UICamera_SetSelection_m3648464564 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, int32_t ___scheme1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::GetCurrentSelectionInput()
extern "C"  void UICamera_GetCurrentSelectionInput_m1228305739 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UICamera::ChangeSelection()
extern "C"  Il2CppObject * UICamera_ChangeSelection_m712003474 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_touchCount()
extern "C"  int32_t UICamera_get_touchCount_m465207483 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_dragCount()
extern "C"  int32_t UICamera_get_dragCount_m68086712 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_mainCamera()
extern "C"  Camera_t189460977 * UICamera_get_mainCamera_m2710288362 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::get_eventHandler()
extern "C"  UICamera_t1496819779 * UICamera_get_eventHandler_m3089660681 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::CompareFunc(UICamera,UICamera)
extern "C"  int32_t UICamera_CompareFunc_m1448566153 (Il2CppObject * __this /* static, unused */, UICamera_t1496819779 * ___a0, UICamera_t1496819779 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::Raycast(UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C"  bool UICamera_Raycast_m4021421047 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___inPos0, RaycastHit_t87180320 * ___hit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UnityEngine.RaycastHit&)
extern "C"  bool UICamera_IsVisible_m3429265945 (Il2CppObject * __this /* static, unused */, RaycastHit_t87180320 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UICamera/DepthEntry&)
extern "C"  bool UICamera_IsVisible_m3021451623 (Il2CppObject * __this /* static, unused */, DepthEntry_t974746545 * ___de0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsHighlighted(UnityEngine.GameObject)
extern "C"  bool UICamera_IsHighlighted_m1075874621 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::FindCameraForLayer(System.Int32)
extern "C"  UICamera_t1496819779 * UICamera_FindCameraForLayer_m141587329 (Il2CppObject * __this /* static, unused */, int32_t ___layer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C"  int32_t UICamera_GetDirection_m130592707 (Il2CppObject * __this /* static, unused */, int32_t ___up0, int32_t ___down1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C"  int32_t UICamera_GetDirection_m2195203651 (Il2CppObject * __this /* static, unused */, int32_t ___up00, int32_t ___up11, int32_t ___down02, int32_t ___down13, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(System.String)
extern "C"  int32_t UICamera_GetDirection_m1910630809 (Il2CppObject * __this /* static, unused */, String_t* ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Notify(UnityEngine.GameObject,System.String,System.Object)
extern "C"  void UICamera_Notify_m2858345893 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, String_t* ___funcName1, Il2CppObject * ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::SetNotifyUIEvent(UICamera/OnNotifyUIEvent)
extern "C"  void UICamera_SetNotifyUIEvent_m628086295 (Il2CppObject * __this /* static, unused */, OnNotifyUIEvent_t3025032372 * ___onNotifyEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera::GetMouse(System.Int32)
extern "C"  MouseOrTouch_t2470076277 * UICamera_GetMouse_m2026747984 (Il2CppObject * __this /* static, unused */, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera::GetTouch(System.Int32)
extern "C"  MouseOrTouch_t2470076277 * UICamera_GetTouch_m3823754436 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::RemoveTouch(System.Int32)
extern "C"  void UICamera_RemoveTouch_m2691586914 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Awake()
extern "C"  void UICamera_Awake_m3800014275 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnEnable()
extern "C"  void UICamera_OnEnable_m2736726468 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnDisable()
extern "C"  void UICamera_OnDisable_m1171936983 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Start()
extern "C"  void UICamera_Start_m1649977700 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Update()
extern "C"  void UICamera_Update_m927241191 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessMouse()
extern "C"  void UICamera_ProcessMouse_m936784574 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouches()
extern "C"  void UICamera_ProcessTouches_m449364206 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessFakeTouches()
extern "C"  void UICamera_ProcessFakeTouches_m4201770379 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessOthers()
extern "C"  void UICamera_ProcessOthers_m2431473538 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouch(System.Boolean,System.Boolean)
extern "C"  void UICamera_ProcessTouch_m203963946 (UICamera_t1496819779 * __this, bool ___pressed0, bool ___unpressed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ShowTooltip(System.Boolean)
extern "C"  void UICamera_ShowTooltip_m1842325303 (UICamera_t1496819779 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::SwapTouchBuffers()
extern "C"  void UICamera_SwapTouchBuffers_m2352786745 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::FindIndexOfTouchIdExist(System.Int32,UICamera/PressureTouch[],System.Int32)
extern "C"  int32_t UICamera_FindIndexOfTouchIdExist_m170518165 (Il2CppObject * __this /* static, unused */, int32_t ___touchId0, PressureTouchU5BU5D_t4245130885* ___touches1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::Check3DTouchFeatureSupported()
extern "C"  bool UICamera_Check3DTouchFeatureSupported_m3763862206 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/PressureTouch[] UICamera::GetTouches()
extern "C"  PressureTouchU5BU5D_t4245130885* UICamera_GetTouches_m1305199254 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::RegistForceTouchCallback()
extern "C"  void UICamera_RegistForceTouchCallback_m3022062733 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnForceTouchCallbackFromNative(System.Int32,System.Single,System.Single,System.Single,System.Single,UnityEngine.TouchPhase)
extern "C"  void UICamera_OnForceTouchCallbackFromNative_m3151464421 (Il2CppObject * __this /* static, unused */, int32_t ___touchId0, float ___pressure1, float ___maximumPossiblePressure2, float ___pos_x3, float ___pos_y4, int32_t ___phase5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UICamera_OnForceTouchCallbackFromNative_m3151464421(int32_t ___touchId0, float ___pressure1, float ___maximumPossiblePressure2, float ___pos_x3, float ___pos_y4, int32_t ___phase5);
// System.Void UICamera::OnStickInput(JoyStickControlor/StickButtonCode)
extern "C"  void UICamera_OnStickInput_m71405861 (UICamera_t1496819779 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessStickMouse(JoyStickControlor/StickButtonCode)
extern "C"  void UICamera_ProcessStickMouse_m3350699000 (UICamera_t1496819779 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnApplicationPause()
extern "C"  void UICamera_OnApplicationPause_m1678305479 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::<Raycast>m__D(UICamera/DepthEntry,UICamera/DepthEntry)
extern "C"  int32_t UICamera_U3CRaycastU3Em__D_m1769188360 (Il2CppObject * __this /* static, unused */, DepthEntry_t974746545  ___r10, DepthEntry_t974746545  ___r21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
