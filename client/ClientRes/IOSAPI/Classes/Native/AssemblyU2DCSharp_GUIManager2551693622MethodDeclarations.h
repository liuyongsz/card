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

// GUIManager
struct GUIManager_t2551693622;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// UISprite
struct UISprite_t603616735;
// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// Confirm
struct Confirm_t2568813388;
// CreateTeam
struct CreateTeam_t1127243795;
// CopyTeam
struct CopyTeam_t2662696276;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.Shader
struct Shader_t2430389951;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_UISprite603616735.h"
#include "UnityEngine_UnityEngine_AssetBundle2054978754.h"
#include "AssemblyU2DCSharp_PromtType1053105714.h"
#include "AssemblyU2DCSharp_Confirm2568813388.h"
#include "AssemblyU2DCSharp_CreateTeam1127243795.h"
#include "AssemblyU2DCSharp_CopyTeam2662696276.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "AssemblyU2DCSharp_NotificationID248744986.h"

// System.Void GUIManager::.ctor()
extern "C"  void GUIManager__ctor_m3507475335 (GUIManager_t2551693622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::.cctor()
extern "C"  void GUIManager__cctor_m1220393640 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::Start()
extern "C"  void GUIManager_Start_m3548257091 (GUIManager_t2551693622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::Update()
extern "C"  void GUIManager_Update_m1398972032 (GUIManager_t2551693622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::SetLoadingProgress(System.Single)
extern "C"  void GUIManager_SetLoadingProgress_m806976055 (Il2CppObject * __this /* static, unused */, float ___progress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::Destroy()
extern "C"  void GUIManager_Destroy_m61979873 (GUIManager_t2551693622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::CloseAllUI(System.Boolean,System.Boolean)
extern "C"  void GUIManager_CloseAllUI_m4123011864 (Il2CppObject * __this /* static, unused */, bool ___useForce0, bool ___exceptLoading1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::ShowLoadingUI()
extern "C"  void GUIManager_ShowLoadingUI_m3575472960 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::HidePanel(System.String)
extern "C"  void GUIManager_HidePanel_m570007979 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::ShowPanel(System.String)
extern "C"  void GUIManager_ShowPanel_m572428538 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GUIManager::HasView(System.String)
extern "C"  bool GUIManager_HasView_m3466453864 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::AddJumpList()
extern "C"  void GUIManager_AddJumpList_m607503914 (GUIManager_t2551693622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::SetJumpText(System.String)
extern "C"  void GUIManager_SetJumpText_m1846872436 (Il2CppObject * __this /* static, unused */, String_t* ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::ShowPlayerInfo(System.Int32)
extern "C"  void GUIManager_ShowPlayerInfo_m2613728828 (Il2CppObject * __this /* static, unused */, int32_t ___dbid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::OnScaleFinished(System.Object[])
extern "C"  void GUIManager_OnScaleFinished_m3362622174 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::ChangeAtlas(System.String,System.String,UISprite)
extern "C"  void GUIManager_ChangeAtlas_m2432635191 (Il2CppObject * __this /* static, unused */, String_t* ___atlasName0, String_t* ___spriteName1, UISprite_t603616735 * ___sprite2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::LoadAtlasSucess(System.String,UISprite,UnityEngine.AssetBundle)
extern "C"  void GUIManager_LoadAtlasSucess_m1875092086 (Il2CppObject * __this /* static, unused */, String_t* ___spriteName0, UISprite_t603616735 * ___sprite1, AssetBundle_t2054978754 * ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::ShowPromptPanel(System.String,System.String,PromtType,Confirm,CreateTeam,CopyTeam)
extern "C"  void GUIManager_ShowPromptPanel_m1257591417 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___context1, int32_t ___type2, Confirm_t2568813388 * ___confirm3, CreateTeam_t1127243795 * ___createTeam4, CopyTeam_t2662696276 * ___copyTeam5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::ChangeLayer(UnityEngine.GameObject,System.String)
extern "C"  void GUIManager_ChangeLayer_m1054324586 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, String_t* ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> GUIManager::GetAllChildTransforms(UnityEngine.Transform)
extern "C"  List_1_t2644239190 * GUIManager_GetAllChildTransforms_m2488293418 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___trs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::SetLayer(UnityEngine.GameObject,System.Int32)
extern "C"  void GUIManager_SetLayer_m4156412379 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::ChangeShader(UnityEngine.GameObject,System.String[])
extern "C"  void GUIManager_ChangeShader_m2632271834 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___role0, StringU5BU5D_t1642385972* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::ChangeShader(UnityEngine.GameObject,UnityEngine.Shader,System.String,System.String)
extern "C"  void GUIManager_ChangeShader_m2828276186 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___role0, Shader_t2430389951 * ___shader1, String_t* ___strPrefix2, String_t* ___strPrefix23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::SetUIModelRenderQ(UnityEngine.GameObject,System.Int32)
extern "C"  void GUIManager_SetUIModelRenderQ_m2534398632 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___oModel0, int32_t ___renderQueue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::HideParticles(UnityEngine.GameObject)
extern "C"  void GUIManager_HideParticles_m3451729556 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___oModel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::AdjustParticlesToUI(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  void GUIManager_AdjustParticlesToUI_m3914611786 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___oModel0, float ___modelScale1, float ___uiScale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::SetObjRenderQ(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C"  void GUIManager_SetObjRenderQ_m1450124881 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___oModel0, int32_t ___iLayer1, int32_t ___iRenderQueue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::SetObjRenderQ(UnityEngine.GameObject,System.Int32)
extern "C"  void GUIManager_SetObjRenderQ_m2643746826 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___oModel0, int32_t ___iRenderQueue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::OpenPanel(NotificationID)
extern "C"  void GUIManager_OpenPanel_m1946516485 (Il2CppObject * __this /* static, unused */, int32_t ___notificationName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIManager::OnGUI()
extern "C"  void GUIManager_OnGUI_m2725035045 (GUIManager_t2551693622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
