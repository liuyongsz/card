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
#include "AssemblyU2DCSharp_UICamera_OnCustomInput3556372712.h"
#include "AssemblyU2DCSharp_UICamera_OnNotifyUIEvent3025032372.h"
#include "AssemblyU2DCSharp_UICamera_OnForceTouchCallbackFro3151672570.h"
#include "AssemblyU2DCSharp_UICamera_U3CChangeSelectionU3Ec__I17492533.h"
#include "AssemblyU2DCSharp_UIFont389944949.h"
#include "AssemblyU2DCSharp_UIInput860674234.h"
#include "AssemblyU2DCSharp_UIInput_InputType1695544313.h"
#include "AssemblyU2DCSharp_UIInput_Validation3865409168.h"
#include "AssemblyU2DCSharp_UIInput_KeyboardType865779294.h"
#include "AssemblyU2DCSharp_UIInput_OnReturnKey1716013855.h"
#include "AssemblyU2DCSharp_UIInput_OnValidate2431313412.h"
#include "AssemblyU2DCSharp_UIInputOnGUI4090193630.h"
#include "AssemblyU2DCSharp_UILabel1795115428.h"
#include "AssemblyU2DCSharp_UILabel_Effect541741196.h"
#include "AssemblyU2DCSharp_UILabel_Overflow2317266067.h"
#include "AssemblyU2DCSharp_UILabel_Crispness4281041871.h"
#include "AssemblyU2DCSharp_UILabel_CallLoadAsset879644691.h"
#include "AssemblyU2DCSharp_UILabel_OnQueryString1562153177.h"
#include "AssemblyU2DCSharp_UILocalize3754440953.h"
#include "AssemblyU2DCSharp_UIOrthoCamera1890393437.h"
#include "AssemblyU2DCSharp_UIPanel1795085332.h"
#include "AssemblyU2DCSharp_UIPanel_DebugInfo1876253092.h"
#include "AssemblyU2DCSharp_UIPanel_RenderQueue1879567704.h"
#include "AssemblyU2DCSharp_UIPanel_OnGeometryUpdated754882645.h"
#include "AssemblyU2DCSharp_UIPanel_OnClippingMoved4045505957.h"
#include "AssemblyU2DCSharp_UIRoot389944298.h"
#include "AssemblyU2DCSharp_UIRoot_Scaling2807791908.h"
#include "AssemblyU2DCSharp_UISprite603616735.h"
#include "AssemblyU2DCSharp_UISprite_Type2972059396.h"
#include "AssemblyU2DCSharp_UISprite_FillDirection2438394762.h"
#include "AssemblyU2DCSharp_UISprite_AdvancedType3338161062.h"
#include "AssemblyU2DCSharp_UISprite_Flip250082235.h"
#include "AssemblyU2DCSharp_UISprite_CustomType1859136379.h"
#include "AssemblyU2DCSharp_UISprite_CallLoadAsset3643317544.h"
#include "AssemblyU2DCSharp_UISpriteAnimation97731357.h"
#include "AssemblyU2DCSharp_UISpriteData2862501359.h"
#include "AssemblyU2DCSharp_UIStretch4076885229.h"
#include "AssemblyU2DCSharp_UIStretch_Style1693551353.h"
#include "AssemblyU2DCSharp_UITextList652111117.h"
#include "AssemblyU2DCSharp_UITextList_Style3198392425.h"
#include "AssemblyU2DCSharp_UITextList_Paragraph2587095060.h"
#include "AssemblyU2DCSharp_UITexture2537039969.h"
#include "AssemblyU2DCSharp_UITooltip1873874935.h"
#include "AssemblyU2DCSharp_UIViewport1541362616.h"
#include "AssemblyU2DCSharp_ConvertEndian2275242656.h"
#include "AssemblyU2DCSharp_ErrorMsg1427725175.h"
#include "AssemblyU2DCSharp_NetData1634960601.h"
#include "AssemblyU2DCSharp_NSocket3145259637.h"
#include "AssemblyU2DCSharp_NSocket_EStatus2063541295.h"
#include "AssemblyU2DCSharp_NetParam4259758804.h"
#include "AssemblyU2DCSharp_NetDataMgr3952396205.h"
#include "AssemblyU2DCSharp_Assets_XGame_NetWork_NetWorkSyst2057804271.h"
#include "AssemblyU2DCSharp_Assets_XGame_NetWork_ProtoNetSer1971992873.h"
#include "AssemblyU2DCSharp_NetProtocal_CardListMsg1254004863.h"
#include "AssemblyU2DCSharp_NetProtocal_CardTeamInfo2180094437.h"
#include "AssemblyU2DCSharp_NetProtocal_HeroListMsg3128201993.h"
#include "AssemblyU2DCSharp_NetProtocal_HeroInfo3657272016.h"
#include "AssemblyU2DCSharp_NetProtocal_ChangeTeamHeroNameMsg904732171.h"
#include "AssemblyU2DCSharp_NetProtocal_HeroOnFightMsg3899865342.h"
#include "AssemblyU2DCSharp_NetProtocal_CreateCardTeamMsg2894824390.h"
#include "AssemblyU2DCSharp_NetProtocal_ArcaneMsg1586538171.h"
#include "AssemblyU2DCSharp_NetProtocal_CardMsg1767916419.h"
#include "AssemblyU2DCSharp_NetProtocal_CardInfoListMsg972027215.h"
#include "AssemblyU2DCSharp_NetProtocal_CardDataMsg3125953747.h"
#include "AssemblyU2DCSharp_NetProtocal_DeleteSuitCardMsg2395483925.h"
#include "AssemblyU2DCSharp_NetProtocal_TeamListMsg435340988.h"
#include "AssemblyU2DCSharp_NetProtocal_SelectTeamMsg2592243822.h"
#include "AssemblyU2DCSharp_NetProtocal_HeroInfoMsg729301653.h"
#include "AssemblyU2DCSharp_NetProtocal_HeroInfoListMsg4090533633.h"
#include "AssemblyU2DCSharp_NetProtocal_LoginMsg2256327720.h"
#include "AssemblyU2DCSharp_NetProtocal_PlayerCreateMsg2435875764.h"
#include "AssemblyU2DCSharp_NetProtocal_PlayerInfoMsg3752910050.h"
#include "AssemblyU2DCSharp_NetProtocal_ServerResultMsg3963041931.h"
#include "AssemblyU2DCSharp_NetProtocal_ParamIntMsg2467478971.h"
#include "AssemblyU2DCSharp_NetProtocal_ParamStrMsg811852625.h"
#include "AssemblyU2DCSharp_NetProtocal_ServerResultFlag2413212214.h"
#include "AssemblyU2DCSharp_NetProtocal_MatchFightMsg1530053180.h"
#include "AssemblyU2DCSharp_NetProtocal_RoomInfoMsg1078239938.h"
#include "AssemblyU2DCSharp_NetProtocal_RoomLoadMsg2446470030.h"
#include "AssemblyU2DCSharp_NetProtocal_RoomStateMsg4215455211.h"
#include "AssemblyU2DCSharp_NetProtocal_RoleInfoMsg3183420057.h"
#include "AssemblyU2DCSharp_NetProtocal_FightHeroMsg1029408713.h"
#include "AssemblyU2DCSharp_NetProtocal_ReplaceCardMsg722529301.h"
#include "AssemblyU2DCSharp_NetProtocal_UseCardMsg625476140.h"
#include "AssemblyU2DCSharp_NetProtocal_UseArcaneMsg873403870.h"
#include "AssemblyU2DCSharp_NetProtocal_MoveMsg3044280046.h"
#include "AssemblyU2DCSharp_NetProtocal_StartRoundMsg324124209.h"
#include "AssemblyU2DCSharp_NetProtocal_OverRoundMsg2655682181.h"
#include "AssemblyU2DCSharp_NetProtocal_FightCardsMsg1539797984.h"
#include "AssemblyU2DCSharp_NetProtocal_FightCardMsg3782115063.h"
#include "AssemblyU2DCSharp_NetProtocal_EffectMsg1603105260.h"
#include "AssemblyU2DCSharp_NetProtocal_RoomOverMsg80023270.h"
#include "AssemblyU2DCSharp_NetProtocal_RoomState4272902646.h"
#include "AssemblyU2DCSharp_NetProtocal_Request1913412249.h"
#include "AssemblyU2DCSharp_NetProtocal_Respone2961906842.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha2271943107.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha3457972569.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha2300720745.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha1592542841.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha3994538960.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3500 = { sizeof (OnCustomInput_t3556372712), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3501 = { sizeof (OnNotifyUIEvent_t3025032372), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3502 = { sizeof (OnForceTouchCallbackFromNativeDelegate_t3151672570), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3503 = { sizeof (U3CChangeSelectionU3Ec__Iterator11_t17492533), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3503[3] = 
{
	U3CChangeSelectionU3Ec__Iterator11_t17492533::get_offset_of_U24PC_0(),
	U3CChangeSelectionU3Ec__Iterator11_t17492533::get_offset_of_U24current_1(),
	U3CChangeSelectionU3Ec__Iterator11_t17492533::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3504 = { sizeof (UIFont_t389944949), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3504[12] = 
{
	UIFont_t389944949::get_offset_of_mMat_2(),
	UIFont_t389944949::get_offset_of_mUVRect_3(),
	UIFont_t389944949::get_offset_of_mFont_4(),
	UIFont_t389944949::get_offset_of_mAtlas_5(),
	UIFont_t389944949::get_offset_of_mReplacement_6(),
	UIFont_t389944949::get_offset_of_mSymbols_7(),
	UIFont_t389944949::get_offset_of_mDynamicFont_8(),
	UIFont_t389944949::get_offset_of_mDynamicFontSize_9(),
	UIFont_t389944949::get_offset_of_mDynamicFontStyle_10(),
	UIFont_t389944949::get_offset_of_mSprite_11(),
	UIFont_t389944949::get_offset_of_mPMA_12(),
	UIFont_t389944949::get_offset_of_mPacked_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3505 = { sizeof (UIInput_t860674234), -1, sizeof(UIInput_t860674234_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3505[38] = 
{
	UIInput_t860674234_StaticFields::get_offset_of_current_2(),
	UIInput_t860674234_StaticFields::get_offset_of_selection_3(),
	UIInput_t860674234::get_offset_of_label_4(),
	UIInput_t860674234::get_offset_of_inputType_5(),
	UIInput_t860674234::get_offset_of_onReturnKey_6(),
	UIInput_t860674234::get_offset_of_keyboardType_7(),
	UIInput_t860674234::get_offset_of_hideInput_8(),
	UIInput_t860674234::get_offset_of_selectAllTextOnFocus_9(),
	UIInput_t860674234::get_offset_of_validation_10(),
	UIInput_t860674234::get_offset_of_characterLimit_11(),
	UIInput_t860674234::get_offset_of_savedAs_12(),
	UIInput_t860674234::get_offset_of_selectOnTab_13(),
	UIInput_t860674234::get_offset_of_activeTextColor_14(),
	UIInput_t860674234::get_offset_of_caretColor_15(),
	UIInput_t860674234::get_offset_of_selectionColor_16(),
	UIInput_t860674234::get_offset_of_onSubmit_17(),
	UIInput_t860674234::get_offset_of_onChange_18(),
	UIInput_t860674234::get_offset_of_onValidate_19(),
	UIInput_t860674234::get_offset_of_mValue_20(),
	UIInput_t860674234::get_offset_of_mDefaultText_21(),
	UIInput_t860674234::get_offset_of_mDefaultColor_22(),
	UIInput_t860674234::get_offset_of_mPosition_23(),
	UIInput_t860674234::get_offset_of_mDoInit_24(),
	UIInput_t860674234::get_offset_of_mPivot_25(),
	UIInput_t860674234::get_offset_of_mLoadSavedValue_26(),
	UIInput_t860674234_StaticFields::get_offset_of_mDrawStart_27(),
	UIInput_t860674234_StaticFields::get_offset_of_mLastIME_28(),
	UIInput_t860674234_StaticFields::get_offset_of_mKeyboard_29(),
	UIInput_t860674234_StaticFields::get_offset_of_mWaitForKeyboard_30(),
	UIInput_t860674234::get_offset_of_mSelectionStart_31(),
	UIInput_t860674234::get_offset_of_mSelectionEnd_32(),
	UIInput_t860674234::get_offset_of_mHighlight_33(),
	UIInput_t860674234::get_offset_of_mCaret_34(),
	UIInput_t860674234::get_offset_of_mBlankTex_35(),
	UIInput_t860674234::get_offset_of_mNextBlink_36(),
	UIInput_t860674234::get_offset_of_mLastAlpha_37(),
	UIInput_t860674234::get_offset_of_mCached_38(),
	UIInput_t860674234::get_offset_of_mSelectMe_39(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3506 = { sizeof (InputType_t1695544313)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3506[4] = 
{
	InputType_t1695544313::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3507 = { sizeof (Validation_t3865409168)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3507[7] = 
{
	Validation_t3865409168::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3508 = { sizeof (KeyboardType_t865779294)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3508[9] = 
{
	KeyboardType_t865779294::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3509 = { sizeof (OnReturnKey_t1716013855)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3509[4] = 
{
	OnReturnKey_t1716013855::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3510 = { sizeof (OnValidate_t2431313412), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3511 = { sizeof (UIInputOnGUI_t4090193630), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3512 = { sizeof (UILabel_t1795115428), -1, sizeof(UILabel_t1795115428_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3512[51] = 
{
	UILabel_t1795115428::get_offset_of_keepCrispWhenShrunk_51(),
	UILabel_t1795115428::get_offset_of_mbUseSnailFont_52(),
	UILabel_t1795115428::get_offset_of_mTrueTypeFont_53(),
	UILabel_t1795115428::get_offset_of_mFont_54(),
	UILabel_t1795115428::get_offset_of_mText_55(),
	UILabel_t1795115428::get_offset_of_mFontSize_56(),
	UILabel_t1795115428::get_offset_of_mFontStyle_57(),
	UILabel_t1795115428::get_offset_of_mAlignment_58(),
	UILabel_t1795115428::get_offset_of_mEncoding_59(),
	UILabel_t1795115428::get_offset_of_mMaxLineCount_60(),
	UILabel_t1795115428::get_offset_of_mEffectStyle_61(),
	UILabel_t1795115428::get_offset_of_mEffectColor_62(),
	UILabel_t1795115428::get_offset_of_mSymbols_63(),
	UILabel_t1795115428::get_offset_of_mEffectDistance_64(),
	UILabel_t1795115428::get_offset_of_mOverflow_65(),
	UILabel_t1795115428::get_offset_of_mMaterial_66(),
	UILabel_t1795115428::get_offset_of_mApplyGradient_67(),
	UILabel_t1795115428::get_offset_of_mGradientTop_68(),
	UILabel_t1795115428::get_offset_of_mGradientBottom_69(),
	UILabel_t1795115428::get_offset_of_mSpacingX_70(),
	UILabel_t1795115428::get_offset_of_mSpacingY_71(),
	UILabel_t1795115428::get_offset_of_mShrinkToFit_72(),
	UILabel_t1795115428::get_offset_of_mMaxLineWidth_73(),
	UILabel_t1795115428::get_offset_of_mMaxLineHeight_74(),
	UILabel_t1795115428::get_offset_of_mLineWidth_75(),
	UILabel_t1795115428::get_offset_of_mMultiline_76(),
	UILabel_t1795115428::get_offset_of_isChanged_77(),
	UILabel_t1795115428::get_offset_of_mOriginalText_78(),
	UILabel_t1795115428::get_offset_of_mIntConvert_79(),
	UILabel_t1795115428::get_offset_of_needChangeWord_80(),
	UILabel_t1795115428::get_offset_of_mActiveTTF_81(),
	UILabel_t1795115428::get_offset_of_mDensity_82(),
	UILabel_t1795115428::get_offset_of_mShouldBeProcessed_83(),
	UILabel_t1795115428::get_offset_of_mProcessedText_84(),
	UILabel_t1795115428::get_offset_of_mPremultiply_85(),
	UILabel_t1795115428::get_offset_of_mCalculatedSize_86(),
	UILabel_t1795115428::get_offset_of_mScale_87(),
	UILabel_t1795115428::get_offset_of_mPrintedSize_88(),
	UILabel_t1795115428::get_offset_of_mLastWidth_89(),
	UILabel_t1795115428::get_offset_of_mLastHeight_90(),
	UILabel_t1795115428_StaticFields::get_offset_of_separater_91(),
	UILabel_t1795115428_StaticFields::get_offset_of_sb_92(),
	UILabel_t1795115428_StaticFields::get_offset_of_mList_93(),
	UILabel_t1795115428_StaticFields::get_offset_of_mFontUsage_94(),
	UILabel_t1795115428_StaticFields::get_offset_of_monLoadAsset_95(),
	UILabel_t1795115428_StaticFields::get_offset_of_mstrbuilder_96(),
	UILabel_t1795115428_StaticFields::get_offset_of_moQuery_97(),
	UILabel_t1795115428_StaticFields::get_offset_of_intConvertFunc_98(),
	UILabel_t1795115428_StaticFields::get_offset_of_mTempVerts_99(),
	UILabel_t1795115428_StaticFields::get_offset_of_mTempIndices_100(),
	UILabel_t1795115428::get_offset_of_m_symbolOffset_101(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3513 = { sizeof (Effect_t541741196)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3513[4] = 
{
	Effect_t541741196::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3514 = { sizeof (Overflow_t2317266067)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3514[5] = 
{
	Overflow_t2317266067::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3515 = { sizeof (Crispness_t4281041871)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3515[4] = 
{
	Crispness_t4281041871::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3516 = { sizeof (CallLoadAsset_t879644691), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3517 = { sizeof (OnQueryString_t1562153177), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3518 = { sizeof (UILocalize_t3754440953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3518[2] = 
{
	UILocalize_t3754440953::get_offset_of_key_2(),
	UILocalize_t3754440953::get_offset_of_mStarted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3519 = { sizeof (UIOrthoCamera_t1890393437), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3519[2] = 
{
	UIOrthoCamera_t1890393437::get_offset_of_mCam_2(),
	UIOrthoCamera_t1890393437::get_offset_of_mTrans_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3520 = { sizeof (UIPanel_t1795085332), -1, sizeof(UIPanel_t1795085332_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3520[38] = 
{
	UIPanel_t1795085332_StaticFields::get_offset_of_list_22(),
	UIPanel_t1795085332::get_offset_of_onGeometryUpdated_23(),
	UIPanel_t1795085332::get_offset_of_showInPanelTool_24(),
	UIPanel_t1795085332::get_offset_of_generateNormals_25(),
	UIPanel_t1795085332::get_offset_of_widgetsAreStatic_26(),
	UIPanel_t1795085332::get_offset_of_cullWhileDragging_27(),
	UIPanel_t1795085332::get_offset_of_alwaysOnScreen_28(),
	UIPanel_t1795085332::get_offset_of_anchorOffset_29(),
	UIPanel_t1795085332::get_offset_of_renderQueue_30(),
	UIPanel_t1795085332::get_offset_of_startingRenderQueue_31(),
	UIPanel_t1795085332::get_offset_of_widgets_32(),
	UIPanel_t1795085332::get_offset_of_drawCalls_33(),
	UIPanel_t1795085332::get_offset_of_renderQuenes_34(),
	UIPanel_t1795085332::get_offset_of_worldToLocal_35(),
	UIPanel_t1795085332::get_offset_of_onClipMove_36(),
	UIPanel_t1795085332::get_offset_of_mAlpha_37(),
	UIPanel_t1795085332::get_offset_of_mClipping_38(),
	UIPanel_t1795085332::get_offset_of_mClipRange_39(),
	UIPanel_t1795085332::get_offset_of_mClipSoftness_40(),
	UIPanel_t1795085332::get_offset_of_mDepth_41(),
	UIPanel_t1795085332::get_offset_of_mSortingOrder_42(),
	UIPanel_t1795085332::get_offset_of_mRebuild_43(),
	UIPanel_t1795085332::get_offset_of_mResized_44(),
	UIPanel_t1795085332::get_offset_of_mCam_45(),
	UIPanel_t1795085332::get_offset_of_mClipOffset_46(),
	UIPanel_t1795085332::get_offset_of_mCullTime_47(),
	UIPanel_t1795085332::get_offset_of_mUpdateTime_48(),
	UIPanel_t1795085332::get_offset_of_mMatrixFrame_49(),
	UIPanel_t1795085332::get_offset_of_mAlphaFrameID_50(),
	UIPanel_t1795085332::get_offset_of_mLayer_51(),
	UIPanel_t1795085332_StaticFields::get_offset_of_mTemp_52(),
	UIPanel_t1795085332::get_offset_of_mMin_53(),
	UIPanel_t1795085332::get_offset_of_mMax_54(),
	UIPanel_t1795085332::get_offset_of_mHalfPixelOffset_55(),
	UIPanel_t1795085332::get_offset_of_mSortWidgets_56(),
	UIPanel_t1795085332_StaticFields::get_offset_of_mCorners_57(),
	UIPanel_t1795085332_StaticFields::get_offset_of_mUpdateFrame_58(),
	UIPanel_t1795085332::get_offset_of_mForced_59(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3521 = { sizeof (DebugInfo_t1876253092)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3521[4] = 
{
	DebugInfo_t1876253092::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3522 = { sizeof (RenderQueue_t1879567704)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3522[4] = 
{
	RenderQueue_t1879567704::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3523 = { sizeof (OnGeometryUpdated_t754882645), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3524 = { sizeof (OnClippingMoved_t4045505957), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3525 = { sizeof (UIRoot_t389944298), -1, sizeof(UIRoot_t389944298_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3525[9] = 
{
	UIRoot_t389944298_StaticFields::get_offset_of_list_2(),
	UIRoot_t389944298::get_offset_of_scalingStyle_3(),
	UIRoot_t389944298::get_offset_of_manualHeight_4(),
	UIRoot_t389944298::get_offset_of_minimumHeight_5(),
	UIRoot_t389944298::get_offset_of_maximumHeight_6(),
	UIRoot_t389944298::get_offset_of_adjustByDPI_7(),
	UIRoot_t389944298::get_offset_of_shrinkPortraitUI_8(),
	UIRoot_t389944298_StaticFields::get_offset_of_sRoot_9(),
	UIRoot_t389944298::get_offset_of_mTrans_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3526 = { sizeof (Scaling_t2807791908)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3526[4] = 
{
	Scaling_t2807791908::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3527 = { sizeof (UISprite_t603616735), -1, sizeof(UISprite_t603616735_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3527[29] = 
{
	UISprite_t603616735::get_offset_of_mAtlas_51(),
	UISprite_t603616735::get_offset_of_mSpriteName_52(),
	UISprite_t603616735::get_offset_of_mType_53(),
	UISprite_t603616735::get_offset_of_mFillDirection_54(),
	UISprite_t603616735::get_offset_of_mFillAmount_55(),
	UISprite_t603616735::get_offset_of_mInvert_56(),
	UISprite_t603616735::get_offset_of_mFlip_57(),
	UISprite_t603616735::get_offset_of_mUseCircle_58(),
	UISprite_t603616735::get_offset_of_mCircleRadius_59(),
	UISprite_t603616735::get_offset_of_mMirrorHorizontal_60(),
	UISprite_t603616735::get_offset_of_mMirrorVertical_61(),
	UISprite_t603616735::get_offset_of_mFillCenter_62(),
	UISprite_t603616735::get_offset_of_mSprite_63(),
	UISprite_t603616735::get_offset_of_mInnerUV_64(),
	UISprite_t603616735::get_offset_of_mOuterUV_65(),
	UISprite_t603616735::get_offset_of_mSpriteSet_66(),
	UISprite_t603616735::get_offset_of_centerType_67(),
	UISprite_t603616735::get_offset_of_leftType_68(),
	UISprite_t603616735::get_offset_of_rightType_69(),
	UISprite_t603616735::get_offset_of_bottomType_70(),
	UISprite_t603616735::get_offset_of_topType_71(),
	UISprite_t603616735::get_offset_of_Additive_72(),
	UISprite_t603616735_StaticFields::get_offset_of_mAppointShader_73(),
	UISprite_t603616735::get_offset_of_maskCount_74(),
	UISprite_t603616735::get_offset_of_customValue1_75(),
	UISprite_t603616735::get_offset_of_customValue2_76(),
	UISprite_t603616735_StaticFields::get_offset_of_monLoadAsset_77(),
	UISprite_t603616735_StaticFields::get_offset_of_mTempPos_78(),
	UISprite_t603616735_StaticFields::get_offset_of_mTempUVs_79(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3528 = { sizeof (Type_t2972059396)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3528[7] = 
{
	Type_t2972059396::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3529 = { sizeof (FillDirection_t2438394762)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3529[6] = 
{
	FillDirection_t2438394762::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3530 = { sizeof (AdvancedType_t3338161062)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3530[4] = 
{
	AdvancedType_t3338161062::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3531 = { sizeof (Flip_t250082235)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3531[5] = 
{
	Flip_t250082235::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3532 = { sizeof (CustomType_t1859136379)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3532[3] = 
{
	CustomType_t1859136379::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3533 = { sizeof (CallLoadAsset_t3643317544), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3534 = { sizeof (UISpriteAnimation_t97731357), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3534[12] = 
{
	UISpriteAnimation_t97731357::get_offset_of_mFPS_2(),
	UISpriteAnimation_t97731357::get_offset_of_mPrefix_3(),
	UISpriteAnimation_t97731357::get_offset_of_mLoop_4(),
	UISpriteAnimation_t97731357::get_offset_of_mSprite_5(),
	UISpriteAnimation_t97731357::get_offset_of_mDelta_6(),
	UISpriteAnimation_t97731357::get_offset_of_mIndex_7(),
	UISpriteAnimation_t97731357::get_offset_of_mActive_8(),
	UISpriteAnimation_t97731357::get_offset_of_mSpriteNames_9(),
	UISpriteAnimation_t97731357::get_offset_of_loopTime_10(),
	UISpriteAnimation_t97731357::get_offset_of_loopCounter_11(),
	UISpriteAnimation_t97731357::get_offset_of_m_callBack_12(),
	UISpriteAnimation_t97731357::get_offset_of_perfect_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3535 = { sizeof (UISpriteData_t2862501359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3535[13] = 
{
	UISpriteData_t2862501359::get_offset_of_name_0(),
	UISpriteData_t2862501359::get_offset_of_x_1(),
	UISpriteData_t2862501359::get_offset_of_y_2(),
	UISpriteData_t2862501359::get_offset_of_width_3(),
	UISpriteData_t2862501359::get_offset_of_height_4(),
	UISpriteData_t2862501359::get_offset_of_borderLeft_5(),
	UISpriteData_t2862501359::get_offset_of_borderRight_6(),
	UISpriteData_t2862501359::get_offset_of_borderTop_7(),
	UISpriteData_t2862501359::get_offset_of_borderBottom_8(),
	UISpriteData_t2862501359::get_offset_of_paddingLeft_9(),
	UISpriteData_t2862501359::get_offset_of_paddingRight_10(),
	UISpriteData_t2862501359::get_offset_of_paddingTop_11(),
	UISpriteData_t2862501359::get_offset_of_paddingBottom_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3536 = { sizeof (UIStretch_t4076885229), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3536[16] = 
{
	UIStretch_t4076885229::get_offset_of_uiCamera_2(),
	UIStretch_t4076885229::get_offset_of_container_3(),
	UIStretch_t4076885229::get_offset_of_style_4(),
	UIStretch_t4076885229::get_offset_of_runOnlyOnce_5(),
	UIStretch_t4076885229::get_offset_of_relativeSize_6(),
	UIStretch_t4076885229::get_offset_of_initialSize_7(),
	UIStretch_t4076885229::get_offset_of_borderPadding_8(),
	UIStretch_t4076885229::get_offset_of_widgetContainer_9(),
	UIStretch_t4076885229::get_offset_of_mTrans_10(),
	UIStretch_t4076885229::get_offset_of_mWidget_11(),
	UIStretch_t4076885229::get_offset_of_mSprite_12(),
	UIStretch_t4076885229::get_offset_of_mPanel_13(),
	UIStretch_t4076885229::get_offset_of_mRoot_14(),
	UIStretch_t4076885229::get_offset_of_mAnim_15(),
	UIStretch_t4076885229::get_offset_of_mRect_16(),
	UIStretch_t4076885229::get_offset_of_mStarted_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3537 = { sizeof (Style_t1693551353)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3537[8] = 
{
	Style_t1693551353::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3538 = { sizeof (UITextList_t652111117), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3538[10] = 
{
	UITextList_t652111117::get_offset_of_textLabel_2(),
	UITextList_t652111117::get_offset_of_scrollBar_3(),
	UITextList_t652111117::get_offset_of_style_4(),
	UITextList_t652111117::get_offset_of_paragraphHistory_5(),
	UITextList_t652111117::get_offset_of_mSeparator_6(),
	UITextList_t652111117::get_offset_of_mParagraphs_7(),
	UITextList_t652111117::get_offset_of_mScroll_8(),
	UITextList_t652111117::get_offset_of_mTotalLines_9(),
	UITextList_t652111117::get_offset_of_mLastWidth_10(),
	UITextList_t652111117::get_offset_of_mLastHeight_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3539 = { sizeof (Style_t3198392425)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3539[3] = 
{
	Style_t3198392425::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3540 = { sizeof (Paragraph_t2587095060), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3540[2] = 
{
	Paragraph_t2587095060::get_offset_of_text_0(),
	Paragraph_t2587095060::get_offset_of_lines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3541 = { sizeof (UITexture_t2537039969), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3541[7] = 
{
	UITexture_t2537039969::get_offset_of_mRect_51(),
	UITexture_t2537039969::get_offset_of_mTexture_52(),
	UITexture_t2537039969::get_offset_of_mMat_53(),
	UITexture_t2537039969::get_offset_of_mShader_54(),
	UITexture_t2537039969::get_offset_of_mMirrorHorizontal_55(),
	UITexture_t2537039969::get_offset_of_mMirrorVertical_56(),
	UITexture_t2537039969::get_offset_of_mPMA_57(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3542 = { sizeof (UITooltip_t1873874935), -1, sizeof(UITooltip_t1873874935_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3542[12] = 
{
	UITooltip_t1873874935_StaticFields::get_offset_of_mInstance_2(),
	UITooltip_t1873874935::get_offset_of_uiCamera_3(),
	UITooltip_t1873874935::get_offset_of_text_4(),
	UITooltip_t1873874935::get_offset_of_background_5(),
	UITooltip_t1873874935::get_offset_of_appearSpeed_6(),
	UITooltip_t1873874935::get_offset_of_scalingTransitions_7(),
	UITooltip_t1873874935::get_offset_of_mTrans_8(),
	UITooltip_t1873874935::get_offset_of_mTarget_9(),
	UITooltip_t1873874935::get_offset_of_mCurrent_10(),
	UITooltip_t1873874935::get_offset_of_mPos_11(),
	UITooltip_t1873874935::get_offset_of_mSize_12(),
	UITooltip_t1873874935::get_offset_of_mWidgets_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3543 = { sizeof (UIViewport_t1541362616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3543[5] = 
{
	UIViewport_t1541362616::get_offset_of_sourceCamera_2(),
	UIViewport_t1541362616::get_offset_of_topLeft_3(),
	UIViewport_t1541362616::get_offset_of_bottomRight_4(),
	UIViewport_t1541362616::get_offset_of_fullSize_5(),
	UIViewport_t1541362616::get_offset_of_mCam_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3544 = { sizeof (ConvertEndian_t2275242656), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3545 = { sizeof (ErrorMsg_t1427725175), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3546 = { sizeof (NetData_t1634960601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3546[4] = 
{
	NetData_t1634960601::get_offset_of_m_correlationid_0(),
	NetData_t1634960601::get_offset_of_m_serverRequest_1(),
	NetData_t1634960601::get_offset_of_m_serverRespone_2(),
	NetData_t1634960601::get_offset_of_m_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3547 = { sizeof (NSocket_t3145259637), -1, sizeof(NSocket_t3145259637_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3547[28] = 
{
	0,
	0,
	NSocket_t3145259637::get_offset_of_m_servertime_2(),
	NSocket_t3145259637::get_offset_of_m_auth_id_3(),
	NSocket_t3145259637::get_offset_of_m_auth_token_4(),
	NSocket_t3145259637::get_offset_of_m_waitmsg_5(),
	NSocket_t3145259637::get_offset_of__waitflag_6(),
	NSocket_t3145259637::get_offset_of_m_status_7(),
	NSocket_t3145259637::get_offset_of_m_ip_8(),
	NSocket_t3145259637::get_offset_of_m_port_9(),
	NSocket_t3145259637::get_offset_of_m_binit_10(),
	NSocket_t3145259637::get_offset_of__isdirty_11(),
	NSocket_t3145259637::get_offset_of_m_sendqueue_12(),
	NSocket_t3145259637::get_offset_of_m_revqueue_13(),
	NSocket_t3145259637::get_offset_of_m_socket_14(),
	NSocket_t3145259637::get_offset_of_m_readthread_15(),
	NSocket_t3145259637::get_offset_of_m_sendms_16(),
	NSocket_t3145259637::get_offset_of_m_memstream_17(),
	NSocket_t3145259637::get_offset_of_m_reader_18(),
	NSocket_t3145259637::get_offset_of_m_logicms_19(),
	NSocket_t3145259637::get_offset_of_m_protoms_20(),
	NSocket_t3145259637::get_offset_of_m_logicwriter_21(),
	NSocket_t3145259637::get_offset_of_m_sendbuf_22(),
	NSocket_t3145259637::get_offset_of_m_receivebuf_23(),
	NSocket_t3145259637::get_offset_of__obj_24(),
	NSocket_t3145259637_StaticFields::get_offset_of_instance_25(),
	NSocket_t3145259637_StaticFields::get_offset_of_m_correlationid_26(),
	NSocket_t3145259637::get_offset_of_msgList_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3548 = { sizeof (EStatus_t2063541295)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3548[4] = 
{
	EStatus_t2063541295::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3549 = { sizeof (NetParam_t4259758804), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3549[3] = 
{
	NetParam_t4259758804::get_offset_of_data_0(),
	NetParam_t4259758804::get_offset_of_mType_1(),
	NetParam_t4259758804::get_offset_of_mfun_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3550 = { sizeof (NetDataMgr_t3952396205), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3550[2] = 
{
	NetDataMgr_t3952396205::get_offset_of_Mrgs_4(),
	NetDataMgr_t3952396205::get_offset_of_isGetInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3551 = { sizeof (NetWorkSystem_t2057804271), -1, sizeof(NetWorkSystem_t2057804271_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3551[21] = 
{
	NetWorkSystem_t2057804271_StaticFields::get_offset_of_s_Instance_0(),
	NetWorkSystem_t2057804271::get_offset_of_m_PingPongNumber_1(),
	NetWorkSystem_t2057804271::get_offset_of_m_PingInterval_2(),
	NetWorkSystem_t2057804271::get_offset_of_m_Config_3(),
	NetWorkSystem_t2057804271::get_offset_of_m_NetClient_4(),
	NetWorkSystem_t2057804271::get_offset_of_m_Connection_5(),
	NetWorkSystem_t2057804271::get_offset_of_m_NetThread_6(),
	NetWorkSystem_t2057804271::get_offset_of_m_NetClientStarted_7(),
	NetWorkSystem_t2057804271::get_offset_of_m_Ip_8(),
	NetWorkSystem_t2057804271::get_offset_of_m_Port_9(),
	NetWorkSystem_t2057804271::get_offset_of_m_IsConnected_10(),
	NetWorkSystem_t2057804271::get_offset_of_m_IsWaitStart_11(),
	NetWorkSystem_t2057804271::get_offset_of_m_IsQuited_12(),
	NetWorkSystem_t2057804271::get_offset_of_m_CanSendMessage_13(),
	NetWorkSystem_t2057804271::get_offset_of_m_QueuePair_14(),
	NetWorkSystem_t2057804271::get_offset_of_m_Lock_15(),
	NetWorkSystem_t2057804271::get_offset_of_m_Key_16(),
	NetWorkSystem_t2057804271::get_offset_of_m_LastFaceDir_17(),
	NetWorkSystem_t2057804271::get_offset_of_m_HeroId_18(),
	NetWorkSystem_t2057804271::get_offset_of_m_CampId_19(),
	NetWorkSystem_t2057804271::get_offset_of_m_SceneId_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3552 = { sizeof (ProtoNetSerialize_t1971992873), -1, sizeof(ProtoNetSerialize_t1971992873_StaticFields), sizeof(ProtoNetSerialize_t1971992873_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable3552[6] = 
{
	THREAD_STATIC_FIELD_OFFSET,
	THREAD_STATIC_FIELD_OFFSET,
	ProtoNetSerialize_t1971992873_StaticFields::get_offset_of_s_DicIDName_2(),
	ProtoNetSerialize_t1971992873_StaticFields::get_offset_of_s_Inited_3(),
	ProtoNetSerialize_t1971992873_StaticFields::get_offset_of_readBodyLength_4(),
	ProtoNetSerialize_t1971992873_StaticFields::get_offset_of_readId_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3553 = { sizeof (CardListMsg_t1254004863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3553[2] = 
{
	CardListMsg_t1254004863::get_offset_of__cardList_0(),
	CardListMsg_t1254004863::get_offset_of_extensionObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3554 = { sizeof (CardTeamInfo_t2180094437), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3554[3] = 
{
	CardTeamInfo_t2180094437::get_offset_of__id_0(),
	CardTeamInfo_t2180094437::get_offset_of__name_1(),
	CardTeamInfo_t2180094437::get_offset_of_extensionObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3555 = { sizeof (HeroListMsg_t3128201993), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3555[4] = 
{
	HeroListMsg_t3128201993::get_offset_of__id_0(),
	HeroListMsg_t3128201993::get_offset_of__teamName_1(),
	HeroListMsg_t3128201993::get_offset_of__heroList_2(),
	HeroListMsg_t3128201993::get_offset_of_extensionObject_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3556 = { sizeof (HeroInfo_t3657272016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3556[6] = 
{
	HeroInfo_t3657272016::get_offset_of__heroUUId_0(),
	HeroInfo_t3657272016::get_offset_of__configId_1(),
	HeroInfo_t3657272016::get_offset_of__pos_2(),
	HeroInfo_t3657272016::get_offset_of__arcaneId_3(),
	HeroInfo_t3657272016::get_offset_of__cardTeamName_4(),
	HeroInfo_t3657272016::get_offset_of_extensionObject_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3557 = { sizeof (ChangeTeamHeroNameMsg_t904732171), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3557[4] = 
{
	ChangeTeamHeroNameMsg_t904732171::get_offset_of__teamId_0(),
	ChangeTeamHeroNameMsg_t904732171::get_offset_of__heroId_1(),
	ChangeTeamHeroNameMsg_t904732171::get_offset_of__name_2(),
	ChangeTeamHeroNameMsg_t904732171::get_offset_of_extensionObject_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3558 = { sizeof (HeroOnFightMsg_t3899865342), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3558[5] = 
{
	HeroOnFightMsg_t3899865342::get_offset_of__teamId_0(),
	HeroOnFightMsg_t3899865342::get_offset_of__heroId_1(),
	HeroOnFightMsg_t3899865342::get_offset_of__replaceId_2(),
	HeroOnFightMsg_t3899865342::get_offset_of__pos_3(),
	HeroOnFightMsg_t3899865342::get_offset_of_extensionObject_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3559 = { sizeof (CreateCardTeamMsg_t2894824390), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3559[3] = 
{
	CreateCardTeamMsg_t2894824390::get_offset_of__teamId_0(),
	CreateCardTeamMsg_t2894824390::get_offset_of__heroConfigId_1(),
	CreateCardTeamMsg_t2894824390::get_offset_of_extensionObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3560 = { sizeof (ArcaneMsg_t1586538171), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3560[4] = 
{
	ArcaneMsg_t1586538171::get_offset_of__teamUUid_0(),
	ArcaneMsg_t1586538171::get_offset_of__teamHeroUUid_1(),
	ArcaneMsg_t1586538171::get_offset_of__arcaneId_2(),
	ArcaneMsg_t1586538171::get_offset_of_extensionObject_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3561 = { sizeof (CardMsg_t1767916419), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3561[5] = 
{
	CardMsg_t1767916419::get_offset_of__teamUUid_0(),
	CardMsg_t1767916419::get_offset_of__teamHeroUUid_1(),
	CardMsg_t1767916419::get_offset_of__oldCardId_2(),
	CardMsg_t1767916419::get_offset_of__newCardId_3(),
	CardMsg_t1767916419::get_offset_of_extensionObject_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3562 = { sizeof (CardInfoListMsg_t972027215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3562[7] = 
{
	CardInfoListMsg_t972027215::get_offset_of__heroConfigId_0(),
	CardInfoListMsg_t972027215::get_offset_of__arcaneId_1(),
	CardInfoListMsg_t972027215::get_offset_of__teamId_2(),
	CardInfoListMsg_t972027215::get_offset_of__heroId_3(),
	CardInfoListMsg_t972027215::get_offset_of__cardName_4(),
	CardInfoListMsg_t972027215::get_offset_of__cardList_5(),
	CardInfoListMsg_t972027215::get_offset_of_extensionObject_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3563 = { sizeof (CardDataMsg_t3125953747), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3563[3] = 
{
	CardDataMsg_t3125953747::get_offset_of__configId_0(),
	CardDataMsg_t3125953747::get_offset_of__isFight_1(),
	CardDataMsg_t3125953747::get_offset_of_extensionObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3564 = { sizeof (DeleteSuitCardMsg_t2395483925), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3564[3] = 
{
	DeleteSuitCardMsg_t2395483925::get_offset_of__teamUUid_0(),
	DeleteSuitCardMsg_t2395483925::get_offset_of__teamHeroUUid_1(),
	DeleteSuitCardMsg_t2395483925::get_offset_of_extensionObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3565 = { sizeof (TeamListMsg_t435340988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3565[2] = 
{
	TeamListMsg_t435340988::get_offset_of__team_0(),
	TeamListMsg_t435340988::get_offset_of_extensionObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3566 = { sizeof (SelectTeamMsg_t2592243822), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3566[4] = 
{
	SelectTeamMsg_t2592243822::get_offset_of__teamId_0(),
	SelectTeamMsg_t2592243822::get_offset_of__teamName_1(),
	SelectTeamMsg_t2592243822::get_offset_of__configIdList_2(),
	SelectTeamMsg_t2592243822::get_offset_of_extensionObject_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3567 = { sizeof (HeroInfoMsg_t729301653), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3567[3] = 
{
	HeroInfoMsg_t729301653::get_offset_of__configId_0(),
	HeroInfoMsg_t729301653::get_offset_of__level_1(),
	HeroInfoMsg_t729301653::get_offset_of_extensionObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3568 = { sizeof (HeroInfoListMsg_t4090533633), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3568[2] = 
{
	HeroInfoListMsg_t4090533633::get_offset_of__heroList_0(),
	HeroInfoListMsg_t4090533633::get_offset_of_extensionObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3569 = { sizeof (LoginMsg_t2256327720), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3569[3] = 
{
	LoginMsg_t2256327720::get_offset_of__accountId_0(),
	LoginMsg_t2256327720::get_offset_of__accountPwd_1(),
	LoginMsg_t2256327720::get_offset_of_extensionObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3570 = { sizeof (PlayerCreateMsg_t2435875764), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3570[2] = 
{
	PlayerCreateMsg_t2435875764::get_offset_of__nickName_0(),
	PlayerCreateMsg_t2435875764::get_offset_of_extensionObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3571 = { sizeof (PlayerInfoMsg_t3752910050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3571[4] = 
{
	PlayerInfoMsg_t3752910050::get_offset_of__pid_0(),
	PlayerInfoMsg_t3752910050::get_offset_of__nickName_1(),
	PlayerInfoMsg_t3752910050::get_offset_of__selectTeamId_2(),
	PlayerInfoMsg_t3752910050::get_offset_of_extensionObject_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3572 = { sizeof (ServerResultMsg_t3963041931), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3572[2] = 
{
	ServerResultMsg_t3963041931::get_offset_of__flag_0(),
	ServerResultMsg_t3963041931::get_offset_of_extensionObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3573 = { sizeof (ParamIntMsg_t2467478971), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3573[2] = 
{
	ParamIntMsg_t2467478971::get_offset_of__intValue_0(),
	ParamIntMsg_t2467478971::get_offset_of_extensionObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3574 = { sizeof (ParamStrMsg_t811852625), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3574[2] = 
{
	ParamStrMsg_t811852625::get_offset_of__strValue_0(),
	ParamStrMsg_t811852625::get_offset_of_extensionObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3575 = { sizeof (ServerResultFlag_t2413212214)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3575[18] = 
{
	ServerResultFlag_t2413212214::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3576 = { sizeof (MatchFightMsg_t1530053180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3576[2] = 
{
	MatchFightMsg_t1530053180::get_offset_of__selectTeam_0(),
	MatchFightMsg_t1530053180::get_offset_of_extensionObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3577 = { sizeof (RoomInfoMsg_t1078239938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3577[3] = 
{
	RoomInfoMsg_t1078239938::get_offset_of__frole_0(),
	RoomInfoMsg_t1078239938::get_offset_of__srole_1(),
	RoomInfoMsg_t1078239938::get_offset_of_extensionObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3578 = { sizeof (RoomLoadMsg_t2446470030), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3578[2] = 
{
	RoomLoadMsg_t2446470030::get_offset_of__load_0(),
	RoomLoadMsg_t2446470030::get_offset_of_extensionObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3579 = { sizeof (RoomStateMsg_t4215455211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3579[2] = 
{
	RoomStateMsg_t4215455211::get_offset_of__state_0(),
	RoomStateMsg_t4215455211::get_offset_of_extensionObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3580 = { sizeof (RoleInfoMsg_t3183420057), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3580[7] = 
{
	RoleInfoMsg_t3183420057::get_offset_of__pid_0(),
	RoleInfoMsg_t3183420057::get_offset_of__name_1(),
	RoleInfoMsg_t3183420057::get_offset_of__arcaneNum_2(),
	RoleInfoMsg_t3183420057::get_offset_of__fatigueTime_3(),
	RoleInfoMsg_t3183420057::get_offset_of__cards_4(),
	RoleInfoMsg_t3183420057::get_offset_of__heros_5(),
	RoleInfoMsg_t3183420057::get_offset_of_extensionObject_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3581 = { sizeof (FightHeroMsg_t1029408713), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3581[6] = 
{
	FightHeroMsg_t1029408713::get_offset_of__heroId_0(),
	FightHeroMsg_t1029408713::get_offset_of__hp_1(),
	FightHeroMsg_t1029408713::get_offset_of__maxHp_2(),
	FightHeroMsg_t1029408713::get_offset_of__shield_3(),
	FightHeroMsg_t1029408713::get_offset_of__arcane_4(),
	FightHeroMsg_t1029408713::get_offset_of_extensionObject_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3582 = { sizeof (ReplaceCardMsg_t722529301), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3582[2] = 
{
	ReplaceCardMsg_t722529301::get_offset_of__replace_0(),
	ReplaceCardMsg_t722529301::get_offset_of_extensionObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3583 = { sizeof (UseCardMsg_t625476140), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3583[3] = 
{
	UseCardMsg_t625476140::get_offset_of__index_0(),
	UseCardMsg_t625476140::get_offset_of__target_1(),
	UseCardMsg_t625476140::get_offset_of_extensionObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3584 = { sizeof (UseArcaneMsg_t873403870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3584[3] = 
{
	UseArcaneMsg_t873403870::get_offset_of__pos_0(),
	UseArcaneMsg_t873403870::get_offset_of__target_1(),
	UseArcaneMsg_t873403870::get_offset_of_extensionObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3585 = { sizeof (MoveMsg_t3044280046), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3585[3] = 
{
	MoveMsg_t3044280046::get_offset_of__pos_0(),
	MoveMsg_t3044280046::get_offset_of__target_1(),
	MoveMsg_t3044280046::get_offset_of_extensionObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3586 = { sizeof (StartRoundMsg_t324124209), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3586[1] = 
{
	StartRoundMsg_t324124209::get_offset_of_extensionObject_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3587 = { sizeof (OverRoundMsg_t2655682181), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3587[1] = 
{
	OverRoundMsg_t2655682181::get_offset_of_extensionObject_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3588 = { sizeof (FightCardsMsg_t1539797984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3588[2] = 
{
	FightCardsMsg_t1539797984::get_offset_of__card_0(),
	FightCardsMsg_t1539797984::get_offset_of_extensionObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3589 = { sizeof (FightCardMsg_t3782115063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3589[3] = 
{
	FightCardMsg_t3782115063::get_offset_of__index_0(),
	FightCardMsg_t3782115063::get_offset_of__cardId_1(),
	FightCardMsg_t3782115063::get_offset_of_extensionObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3590 = { sizeof (EffectMsg_t1603105260), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3590[5] = 
{
	EffectMsg_t1603105260::get_offset_of__target_0(),
	EffectMsg_t1603105260::get_offset_of__type_1(),
	EffectMsg_t1603105260::get_offset_of__prop_2(),
	EffectMsg_t1603105260::get_offset_of__value_3(),
	EffectMsg_t1603105260::get_offset_of_extensionObject_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3591 = { sizeof (RoomOverMsg_t80023270), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3591[1] = 
{
	RoomOverMsg_t80023270::get_offset_of_extensionObject_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3592 = { sizeof (RoomState_t4272902646)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3592[3] = 
{
	RoomState_t4272902646::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3593 = { sizeof (Request_t1913412249)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3593[26] = 
{
	Request_t1913412249::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3594 = { sizeof (Respone_t2961906842)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3594[25] = 
{
	Respone_t2961906842::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3595 = { sizeof (ChatChannel_t2271943107), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3595[5] = 
{
	ChatChannel_t2271943107::get_offset_of_Name_0(),
	ChatChannel_t2271943107::get_offset_of_Senders_1(),
	ChatChannel_t2271943107::get_offset_of_Messages_2(),
	ChatChannel_t2271943107::get_offset_of_MessageLimit_3(),
	ChatChannel_t2271943107::get_offset_of_U3CIsPrivateU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3596 = { sizeof (ChatClient_t3457972569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3596[18] = 
{
	0,
	0,
	ChatClient_t3457972569::get_offset_of_chatRegion_2(),
	ChatClient_t3457972569::get_offset_of_MessageLimit_3(),
	ChatClient_t3457972569::get_offset_of_PublicChannels_4(),
	ChatClient_t3457972569::get_offset_of_PrivateChannels_5(),
	ChatClient_t3457972569::get_offset_of_listener_6(),
	ChatClient_t3457972569::get_offset_of_chatPeer_7(),
	ChatClient_t3457972569::get_offset_of_didAuthenticate_8(),
	ChatClient_t3457972569::get_offset_of_msDeltaForServiceCalls_9(),
	ChatClient_t3457972569::get_offset_of_msTimestampOfLastServiceCall_10(),
	ChatClient_t3457972569::get_offset_of_U3CNameServerAddressU3Ek__BackingField_11(),
	ChatClient_t3457972569::get_offset_of_U3CFrontendAddressU3Ek__BackingField_12(),
	ChatClient_t3457972569::get_offset_of_U3CStateU3Ek__BackingField_13(),
	ChatClient_t3457972569::get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_14(),
	ChatClient_t3457972569::get_offset_of_U3CAppVersionU3Ek__BackingField_15(),
	ChatClient_t3457972569::get_offset_of_U3CAppIdU3Ek__BackingField_16(),
	ChatClient_t3457972569::get_offset_of_U3CAuthValuesU3Ek__BackingField_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3597 = { sizeof (ChatDisconnectCause_t2300720745)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3597[12] = 
{
	ChatDisconnectCause_t2300720745::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3598 = { sizeof (ChatEventCode_t1592542841), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3598[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3599 = { sizeof (ChatOperationCode_t3994538960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3599[9] = 
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
