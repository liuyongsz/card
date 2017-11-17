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

// JoyStickControlor
struct JoyStickControlor_t1334643562;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// JoyStickControlor/OnInputCode
struct OnInputCode_t2736855747;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_JoyStickControlor_UIMouseStatus3425484310.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_JoyStickControlor_StickButtonCod3147683260.h"
#include "AssemblyU2DCSharp_JoyStickControlor_OnInputCode2736855747.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"

// System.Void JoyStickControlor::.ctor()
extern "C"  void JoyStickControlor__ctor_m68024907 (JoyStickControlor_t1334643562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JoyStickControlor/UIMouseStatus JoyStickControlor::get_MoustStatus()
extern "C"  int32_t JoyStickControlor_get_MoustStatus_m2022367295 (JoyStickControlor_t1334643562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor::set_MoustStatus(JoyStickControlor/UIMouseStatus)
extern "C"  void JoyStickControlor_set_MoustStatus_m1102943432 (JoyStickControlor_t1334643562 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 JoyStickControlor::get_MousePositon()
extern "C"  Vector3_t2243707580  JoyStickControlor_get_MousePositon_m2540455929 (JoyStickControlor_t1334643562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JoyStickControlor JoyStickControlor::GetInstance()
extern "C"  JoyStickControlor_t1334643562 * JoyStickControlor_GetInstance_m1376846127 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor::Awake()
extern "C"  void JoyStickControlor_Awake_m4159173210 (JoyStickControlor_t1334643562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor::Start()
extern "C"  void JoyStickControlor_Start_m989949743 (JoyStickControlor_t1334643562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor::CreateMouseObj()
extern "C"  void JoyStickControlor_CreateMouseObj_m3814478677 (JoyStickControlor_t1334643562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor::OnPrefabLoaded(System.Object[])
extern "C"  void JoyStickControlor_OnPrefabLoaded_m2698555563 (JoyStickControlor_t1334643562 * __this, ObjectU5BU5D_t3614634134* ___param0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor::Update()
extern "C"  void JoyStickControlor_Update_m142052152 (JoyStickControlor_t1334643562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor::CacheCode(JoyStickControlor/StickButtonCode)
extern "C"  void JoyStickControlor_CacheCode_m1266758396 (JoyStickControlor_t1334643562 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JoyStickControlor/StickButtonCode JoyStickControlor::CheckIsGroupCode(JoyStickControlor/StickButtonCode,JoyStickControlor/StickButtonCode)
extern "C"  int32_t JoyStickControlor_CheckIsGroupCode_m3766701566 (JoyStickControlor_t1334643562 * __this, int32_t ___code10, int32_t ___code21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor::StickCodeHandle(JoyStickControlor/StickButtonCode)
extern "C"  void JoyStickControlor_StickCodeHandle_m2857544180 (JoyStickControlor_t1334643562 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor::HideOrShowMouse(System.Boolean)
extern "C"  void JoyStickControlor_HideOrShowMouse_m2472624867 (JoyStickControlor_t1334643562 * __this, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor::MouseMove()
extern "C"  void JoyStickControlor_MouseMove_m1038224091 (JoyStickControlor_t1334643562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor::AddListener(JoyStickControlor/OnInputCode)
extern "C"  void JoyStickControlor_AddListener_m81441349 (JoyStickControlor_t1334643562 * __this, OnInputCode_t2736855747 * ___onInput0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor::RemoveListener(JoyStickControlor/OnInputCode)
extern "C"  void JoyStickControlor_RemoveListener_m1223772860 (JoyStickControlor_t1334643562 * __this, OnInputCode_t2736855747 * ___onInput0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickControlor::DispatchEvents(JoyStickControlor/StickButtonCode)
extern "C"  void JoyStickControlor_DispatchEvents_m1060176252 (JoyStickControlor_t1334643562 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JoyStickControlor::GetKey(UnityEngine.KeyCode)
extern "C"  bool JoyStickControlor_GetKey_m4198064571 (JoyStickControlor_t1334643562 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JoyStickControlor::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool JoyStickControlor_GetKeyDown_m3102516421 (JoyStickControlor_t1334643562 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JoyStickControlor::GetKeyUp(UnityEngine.KeyCode)
extern "C"  bool JoyStickControlor_GetKeyUp_m1505032096 (JoyStickControlor_t1334643562 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
