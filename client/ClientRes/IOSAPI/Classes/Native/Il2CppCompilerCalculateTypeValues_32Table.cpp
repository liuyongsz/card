#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ResourceManager4136494783.h"
#include "AssemblyU2DCSharp_ResourceManager_AssetCallBack676699937.h"
#include "AssemblyU2DCSharp_ResourceManager_U3COnLoadComplet1454931185.h"
#include "AssemblyU2DCSharp_ResourceManager_U3CInitializeU3Ec691883704.h"
#include "AssemblyU2DCSharp_ResourceManager_U3CLoadAssetResA1516082233.h"
#include "AssemblyU2DCSharp_ResourceManager_U3CLoadNormalResA654137327.h"
#include "AssemblyU2DCSharp_ResourceManager_U3CLoadAtlasResA2510581670.h"
#include "AssemblyU2DCSharp_ResourceManager_U3CLoadNormalRes4142535569.h"
#include "AssemblyU2DCSharp_ResourceManager_U3CLoadSpriteAsy3747039954.h"
#include "AssemblyU2DCSharp_ResourceManager_U3CInstantiateGa1701312871.h"
#include "AssemblyU2DCSharp_ResourceManager_U3CInstantiateLoc557460931.h"
#include "AssemblyU2DCSharp_ResourceManager_U3CInstantiateGam538513457.h"
#include "AssemblyU2DCSharp_ResourceManager_U3CInstantiateLo1075056768.h"
#include "AssemblyU2DCSharp_ResourceManager_U3CInitializeLev3251739925.h"
#include "AssemblyU2DCSharp_ResourcePath2754581237.h"
#include "AssemblyU2DCSharp_PureMVC_Core_Controller3661849354.h"
#include "AssemblyU2DCSharp_PureMVC_Core_Model3879015327.h"
#include "AssemblyU2DCSharp_PureMVC_Core_View3978655013.h"
#include "AssemblyU2DCSharp_PureMVC_Patterns_MacroCommand2790984453.h"
#include "AssemblyU2DCSharp_PureMVC_Patterns_SimpleCommand3597481513.h"
#include "AssemblyU2DCSharp_PureMVC_Patterns_Facade1878618646.h"
#include "AssemblyU2DCSharp_PureMVC_Patterns_Mediator229886313.h"
#include "AssemblyU2DCSharp_PureMVC_Patterns_Notification3880793091.h"
#include "AssemblyU2DCSharp_PureMVC_Patterns_Notifier1290595654.h"
#include "AssemblyU2DCSharp_PureMVC_Patterns_Observer614534518.h"
#include "AssemblyU2DCSharp_ControllerCommand2420018929.h"
#include "AssemblyU2DCSharp_GameCommand2834858639.h"
#include "AssemblyU2DCSharp_ModelCommand1537218954.h"
#include "AssemblyU2DCSharp_SceneCommand2682035667.h"
#include "AssemblyU2DCSharp_StartCommand3061737089.h"
#include "AssemblyU2DCSharp_EScene3501443013.h"
#include "AssemblyU2DCSharp_ViewCommand562528698.h"
#include "AssemblyU2DCSharp_GameFacade4180906540.h"
#include "AssemblyU2DCSharp_FightProxy2028432302.h"
#include "AssemblyU2DCSharp_GameProxy1487112010.h"
#include "AssemblyU2DCSharp_HeroProxy4061818140.h"
#include "AssemblyU2DCSharp_LoginProxy1514699309.h"
#include "AssemblyU2DCSharp_LoginProxy_NetEventFunctionxxx790412843.h"
#include "AssemblyU2DCSharp_MainProxy167849073.h"
#include "AssemblyU2DCSharp_MainProxy_NetEventFunctionxxx2871192787.h"
#include "AssemblyU2DCSharp_PlayerProxy505696745.h"
#include "AssemblyU2DCSharp_ProxyID3273241327.h"
#include "AssemblyU2DCSharp_NotificationID248744986.h"
#include "AssemblyU2DCSharp_EUIDepth2873574782.h"
#include "AssemblyU2DCSharp_Main2809994845.h"
#include "AssemblyU2DCSharp_AnimationEventManager4155832427.h"
#include "AssemblyU2DCSharp_AnimationEventManager_U3CRemoveA3892162271.h"
#include "AssemblyU2DCSharp_LoadedAssetBundle2954462549.h"
#include "AssemblyU2DCSharp_AssetBundleManager624888341.h"
#include "AssemblyU2DCSharp_AMLoadOperation148391793.h"
#include "AssemblyU2DCSharp_AMLoadAssetOperation2496313085.h"
#include "AssemblyU2DCSharp_AssetBundleLoadAssetOperationSec4050203981.h"
#include "AssemblyU2DCSharp_AssetBundleLoadAssetOperationSim3391228910.h"
#include "AssemblyU2DCSharp_AssetBundleLoadLevelOperation2109326895.h"
#include "AssemblyU2DCSharp_ResourceUtil395224760.h"
#include "AssemblyU2DCSharp_AudioGroupTypes423657466.h"
#include "AssemblyU2DCSharp_AudioManager4222704959.h"
#include "AssemblyU2DCSharp_AudioObject2332520225.h"
#include "AssemblyU2DCSharp_AudioObject_AudioTarget2145010585.h"
#include "AssemblyU2DCSharp_AudioObject_AudioStates1584465622.h"
#include "AssemblyU2DCSharp_CameraManager2379859346.h"
#include "AssemblyU2DCSharp_CameraManager_U3CresetPositionU33363099999.h"
#include "AssemblyU2DCSharp_ConfigLoaderBase2682107120.h"
#include "AssemblyU2DCSharp_ConfigManager2239702727.h"
#include "AssemblyU2DCSharp_ConfigParseUtil2088233729.h"
#include "AssemblyU2DCSharp_EffectManager2743043152.h"
#include "AssemblyU2DCSharp_EffectObject1319139602.h"
#include "AssemblyU2DCSharp_EffectObject_EffectTarget2613181661.h"
#include "AssemblyU2DCSharp_EffectObject_EffectStates2799317824.h"
#include "AssemblyU2DCSharp_GUIManager2551693622.h"
#include "AssemblyU2DCSharp_GUIManager_U3CAddJumpListU3Ec__A4040984429.h"
#include "AssemblyU2DCSharp_GameEventManager1523476787.h"
#include "AssemblyU2DCSharp_GameEventManager_GameEvent1688318700.h"
#include "AssemblyU2DCSharp_GameEventTypes243168119.h"
#include "AssemblyU2DCSharp_GameManager2252321495.h"
#include "AssemblyU2DCSharp_GameManager_U3COnExtractResourceU490202145.h"
#include "AssemblyU2DCSharp_GameManager_U3COnUpdateResourceU1851015736.h"
#include "AssemblyU2DCSharp_GUIDrag405649553.h"
#include "AssemblyU2DCSharp_UIBase4194425779.h"
#include "AssemblyU2DCSharp_PanelManager618319151.h"
#include "AssemblyU2DCSharp_PanelManager_U3CLoadPanelAsyncU32094733267.h"
#include "AssemblyU2DCSharp_SkinManagerItem1216107303.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3200 = { sizeof (ResourceManager_t4136494783), -1, sizeof(ResourceManager_t4136494783_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3200[5] = 
{
	ResourceManager_t4136494783_StaticFields::get_offset_of_m_instance_2(),
	ResourceManager_t4136494783_StaticFields::get_offset_of_m_object_3(),
	ResourceManager_t4136494783::get_offset_of_displayProgress_4(),
	ResourceManager_t4136494783_StaticFields::get_offset_of_LoadingLevelName_5(),
	ResourceManager_t4136494783_StaticFields::get_offset_of_Scene_AsyncOperation_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3201 = { sizeof (AssetCallBack_t676699937), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3202 = { sizeof (U3COnLoadCompleteU3Ec__Iterator0_t1454931185), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3202[2] = 
{
	U3COnLoadCompleteU3Ec__Iterator0_t1454931185::get_offset_of_U24PC_0(),
	U3COnLoadCompleteU3Ec__Iterator0_t1454931185::get_offset_of_U24current_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3203 = { sizeof (U3CInitializeU3Ec__Iterator1_t691883704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3203[6] = 
{
	U3CInitializeU3Ec__Iterator1_t691883704::get_offset_of_U3CrequestU3E__0_0(),
	U3CInitializeU3Ec__Iterator1_t691883704::get_offset_of_Complete_1(),
	U3CInitializeU3Ec__Iterator1_t691883704::get_offset_of_U24PC_2(),
	U3CInitializeU3Ec__Iterator1_t691883704::get_offset_of_U24current_3(),
	U3CInitializeU3Ec__Iterator1_t691883704::get_offset_of_U3CU24U3EComplete_4(),
	U3CInitializeU3Ec__Iterator1_t691883704::get_offset_of_U3CU3Ef__this_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3204 = { sizeof (U3CLoadAssetResAsyncU3Ec__Iterator2_t1516082233), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3204[10] = 
{
	U3CLoadAssetResAsyncU3Ec__Iterator2_t1516082233::get_offset_of_name_0(),
	U3CLoadAssetResAsyncU3Ec__Iterator2_t1516082233::get_offset_of_t_1(),
	U3CLoadAssetResAsyncU3Ec__Iterator2_t1516082233::get_offset_of_U3CrequestU3E__0_2(),
	U3CLoadAssetResAsyncU3Ec__Iterator2_t1516082233::get_offset_of_completeCallback_3(),
	U3CLoadAssetResAsyncU3Ec__Iterator2_t1516082233::get_offset_of_U24PC_4(),
	U3CLoadAssetResAsyncU3Ec__Iterator2_t1516082233::get_offset_of_U24current_5(),
	U3CLoadAssetResAsyncU3Ec__Iterator2_t1516082233::get_offset_of_U3CU24U3Ename_6(),
	U3CLoadAssetResAsyncU3Ec__Iterator2_t1516082233::get_offset_of_U3CU24U3Et_7(),
	U3CLoadAssetResAsyncU3Ec__Iterator2_t1516082233::get_offset_of_U3CU24U3EcompleteCallback_8(),
	U3CLoadAssetResAsyncU3Ec__Iterator2_t1516082233::get_offset_of_U3CU3Ef__this_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3205 = { sizeof (U3CLoadNormalResAsyncU3Ec__Iterator3_t654137327), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3205[12] = 
{
	U3CLoadNormalResAsyncU3Ec__Iterator3_t654137327::get_offset_of_name_0(),
	U3CLoadNormalResAsyncU3Ec__Iterator3_t654137327::get_offset_of_t_1(),
	U3CLoadNormalResAsyncU3Ec__Iterator3_t654137327::get_offset_of_U3CrequestU3E__0_2(),
	U3CLoadNormalResAsyncU3Ec__Iterator3_t654137327::get_offset_of_onloaded_3(),
	U3CLoadNormalResAsyncU3Ec__Iterator3_t654137327::get_offset_of_errload_4(),
	U3CLoadNormalResAsyncU3Ec__Iterator3_t654137327::get_offset_of_U24PC_5(),
	U3CLoadNormalResAsyncU3Ec__Iterator3_t654137327::get_offset_of_U24current_6(),
	U3CLoadNormalResAsyncU3Ec__Iterator3_t654137327::get_offset_of_U3CU24U3Ename_7(),
	U3CLoadNormalResAsyncU3Ec__Iterator3_t654137327::get_offset_of_U3CU24U3Et_8(),
	U3CLoadNormalResAsyncU3Ec__Iterator3_t654137327::get_offset_of_U3CU24U3Eonloaded_9(),
	U3CLoadNormalResAsyncU3Ec__Iterator3_t654137327::get_offset_of_U3CU24U3Eerrload_10(),
	U3CLoadNormalResAsyncU3Ec__Iterator3_t654137327::get_offset_of_U3CU3Ef__this_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3206 = { sizeof (U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3206[16] = 
{
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_name_0(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_t_1(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_U3CrequestU3E__0_2(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_onloaded_3(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_spriteName_4(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_sprite_5(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_errload_6(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_U24PC_7(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_U24current_8(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_U3CU24U3Ename_9(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_U3CU24U3Et_10(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_U3CU24U3Eonloaded_11(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_U3CU24U3EspriteName_12(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_U3CU24U3Esprite_13(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_U3CU24U3Eerrload_14(),
	U3CLoadAtlasResAsyncU3Ec__Iterator4_t2510581670::get_offset_of_U3CU3Ef__this_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3207 = { sizeof (U3CLoadNormalResAsyncU3Ec__Iterator5_t4142535569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3207[12] = 
{
	U3CLoadNormalResAsyncU3Ec__Iterator5_t4142535569::get_offset_of_name_0(),
	U3CLoadNormalResAsyncU3Ec__Iterator5_t4142535569::get_offset_of_t_1(),
	U3CLoadNormalResAsyncU3Ec__Iterator5_t4142535569::get_offset_of_U3CrequestU3E__0_2(),
	U3CLoadNormalResAsyncU3Ec__Iterator5_t4142535569::get_offset_of_onloaded_3(),
	U3CLoadNormalResAsyncU3Ec__Iterator5_t4142535569::get_offset_of_errload_4(),
	U3CLoadNormalResAsyncU3Ec__Iterator5_t4142535569::get_offset_of_U24PC_5(),
	U3CLoadNormalResAsyncU3Ec__Iterator5_t4142535569::get_offset_of_U24current_6(),
	U3CLoadNormalResAsyncU3Ec__Iterator5_t4142535569::get_offset_of_U3CU24U3Ename_7(),
	U3CLoadNormalResAsyncU3Ec__Iterator5_t4142535569::get_offset_of_U3CU24U3Et_8(),
	U3CLoadNormalResAsyncU3Ec__Iterator5_t4142535569::get_offset_of_U3CU24U3Eonloaded_9(),
	U3CLoadNormalResAsyncU3Ec__Iterator5_t4142535569::get_offset_of_U3CU24U3Eerrload_10(),
	U3CLoadNormalResAsyncU3Ec__Iterator5_t4142535569::get_offset_of_U3CU3Ef__this_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3208 = { sizeof (U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3208[15] = 
{
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_U3CstartTimeU3E__0_0(),
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_assetBundleName_1(),
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_spritename_2(),
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_U3CrequestU3E__1_3(),
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_U3CsU3E__2_4(),
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_OnLoad_5(),
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_OnPackError_6(),
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_U3CelapsedTimeU3E__3_7(),
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_U24PC_8(),
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_U24current_9(),
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_U3CU24U3EassetBundleName_10(),
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_U3CU24U3Espritename_11(),
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_U3CU24U3EOnLoad_12(),
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_U3CU24U3EOnPackError_13(),
	U3CLoadSpriteAsyncU3Ec__Iterator6_t3747039954::get_offset_of_U3CU3Ef__this_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3209 = { sizeof (U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3209[16] = 
{
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_U3CstartTimeU3E__0_0(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_assetBundleName_1(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_assetName_2(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_U3CrequestU3E__1_3(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_U3CprefabU3E__2_4(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_U3CgoU3E__3_5(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_OnPackCompleted_6(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_OnPackError_7(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_U3CelapsedTimeU3E__4_8(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_U24PC_9(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_U24current_10(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_U3CU24U3EassetBundleName_11(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_U3CU24U3EassetName_12(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_U3CU24U3EOnPackCompleted_13(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_U3CU24U3EOnPackError_14(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator7_t1701312871::get_offset_of_U3CU3Ef__this_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3210 = { sizeof (U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3210[13] = 
{
	U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931::get_offset_of_U3CstartTimeU3E__0_0(),
	U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931::get_offset_of_path_1(),
	U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931::get_offset_of_U3CrequestU3E__1_2(),
	U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931::get_offset_of_U3CprefabU3E__2_3(),
	U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931::get_offset_of_OnPackCompleted_4(),
	U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931::get_offset_of_assetName_5(),
	U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931::get_offset_of_OnPackError_6(),
	U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931::get_offset_of_U24PC_7(),
	U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931::get_offset_of_U24current_8(),
	U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931::get_offset_of_U3CU24U3Epath_9(),
	U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931::get_offset_of_U3CU24U3EOnPackCompleted_10(),
	U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931::get_offset_of_U3CU24U3EassetName_11(),
	U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931::get_offset_of_U3CU24U3EOnPackError_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3211 = { sizeof (U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3211[18] = 
{
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_U3CstartTimeU3E__0_0(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_assetBundleName_1(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_assetName_2(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_U3CrequestU3E__1_3(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_U3CprefabU3E__2_4(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_U3CgoU3E__3_5(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_OnPackCompleted_6(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_data_7(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_OnPackError_8(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_U3CelapsedTimeU3E__4_9(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_U24PC_10(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_U24current_11(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_U3CU24U3EassetBundleName_12(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_U3CU24U3EassetName_13(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_U3CU24U3EOnPackCompleted_14(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_U3CU24U3Edata_15(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_U3CU24U3EOnPackError_16(),
	U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457::get_offset_of_U3CU3Ef__this_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3212 = { sizeof (U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3212[15] = 
{
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_U3CstartTimeU3E__0_0(),
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_path_1(),
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_U3CrequestU3E__1_2(),
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_U3CprefabU3E__2_3(),
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_OnPackCompleted_4(),
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_assetName_5(),
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_data_6(),
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_OnPackError_7(),
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_U24PC_8(),
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_U24current_9(),
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_U3CU24U3Epath_10(),
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_U3CU24U3EOnPackCompleted_11(),
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_U3CU24U3EassetName_12(),
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_U3CU24U3Edata_13(),
	U3CInstantiateLocalGameObjectU3Ec__IteratorA_t1075056768::get_offset_of_U3CU24U3EOnPackError_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3213 = { sizeof (U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3213[18] = 
{
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_U3CstartTimeU3E__0_0(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_levelName_1(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_sceneAssetBundle_2(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_isAdditive_3(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_U3CrequestU3E__1_4(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_OnSceneLoadError_5(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_OnSceneLoadCompleted_6(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_obj_7(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_U3CelapsedTimeU3E__2_8(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_U24PC_9(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_U24current_10(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_U3CU24U3ElevelName_11(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_U3CU24U3EsceneAssetBundle_12(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_U3CU24U3EisAdditive_13(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_U3CU24U3EOnSceneLoadError_14(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_U3CU24U3EOnSceneLoadCompleted_15(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_U3CU24U3Eobj_16(),
	U3CInitializeLevelAsyncU3Ec__IteratorB_t3251739925::get_offset_of_U3CU3Ef__this_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3214 = { sizeof (ResourcePath_t2754581237), -1, sizeof(ResourcePath_t2754581237_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3214[4] = 
{
	ResourcePath_t2754581237_StaticFields::get_offset_of_customParentPath_0(),
	ResourcePath_t2754581237_StaticFields::get_offset_of_configPath_1(),
	ResourcePath_t2754581237_StaticFields::get_offset_of_imgPath_2(),
	ResourcePath_t2754581237_StaticFields::get_offset_of_baseUrl_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3215 = { sizeof (Controller_t3661849354), -1, sizeof(Controller_t3661849354_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3215[5] = 
{
	Controller_t3661849354::get_offset_of_m_view_0(),
	Controller_t3661849354::get_offset_of_m_commandMap_1(),
	Controller_t3661849354_StaticFields::get_offset_of_m_instance_2(),
	Controller_t3661849354::get_offset_of_m_syncRoot_3(),
	Controller_t3661849354_StaticFields::get_offset_of_m_staticSyncRoot_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3216 = { sizeof (Model_t3879015327), -1, sizeof(Model_t3879015327_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3216[4] = 
{
	Model_t3879015327::get_offset_of_m_proxyMap_0(),
	Model_t3879015327_StaticFields::get_offset_of_m_instance_1(),
	Model_t3879015327::get_offset_of_m_syncRoot_2(),
	Model_t3879015327_StaticFields::get_offset_of_m_staticSyncRoot_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3217 = { sizeof (View_t3978655013), -1, sizeof(View_t3978655013_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3217[5] = 
{
	View_t3978655013::get_offset_of_m_mediatorMap_0(),
	View_t3978655013::get_offset_of_m_observerMap_1(),
	View_t3978655013_StaticFields::get_offset_of_m_instance_2(),
	View_t3978655013::get_offset_of_m_syncRoot_3(),
	View_t3978655013_StaticFields::get_offset_of_m_staticSyncRoot_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3218 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3219 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3220 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3221 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3222 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3223 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3224 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3225 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3226 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3227 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3228 = { sizeof (MacroCommand_t2790984453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3228[1] = 
{
	MacroCommand_t2790984453::get_offset_of_m_subCommands_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3229 = { sizeof (SimpleCommand_t3597481513), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3230 = { sizeof (Facade_t1878618646), -1, sizeof(Facade_t1878618646_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3230[5] = 
{
	Facade_t1878618646::get_offset_of_m_controller_0(),
	Facade_t1878618646::get_offset_of_m_model_1(),
	Facade_t1878618646::get_offset_of_m_view_2(),
	Facade_t1878618646_StaticFields::get_offset_of_m_instance_3(),
	Facade_t1878618646_StaticFields::get_offset_of_m_staticSyncRoot_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3231 = { sizeof (Mediator_t229886313), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3231[3] = 
{
	0,
	Mediator_t229886313::get_offset_of_m_mediatorName_2(),
	Mediator_t229886313::get_offset_of_m_viewComponent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3232 = { sizeof (Notification_t3880793091), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3232[3] = 
{
	Notification_t3880793091::get_offset_of_m_name_0(),
	Notification_t3880793091::get_offset_of_m_type_1(),
	Notification_t3880793091::get_offset_of_m_body_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3233 = { sizeof (Notifier_t1290595654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3233[1] = 
{
	Notifier_t1290595654::get_offset_of_m_facade_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3234 = { sizeof (Observer_t614534518), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3234[3] = 
{
	Observer_t614534518::get_offset_of_m_notifyMethod_0(),
	Observer_t614534518::get_offset_of_m_notifyContext_1(),
	Observer_t614534518::get_offset_of_m_syncRoot_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3235 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3235[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3236 = { sizeof (ControllerCommand_t2420018929), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3237 = { sizeof (GameCommand_t2834858639), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3238 = { sizeof (ModelCommand_t1537218954), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3239 = { sizeof (SceneCommand_t2682035667), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3239[1] = 
{
	SceneCommand_t2682035667::get_offset_of_isLoadingScene_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3240 = { sizeof (StartCommand_t3061737089), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3241 = { sizeof (EScene_t3501443013)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3241[10] = 
{
	EScene_t3501443013::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3242 = { sizeof (ViewCommand_t562528698), -1, sizeof(ViewCommand_t562528698_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3242[1] = 
{
	ViewCommand_t562528698_StaticFields::get_offset_of_m_int_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3243 = { sizeof (GameFacade_t4180906540), -1, sizeof(GameFacade_t4180906540_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3243[1] = 
{
	GameFacade_t4180906540_StaticFields::get_offset_of_m_ins_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3244 = { sizeof (FightProxy_t2028432302), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3244[1] = 
{
	FightProxy_t2028432302::get_offset_of_RoomInfo_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3245 = { sizeof (GameProxy_t1487112010), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3245[6] = 
{
	GameProxy_t1487112010::get_offset_of_m_IsStart_4(),
	GameProxy_t1487112010::get_offset_of_m_currSceneType_5(),
	GameProxy_t1487112010::get_offset_of_m_loadingscene_6(),
	GameProxy_t1487112010::get_offset_of__compelteConfig_7(),
	GameProxy_t1487112010::get_offset_of_m_currSceneName_8(),
	GameProxy_t1487112010::get_offset_of_InitTextManagerComplete_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3246 = { sizeof (HeroProxy_t4061818140), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3246[1] = 
{
	HeroProxy_t4061818140::get_offset_of_cardListMsg_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3247 = { sizeof (LoginProxy_t1514699309), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3247[3] = 
{
	LoginProxy_t1514699309::get_offset_of_m_account_4(),
	LoginProxy_t1514699309::get_offset_of_m_passwd_5(),
	LoginProxy_t1514699309::get_offset_of_m_avatarList_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3248 = { sizeof (NetEventFunctionxxx_t790412843), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3249 = { sizeof (MainProxy_t167849073), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3249[1] = 
{
	MainProxy_t167849073::get_offset_of_m_avatarList_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3250 = { sizeof (NetEventFunctionxxx_t2871192787), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3251 = { sizeof (PlayerProxy_t505696745), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3251[1] = 
{
	PlayerProxy_t505696745::get_offset_of_Info_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3252 = { sizeof (ProxyID_t3273241327)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3252[8] = 
{
	ProxyID_t3273241327::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3253 = { sizeof (NotificationID_t248744986)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3253[55] = 
{
	NotificationID_t248744986::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3254 = { sizeof (EUIDepth_t2873574782)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3254[3] = 
{
	EUIDepth_t2873574782::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3255 = { sizeof (Main_t2809994845), -1, sizeof(Main_t2809994845_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3255[18] = 
{
	Main_t2809994845::get_offset_of_GameDebug_2(),
	Main_t2809994845::get_offset_of_UsePassGroundBall_3(),
	Main_t2809994845_StaticFields::get_offset_of_Ins_4(),
	Main_t2809994845_StaticFields::get_offset_of_m_defaultsprite_5(),
	Main_t2809994845_StaticFields::get_offset_of_m_defaultTexture_6(),
	Main_t2809994845::get_offset_of_loading_7(),
	Main_t2809994845_StaticFields::get_offset_of_SoketCallBack_8(),
	Main_t2809994845::get_offset_of_Camera3D_9(),
	Main_t2809994845_StaticFields::get_offset_of_CameraUI_10(),
	Main_t2809994845_StaticFields::get_offset_of_CameraHPUI_11(),
	Main_t2809994845::get_offset_of_myName_12(),
	Main_t2809994845_StaticFields::get_offset_of_m_DestoryNode_13(),
	Main_t2809994845_StaticFields::get_offset_of_m_UIRoot_14(),
	Main_t2809994845_StaticFields::get_offset_of_m_UIRoot3D_15(),
	Main_t2809994845_StaticFields::get_offset_of_heartTime_16(),
	Main_t2809994845_StaticFields::get_offset_of_isHeart_17(),
	Main_t2809994845_StaticFields::get_offset_of_m_netHelp_18(),
	Main_t2809994845_StaticFields::get_offset_of_WarningString_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3256 = { sizeof (AnimationEventManager_t4155832427), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3256[2] = 
{
	AnimationEventManager_t4155832427::get_offset_of_mAllAnimationEvent_0(),
	AnimationEventManager_t4155832427::get_offset_of_m_dstClip_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3257 = { sizeof (U3CRemoveAnimationEventByTimeU3Ec__AnonStorey19_t3892162271), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3257[1] = 
{
	U3CRemoveAnimationEventByTimeU3Ec__AnonStorey19_t3892162271::get_offset_of_time_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3258 = { sizeof (LoadedAssetBundle_t2954462549), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3258[2] = 
{
	LoadedAssetBundle_t2954462549::get_offset_of_assetBundle_0(),
	LoadedAssetBundle_t2954462549::get_offset_of_referencedCount_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3259 = { sizeof (AssetBundleManager_t624888341), -1, sizeof(AssetBundleManager_t624888341_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3259[9] = 
{
	AssetBundleManager_t624888341_StaticFields::get_offset_of_SimulateAssetBundleInEditor_4(),
	AssetBundleManager_t624888341_StaticFields::get_offset_of_m_loadedAssetBundles_5(),
	AssetBundleManager_t624888341_StaticFields::get_offset_of_m_downloadingErrors_6(),
	AssetBundleManager_t624888341_StaticFields::get_offset_of_m_downloadingWWWs_7(),
	AssetBundleManager_t624888341_StaticFields::get_offset_of_m_baseDownloadingURL_8(),
	AssetBundleManager_t624888341_StaticFields::get_offset_of_m_baseLocalStorage_9(),
	AssetBundleManager_t624888341_StaticFields::get_offset_of_m_keysToRemove_10(),
	AssetBundleManager_t624888341_StaticFields::get_offset_of_m_inProgressOperations_11(),
	AssetBundleManager_t624888341_StaticFields::get_offset_of_m_dependencies_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3260 = { sizeof (AMLoadOperation_t148391793), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3261 = { sizeof (AMLoadAssetOperation_t2496313085), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3262 = { sizeof (AssetBundleLoadAssetOperationSecond_t4050203981), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3262[7] = 
{
	AssetBundleLoadAssetOperationSecond_t4050203981::get_offset_of_assetBundleName_0(),
	AssetBundleLoadAssetOperationSecond_t4050203981::get_offset_of_assetName_1(),
	AssetBundleLoadAssetOperationSecond_t4050203981::get_offset_of_downloadingError_2(),
	AssetBundleLoadAssetOperationSecond_t4050203981::get_offset_of_type_3(),
	AssetBundleLoadAssetOperationSecond_t4050203981::get_offset_of_request_4(),
	AssetBundleLoadAssetOperationSecond_t4050203981::get_offset_of_cancelled_5(),
	AssetBundleLoadAssetOperationSecond_t4050203981::get_offset_of_unloaded_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3263 = { sizeof (AssetBundleLoadAssetOperationSimulation_t3391228910), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3263[1] = 
{
	AssetBundleLoadAssetOperationSimulation_t3391228910::get_offset_of_simulatedObject_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3264 = { sizeof (AssetBundleLoadLevelOperation_t2109326895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3264[6] = 
{
	AssetBundleLoadLevelOperation_t2109326895::get_offset_of_assetBundleName_0(),
	AssetBundleLoadLevelOperation_t2109326895::get_offset_of_levelName_1(),
	AssetBundleLoadLevelOperation_t2109326895::get_offset_of_isAdditive_2(),
	AssetBundleLoadLevelOperation_t2109326895::get_offset_of_downloadError_3(),
	AssetBundleLoadLevelOperation_t2109326895::get_offset_of_request_4(),
	AssetBundleLoadLevelOperation_t2109326895::get_offset_of_unloaded_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3265 = { sizeof (ResourceUtil_t395224760), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3265[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3266 = { sizeof (AudioGroupTypes_t423657466)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3266[6] = 
{
	AudioGroupTypes_t423657466::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3267 = { sizeof (AudioManager_t4222704959), -1, sizeof(AudioManager_t4222704959_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3267[7] = 
{
	AudioManager_t4222704959_StaticFields::get_offset_of_AUDIO_POOL_SIZE_4(),
	AudioManager_t4222704959_StaticFields::get_offset_of_listenerTarget_5(),
	AudioManager_t4222704959_StaticFields::get_offset_of_listenerTrans_6(),
	AudioManager_t4222704959_StaticFields::get_offset_of_pool_7(),
	AudioManager_t4222704959_StaticFields::get_offset_of_activeAudio_8(),
	AudioManager_t4222704959_StaticFields::get_offset_of_defaultMixer_9(),
	AudioManager_t4222704959_StaticFields::get_offset_of_audioMixerGroups_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3268 = { sizeof (AudioObject_t2332520225), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3268[11] = 
{
	AudioObject_t2332520225::get_offset_of_config_0(),
	AudioObject_t2332520225::get_offset_of_gameObject_1(),
	AudioObject_t2332520225::get_offset_of_transform_2(),
	AudioObject_t2332520225::get_offset_of_audioSource_3(),
	AudioObject_t2332520225::get_offset_of_audioClip_4(),
	AudioObject_t2332520225::get_offset_of_target_5(),
	AudioObject_t2332520225::get_offset_of_asyncLoadOp_6(),
	AudioObject_t2332520225::get_offset_of_assetBundlePath_7(),
	AudioObject_t2332520225::get_offset_of_stateElapsed_8(),
	AudioObject_t2332520225::get_offset_of_state_9(),
	AudioObject_t2332520225::get_offset_of_U3CAudioIDU3Ek__BackingField_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3269 = { sizeof (AudioTarget_t2145010585), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3269[3] = 
{
	AudioTarget_t2145010585::get_offset_of_hasTransform_0(),
	AudioTarget_t2145010585::get_offset_of_target_1(),
	AudioTarget_t2145010585::get_offset_of_targetPos_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3270 = { sizeof (AudioStates_t1584465622)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3270[6] = 
{
	AudioStates_t1584465622::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3271 = { sizeof (CameraManager_t2379859346), -1, sizeof(CameraManager_t2379859346_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3271[22] = 
{
	CameraManager_t2379859346_StaticFields::get_offset_of_share_2(),
	CameraManager_t2379859346_StaticFields::get_offset_of_EventReset_3(),
	CameraManager_t2379859346_StaticFields::get_offset_of_EventBeginIntroMovement_4(),
	CameraManager_t2379859346_StaticFields::get_offset_of_EventEndIntroMovement_5(),
	CameraManager_t2379859346::get_offset_of__cameraMain_6(),
	CameraManager_t2379859346::get_offset_of__cameraBack_7(),
	CameraManager_t2379859346::get_offset_of__camerasMain_8(),
	CameraManager_t2379859346::get_offset_of__FOVportrait_9(),
	CameraManager_t2379859346::get_offset_of__FOVlandscape_10(),
	CameraManager_t2379859346::get_offset_of_isPortrait_11(),
	CameraManager_t2379859346::get_offset_of__cameraMainComponent_12(),
	CameraManager_t2379859346::get_offset_of__colliderFullScreen_13(),
	CameraManager_t2379859346::get_offset_of_yBackCamera_14(),
	CameraManager_t2379859346::get_offset_of_cameraMainDistanceToBall_15(),
	CameraManager_t2379859346::get_offset_of_cameraMainY_16(),
	CameraManager_t2379859346::get_offset_of__isCameraMoving_17(),
	CameraManager_t2379859346::get_offset_of_testXZ_18(),
	CameraManager_t2379859346::get_offset_of_testY_19(),
	CameraManager_t2379859346::get_offset_of__currentFOV_20(),
	CameraManager_t2379859346_StaticFields::get_offset_of_U3CU3Ef__amU24cache13_21(),
	CameraManager_t2379859346_StaticFields::get_offset_of_U3CU3Ef__amU24cache14_22(),
	CameraManager_t2379859346_StaticFields::get_offset_of_U3CU3Ef__amU24cache15_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3272 = { sizeof (U3CresetPositionU3Ec__IteratorC_t3363099999), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3272[2] = 
{
	U3CresetPositionU3Ec__IteratorC_t3363099999::get_offset_of_U24PC_0(),
	U3CresetPositionU3Ec__IteratorC_t3363099999::get_offset_of_U24current_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3273 = { sizeof (ConfigLoaderBase_t2682107120), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3273[1] = 
{
	ConfigLoaderBase_t2682107120::get_offset_of_m_isLoaded_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3274 = { sizeof (ConfigManager_t2239702727), -1, sizeof(ConfigManager_t2239702727_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3274[2] = 
{
	ConfigManager_t2239702727_StaticFields::get_offset_of_m_configLoaders_4(),
	ConfigManager_t2239702727::get_offset_of_CfgBundle_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3275 = { sizeof (ConfigParseUtil_t2088233729), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3275[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3276 = { sizeof (EffectManager_t2743043152), -1, sizeof(EffectManager_t2743043152_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3276[5] = 
{
	EffectManager_t2743043152_StaticFields::get_offset_of_EFFECT_POOL_SIZE_4(),
	EffectManager_t2743043152_StaticFields::get_offset_of_pool_5(),
	EffectManager_t2743043152_StaticFields::get_offset_of_activeEffects_6(),
	EffectManager_t2743043152_StaticFields::get_offset_of_pending_7(),
	EffectManager_t2743043152_StaticFields::get_offset_of_updating_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3277 = { sizeof (EffectObject_t1319139602), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3277[12] = 
{
	EffectObject_t1319139602::get_offset_of_config_0(),
	EffectObject_t1319139602::get_offset_of_gameObject_1(),
	EffectObject_t1319139602::get_offset_of_transform_2(),
	EffectObject_t1319139602::get_offset_of_modelGo_3(),
	EffectObject_t1319139602::get_offset_of_modelTrans_4(),
	EffectObject_t1319139602::get_offset_of_asyncLoadOp_5(),
	EffectObject_t1319139602::get_offset_of_assetBundlePath_6(),
	EffectObject_t1319139602::get_offset_of_target_7(),
	EffectObject_t1319139602::get_offset_of_stateElapsed_8(),
	EffectObject_t1319139602::get_offset_of_state_9(),
	EffectObject_t1319139602::get_offset_of_audioObject_10(),
	EffectObject_t1319139602::get_offset_of_U3CEffectIDU3Ek__BackingField_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3278 = { sizeof (EffectTarget_t2613181661)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3278[5] = 
{
	EffectTarget_t2613181661::get_offset_of_hasTransform_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EffectTarget_t2613181661::get_offset_of_root_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EffectTarget_t2613181661::get_offset_of_bpTrans_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EffectTarget_t2613181661::get_offset_of_position_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EffectTarget_t2613181661::get_offset_of_rotation_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3279 = { sizeof (EffectStates_t2799317824)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3279[6] = 
{
	EffectStates_t2799317824::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3280 = { sizeof (GUIManager_t2551693622), -1, sizeof(GUIManager_t2551693622_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3280[10] = 
{
	GUIManager_t2551693622_StaticFields::get_offset_of_CurrentNetState_2(),
	GUIManager_t2551693622_StaticFields::get_offset_of_index_3(),
	GUIManager_t2551693622_StaticFields::get_offset_of_uiLayer1_4(),
	GUIManager_t2551693622_StaticFields::get_offset_of_pos_5(),
	GUIManager_t2551693622_StaticFields::get_offset_of_jumpList_6(),
	GUIManager_t2551693622_StaticFields::get_offset_of_m_panelList_7(),
	GUIManager_t2551693622_StaticFields::get_offset_of_m_panelExitList_8(),
	GUIManager_t2551693622_StaticFields::get_offset_of_jumpContentList_9(),
	GUIManager_t2551693622_StaticFields::get_offset_of_AlertBrokenNetWork_10(),
	GUIManager_t2551693622_StaticFields::get_offset_of_LoadingScenePer_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3281 = { sizeof (U3CAddJumpListU3Ec__AnonStorey1A_t4040984429), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3281[1] = 
{
	U3CAddJumpListU3Ec__AnonStorey1A_t4040984429::get_offset_of_content_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3282 = { sizeof (GameEventManager_t1523476787), -1, sizeof(GameEventManager_t1523476787_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3282[7] = 
{
	GameEventManager_t1523476787_StaticFields::get_offset_of_eventMap_4(),
	GameEventManager_t1523476787_StaticFields::get_offset_of_eventQueue_5(),
	GameEventManager_t1523476787_StaticFields::get_offset_of_eventBackQueue_6(),
	GameEventManager_t1523476787_StaticFields::get_offset_of_eventPool_7(),
	GameEventManager_t1523476787_StaticFields::get_offset_of_eventLock_8(),
	GameEventManager_t1523476787_StaticFields::get_offset_of_EnableEventFiring_9(),
	GameEventManager_t1523476787_StaticFields::get_offset_of_mainThreadID_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3283 = { sizeof (GameEvent_t1688318700), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3283[2] = 
{
	GameEvent_t1688318700::get_offset_of_eventType_0(),
	GameEvent_t1688318700::get_offset_of_args_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3284 = { sizeof (GameEventTypes_t243168119)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3284[5] = 
{
	GameEventTypes_t243168119::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3285 = { sizeof (GameManager_t2252321495), -1, sizeof(GameManager_t2252321495_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3285[11] = 
{
	GameManager_t2252321495::get_offset_of_CurrentScene_2(),
	GameManager_t2252321495::get_offset_of_PlayerRunCure_3(),
	GameManager_t2252321495::get_offset_of_downloadFiles_4(),
	GameManager_t2252321495::get_offset_of_TotalUpdateLength_5(),
	GameManager_t2252321495_StaticFields::get_offset_of_Instance_6(),
	GameManager_t2252321495::get_offset_of_m_openLoginUI_7(),
	GameManager_t2252321495::get_offset_of_m_loadingObj_8(),
	GameManager_t2252321495::get_offset_of_ObjDic_9(),
	GameManager_t2252321495::get_offset_of_CheckLoaderInitedComplete_10(),
	GameManager_t2252321495::get_offset_of_loadingstr_11(),
	GameManager_t2252321495_StaticFields::get_offset_of_m_openPVEUI_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3286 = { sizeof (U3COnExtractResourceU3Ec__IteratorD_t490202145), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3286[16] = 
{
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U3CdataPathU3E__0_0(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U3CresPathU3E__1_1(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U3CinfileU3E__2_2(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U3CoutfileU3E__3_3(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U3CmessageU3E__4_4(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U3CwwwU3E__5_5(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U3CfilesU3E__6_6(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U3CU24s_48U3E__7_7(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U3CU24s_49U3E__8_8(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U3CfileU3E__9_9(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U3CfsU3E__10_10(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U3CdirU3E__11_11(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U3CwwwU3E__12_12(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U24PC_13(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U24current_14(),
	U3COnExtractResourceU3Ec__IteratorD_t490202145::get_offset_of_U3CU3Ef__this_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3287 = { sizeof (U3COnUpdateResourceU3Ec__IteratorE_t1851015736), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3287[30] = 
{
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CdataPathU3E__0_0(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CurlU3E__1_1(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CmessageU3E__2_2(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CrandomU3E__3_3(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3ClistUrlU3E__4_4(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CwwwU3E__5_5(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CfilesTextU3E__6_6(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CfilesU3E__7_7(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CloaderFilesU3E__8_8(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CloaderLocalFilesU3E__9_9(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CiU3E__10_10(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CkeyValueU3E__11_11(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CfU3E__12_12(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3ClocalfileU3E__13_13(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CpathU3E__14_14(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CfileUrlU3E__15_15(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CcanUpdateU3E__16_16(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CremoteMd5U3E__17_17(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3ClocalMd5U3E__18_18(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CcntU3E__19_19(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CiU3E__20_20(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CfileUrlU3E__21_21(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3ClocalfileU3E__22_22(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CcurlU3E__23_23(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CindexU3E__24_24(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_Complete_25(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U24PC_26(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U24current_27(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CU24U3EComplete_28(),
	U3COnUpdateResourceU3Ec__IteratorE_t1851015736::get_offset_of_U3CU3Ef__this_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3288 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3289 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3289[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3290 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3291 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3291[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3292 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3292[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3293 = { sizeof (GUIDrag_t405649553), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3293[3] = 
{
	GUIDrag_t405649553::get_offset_of_Target_2(),
	GUIDrag_t405649553::get_offset_of__mTransform_3(),
	GUIDrag_t405649553::get_offset_of__localPosition_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3294 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3295 = { sizeof (UIBase_t4194425779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3295[6] = 
{
	UIBase_t4194425779::get_offset_of_ismaxDepth_2(),
	UIBase_t4194425779::get_offset_of_m_data_3(),
	UIBase_t4194425779::get_offset_of_m_luacode_4(),
	UIBase_t4194425779::get_offset_of_m_handler_5(),
	UIBase_t4194425779::get_offset_of_m_nocshape_6(),
	UIBase_t4194425779::get_offset_of_m_setDepth_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3296 = { sizeof (PanelManager_t618319151), -1, sizeof(PanelManager_t618319151_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3296[4] = 
{
	PanelManager_t618319151_StaticFields::get_offset_of_m_panels_4(),
	PanelManager_t618319151_StaticFields::get_offset_of_m_assetOps_5(),
	PanelManager_t618319151_StaticFields::get_offset_of_m_maxDepth_6(),
	PanelManager_t618319151_StaticFields::get_offset_of_parent_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3297 = { sizeof (U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3297[14] = 
{
	U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267::get_offset_of_uiName_0(),
	U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267::get_offset_of_U3CuipathU3E__0_1(),
	U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267::get_offset_of_U3CrequestU3E__1_2(),
	U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267::get_offset_of_U3CprefabU3E__2_3(),
	U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267::get_offset_of_U3CgoU3E__3_4(),
	U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267::get_offset_of_ismaxDepth_5(),
	U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267::get_offset_of_handler_6(),
	U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267::get_offset_of_args_7(),
	U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267::get_offset_of_U24PC_8(),
	U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267::get_offset_of_U24current_9(),
	U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267::get_offset_of_U3CU24U3EuiName_10(),
	U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267::get_offset_of_U3CU24U3EismaxDepth_11(),
	U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267::get_offset_of_U3CU24U3Ehandler_12(),
	U3CLoadPanelAsyncU3Ec__IteratorF_t2094733267::get_offset_of_U3CU24U3Eargs_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3298 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3298[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3299 = { sizeof (SkinManagerItem_t1216107303), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3299[5] = 
{
	SkinManagerItem_t1216107303::get_offset_of_owner_0(),
	SkinManagerItem_t1216107303::get_offset_of_skin_1(),
	SkinManagerItem_t1216107303::get_offset_of_cloth_2(),
	SkinManagerItem_t1216107303::get_offset_of_hair_3(),
	SkinManagerItem_t1216107303::get_offset_of_loaderItem_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
