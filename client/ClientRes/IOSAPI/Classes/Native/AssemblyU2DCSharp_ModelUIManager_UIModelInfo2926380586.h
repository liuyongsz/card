#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// System.String
struct String_t;
// UnityEngine.Light
struct Light_t494725636;
// UIViewport
struct UIViewport_t1541362616;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModelUIManager/UIModelInfo
struct  UIModelInfo_t2926380586  : public Il2CppObject
{
public:
	// System.Object ModelUIManager/UIModelInfo::oCustomDataObject
	Il2CppObject * ___oCustomDataObject_0;
	// UnityEngine.GameObject ModelUIManager/UIModelInfo::oRoot
	GameObject_t1756533147 * ___oRoot_1;
	// UnityEngine.Camera ModelUIManager/UIModelInfo::camera
	Camera_t189460977 * ___camera_2;
	// UnityEngine.RenderTexture ModelUIManager/UIModelInfo::rtexture
	RenderTexture_t2666733923 * ___rtexture_3;
	// UnityEngine.GameObject ModelUIManager/UIModelInfo::oModel
	GameObject_t1756533147 * ___oModel_4;
	// System.String ModelUIManager/UIModelInfo::strModelRes
	String_t* ___strModelRes_5;
	// UnityEngine.Light ModelUIManager/UIModelInfo::oLight
	Light_t494725636 * ___oLight_6;
	// UIViewport ModelUIManager/UIModelInfo::vp
	UIViewport_t1541362616 * ___vp_7;
	// UnityEngine.Transform ModelUIManager/UIModelInfo::bg1
	Transform_t3275118058 * ___bg1_8;
	// UnityEngine.Transform ModelUIManager/UIModelInfo::bg2
	Transform_t3275118058 * ___bg2_9;
	// UnityEngine.Vector3 ModelUIManager/UIModelInfo::localOffsetForGoRoot
	Vector3_t2243707580  ___localOffsetForGoRoot_10;
	// System.Int32 ModelUIManager/UIModelInfo::iState
	int32_t ___iState_11;

public:
	inline static int32_t get_offset_of_oCustomDataObject_0() { return static_cast<int32_t>(offsetof(UIModelInfo_t2926380586, ___oCustomDataObject_0)); }
	inline Il2CppObject * get_oCustomDataObject_0() const { return ___oCustomDataObject_0; }
	inline Il2CppObject ** get_address_of_oCustomDataObject_0() { return &___oCustomDataObject_0; }
	inline void set_oCustomDataObject_0(Il2CppObject * value)
	{
		___oCustomDataObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___oCustomDataObject_0, value);
	}

	inline static int32_t get_offset_of_oRoot_1() { return static_cast<int32_t>(offsetof(UIModelInfo_t2926380586, ___oRoot_1)); }
	inline GameObject_t1756533147 * get_oRoot_1() const { return ___oRoot_1; }
	inline GameObject_t1756533147 ** get_address_of_oRoot_1() { return &___oRoot_1; }
	inline void set_oRoot_1(GameObject_t1756533147 * value)
	{
		___oRoot_1 = value;
		Il2CppCodeGenWriteBarrier(&___oRoot_1, value);
	}

	inline static int32_t get_offset_of_camera_2() { return static_cast<int32_t>(offsetof(UIModelInfo_t2926380586, ___camera_2)); }
	inline Camera_t189460977 * get_camera_2() const { return ___camera_2; }
	inline Camera_t189460977 ** get_address_of_camera_2() { return &___camera_2; }
	inline void set_camera_2(Camera_t189460977 * value)
	{
		___camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___camera_2, value);
	}

	inline static int32_t get_offset_of_rtexture_3() { return static_cast<int32_t>(offsetof(UIModelInfo_t2926380586, ___rtexture_3)); }
	inline RenderTexture_t2666733923 * get_rtexture_3() const { return ___rtexture_3; }
	inline RenderTexture_t2666733923 ** get_address_of_rtexture_3() { return &___rtexture_3; }
	inline void set_rtexture_3(RenderTexture_t2666733923 * value)
	{
		___rtexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___rtexture_3, value);
	}

	inline static int32_t get_offset_of_oModel_4() { return static_cast<int32_t>(offsetof(UIModelInfo_t2926380586, ___oModel_4)); }
	inline GameObject_t1756533147 * get_oModel_4() const { return ___oModel_4; }
	inline GameObject_t1756533147 ** get_address_of_oModel_4() { return &___oModel_4; }
	inline void set_oModel_4(GameObject_t1756533147 * value)
	{
		___oModel_4 = value;
		Il2CppCodeGenWriteBarrier(&___oModel_4, value);
	}

	inline static int32_t get_offset_of_strModelRes_5() { return static_cast<int32_t>(offsetof(UIModelInfo_t2926380586, ___strModelRes_5)); }
	inline String_t* get_strModelRes_5() const { return ___strModelRes_5; }
	inline String_t** get_address_of_strModelRes_5() { return &___strModelRes_5; }
	inline void set_strModelRes_5(String_t* value)
	{
		___strModelRes_5 = value;
		Il2CppCodeGenWriteBarrier(&___strModelRes_5, value);
	}

	inline static int32_t get_offset_of_oLight_6() { return static_cast<int32_t>(offsetof(UIModelInfo_t2926380586, ___oLight_6)); }
	inline Light_t494725636 * get_oLight_6() const { return ___oLight_6; }
	inline Light_t494725636 ** get_address_of_oLight_6() { return &___oLight_6; }
	inline void set_oLight_6(Light_t494725636 * value)
	{
		___oLight_6 = value;
		Il2CppCodeGenWriteBarrier(&___oLight_6, value);
	}

	inline static int32_t get_offset_of_vp_7() { return static_cast<int32_t>(offsetof(UIModelInfo_t2926380586, ___vp_7)); }
	inline UIViewport_t1541362616 * get_vp_7() const { return ___vp_7; }
	inline UIViewport_t1541362616 ** get_address_of_vp_7() { return &___vp_7; }
	inline void set_vp_7(UIViewport_t1541362616 * value)
	{
		___vp_7 = value;
		Il2CppCodeGenWriteBarrier(&___vp_7, value);
	}

	inline static int32_t get_offset_of_bg1_8() { return static_cast<int32_t>(offsetof(UIModelInfo_t2926380586, ___bg1_8)); }
	inline Transform_t3275118058 * get_bg1_8() const { return ___bg1_8; }
	inline Transform_t3275118058 ** get_address_of_bg1_8() { return &___bg1_8; }
	inline void set_bg1_8(Transform_t3275118058 * value)
	{
		___bg1_8 = value;
		Il2CppCodeGenWriteBarrier(&___bg1_8, value);
	}

	inline static int32_t get_offset_of_bg2_9() { return static_cast<int32_t>(offsetof(UIModelInfo_t2926380586, ___bg2_9)); }
	inline Transform_t3275118058 * get_bg2_9() const { return ___bg2_9; }
	inline Transform_t3275118058 ** get_address_of_bg2_9() { return &___bg2_9; }
	inline void set_bg2_9(Transform_t3275118058 * value)
	{
		___bg2_9 = value;
		Il2CppCodeGenWriteBarrier(&___bg2_9, value);
	}

	inline static int32_t get_offset_of_localOffsetForGoRoot_10() { return static_cast<int32_t>(offsetof(UIModelInfo_t2926380586, ___localOffsetForGoRoot_10)); }
	inline Vector3_t2243707580  get_localOffsetForGoRoot_10() const { return ___localOffsetForGoRoot_10; }
	inline Vector3_t2243707580 * get_address_of_localOffsetForGoRoot_10() { return &___localOffsetForGoRoot_10; }
	inline void set_localOffsetForGoRoot_10(Vector3_t2243707580  value)
	{
		___localOffsetForGoRoot_10 = value;
	}

	inline static int32_t get_offset_of_iState_11() { return static_cast<int32_t>(offsetof(UIModelInfo_t2926380586, ___iState_11)); }
	inline int32_t get_iState_11() const { return ___iState_11; }
	inline int32_t* get_address_of_iState_11() { return &___iState_11; }
	inline void set_iState_11(int32_t value)
	{
		___iState_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
