#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIDrawCall>
struct BetterList_1_t3512232154;
// UIPanel
struct UIPanel_t1795085332;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t2464096222;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t2464096223;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t2464096221;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t1094906160;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Generic.List`1<System.Int32[]>
struct List_1_t2399520773;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIDrawCall_Clipping4042448929.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDrawCall
struct  UIDrawCall_t3291843512  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 UIDrawCall::depthStart
	int32_t ___depthStart_5;
	// System.Int32 UIDrawCall::depthEnd
	int32_t ___depthEnd_6;
	// UIPanel UIDrawCall::manager
	UIPanel_t1795085332 * ___manager_7;
	// UIPanel UIDrawCall::panel
	UIPanel_t1795085332 * ___panel_8;
	// System.Boolean UIDrawCall::alwaysOnScreen
	bool ___alwaysOnScreen_9;
	// BetterList`1<UnityEngine.Vector3> UIDrawCall::verts
	BetterList_1_t2464096222 * ___verts_10;
	// BetterList`1<UnityEngine.Vector3> UIDrawCall::norms
	BetterList_1_t2464096222 * ___norms_11;
	// BetterList`1<UnityEngine.Vector4> UIDrawCall::tans
	BetterList_1_t2464096223 * ___tans_12;
	// BetterList`1<UnityEngine.Vector2> UIDrawCall::uvs
	BetterList_1_t2464096221 * ___uvs_13;
	// BetterList`1<UnityEngine.Color32> UIDrawCall::cols
	BetterList_1_t1094906160 * ___cols_14;
	// UnityEngine.Material UIDrawCall::mMaterial
	Material_t193706927 * ___mMaterial_15;
	// UnityEngine.Texture UIDrawCall::mTexture
	Texture_t2243626319 * ___mTexture_16;
	// UnityEngine.Shader UIDrawCall::mShader
	Shader_t2430389951 * ___mShader_17;
	// UIDrawCall/Clipping UIDrawCall::mClipping
	int32_t ___mClipping_18;
	// UnityEngine.Vector4 UIDrawCall::mClipRange
	Vector4_t2243707581  ___mClipRange_19;
	// UnityEngine.Vector2 UIDrawCall::mClipSoft
	Vector2_t2243707579  ___mClipSoft_20;
	// UnityEngine.Transform UIDrawCall::mTrans
	Transform_t3275118058 * ___mTrans_21;
	// UnityEngine.Mesh UIDrawCall::mMesh
	Mesh_t1356156583 * ___mMesh_22;
	// UnityEngine.MeshFilter UIDrawCall::mFilter
	MeshFilter_t3026937449 * ___mFilter_23;
	// UnityEngine.MeshRenderer UIDrawCall::mRenderer
	MeshRenderer_t1268241104 * ___mRenderer_24;
	// UnityEngine.Material UIDrawCall::mDynamicMat
	Material_t193706927 * ___mDynamicMat_25;
	// System.Int32[] UIDrawCall::mIndices
	Int32U5BU5D_t3030399641* ___mIndices_26;
	// System.Boolean UIDrawCall::mRebuildMat
	bool ___mRebuildMat_27;
	// System.Boolean UIDrawCall::mReset
	bool ___mReset_28;
	// System.Int32 UIDrawCall::mRenderQueue
	int32_t ___mRenderQueue_29;
	// UIDrawCall/Clipping UIDrawCall::mLastClip
	int32_t ___mLastClip_30;
	// System.Int32 UIDrawCall::mTriangles
	int32_t ___mTriangles_31;
	// System.Boolean UIDrawCall::isDirty
	bool ___isDirty_32;

public:
	inline static int32_t get_offset_of_depthStart_5() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___depthStart_5)); }
	inline int32_t get_depthStart_5() const { return ___depthStart_5; }
	inline int32_t* get_address_of_depthStart_5() { return &___depthStart_5; }
	inline void set_depthStart_5(int32_t value)
	{
		___depthStart_5 = value;
	}

	inline static int32_t get_offset_of_depthEnd_6() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___depthEnd_6)); }
	inline int32_t get_depthEnd_6() const { return ___depthEnd_6; }
	inline int32_t* get_address_of_depthEnd_6() { return &___depthEnd_6; }
	inline void set_depthEnd_6(int32_t value)
	{
		___depthEnd_6 = value;
	}

	inline static int32_t get_offset_of_manager_7() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___manager_7)); }
	inline UIPanel_t1795085332 * get_manager_7() const { return ___manager_7; }
	inline UIPanel_t1795085332 ** get_address_of_manager_7() { return &___manager_7; }
	inline void set_manager_7(UIPanel_t1795085332 * value)
	{
		___manager_7 = value;
		Il2CppCodeGenWriteBarrier(&___manager_7, value);
	}

	inline static int32_t get_offset_of_panel_8() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___panel_8)); }
	inline UIPanel_t1795085332 * get_panel_8() const { return ___panel_8; }
	inline UIPanel_t1795085332 ** get_address_of_panel_8() { return &___panel_8; }
	inline void set_panel_8(UIPanel_t1795085332 * value)
	{
		___panel_8 = value;
		Il2CppCodeGenWriteBarrier(&___panel_8, value);
	}

	inline static int32_t get_offset_of_alwaysOnScreen_9() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___alwaysOnScreen_9)); }
	inline bool get_alwaysOnScreen_9() const { return ___alwaysOnScreen_9; }
	inline bool* get_address_of_alwaysOnScreen_9() { return &___alwaysOnScreen_9; }
	inline void set_alwaysOnScreen_9(bool value)
	{
		___alwaysOnScreen_9 = value;
	}

	inline static int32_t get_offset_of_verts_10() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___verts_10)); }
	inline BetterList_1_t2464096222 * get_verts_10() const { return ___verts_10; }
	inline BetterList_1_t2464096222 ** get_address_of_verts_10() { return &___verts_10; }
	inline void set_verts_10(BetterList_1_t2464096222 * value)
	{
		___verts_10 = value;
		Il2CppCodeGenWriteBarrier(&___verts_10, value);
	}

	inline static int32_t get_offset_of_norms_11() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___norms_11)); }
	inline BetterList_1_t2464096222 * get_norms_11() const { return ___norms_11; }
	inline BetterList_1_t2464096222 ** get_address_of_norms_11() { return &___norms_11; }
	inline void set_norms_11(BetterList_1_t2464096222 * value)
	{
		___norms_11 = value;
		Il2CppCodeGenWriteBarrier(&___norms_11, value);
	}

	inline static int32_t get_offset_of_tans_12() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___tans_12)); }
	inline BetterList_1_t2464096223 * get_tans_12() const { return ___tans_12; }
	inline BetterList_1_t2464096223 ** get_address_of_tans_12() { return &___tans_12; }
	inline void set_tans_12(BetterList_1_t2464096223 * value)
	{
		___tans_12 = value;
		Il2CppCodeGenWriteBarrier(&___tans_12, value);
	}

	inline static int32_t get_offset_of_uvs_13() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___uvs_13)); }
	inline BetterList_1_t2464096221 * get_uvs_13() const { return ___uvs_13; }
	inline BetterList_1_t2464096221 ** get_address_of_uvs_13() { return &___uvs_13; }
	inline void set_uvs_13(BetterList_1_t2464096221 * value)
	{
		___uvs_13 = value;
		Il2CppCodeGenWriteBarrier(&___uvs_13, value);
	}

	inline static int32_t get_offset_of_cols_14() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___cols_14)); }
	inline BetterList_1_t1094906160 * get_cols_14() const { return ___cols_14; }
	inline BetterList_1_t1094906160 ** get_address_of_cols_14() { return &___cols_14; }
	inline void set_cols_14(BetterList_1_t1094906160 * value)
	{
		___cols_14 = value;
		Il2CppCodeGenWriteBarrier(&___cols_14, value);
	}

	inline static int32_t get_offset_of_mMaterial_15() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mMaterial_15)); }
	inline Material_t193706927 * get_mMaterial_15() const { return ___mMaterial_15; }
	inline Material_t193706927 ** get_address_of_mMaterial_15() { return &___mMaterial_15; }
	inline void set_mMaterial_15(Material_t193706927 * value)
	{
		___mMaterial_15 = value;
		Il2CppCodeGenWriteBarrier(&___mMaterial_15, value);
	}

	inline static int32_t get_offset_of_mTexture_16() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mTexture_16)); }
	inline Texture_t2243626319 * get_mTexture_16() const { return ___mTexture_16; }
	inline Texture_t2243626319 ** get_address_of_mTexture_16() { return &___mTexture_16; }
	inline void set_mTexture_16(Texture_t2243626319 * value)
	{
		___mTexture_16 = value;
		Il2CppCodeGenWriteBarrier(&___mTexture_16, value);
	}

	inline static int32_t get_offset_of_mShader_17() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mShader_17)); }
	inline Shader_t2430389951 * get_mShader_17() const { return ___mShader_17; }
	inline Shader_t2430389951 ** get_address_of_mShader_17() { return &___mShader_17; }
	inline void set_mShader_17(Shader_t2430389951 * value)
	{
		___mShader_17 = value;
		Il2CppCodeGenWriteBarrier(&___mShader_17, value);
	}

	inline static int32_t get_offset_of_mClipping_18() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mClipping_18)); }
	inline int32_t get_mClipping_18() const { return ___mClipping_18; }
	inline int32_t* get_address_of_mClipping_18() { return &___mClipping_18; }
	inline void set_mClipping_18(int32_t value)
	{
		___mClipping_18 = value;
	}

	inline static int32_t get_offset_of_mClipRange_19() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mClipRange_19)); }
	inline Vector4_t2243707581  get_mClipRange_19() const { return ___mClipRange_19; }
	inline Vector4_t2243707581 * get_address_of_mClipRange_19() { return &___mClipRange_19; }
	inline void set_mClipRange_19(Vector4_t2243707581  value)
	{
		___mClipRange_19 = value;
	}

	inline static int32_t get_offset_of_mClipSoft_20() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mClipSoft_20)); }
	inline Vector2_t2243707579  get_mClipSoft_20() const { return ___mClipSoft_20; }
	inline Vector2_t2243707579 * get_address_of_mClipSoft_20() { return &___mClipSoft_20; }
	inline void set_mClipSoft_20(Vector2_t2243707579  value)
	{
		___mClipSoft_20 = value;
	}

	inline static int32_t get_offset_of_mTrans_21() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mTrans_21)); }
	inline Transform_t3275118058 * get_mTrans_21() const { return ___mTrans_21; }
	inline Transform_t3275118058 ** get_address_of_mTrans_21() { return &___mTrans_21; }
	inline void set_mTrans_21(Transform_t3275118058 * value)
	{
		___mTrans_21 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_21, value);
	}

	inline static int32_t get_offset_of_mMesh_22() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mMesh_22)); }
	inline Mesh_t1356156583 * get_mMesh_22() const { return ___mMesh_22; }
	inline Mesh_t1356156583 ** get_address_of_mMesh_22() { return &___mMesh_22; }
	inline void set_mMesh_22(Mesh_t1356156583 * value)
	{
		___mMesh_22 = value;
		Il2CppCodeGenWriteBarrier(&___mMesh_22, value);
	}

	inline static int32_t get_offset_of_mFilter_23() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mFilter_23)); }
	inline MeshFilter_t3026937449 * get_mFilter_23() const { return ___mFilter_23; }
	inline MeshFilter_t3026937449 ** get_address_of_mFilter_23() { return &___mFilter_23; }
	inline void set_mFilter_23(MeshFilter_t3026937449 * value)
	{
		___mFilter_23 = value;
		Il2CppCodeGenWriteBarrier(&___mFilter_23, value);
	}

	inline static int32_t get_offset_of_mRenderer_24() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mRenderer_24)); }
	inline MeshRenderer_t1268241104 * get_mRenderer_24() const { return ___mRenderer_24; }
	inline MeshRenderer_t1268241104 ** get_address_of_mRenderer_24() { return &___mRenderer_24; }
	inline void set_mRenderer_24(MeshRenderer_t1268241104 * value)
	{
		___mRenderer_24 = value;
		Il2CppCodeGenWriteBarrier(&___mRenderer_24, value);
	}

	inline static int32_t get_offset_of_mDynamicMat_25() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mDynamicMat_25)); }
	inline Material_t193706927 * get_mDynamicMat_25() const { return ___mDynamicMat_25; }
	inline Material_t193706927 ** get_address_of_mDynamicMat_25() { return &___mDynamicMat_25; }
	inline void set_mDynamicMat_25(Material_t193706927 * value)
	{
		___mDynamicMat_25 = value;
		Il2CppCodeGenWriteBarrier(&___mDynamicMat_25, value);
	}

	inline static int32_t get_offset_of_mIndices_26() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mIndices_26)); }
	inline Int32U5BU5D_t3030399641* get_mIndices_26() const { return ___mIndices_26; }
	inline Int32U5BU5D_t3030399641** get_address_of_mIndices_26() { return &___mIndices_26; }
	inline void set_mIndices_26(Int32U5BU5D_t3030399641* value)
	{
		___mIndices_26 = value;
		Il2CppCodeGenWriteBarrier(&___mIndices_26, value);
	}

	inline static int32_t get_offset_of_mRebuildMat_27() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mRebuildMat_27)); }
	inline bool get_mRebuildMat_27() const { return ___mRebuildMat_27; }
	inline bool* get_address_of_mRebuildMat_27() { return &___mRebuildMat_27; }
	inline void set_mRebuildMat_27(bool value)
	{
		___mRebuildMat_27 = value;
	}

	inline static int32_t get_offset_of_mReset_28() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mReset_28)); }
	inline bool get_mReset_28() const { return ___mReset_28; }
	inline bool* get_address_of_mReset_28() { return &___mReset_28; }
	inline void set_mReset_28(bool value)
	{
		___mReset_28 = value;
	}

	inline static int32_t get_offset_of_mRenderQueue_29() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mRenderQueue_29)); }
	inline int32_t get_mRenderQueue_29() const { return ___mRenderQueue_29; }
	inline int32_t* get_address_of_mRenderQueue_29() { return &___mRenderQueue_29; }
	inline void set_mRenderQueue_29(int32_t value)
	{
		___mRenderQueue_29 = value;
	}

	inline static int32_t get_offset_of_mLastClip_30() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mLastClip_30)); }
	inline int32_t get_mLastClip_30() const { return ___mLastClip_30; }
	inline int32_t* get_address_of_mLastClip_30() { return &___mLastClip_30; }
	inline void set_mLastClip_30(int32_t value)
	{
		___mLastClip_30 = value;
	}

	inline static int32_t get_offset_of_mTriangles_31() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mTriangles_31)); }
	inline int32_t get_mTriangles_31() const { return ___mTriangles_31; }
	inline int32_t* get_address_of_mTriangles_31() { return &___mTriangles_31; }
	inline void set_mTriangles_31(int32_t value)
	{
		___mTriangles_31 = value;
	}

	inline static int32_t get_offset_of_isDirty_32() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___isDirty_32)); }
	inline bool get_isDirty_32() const { return ___isDirty_32; }
	inline bool* get_address_of_isDirty_32() { return &___isDirty_32; }
	inline void set_isDirty_32(bool value)
	{
		___isDirty_32 = value;
	}
};

struct UIDrawCall_t3291843512_StaticFields
{
public:
	// BetterList`1<UIDrawCall> UIDrawCall::mActiveList
	BetterList_1_t3512232154 * ___mActiveList_3;
	// BetterList`1<UIDrawCall> UIDrawCall::mInactiveList
	BetterList_1_t3512232154 * ___mInactiveList_4;
	// System.Collections.Generic.List`1<System.Int32[]> UIDrawCall::mCache
	List_1_t2399520773 * ___mCache_33;

public:
	inline static int32_t get_offset_of_mActiveList_3() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___mActiveList_3)); }
	inline BetterList_1_t3512232154 * get_mActiveList_3() const { return ___mActiveList_3; }
	inline BetterList_1_t3512232154 ** get_address_of_mActiveList_3() { return &___mActiveList_3; }
	inline void set_mActiveList_3(BetterList_1_t3512232154 * value)
	{
		___mActiveList_3 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveList_3, value);
	}

	inline static int32_t get_offset_of_mInactiveList_4() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___mInactiveList_4)); }
	inline BetterList_1_t3512232154 * get_mInactiveList_4() const { return ___mInactiveList_4; }
	inline BetterList_1_t3512232154 ** get_address_of_mInactiveList_4() { return &___mInactiveList_4; }
	inline void set_mInactiveList_4(BetterList_1_t3512232154 * value)
	{
		___mInactiveList_4 = value;
		Il2CppCodeGenWriteBarrier(&___mInactiveList_4, value);
	}

	inline static int32_t get_offset_of_mCache_33() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___mCache_33)); }
	inline List_1_t2399520773 * get_mCache_33() const { return ___mCache_33; }
	inline List_1_t2399520773 ** get_address_of_mCache_33() { return &___mCache_33; }
	inline void set_mCache_33(List_1_t2399520773 * value)
	{
		___mCache_33 = value;
		Il2CppCodeGenWriteBarrier(&___mCache_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
