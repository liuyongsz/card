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

// UIMediator`1<System.Object>
struct UIMediator_1_t2625047176;
// System.String
struct String_t;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void UIMediator`1<System.Object>::.ctor()
extern "C"  void UIMediator_1__ctor_m2643892131_gshared (UIMediator_1_t2625047176 * __this, const MethodInfo* method);
#define UIMediator_1__ctor_m2643892131(__this, method) ((  void (*) (UIMediator_1_t2625047176 *, const MethodInfo*))UIMediator_1__ctor_m2643892131_gshared)(__this, method)
// System.Void UIMediator`1<System.Object>::.ctor(System.String)
extern "C"  void UIMediator_1__ctor_m1757459073_gshared (UIMediator_1_t2625047176 * __this, String_t* ___name0, const MethodInfo* method);
#define UIMediator_1__ctor_m1757459073(__this, ___name0, method) ((  void (*) (UIMediator_1_t2625047176 *, String_t*, const MethodInfo*))UIMediator_1__ctor_m1757459073_gshared)(__this, ___name0, method)
// System.Int32 UIMediator`1<System.Object>::get_setDepth()
extern "C"  int32_t UIMediator_1_get_setDepth_m2472977619_gshared (UIMediator_1_t2625047176 * __this, const MethodInfo* method);
#define UIMediator_1_get_setDepth_m2472977619(__this, method) ((  int32_t (*) (UIMediator_1_t2625047176 *, const MethodInfo*))UIMediator_1_get_setDepth_m2472977619_gshared)(__this, method)
// System.Void UIMediator`1<System.Object>::set_setDepth(System.Int32)
extern "C"  void UIMediator_1_set_setDepth_m2408292746_gshared (UIMediator_1_t2625047176 * __this, int32_t ___value0, const MethodInfo* method);
#define UIMediator_1_set_setDepth_m2408292746(__this, ___value0, method) ((  void (*) (UIMediator_1_t2625047176 *, int32_t, const MethodInfo*))UIMediator_1_set_setDepth_m2408292746_gshared)(__this, ___value0, method)
// System.Void UIMediator`1<System.Object>::OpenPanel(PureMVC.Interfaces.INotification)
extern "C"  void UIMediator_1_OpenPanel_m3839841397_gshared (UIMediator_1_t2625047176 * __this, Il2CppObject * ___notification0, const MethodInfo* method);
#define UIMediator_1_OpenPanel_m3839841397(__this, ___notification0, method) ((  void (*) (UIMediator_1_t2625047176 *, Il2CppObject *, const MethodInfo*))UIMediator_1_OpenPanel_m3839841397_gshared)(__this, ___notification0, method)
// System.Void UIMediator`1<System.Object>::OpenPanelUI(PureMVC.Interfaces.INotification)
extern "C"  void UIMediator_1_OpenPanelUI_m1031354269_gshared (UIMediator_1_t2625047176 * __this, Il2CppObject * ___notification0, const MethodInfo* method);
#define UIMediator_1_OpenPanelUI_m1031354269(__this, ___notification0, method) ((  void (*) (UIMediator_1_t2625047176 *, Il2CppObject *, const MethodInfo*))UIMediator_1_OpenPanelUI_m1031354269_gshared)(__this, ___notification0, method)
// System.Void UIMediator`1<System.Object>::LoadUIPrefab(UnityEngine.GameObject,PureMVC.Interfaces.INotification)
extern "C"  void UIMediator_1_LoadUIPrefab_m1373896759_gshared (UIMediator_1_t2625047176 * __this, GameObject_t1756533147 * ___go0, Il2CppObject * ___notification1, const MethodInfo* method);
#define UIMediator_1_LoadUIPrefab_m1373896759(__this, ___go0, ___notification1, method) ((  void (*) (UIMediator_1_t2625047176 *, GameObject_t1756533147 *, Il2CppObject *, const MethodInfo*))UIMediator_1_LoadUIPrefab_m1373896759_gshared)(__this, ___go0, ___notification1, method)
// System.Void UIMediator`1<System.Object>::ClosePanel()
extern "C"  void UIMediator_1_ClosePanel_m1377508023_gshared (UIMediator_1_t2625047176 * __this, const MethodInfo* method);
#define UIMediator_1_ClosePanel_m1377508023(__this, method) ((  void (*) (UIMediator_1_t2625047176 *, const MethodInfo*))UIMediator_1_ClosePanel_m1377508023_gshared)(__this, method)
// System.Void UIMediator`1<System.Object>::ClosePanel(PureMVC.Interfaces.INotification)
extern "C"  void UIMediator_1_ClosePanel_m2611323091_gshared (UIMediator_1_t2625047176 * __this, Il2CppObject * ___notification0, const MethodInfo* method);
#define UIMediator_1_ClosePanel_m2611323091(__this, ___notification0, method) ((  void (*) (UIMediator_1_t2625047176 *, Il2CppObject *, const MethodInfo*))UIMediator_1_ClosePanel_m2611323091_gshared)(__this, ___notification0, method)
// System.Void UIMediator`1<System.Object>::CloseAll(PureMVC.Interfaces.INotification)
extern "C"  void UIMediator_1_CloseAll_m435019218_gshared (UIMediator_1_t2625047176 * __this, Il2CppObject * ___notification0, const MethodInfo* method);
#define UIMediator_1_CloseAll_m435019218(__this, ___notification0, method) ((  void (*) (UIMediator_1_t2625047176 *, Il2CppObject *, const MethodInfo*))UIMediator_1_CloseAll_m435019218_gshared)(__this, ___notification0, method)
// System.Void UIMediator`1<System.Object>::OnDestroy()
extern "C"  void UIMediator_1_OnDestroy_m765885730_gshared (UIMediator_1_t2625047176 * __this, const MethodInfo* method);
#define UIMediator_1_OnDestroy_m765885730(__this, method) ((  void (*) (UIMediator_1_t2625047176 *, const MethodInfo*))UIMediator_1_OnDestroy_m765885730_gshared)(__this, method)
// System.Void UIMediator`1<System.Object>::OnStart(PureMVC.Interfaces.INotification)
extern "C"  void UIMediator_1_OnStart_m1234476750_gshared (UIMediator_1_t2625047176 * __this, Il2CppObject * ___notification0, const MethodInfo* method);
#define UIMediator_1_OnStart_m1234476750(__this, ___notification0, method) ((  void (*) (UIMediator_1_t2625047176 *, Il2CppObject *, const MethodInfo*))UIMediator_1_OnStart_m1234476750_gshared)(__this, ___notification0, method)
// System.Void UIMediator`1<System.Object>::OnShow(PureMVC.Interfaces.INotification)
extern "C"  void UIMediator_1_OnShow_m173275753_gshared (UIMediator_1_t2625047176 * __this, Il2CppObject * ___notification0, const MethodInfo* method);
#define UIMediator_1_OnShow_m173275753(__this, ___notification0, method) ((  void (*) (UIMediator_1_t2625047176 *, Il2CppObject *, const MethodInfo*))UIMediator_1_OnShow_m173275753_gshared)(__this, ___notification0, method)
// System.Void UIMediator`1<System.Object>::OnPanelResLoadError(System.String)
extern "C"  void UIMediator_1_OnPanelResLoadError_m3660151704_gshared (UIMediator_1_t2625047176 * __this, String_t* ___resname0, const MethodInfo* method);
#define UIMediator_1_OnPanelResLoadError_m3660151704(__this, ___resname0, method) ((  void (*) (UIMediator_1_t2625047176 *, String_t*, const MethodInfo*))UIMediator_1_OnPanelResLoadError_m3660151704_gshared)(__this, ___resname0, method)
// System.Void UIMediator`1<System.Object>::AddComponentEvents()
extern "C"  void UIMediator_1_AddComponentEvents_m4149230148_gshared (UIMediator_1_t2625047176 * __this, const MethodInfo* method);
#define UIMediator_1_AddComponentEvents_m4149230148(__this, method) ((  void (*) (UIMediator_1_t2625047176 *, const MethodInfo*))UIMediator_1_AddComponentEvents_m4149230148_gshared)(__this, method)
// System.Void UIMediator`1<System.Object>::DisposePanel(PureMVC.Interfaces.INotification)
extern "C"  void UIMediator_1_DisposePanel_m676897220_gshared (UIMediator_1_t2625047176 * __this, Il2CppObject * ___notification0, const MethodInfo* method);
#define UIMediator_1_DisposePanel_m676897220(__this, ___notification0, method) ((  void (*) (UIMediator_1_t2625047176 *, Il2CppObject *, const MethodInfo*))UIMediator_1_DisposePanel_m676897220_gshared)(__this, ___notification0, method)
// System.Void UIMediator`1<System.Object>::OnRemove()
extern "C"  void UIMediator_1_OnRemove_m746817622_gshared (UIMediator_1_t2625047176 * __this, const MethodInfo* method);
#define UIMediator_1_OnRemove_m746817622(__this, method) ((  void (*) (UIMediator_1_t2625047176 *, const MethodInfo*))UIMediator_1_OnRemove_m746817622_gshared)(__this, method)
// System.Void UIMediator`1<System.Object>::SetOrgPos()
extern "C"  void UIMediator_1_SetOrgPos_m965596131_gshared (UIMediator_1_t2625047176 * __this, const MethodInfo* method);
#define UIMediator_1_SetOrgPos_m965596131(__this, method) ((  void (*) (UIMediator_1_t2625047176 *, const MethodInfo*))UIMediator_1_SetOrgPos_m965596131_gshared)(__this, method)
