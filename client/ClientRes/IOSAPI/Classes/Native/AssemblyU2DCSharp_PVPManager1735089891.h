#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PVPManager
struct PVPManager_t1735089891;
// UnityEngine.Camera
struct Camera_t189460977;
// FightHPPanel
struct FightHPPanel_t954416996;
// HighlightingSystem.HighlightingRenderer
struct HighlightingRenderer_t3709628099;
// FightPoint
struct FightPoint_t146525064;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,CardRole>
struct Dictionary_2_t1725170591;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<SimpleHeroData>
struct List_1_t980487826;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform>
struct Dictionary_2_t894930024;
// UnityEngine.Transform
struct Transform_t3275118058;
// TweenLayerUtil
struct TweenLayerUtil_t1100282932;
// TD_Hero
struct TD_Hero_t2962140565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PVPManager
struct  PVPManager_t1735089891  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera PVPManager::BackgroundCamera
	Camera_t189460977 * ___BackgroundCamera_3;
	// UnityEngine.Camera PVPManager::AvatarCamera
	Camera_t189460977 * ___AvatarCamera_4;
	// UnityEngine.Camera PVPManager::FightCamera
	Camera_t189460977 * ___FightCamera_5;
	// FightHPPanel PVPManager::HPRoot
	FightHPPanel_t954416996 * ___HPRoot_6;
	// HighlightingSystem.HighlightingRenderer PVPManager::HighlightRender
	HighlightingRenderer_t3709628099 * ___HighlightRender_7;
	// FightPoint PVPManager::MyFightPoint
	FightPoint_t146525064 * ___MyFightPoint_8;
	// FightPoint PVPManager::OpFightPoint
	FightPoint_t146525064 * ___OpFightPoint_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,CardRole> PVPManager::CardRoleDic
	Dictionary_2_t1725170591 * ___CardRoleDic_10;
	// System.Collections.Generic.List`1<UnityEngine.Transform> PVPManager::MyPosition
	List_1_t2644239190 * ___MyPosition_11;
	// System.Collections.Generic.List`1<UnityEngine.Transform> PVPManager::OpPosition
	List_1_t2644239190 * ___OpPosition_12;
	// System.Collections.Generic.List`1<System.String> PVPManager::Test_MyAB
	List_1_t1398341365 * ___Test_MyAB_13;
	// System.Collections.Generic.List`1<System.String> PVPManager::Test_OpAB
	List_1_t1398341365 * ___Test_OpAB_14;
	// System.Boolean PVPManager::mTweenOutAtkOver
	bool ___mTweenOutAtkOver_15;
	// System.Boolean PVPManager::mTweenOutAtkedOver
	bool ___mTweenOutAtkedOver_16;
	// UnityEngine.GameObject PVPManager::mFightObject
	GameObject_t1756533147 * ___mFightObject_17;
	// System.Collections.Generic.List`1<SimpleHeroData> PVPManager::SimpleHeroDatas
	List_1_t980487826 * ___SimpleHeroDatas_18;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform> PVPManager::AllCardRole
	Dictionary_2_t894930024 * ___AllCardRole_21;
	// UnityEngine.Transform PVPManager::TweenOutOrgObjectAtk
	Transform_t3275118058 * ___TweenOutOrgObjectAtk_22;
	// UnityEngine.Transform PVPManager::TweenOutOrgObjectAtked
	Transform_t3275118058 * ___TweenOutOrgObjectAtked_23;
	// System.Boolean PVPManager::TweenOutAtk_ResLoaded
	bool ___TweenOutAtk_ResLoaded_24;
	// System.Boolean PVPManager::TweenOutAtked_ResLoaded
	bool ___TweenOutAtked_ResLoaded_25;
	// TweenLayerUtil PVPManager::TweenOutAtk
	TweenLayerUtil_t1100282932 * ___TweenOutAtk_26;
	// TweenLayerUtil PVPManager::TweenOutAtked
	TweenLayerUtil_t1100282932 * ___TweenOutAtked_27;
	// TD_Hero PVPManager::mAtkCfg
	TD_Hero_t2962140565 * ___mAtkCfg_28;
	// TD_Hero PVPManager::mAtkedCfg
	TD_Hero_t2962140565 * ___mAtkedCfg_29;
	// UnityEngine.Transform PVPManager::mAtkOutTransform
	Transform_t3275118058 * ___mAtkOutTransform_30;
	// UnityEngine.Transform PVPManager::mAtkedOutTransform
	Transform_t3275118058 * ___mAtkedOutTransform_31;
	// UnityEngine.Transform PVPManager::mAtkBackTransform
	Transform_t3275118058 * ___mAtkBackTransform_32;
	// UnityEngine.Transform PVPManager::mAtkedBackTransform
	Transform_t3275118058 * ___mAtkedBackTransform_33;
	// System.Boolean PVPManager::IsMirror
	bool ___IsMirror_34;
	// UnityEngine.Events.UnityAction PVPManager::LoadMapThenAvatarComplete
	UnityAction_t4025899511 * ___LoadMapThenAvatarComplete_35;

public:
	inline static int32_t get_offset_of_BackgroundCamera_3() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___BackgroundCamera_3)); }
	inline Camera_t189460977 * get_BackgroundCamera_3() const { return ___BackgroundCamera_3; }
	inline Camera_t189460977 ** get_address_of_BackgroundCamera_3() { return &___BackgroundCamera_3; }
	inline void set_BackgroundCamera_3(Camera_t189460977 * value)
	{
		___BackgroundCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___BackgroundCamera_3, value);
	}

	inline static int32_t get_offset_of_AvatarCamera_4() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___AvatarCamera_4)); }
	inline Camera_t189460977 * get_AvatarCamera_4() const { return ___AvatarCamera_4; }
	inline Camera_t189460977 ** get_address_of_AvatarCamera_4() { return &___AvatarCamera_4; }
	inline void set_AvatarCamera_4(Camera_t189460977 * value)
	{
		___AvatarCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___AvatarCamera_4, value);
	}

	inline static int32_t get_offset_of_FightCamera_5() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___FightCamera_5)); }
	inline Camera_t189460977 * get_FightCamera_5() const { return ___FightCamera_5; }
	inline Camera_t189460977 ** get_address_of_FightCamera_5() { return &___FightCamera_5; }
	inline void set_FightCamera_5(Camera_t189460977 * value)
	{
		___FightCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___FightCamera_5, value);
	}

	inline static int32_t get_offset_of_HPRoot_6() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___HPRoot_6)); }
	inline FightHPPanel_t954416996 * get_HPRoot_6() const { return ___HPRoot_6; }
	inline FightHPPanel_t954416996 ** get_address_of_HPRoot_6() { return &___HPRoot_6; }
	inline void set_HPRoot_6(FightHPPanel_t954416996 * value)
	{
		___HPRoot_6 = value;
		Il2CppCodeGenWriteBarrier(&___HPRoot_6, value);
	}

	inline static int32_t get_offset_of_HighlightRender_7() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___HighlightRender_7)); }
	inline HighlightingRenderer_t3709628099 * get_HighlightRender_7() const { return ___HighlightRender_7; }
	inline HighlightingRenderer_t3709628099 ** get_address_of_HighlightRender_7() { return &___HighlightRender_7; }
	inline void set_HighlightRender_7(HighlightingRenderer_t3709628099 * value)
	{
		___HighlightRender_7 = value;
		Il2CppCodeGenWriteBarrier(&___HighlightRender_7, value);
	}

	inline static int32_t get_offset_of_MyFightPoint_8() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___MyFightPoint_8)); }
	inline FightPoint_t146525064 * get_MyFightPoint_8() const { return ___MyFightPoint_8; }
	inline FightPoint_t146525064 ** get_address_of_MyFightPoint_8() { return &___MyFightPoint_8; }
	inline void set_MyFightPoint_8(FightPoint_t146525064 * value)
	{
		___MyFightPoint_8 = value;
		Il2CppCodeGenWriteBarrier(&___MyFightPoint_8, value);
	}

	inline static int32_t get_offset_of_OpFightPoint_9() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___OpFightPoint_9)); }
	inline FightPoint_t146525064 * get_OpFightPoint_9() const { return ___OpFightPoint_9; }
	inline FightPoint_t146525064 ** get_address_of_OpFightPoint_9() { return &___OpFightPoint_9; }
	inline void set_OpFightPoint_9(FightPoint_t146525064 * value)
	{
		___OpFightPoint_9 = value;
		Il2CppCodeGenWriteBarrier(&___OpFightPoint_9, value);
	}

	inline static int32_t get_offset_of_CardRoleDic_10() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___CardRoleDic_10)); }
	inline Dictionary_2_t1725170591 * get_CardRoleDic_10() const { return ___CardRoleDic_10; }
	inline Dictionary_2_t1725170591 ** get_address_of_CardRoleDic_10() { return &___CardRoleDic_10; }
	inline void set_CardRoleDic_10(Dictionary_2_t1725170591 * value)
	{
		___CardRoleDic_10 = value;
		Il2CppCodeGenWriteBarrier(&___CardRoleDic_10, value);
	}

	inline static int32_t get_offset_of_MyPosition_11() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___MyPosition_11)); }
	inline List_1_t2644239190 * get_MyPosition_11() const { return ___MyPosition_11; }
	inline List_1_t2644239190 ** get_address_of_MyPosition_11() { return &___MyPosition_11; }
	inline void set_MyPosition_11(List_1_t2644239190 * value)
	{
		___MyPosition_11 = value;
		Il2CppCodeGenWriteBarrier(&___MyPosition_11, value);
	}

	inline static int32_t get_offset_of_OpPosition_12() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___OpPosition_12)); }
	inline List_1_t2644239190 * get_OpPosition_12() const { return ___OpPosition_12; }
	inline List_1_t2644239190 ** get_address_of_OpPosition_12() { return &___OpPosition_12; }
	inline void set_OpPosition_12(List_1_t2644239190 * value)
	{
		___OpPosition_12 = value;
		Il2CppCodeGenWriteBarrier(&___OpPosition_12, value);
	}

	inline static int32_t get_offset_of_Test_MyAB_13() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___Test_MyAB_13)); }
	inline List_1_t1398341365 * get_Test_MyAB_13() const { return ___Test_MyAB_13; }
	inline List_1_t1398341365 ** get_address_of_Test_MyAB_13() { return &___Test_MyAB_13; }
	inline void set_Test_MyAB_13(List_1_t1398341365 * value)
	{
		___Test_MyAB_13 = value;
		Il2CppCodeGenWriteBarrier(&___Test_MyAB_13, value);
	}

	inline static int32_t get_offset_of_Test_OpAB_14() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___Test_OpAB_14)); }
	inline List_1_t1398341365 * get_Test_OpAB_14() const { return ___Test_OpAB_14; }
	inline List_1_t1398341365 ** get_address_of_Test_OpAB_14() { return &___Test_OpAB_14; }
	inline void set_Test_OpAB_14(List_1_t1398341365 * value)
	{
		___Test_OpAB_14 = value;
		Il2CppCodeGenWriteBarrier(&___Test_OpAB_14, value);
	}

	inline static int32_t get_offset_of_mTweenOutAtkOver_15() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___mTweenOutAtkOver_15)); }
	inline bool get_mTweenOutAtkOver_15() const { return ___mTweenOutAtkOver_15; }
	inline bool* get_address_of_mTweenOutAtkOver_15() { return &___mTweenOutAtkOver_15; }
	inline void set_mTweenOutAtkOver_15(bool value)
	{
		___mTweenOutAtkOver_15 = value;
	}

	inline static int32_t get_offset_of_mTweenOutAtkedOver_16() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___mTweenOutAtkedOver_16)); }
	inline bool get_mTweenOutAtkedOver_16() const { return ___mTweenOutAtkedOver_16; }
	inline bool* get_address_of_mTweenOutAtkedOver_16() { return &___mTweenOutAtkedOver_16; }
	inline void set_mTweenOutAtkedOver_16(bool value)
	{
		___mTweenOutAtkedOver_16 = value;
	}

	inline static int32_t get_offset_of_mFightObject_17() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___mFightObject_17)); }
	inline GameObject_t1756533147 * get_mFightObject_17() const { return ___mFightObject_17; }
	inline GameObject_t1756533147 ** get_address_of_mFightObject_17() { return &___mFightObject_17; }
	inline void set_mFightObject_17(GameObject_t1756533147 * value)
	{
		___mFightObject_17 = value;
		Il2CppCodeGenWriteBarrier(&___mFightObject_17, value);
	}

	inline static int32_t get_offset_of_SimpleHeroDatas_18() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___SimpleHeroDatas_18)); }
	inline List_1_t980487826 * get_SimpleHeroDatas_18() const { return ___SimpleHeroDatas_18; }
	inline List_1_t980487826 ** get_address_of_SimpleHeroDatas_18() { return &___SimpleHeroDatas_18; }
	inline void set_SimpleHeroDatas_18(List_1_t980487826 * value)
	{
		___SimpleHeroDatas_18 = value;
		Il2CppCodeGenWriteBarrier(&___SimpleHeroDatas_18, value);
	}

	inline static int32_t get_offset_of_AllCardRole_21() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___AllCardRole_21)); }
	inline Dictionary_2_t894930024 * get_AllCardRole_21() const { return ___AllCardRole_21; }
	inline Dictionary_2_t894930024 ** get_address_of_AllCardRole_21() { return &___AllCardRole_21; }
	inline void set_AllCardRole_21(Dictionary_2_t894930024 * value)
	{
		___AllCardRole_21 = value;
		Il2CppCodeGenWriteBarrier(&___AllCardRole_21, value);
	}

	inline static int32_t get_offset_of_TweenOutOrgObjectAtk_22() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___TweenOutOrgObjectAtk_22)); }
	inline Transform_t3275118058 * get_TweenOutOrgObjectAtk_22() const { return ___TweenOutOrgObjectAtk_22; }
	inline Transform_t3275118058 ** get_address_of_TweenOutOrgObjectAtk_22() { return &___TweenOutOrgObjectAtk_22; }
	inline void set_TweenOutOrgObjectAtk_22(Transform_t3275118058 * value)
	{
		___TweenOutOrgObjectAtk_22 = value;
		Il2CppCodeGenWriteBarrier(&___TweenOutOrgObjectAtk_22, value);
	}

	inline static int32_t get_offset_of_TweenOutOrgObjectAtked_23() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___TweenOutOrgObjectAtked_23)); }
	inline Transform_t3275118058 * get_TweenOutOrgObjectAtked_23() const { return ___TweenOutOrgObjectAtked_23; }
	inline Transform_t3275118058 ** get_address_of_TweenOutOrgObjectAtked_23() { return &___TweenOutOrgObjectAtked_23; }
	inline void set_TweenOutOrgObjectAtked_23(Transform_t3275118058 * value)
	{
		___TweenOutOrgObjectAtked_23 = value;
		Il2CppCodeGenWriteBarrier(&___TweenOutOrgObjectAtked_23, value);
	}

	inline static int32_t get_offset_of_TweenOutAtk_ResLoaded_24() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___TweenOutAtk_ResLoaded_24)); }
	inline bool get_TweenOutAtk_ResLoaded_24() const { return ___TweenOutAtk_ResLoaded_24; }
	inline bool* get_address_of_TweenOutAtk_ResLoaded_24() { return &___TweenOutAtk_ResLoaded_24; }
	inline void set_TweenOutAtk_ResLoaded_24(bool value)
	{
		___TweenOutAtk_ResLoaded_24 = value;
	}

	inline static int32_t get_offset_of_TweenOutAtked_ResLoaded_25() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___TweenOutAtked_ResLoaded_25)); }
	inline bool get_TweenOutAtked_ResLoaded_25() const { return ___TweenOutAtked_ResLoaded_25; }
	inline bool* get_address_of_TweenOutAtked_ResLoaded_25() { return &___TweenOutAtked_ResLoaded_25; }
	inline void set_TweenOutAtked_ResLoaded_25(bool value)
	{
		___TweenOutAtked_ResLoaded_25 = value;
	}

	inline static int32_t get_offset_of_TweenOutAtk_26() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___TweenOutAtk_26)); }
	inline TweenLayerUtil_t1100282932 * get_TweenOutAtk_26() const { return ___TweenOutAtk_26; }
	inline TweenLayerUtil_t1100282932 ** get_address_of_TweenOutAtk_26() { return &___TweenOutAtk_26; }
	inline void set_TweenOutAtk_26(TweenLayerUtil_t1100282932 * value)
	{
		___TweenOutAtk_26 = value;
		Il2CppCodeGenWriteBarrier(&___TweenOutAtk_26, value);
	}

	inline static int32_t get_offset_of_TweenOutAtked_27() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___TweenOutAtked_27)); }
	inline TweenLayerUtil_t1100282932 * get_TweenOutAtked_27() const { return ___TweenOutAtked_27; }
	inline TweenLayerUtil_t1100282932 ** get_address_of_TweenOutAtked_27() { return &___TweenOutAtked_27; }
	inline void set_TweenOutAtked_27(TweenLayerUtil_t1100282932 * value)
	{
		___TweenOutAtked_27 = value;
		Il2CppCodeGenWriteBarrier(&___TweenOutAtked_27, value);
	}

	inline static int32_t get_offset_of_mAtkCfg_28() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___mAtkCfg_28)); }
	inline TD_Hero_t2962140565 * get_mAtkCfg_28() const { return ___mAtkCfg_28; }
	inline TD_Hero_t2962140565 ** get_address_of_mAtkCfg_28() { return &___mAtkCfg_28; }
	inline void set_mAtkCfg_28(TD_Hero_t2962140565 * value)
	{
		___mAtkCfg_28 = value;
		Il2CppCodeGenWriteBarrier(&___mAtkCfg_28, value);
	}

	inline static int32_t get_offset_of_mAtkedCfg_29() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___mAtkedCfg_29)); }
	inline TD_Hero_t2962140565 * get_mAtkedCfg_29() const { return ___mAtkedCfg_29; }
	inline TD_Hero_t2962140565 ** get_address_of_mAtkedCfg_29() { return &___mAtkedCfg_29; }
	inline void set_mAtkedCfg_29(TD_Hero_t2962140565 * value)
	{
		___mAtkedCfg_29 = value;
		Il2CppCodeGenWriteBarrier(&___mAtkedCfg_29, value);
	}

	inline static int32_t get_offset_of_mAtkOutTransform_30() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___mAtkOutTransform_30)); }
	inline Transform_t3275118058 * get_mAtkOutTransform_30() const { return ___mAtkOutTransform_30; }
	inline Transform_t3275118058 ** get_address_of_mAtkOutTransform_30() { return &___mAtkOutTransform_30; }
	inline void set_mAtkOutTransform_30(Transform_t3275118058 * value)
	{
		___mAtkOutTransform_30 = value;
		Il2CppCodeGenWriteBarrier(&___mAtkOutTransform_30, value);
	}

	inline static int32_t get_offset_of_mAtkedOutTransform_31() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___mAtkedOutTransform_31)); }
	inline Transform_t3275118058 * get_mAtkedOutTransform_31() const { return ___mAtkedOutTransform_31; }
	inline Transform_t3275118058 ** get_address_of_mAtkedOutTransform_31() { return &___mAtkedOutTransform_31; }
	inline void set_mAtkedOutTransform_31(Transform_t3275118058 * value)
	{
		___mAtkedOutTransform_31 = value;
		Il2CppCodeGenWriteBarrier(&___mAtkedOutTransform_31, value);
	}

	inline static int32_t get_offset_of_mAtkBackTransform_32() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___mAtkBackTransform_32)); }
	inline Transform_t3275118058 * get_mAtkBackTransform_32() const { return ___mAtkBackTransform_32; }
	inline Transform_t3275118058 ** get_address_of_mAtkBackTransform_32() { return &___mAtkBackTransform_32; }
	inline void set_mAtkBackTransform_32(Transform_t3275118058 * value)
	{
		___mAtkBackTransform_32 = value;
		Il2CppCodeGenWriteBarrier(&___mAtkBackTransform_32, value);
	}

	inline static int32_t get_offset_of_mAtkedBackTransform_33() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___mAtkedBackTransform_33)); }
	inline Transform_t3275118058 * get_mAtkedBackTransform_33() const { return ___mAtkedBackTransform_33; }
	inline Transform_t3275118058 ** get_address_of_mAtkedBackTransform_33() { return &___mAtkedBackTransform_33; }
	inline void set_mAtkedBackTransform_33(Transform_t3275118058 * value)
	{
		___mAtkedBackTransform_33 = value;
		Il2CppCodeGenWriteBarrier(&___mAtkedBackTransform_33, value);
	}

	inline static int32_t get_offset_of_IsMirror_34() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___IsMirror_34)); }
	inline bool get_IsMirror_34() const { return ___IsMirror_34; }
	inline bool* get_address_of_IsMirror_34() { return &___IsMirror_34; }
	inline void set_IsMirror_34(bool value)
	{
		___IsMirror_34 = value;
	}

	inline static int32_t get_offset_of_LoadMapThenAvatarComplete_35() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891, ___LoadMapThenAvatarComplete_35)); }
	inline UnityAction_t4025899511 * get_LoadMapThenAvatarComplete_35() const { return ___LoadMapThenAvatarComplete_35; }
	inline UnityAction_t4025899511 ** get_address_of_LoadMapThenAvatarComplete_35() { return &___LoadMapThenAvatarComplete_35; }
	inline void set_LoadMapThenAvatarComplete_35(UnityAction_t4025899511 * value)
	{
		___LoadMapThenAvatarComplete_35 = value;
		Il2CppCodeGenWriteBarrier(&___LoadMapThenAvatarComplete_35, value);
	}
};

struct PVPManager_t1735089891_StaticFields
{
public:
	// PVPManager PVPManager::Instance
	PVPManager_t1735089891 * ___Instance_2;
	// UnityEngine.Events.UnityAction PVPManager::on_complete_avatar
	UnityAction_t4025899511 * ___on_complete_avatar_19;
	// UnityEngine.Events.UnityAction PVPManager::on_complete_map
	UnityAction_t4025899511 * ___on_complete_map_20;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891_StaticFields, ___Instance_2)); }
	inline PVPManager_t1735089891 * get_Instance_2() const { return ___Instance_2; }
	inline PVPManager_t1735089891 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(PVPManager_t1735089891 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}

	inline static int32_t get_offset_of_on_complete_avatar_19() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891_StaticFields, ___on_complete_avatar_19)); }
	inline UnityAction_t4025899511 * get_on_complete_avatar_19() const { return ___on_complete_avatar_19; }
	inline UnityAction_t4025899511 ** get_address_of_on_complete_avatar_19() { return &___on_complete_avatar_19; }
	inline void set_on_complete_avatar_19(UnityAction_t4025899511 * value)
	{
		___on_complete_avatar_19 = value;
		Il2CppCodeGenWriteBarrier(&___on_complete_avatar_19, value);
	}

	inline static int32_t get_offset_of_on_complete_map_20() { return static_cast<int32_t>(offsetof(PVPManager_t1735089891_StaticFields, ___on_complete_map_20)); }
	inline UnityAction_t4025899511 * get_on_complete_map_20() const { return ___on_complete_map_20; }
	inline UnityAction_t4025899511 ** get_address_of_on_complete_map_20() { return &___on_complete_map_20; }
	inline void set_on_complete_map_20(UnityAction_t4025899511 * value)
	{
		___on_complete_map_20 = value;
		Il2CppCodeGenWriteBarrier(&___on_complete_map_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
