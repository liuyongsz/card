#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Main
struct Main_t2809994845;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// UnityEngine.Camera
struct Camera_t189460977;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;
// NetHelper
struct NetHelper_t3009256999;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Main
struct  Main_t2809994845  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Main::GameDebug
	bool ___GameDebug_2;
	// System.Boolean Main::UsePassGroundBall
	bool ___UsePassGroundBall_3;
	// UnityEngine.GameObject Main::loading
	GameObject_t1756533147 * ___loading_7;
	// UnityEngine.Camera Main::Camera3D
	Camera_t189460977 * ___Camera3D_9;
	// System.String Main::myName
	String_t* ___myName_12;

public:
	inline static int32_t get_offset_of_GameDebug_2() { return static_cast<int32_t>(offsetof(Main_t2809994845, ___GameDebug_2)); }
	inline bool get_GameDebug_2() const { return ___GameDebug_2; }
	inline bool* get_address_of_GameDebug_2() { return &___GameDebug_2; }
	inline void set_GameDebug_2(bool value)
	{
		___GameDebug_2 = value;
	}

	inline static int32_t get_offset_of_UsePassGroundBall_3() { return static_cast<int32_t>(offsetof(Main_t2809994845, ___UsePassGroundBall_3)); }
	inline bool get_UsePassGroundBall_3() const { return ___UsePassGroundBall_3; }
	inline bool* get_address_of_UsePassGroundBall_3() { return &___UsePassGroundBall_3; }
	inline void set_UsePassGroundBall_3(bool value)
	{
		___UsePassGroundBall_3 = value;
	}

	inline static int32_t get_offset_of_loading_7() { return static_cast<int32_t>(offsetof(Main_t2809994845, ___loading_7)); }
	inline GameObject_t1756533147 * get_loading_7() const { return ___loading_7; }
	inline GameObject_t1756533147 ** get_address_of_loading_7() { return &___loading_7; }
	inline void set_loading_7(GameObject_t1756533147 * value)
	{
		___loading_7 = value;
		Il2CppCodeGenWriteBarrier(&___loading_7, value);
	}

	inline static int32_t get_offset_of_Camera3D_9() { return static_cast<int32_t>(offsetof(Main_t2809994845, ___Camera3D_9)); }
	inline Camera_t189460977 * get_Camera3D_9() const { return ___Camera3D_9; }
	inline Camera_t189460977 ** get_address_of_Camera3D_9() { return &___Camera3D_9; }
	inline void set_Camera3D_9(Camera_t189460977 * value)
	{
		___Camera3D_9 = value;
		Il2CppCodeGenWriteBarrier(&___Camera3D_9, value);
	}

	inline static int32_t get_offset_of_myName_12() { return static_cast<int32_t>(offsetof(Main_t2809994845, ___myName_12)); }
	inline String_t* get_myName_12() const { return ___myName_12; }
	inline String_t** get_address_of_myName_12() { return &___myName_12; }
	inline void set_myName_12(String_t* value)
	{
		___myName_12 = value;
		Il2CppCodeGenWriteBarrier(&___myName_12, value);
	}
};

struct Main_t2809994845_StaticFields
{
public:
	// Main Main::Ins
	Main_t2809994845 * ___Ins_4;
	// UnityEngine.Sprite Main::m_defaultsprite
	Sprite_t309593783 * ___m_defaultsprite_5;
	// UnityEngine.Texture2D Main::m_defaultTexture
	Texture2D_t3542995729 * ___m_defaultTexture_6;
	// UnityEngine.Events.UnityAction Main::SoketCallBack
	UnityAction_t4025899511 * ___SoketCallBack_8;
	// UnityEngine.Camera Main::CameraUI
	Camera_t189460977 * ___CameraUI_10;
	// UnityEngine.Camera Main::CameraHPUI
	Camera_t189460977 * ___CameraHPUI_11;
	// UnityEngine.Transform Main::m_DestoryNode
	Transform_t3275118058 * ___m_DestoryNode_13;
	// UnityEngine.Transform Main::m_UIRoot
	Transform_t3275118058 * ___m_UIRoot_14;
	// UnityEngine.Transform Main::m_UIRoot3D
	Transform_t3275118058 * ___m_UIRoot3D_15;
	// System.Int64 Main::heartTime
	int64_t ___heartTime_16;
	// System.Boolean Main::isHeart
	bool ___isHeart_17;
	// NetHelper Main::m_netHelp
	NetHelper_t3009256999 * ___m_netHelp_18;
	// System.String Main::WarningString
	String_t* ___WarningString_19;

public:
	inline static int32_t get_offset_of_Ins_4() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___Ins_4)); }
	inline Main_t2809994845 * get_Ins_4() const { return ___Ins_4; }
	inline Main_t2809994845 ** get_address_of_Ins_4() { return &___Ins_4; }
	inline void set_Ins_4(Main_t2809994845 * value)
	{
		___Ins_4 = value;
		Il2CppCodeGenWriteBarrier(&___Ins_4, value);
	}

	inline static int32_t get_offset_of_m_defaultsprite_5() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___m_defaultsprite_5)); }
	inline Sprite_t309593783 * get_m_defaultsprite_5() const { return ___m_defaultsprite_5; }
	inline Sprite_t309593783 ** get_address_of_m_defaultsprite_5() { return &___m_defaultsprite_5; }
	inline void set_m_defaultsprite_5(Sprite_t309593783 * value)
	{
		___m_defaultsprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_defaultsprite_5, value);
	}

	inline static int32_t get_offset_of_m_defaultTexture_6() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___m_defaultTexture_6)); }
	inline Texture2D_t3542995729 * get_m_defaultTexture_6() const { return ___m_defaultTexture_6; }
	inline Texture2D_t3542995729 ** get_address_of_m_defaultTexture_6() { return &___m_defaultTexture_6; }
	inline void set_m_defaultTexture_6(Texture2D_t3542995729 * value)
	{
		___m_defaultTexture_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_defaultTexture_6, value);
	}

	inline static int32_t get_offset_of_SoketCallBack_8() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___SoketCallBack_8)); }
	inline UnityAction_t4025899511 * get_SoketCallBack_8() const { return ___SoketCallBack_8; }
	inline UnityAction_t4025899511 ** get_address_of_SoketCallBack_8() { return &___SoketCallBack_8; }
	inline void set_SoketCallBack_8(UnityAction_t4025899511 * value)
	{
		___SoketCallBack_8 = value;
		Il2CppCodeGenWriteBarrier(&___SoketCallBack_8, value);
	}

	inline static int32_t get_offset_of_CameraUI_10() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___CameraUI_10)); }
	inline Camera_t189460977 * get_CameraUI_10() const { return ___CameraUI_10; }
	inline Camera_t189460977 ** get_address_of_CameraUI_10() { return &___CameraUI_10; }
	inline void set_CameraUI_10(Camera_t189460977 * value)
	{
		___CameraUI_10 = value;
		Il2CppCodeGenWriteBarrier(&___CameraUI_10, value);
	}

	inline static int32_t get_offset_of_CameraHPUI_11() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___CameraHPUI_11)); }
	inline Camera_t189460977 * get_CameraHPUI_11() const { return ___CameraHPUI_11; }
	inline Camera_t189460977 ** get_address_of_CameraHPUI_11() { return &___CameraHPUI_11; }
	inline void set_CameraHPUI_11(Camera_t189460977 * value)
	{
		___CameraHPUI_11 = value;
		Il2CppCodeGenWriteBarrier(&___CameraHPUI_11, value);
	}

	inline static int32_t get_offset_of_m_DestoryNode_13() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___m_DestoryNode_13)); }
	inline Transform_t3275118058 * get_m_DestoryNode_13() const { return ___m_DestoryNode_13; }
	inline Transform_t3275118058 ** get_address_of_m_DestoryNode_13() { return &___m_DestoryNode_13; }
	inline void set_m_DestoryNode_13(Transform_t3275118058 * value)
	{
		___m_DestoryNode_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_DestoryNode_13, value);
	}

	inline static int32_t get_offset_of_m_UIRoot_14() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___m_UIRoot_14)); }
	inline Transform_t3275118058 * get_m_UIRoot_14() const { return ___m_UIRoot_14; }
	inline Transform_t3275118058 ** get_address_of_m_UIRoot_14() { return &___m_UIRoot_14; }
	inline void set_m_UIRoot_14(Transform_t3275118058 * value)
	{
		___m_UIRoot_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_UIRoot_14, value);
	}

	inline static int32_t get_offset_of_m_UIRoot3D_15() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___m_UIRoot3D_15)); }
	inline Transform_t3275118058 * get_m_UIRoot3D_15() const { return ___m_UIRoot3D_15; }
	inline Transform_t3275118058 ** get_address_of_m_UIRoot3D_15() { return &___m_UIRoot3D_15; }
	inline void set_m_UIRoot3D_15(Transform_t3275118058 * value)
	{
		___m_UIRoot3D_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_UIRoot3D_15, value);
	}

	inline static int32_t get_offset_of_heartTime_16() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___heartTime_16)); }
	inline int64_t get_heartTime_16() const { return ___heartTime_16; }
	inline int64_t* get_address_of_heartTime_16() { return &___heartTime_16; }
	inline void set_heartTime_16(int64_t value)
	{
		___heartTime_16 = value;
	}

	inline static int32_t get_offset_of_isHeart_17() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___isHeart_17)); }
	inline bool get_isHeart_17() const { return ___isHeart_17; }
	inline bool* get_address_of_isHeart_17() { return &___isHeart_17; }
	inline void set_isHeart_17(bool value)
	{
		___isHeart_17 = value;
	}

	inline static int32_t get_offset_of_m_netHelp_18() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___m_netHelp_18)); }
	inline NetHelper_t3009256999 * get_m_netHelp_18() const { return ___m_netHelp_18; }
	inline NetHelper_t3009256999 ** get_address_of_m_netHelp_18() { return &___m_netHelp_18; }
	inline void set_m_netHelp_18(NetHelper_t3009256999 * value)
	{
		___m_netHelp_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_netHelp_18, value);
	}

	inline static int32_t get_offset_of_WarningString_19() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___WarningString_19)); }
	inline String_t* get_WarningString_19() const { return ___WarningString_19; }
	inline String_t** get_address_of_WarningString_19() { return &___WarningString_19; }
	inline void set_WarningString_19(String_t* value)
	{
		___WarningString_19 = value;
		Il2CppCodeGenWriteBarrier(&___WarningString_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
