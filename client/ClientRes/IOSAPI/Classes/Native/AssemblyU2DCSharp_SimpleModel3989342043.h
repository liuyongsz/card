#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextAsset
struct TextAsset_t3973159845;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2724090252;
// live2d.Live2DModelUnity
struct Live2DModelUnity_t3366005376;
// live2d.EyeBlinkMotion
struct EyeBlinkMotion_t1361528585;
// live2d.framework.L2DTargetPoint
struct L2DTargetPoint_t1431438699;
// live2d.framework.L2DPhysics
struct L2DPhysics_t11740845;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleModel
struct  SimpleModel_t3989342043  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.TextAsset SimpleModel::mocFile
	TextAsset_t3973159845 * ___mocFile_2;
	// UnityEngine.TextAsset SimpleModel::physicsFile
	TextAsset_t3973159845 * ___physicsFile_3;
	// UnityEngine.Texture2D[] SimpleModel::textureFiles
	Texture2DU5BU5D_t2724090252* ___textureFiles_4;
	// live2d.Live2DModelUnity SimpleModel::live2DModel
	Live2DModelUnity_t3366005376 * ___live2DModel_5;
	// live2d.EyeBlinkMotion SimpleModel::eyeBlink
	EyeBlinkMotion_t1361528585 * ___eyeBlink_6;
	// live2d.framework.L2DTargetPoint SimpleModel::dragMgr
	L2DTargetPoint_t1431438699 * ___dragMgr_7;
	// live2d.framework.L2DPhysics SimpleModel::physics
	L2DPhysics_t11740845 * ___physics_8;
	// UnityEngine.Matrix4x4 SimpleModel::live2DCanvasPos
	Matrix4x4_t2933234003  ___live2DCanvasPos_9;

public:
	inline static int32_t get_offset_of_mocFile_2() { return static_cast<int32_t>(offsetof(SimpleModel_t3989342043, ___mocFile_2)); }
	inline TextAsset_t3973159845 * get_mocFile_2() const { return ___mocFile_2; }
	inline TextAsset_t3973159845 ** get_address_of_mocFile_2() { return &___mocFile_2; }
	inline void set_mocFile_2(TextAsset_t3973159845 * value)
	{
		___mocFile_2 = value;
		Il2CppCodeGenWriteBarrier(&___mocFile_2, value);
	}

	inline static int32_t get_offset_of_physicsFile_3() { return static_cast<int32_t>(offsetof(SimpleModel_t3989342043, ___physicsFile_3)); }
	inline TextAsset_t3973159845 * get_physicsFile_3() const { return ___physicsFile_3; }
	inline TextAsset_t3973159845 ** get_address_of_physicsFile_3() { return &___physicsFile_3; }
	inline void set_physicsFile_3(TextAsset_t3973159845 * value)
	{
		___physicsFile_3 = value;
		Il2CppCodeGenWriteBarrier(&___physicsFile_3, value);
	}

	inline static int32_t get_offset_of_textureFiles_4() { return static_cast<int32_t>(offsetof(SimpleModel_t3989342043, ___textureFiles_4)); }
	inline Texture2DU5BU5D_t2724090252* get_textureFiles_4() const { return ___textureFiles_4; }
	inline Texture2DU5BU5D_t2724090252** get_address_of_textureFiles_4() { return &___textureFiles_4; }
	inline void set_textureFiles_4(Texture2DU5BU5D_t2724090252* value)
	{
		___textureFiles_4 = value;
		Il2CppCodeGenWriteBarrier(&___textureFiles_4, value);
	}

	inline static int32_t get_offset_of_live2DModel_5() { return static_cast<int32_t>(offsetof(SimpleModel_t3989342043, ___live2DModel_5)); }
	inline Live2DModelUnity_t3366005376 * get_live2DModel_5() const { return ___live2DModel_5; }
	inline Live2DModelUnity_t3366005376 ** get_address_of_live2DModel_5() { return &___live2DModel_5; }
	inline void set_live2DModel_5(Live2DModelUnity_t3366005376 * value)
	{
		___live2DModel_5 = value;
		Il2CppCodeGenWriteBarrier(&___live2DModel_5, value);
	}

	inline static int32_t get_offset_of_eyeBlink_6() { return static_cast<int32_t>(offsetof(SimpleModel_t3989342043, ___eyeBlink_6)); }
	inline EyeBlinkMotion_t1361528585 * get_eyeBlink_6() const { return ___eyeBlink_6; }
	inline EyeBlinkMotion_t1361528585 ** get_address_of_eyeBlink_6() { return &___eyeBlink_6; }
	inline void set_eyeBlink_6(EyeBlinkMotion_t1361528585 * value)
	{
		___eyeBlink_6 = value;
		Il2CppCodeGenWriteBarrier(&___eyeBlink_6, value);
	}

	inline static int32_t get_offset_of_dragMgr_7() { return static_cast<int32_t>(offsetof(SimpleModel_t3989342043, ___dragMgr_7)); }
	inline L2DTargetPoint_t1431438699 * get_dragMgr_7() const { return ___dragMgr_7; }
	inline L2DTargetPoint_t1431438699 ** get_address_of_dragMgr_7() { return &___dragMgr_7; }
	inline void set_dragMgr_7(L2DTargetPoint_t1431438699 * value)
	{
		___dragMgr_7 = value;
		Il2CppCodeGenWriteBarrier(&___dragMgr_7, value);
	}

	inline static int32_t get_offset_of_physics_8() { return static_cast<int32_t>(offsetof(SimpleModel_t3989342043, ___physics_8)); }
	inline L2DPhysics_t11740845 * get_physics_8() const { return ___physics_8; }
	inline L2DPhysics_t11740845 ** get_address_of_physics_8() { return &___physics_8; }
	inline void set_physics_8(L2DPhysics_t11740845 * value)
	{
		___physics_8 = value;
		Il2CppCodeGenWriteBarrier(&___physics_8, value);
	}

	inline static int32_t get_offset_of_live2DCanvasPos_9() { return static_cast<int32_t>(offsetof(SimpleModel_t3989342043, ___live2DCanvasPos_9)); }
	inline Matrix4x4_t2933234003  get_live2DCanvasPos_9() const { return ___live2DCanvasPos_9; }
	inline Matrix4x4_t2933234003 * get_address_of_live2DCanvasPos_9() { return &___live2DCanvasPos_9; }
	inline void set_live2DCanvasPos_9(Matrix4x4_t2933234003  value)
	{
		___live2DCanvasPos_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
