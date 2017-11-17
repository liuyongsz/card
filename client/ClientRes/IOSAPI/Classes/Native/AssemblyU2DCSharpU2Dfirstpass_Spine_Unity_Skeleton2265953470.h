#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t901153269;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.List`1<Spine.Slot>
struct List_1_t3970727598;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t3590089903;
// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material>
struct Dictionary_2_t1972914032;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.Unity.SkeletonRendererInstruction
struct SkeletonRendererInstruction_t1881716398;
// Spine.Unity.MeshGenerator
struct MeshGenerator_t3385794548;
// Spine.Unity.MeshRendererBuffers
struct MeshRendererBuffers_t4206266905;
// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate
struct SkeletonRendererDelegate_t2855702160;
// Spine.Unity.MeshGeneratorDelegate
struct MeshGeneratorDelegate_t3815339587;
// Spine.Unity.SkeletonRenderer/InstructionDelegate
struct InstructionDelegate_t3836706226;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonRenderer
struct  SkeletonRenderer_t2265953470  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonRenderer::skeletonDataAsset
	SkeletonDataAsset_t901153269 * ___skeletonDataAsset_2;
	// System.String Spine.Unity.SkeletonRenderer::initialSkinName
	String_t* ___initialSkinName_3;
	// System.Boolean Spine.Unity.SkeletonRenderer::initialFlipX
	bool ___initialFlipX_4;
	// System.Boolean Spine.Unity.SkeletonRenderer::initialFlipY
	bool ___initialFlipY_5;
	// System.String[] Spine.Unity.SkeletonRenderer::separatorSlotNames
	StringU5BU5D_t1642385972* ___separatorSlotNames_6;
	// System.Collections.Generic.List`1<Spine.Slot> Spine.Unity.SkeletonRenderer::separatorSlots
	List_1_t3970727598 * ___separatorSlots_7;
	// System.Single Spine.Unity.SkeletonRenderer::zSpacing
	float ___zSpacing_8;
	// System.Boolean Spine.Unity.SkeletonRenderer::useClipping
	bool ___useClipping_9;
	// System.Boolean Spine.Unity.SkeletonRenderer::immutableTriangles
	bool ___immutableTriangles_10;
	// System.Boolean Spine.Unity.SkeletonRenderer::pmaVertexColors
	bool ___pmaVertexColors_11;
	// System.Boolean Spine.Unity.SkeletonRenderer::clearStateOnDisable
	bool ___clearStateOnDisable_12;
	// System.Boolean Spine.Unity.SkeletonRenderer::tintBlack
	bool ___tintBlack_13;
	// System.Boolean Spine.Unity.SkeletonRenderer::singleSubmesh
	bool ___singleSubmesh_14;
	// System.Boolean Spine.Unity.SkeletonRenderer::addNormals
	bool ___addNormals_15;
	// System.Boolean Spine.Unity.SkeletonRenderer::calculateTangents
	bool ___calculateTangents_16;
	// System.Boolean Spine.Unity.SkeletonRenderer::logErrors
	bool ___logErrors_17;
	// System.Boolean Spine.Unity.SkeletonRenderer::disableRenderingOnOverride
	bool ___disableRenderingOnOverride_18;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material> Spine.Unity.SkeletonRenderer::customMaterialOverride
	Dictionary_2_t3590089903 * ___customMaterialOverride_19;
	// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material> Spine.Unity.SkeletonRenderer::customSlotMaterials
	Dictionary_2_t1972914032 * ___customSlotMaterials_20;
	// UnityEngine.MeshRenderer Spine.Unity.SkeletonRenderer::meshRenderer
	MeshRenderer_t1268241104 * ___meshRenderer_21;
	// UnityEngine.MeshFilter Spine.Unity.SkeletonRenderer::meshFilter
	MeshFilter_t3026937449 * ___meshFilter_22;
	// System.Boolean Spine.Unity.SkeletonRenderer::valid
	bool ___valid_23;
	// Spine.Skeleton Spine.Unity.SkeletonRenderer::skeleton
	Skeleton_t1387859465 * ___skeleton_24;
	// Spine.Unity.SkeletonRendererInstruction Spine.Unity.SkeletonRenderer::currentInstructions
	SkeletonRendererInstruction_t1881716398 * ___currentInstructions_25;
	// Spine.Unity.MeshGenerator Spine.Unity.SkeletonRenderer::meshGenerator
	MeshGenerator_t3385794548 * ___meshGenerator_26;
	// Spine.Unity.MeshRendererBuffers Spine.Unity.SkeletonRenderer::rendererBuffers
	MeshRendererBuffers_t4206266905 * ___rendererBuffers_27;
	// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate Spine.Unity.SkeletonRenderer::OnRebuild
	SkeletonRendererDelegate_t2855702160 * ___OnRebuild_28;
	// Spine.Unity.MeshGeneratorDelegate Spine.Unity.SkeletonRenderer::OnPostProcessVertices
	MeshGeneratorDelegate_t3815339587 * ___OnPostProcessVertices_29;
	// Spine.Unity.SkeletonRenderer/InstructionDelegate Spine.Unity.SkeletonRenderer::generateMeshOverride
	InstructionDelegate_t3836706226 * ___generateMeshOverride_30;

public:
	inline static int32_t get_offset_of_skeletonDataAsset_2() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___skeletonDataAsset_2)); }
	inline SkeletonDataAsset_t901153269 * get_skeletonDataAsset_2() const { return ___skeletonDataAsset_2; }
	inline SkeletonDataAsset_t901153269 ** get_address_of_skeletonDataAsset_2() { return &___skeletonDataAsset_2; }
	inline void set_skeletonDataAsset_2(SkeletonDataAsset_t901153269 * value)
	{
		___skeletonDataAsset_2 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonDataAsset_2, value);
	}

	inline static int32_t get_offset_of_initialSkinName_3() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___initialSkinName_3)); }
	inline String_t* get_initialSkinName_3() const { return ___initialSkinName_3; }
	inline String_t** get_address_of_initialSkinName_3() { return &___initialSkinName_3; }
	inline void set_initialSkinName_3(String_t* value)
	{
		___initialSkinName_3 = value;
		Il2CppCodeGenWriteBarrier(&___initialSkinName_3, value);
	}

	inline static int32_t get_offset_of_initialFlipX_4() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___initialFlipX_4)); }
	inline bool get_initialFlipX_4() const { return ___initialFlipX_4; }
	inline bool* get_address_of_initialFlipX_4() { return &___initialFlipX_4; }
	inline void set_initialFlipX_4(bool value)
	{
		___initialFlipX_4 = value;
	}

	inline static int32_t get_offset_of_initialFlipY_5() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___initialFlipY_5)); }
	inline bool get_initialFlipY_5() const { return ___initialFlipY_5; }
	inline bool* get_address_of_initialFlipY_5() { return &___initialFlipY_5; }
	inline void set_initialFlipY_5(bool value)
	{
		___initialFlipY_5 = value;
	}

	inline static int32_t get_offset_of_separatorSlotNames_6() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___separatorSlotNames_6)); }
	inline StringU5BU5D_t1642385972* get_separatorSlotNames_6() const { return ___separatorSlotNames_6; }
	inline StringU5BU5D_t1642385972** get_address_of_separatorSlotNames_6() { return &___separatorSlotNames_6; }
	inline void set_separatorSlotNames_6(StringU5BU5D_t1642385972* value)
	{
		___separatorSlotNames_6 = value;
		Il2CppCodeGenWriteBarrier(&___separatorSlotNames_6, value);
	}

	inline static int32_t get_offset_of_separatorSlots_7() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___separatorSlots_7)); }
	inline List_1_t3970727598 * get_separatorSlots_7() const { return ___separatorSlots_7; }
	inline List_1_t3970727598 ** get_address_of_separatorSlots_7() { return &___separatorSlots_7; }
	inline void set_separatorSlots_7(List_1_t3970727598 * value)
	{
		___separatorSlots_7 = value;
		Il2CppCodeGenWriteBarrier(&___separatorSlots_7, value);
	}

	inline static int32_t get_offset_of_zSpacing_8() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___zSpacing_8)); }
	inline float get_zSpacing_8() const { return ___zSpacing_8; }
	inline float* get_address_of_zSpacing_8() { return &___zSpacing_8; }
	inline void set_zSpacing_8(float value)
	{
		___zSpacing_8 = value;
	}

	inline static int32_t get_offset_of_useClipping_9() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___useClipping_9)); }
	inline bool get_useClipping_9() const { return ___useClipping_9; }
	inline bool* get_address_of_useClipping_9() { return &___useClipping_9; }
	inline void set_useClipping_9(bool value)
	{
		___useClipping_9 = value;
	}

	inline static int32_t get_offset_of_immutableTriangles_10() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___immutableTriangles_10)); }
	inline bool get_immutableTriangles_10() const { return ___immutableTriangles_10; }
	inline bool* get_address_of_immutableTriangles_10() { return &___immutableTriangles_10; }
	inline void set_immutableTriangles_10(bool value)
	{
		___immutableTriangles_10 = value;
	}

	inline static int32_t get_offset_of_pmaVertexColors_11() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___pmaVertexColors_11)); }
	inline bool get_pmaVertexColors_11() const { return ___pmaVertexColors_11; }
	inline bool* get_address_of_pmaVertexColors_11() { return &___pmaVertexColors_11; }
	inline void set_pmaVertexColors_11(bool value)
	{
		___pmaVertexColors_11 = value;
	}

	inline static int32_t get_offset_of_clearStateOnDisable_12() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___clearStateOnDisable_12)); }
	inline bool get_clearStateOnDisable_12() const { return ___clearStateOnDisable_12; }
	inline bool* get_address_of_clearStateOnDisable_12() { return &___clearStateOnDisable_12; }
	inline void set_clearStateOnDisable_12(bool value)
	{
		___clearStateOnDisable_12 = value;
	}

	inline static int32_t get_offset_of_tintBlack_13() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___tintBlack_13)); }
	inline bool get_tintBlack_13() const { return ___tintBlack_13; }
	inline bool* get_address_of_tintBlack_13() { return &___tintBlack_13; }
	inline void set_tintBlack_13(bool value)
	{
		___tintBlack_13 = value;
	}

	inline static int32_t get_offset_of_singleSubmesh_14() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___singleSubmesh_14)); }
	inline bool get_singleSubmesh_14() const { return ___singleSubmesh_14; }
	inline bool* get_address_of_singleSubmesh_14() { return &___singleSubmesh_14; }
	inline void set_singleSubmesh_14(bool value)
	{
		___singleSubmesh_14 = value;
	}

	inline static int32_t get_offset_of_addNormals_15() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___addNormals_15)); }
	inline bool get_addNormals_15() const { return ___addNormals_15; }
	inline bool* get_address_of_addNormals_15() { return &___addNormals_15; }
	inline void set_addNormals_15(bool value)
	{
		___addNormals_15 = value;
	}

	inline static int32_t get_offset_of_calculateTangents_16() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___calculateTangents_16)); }
	inline bool get_calculateTangents_16() const { return ___calculateTangents_16; }
	inline bool* get_address_of_calculateTangents_16() { return &___calculateTangents_16; }
	inline void set_calculateTangents_16(bool value)
	{
		___calculateTangents_16 = value;
	}

	inline static int32_t get_offset_of_logErrors_17() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___logErrors_17)); }
	inline bool get_logErrors_17() const { return ___logErrors_17; }
	inline bool* get_address_of_logErrors_17() { return &___logErrors_17; }
	inline void set_logErrors_17(bool value)
	{
		___logErrors_17 = value;
	}

	inline static int32_t get_offset_of_disableRenderingOnOverride_18() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___disableRenderingOnOverride_18)); }
	inline bool get_disableRenderingOnOverride_18() const { return ___disableRenderingOnOverride_18; }
	inline bool* get_address_of_disableRenderingOnOverride_18() { return &___disableRenderingOnOverride_18; }
	inline void set_disableRenderingOnOverride_18(bool value)
	{
		___disableRenderingOnOverride_18 = value;
	}

	inline static int32_t get_offset_of_customMaterialOverride_19() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___customMaterialOverride_19)); }
	inline Dictionary_2_t3590089903 * get_customMaterialOverride_19() const { return ___customMaterialOverride_19; }
	inline Dictionary_2_t3590089903 ** get_address_of_customMaterialOverride_19() { return &___customMaterialOverride_19; }
	inline void set_customMaterialOverride_19(Dictionary_2_t3590089903 * value)
	{
		___customMaterialOverride_19 = value;
		Il2CppCodeGenWriteBarrier(&___customMaterialOverride_19, value);
	}

	inline static int32_t get_offset_of_customSlotMaterials_20() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___customSlotMaterials_20)); }
	inline Dictionary_2_t1972914032 * get_customSlotMaterials_20() const { return ___customSlotMaterials_20; }
	inline Dictionary_2_t1972914032 ** get_address_of_customSlotMaterials_20() { return &___customSlotMaterials_20; }
	inline void set_customSlotMaterials_20(Dictionary_2_t1972914032 * value)
	{
		___customSlotMaterials_20 = value;
		Il2CppCodeGenWriteBarrier(&___customSlotMaterials_20, value);
	}

	inline static int32_t get_offset_of_meshRenderer_21() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___meshRenderer_21)); }
	inline MeshRenderer_t1268241104 * get_meshRenderer_21() const { return ___meshRenderer_21; }
	inline MeshRenderer_t1268241104 ** get_address_of_meshRenderer_21() { return &___meshRenderer_21; }
	inline void set_meshRenderer_21(MeshRenderer_t1268241104 * value)
	{
		___meshRenderer_21 = value;
		Il2CppCodeGenWriteBarrier(&___meshRenderer_21, value);
	}

	inline static int32_t get_offset_of_meshFilter_22() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___meshFilter_22)); }
	inline MeshFilter_t3026937449 * get_meshFilter_22() const { return ___meshFilter_22; }
	inline MeshFilter_t3026937449 ** get_address_of_meshFilter_22() { return &___meshFilter_22; }
	inline void set_meshFilter_22(MeshFilter_t3026937449 * value)
	{
		___meshFilter_22 = value;
		Il2CppCodeGenWriteBarrier(&___meshFilter_22, value);
	}

	inline static int32_t get_offset_of_valid_23() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___valid_23)); }
	inline bool get_valid_23() const { return ___valid_23; }
	inline bool* get_address_of_valid_23() { return &___valid_23; }
	inline void set_valid_23(bool value)
	{
		___valid_23 = value;
	}

	inline static int32_t get_offset_of_skeleton_24() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___skeleton_24)); }
	inline Skeleton_t1387859465 * get_skeleton_24() const { return ___skeleton_24; }
	inline Skeleton_t1387859465 ** get_address_of_skeleton_24() { return &___skeleton_24; }
	inline void set_skeleton_24(Skeleton_t1387859465 * value)
	{
		___skeleton_24 = value;
		Il2CppCodeGenWriteBarrier(&___skeleton_24, value);
	}

	inline static int32_t get_offset_of_currentInstructions_25() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___currentInstructions_25)); }
	inline SkeletonRendererInstruction_t1881716398 * get_currentInstructions_25() const { return ___currentInstructions_25; }
	inline SkeletonRendererInstruction_t1881716398 ** get_address_of_currentInstructions_25() { return &___currentInstructions_25; }
	inline void set_currentInstructions_25(SkeletonRendererInstruction_t1881716398 * value)
	{
		___currentInstructions_25 = value;
		Il2CppCodeGenWriteBarrier(&___currentInstructions_25, value);
	}

	inline static int32_t get_offset_of_meshGenerator_26() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___meshGenerator_26)); }
	inline MeshGenerator_t3385794548 * get_meshGenerator_26() const { return ___meshGenerator_26; }
	inline MeshGenerator_t3385794548 ** get_address_of_meshGenerator_26() { return &___meshGenerator_26; }
	inline void set_meshGenerator_26(MeshGenerator_t3385794548 * value)
	{
		___meshGenerator_26 = value;
		Il2CppCodeGenWriteBarrier(&___meshGenerator_26, value);
	}

	inline static int32_t get_offset_of_rendererBuffers_27() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___rendererBuffers_27)); }
	inline MeshRendererBuffers_t4206266905 * get_rendererBuffers_27() const { return ___rendererBuffers_27; }
	inline MeshRendererBuffers_t4206266905 ** get_address_of_rendererBuffers_27() { return &___rendererBuffers_27; }
	inline void set_rendererBuffers_27(MeshRendererBuffers_t4206266905 * value)
	{
		___rendererBuffers_27 = value;
		Il2CppCodeGenWriteBarrier(&___rendererBuffers_27, value);
	}

	inline static int32_t get_offset_of_OnRebuild_28() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___OnRebuild_28)); }
	inline SkeletonRendererDelegate_t2855702160 * get_OnRebuild_28() const { return ___OnRebuild_28; }
	inline SkeletonRendererDelegate_t2855702160 ** get_address_of_OnRebuild_28() { return &___OnRebuild_28; }
	inline void set_OnRebuild_28(SkeletonRendererDelegate_t2855702160 * value)
	{
		___OnRebuild_28 = value;
		Il2CppCodeGenWriteBarrier(&___OnRebuild_28, value);
	}

	inline static int32_t get_offset_of_OnPostProcessVertices_29() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___OnPostProcessVertices_29)); }
	inline MeshGeneratorDelegate_t3815339587 * get_OnPostProcessVertices_29() const { return ___OnPostProcessVertices_29; }
	inline MeshGeneratorDelegate_t3815339587 ** get_address_of_OnPostProcessVertices_29() { return &___OnPostProcessVertices_29; }
	inline void set_OnPostProcessVertices_29(MeshGeneratorDelegate_t3815339587 * value)
	{
		___OnPostProcessVertices_29 = value;
		Il2CppCodeGenWriteBarrier(&___OnPostProcessVertices_29, value);
	}

	inline static int32_t get_offset_of_generateMeshOverride_30() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___generateMeshOverride_30)); }
	inline InstructionDelegate_t3836706226 * get_generateMeshOverride_30() const { return ___generateMeshOverride_30; }
	inline InstructionDelegate_t3836706226 ** get_address_of_generateMeshOverride_30() { return &___generateMeshOverride_30; }
	inline void set_generateMeshOverride_30(InstructionDelegate_t3836706226 * value)
	{
		___generateMeshOverride_30 = value;
		Il2CppCodeGenWriteBarrier(&___generateMeshOverride_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
