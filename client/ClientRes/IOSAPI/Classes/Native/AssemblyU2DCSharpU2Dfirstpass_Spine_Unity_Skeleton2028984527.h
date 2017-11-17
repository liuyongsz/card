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
// UnityEngine.Texture
struct Texture_t2243626319;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.AnimationState
struct AnimationState_t1491536497;
// Spine.Unity.MeshGenerator
struct MeshGenerator_t3385794548;
// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshRendererBuffers/SmartMesh>
struct DoubleBuffered_1_t4168345978;
// Spine.Unity.SkeletonRendererInstruction
struct SkeletonRendererInstruction_t1881716398;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t2937009411;
// Spine.Unity.MeshGeneratorDelegate
struct MeshGeneratorDelegate_t3815339587;

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic540192618.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonGraphic
struct  SkeletonGraphic_t2028984527  : public MaskableGraphic_t540192618
{
public:
	// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonGraphic::skeletonDataAsset
	SkeletonDataAsset_t901153269 * ___skeletonDataAsset_28;
	// System.String Spine.Unity.SkeletonGraphic::initialSkinName
	String_t* ___initialSkinName_29;
	// System.Boolean Spine.Unity.SkeletonGraphic::initialFlipX
	bool ___initialFlipX_30;
	// System.Boolean Spine.Unity.SkeletonGraphic::initialFlipY
	bool ___initialFlipY_31;
	// System.String Spine.Unity.SkeletonGraphic::startingAnimation
	String_t* ___startingAnimation_32;
	// System.Boolean Spine.Unity.SkeletonGraphic::startingLoop
	bool ___startingLoop_33;
	// System.Single Spine.Unity.SkeletonGraphic::timeScale
	float ___timeScale_34;
	// System.Boolean Spine.Unity.SkeletonGraphic::freeze
	bool ___freeze_35;
	// System.Boolean Spine.Unity.SkeletonGraphic::unscaledTime
	bool ___unscaledTime_36;
	// UnityEngine.Texture Spine.Unity.SkeletonGraphic::overrideTexture
	Texture_t2243626319 * ___overrideTexture_37;
	// Spine.Skeleton Spine.Unity.SkeletonGraphic::skeleton
	Skeleton_t1387859465 * ___skeleton_38;
	// Spine.AnimationState Spine.Unity.SkeletonGraphic::state
	AnimationState_t1491536497 * ___state_39;
	// Spine.Unity.MeshGenerator Spine.Unity.SkeletonGraphic::meshGenerator
	MeshGenerator_t3385794548 * ___meshGenerator_40;
	// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshRendererBuffers/SmartMesh> Spine.Unity.SkeletonGraphic::meshBuffers
	DoubleBuffered_1_t4168345978 * ___meshBuffers_41;
	// Spine.Unity.SkeletonRendererInstruction Spine.Unity.SkeletonGraphic::currentInstructions
	SkeletonRendererInstruction_t1881716398 * ___currentInstructions_42;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateLocal
	UpdateBonesDelegate_t2937009411 * ___UpdateLocal_43;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateWorld
	UpdateBonesDelegate_t2937009411 * ___UpdateWorld_44;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateComplete
	UpdateBonesDelegate_t2937009411 * ___UpdateComplete_45;
	// Spine.Unity.MeshGeneratorDelegate Spine.Unity.SkeletonGraphic::OnPostProcessVertices
	MeshGeneratorDelegate_t3815339587 * ___OnPostProcessVertices_46;

public:
	inline static int32_t get_offset_of_skeletonDataAsset_28() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___skeletonDataAsset_28)); }
	inline SkeletonDataAsset_t901153269 * get_skeletonDataAsset_28() const { return ___skeletonDataAsset_28; }
	inline SkeletonDataAsset_t901153269 ** get_address_of_skeletonDataAsset_28() { return &___skeletonDataAsset_28; }
	inline void set_skeletonDataAsset_28(SkeletonDataAsset_t901153269 * value)
	{
		___skeletonDataAsset_28 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonDataAsset_28, value);
	}

	inline static int32_t get_offset_of_initialSkinName_29() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___initialSkinName_29)); }
	inline String_t* get_initialSkinName_29() const { return ___initialSkinName_29; }
	inline String_t** get_address_of_initialSkinName_29() { return &___initialSkinName_29; }
	inline void set_initialSkinName_29(String_t* value)
	{
		___initialSkinName_29 = value;
		Il2CppCodeGenWriteBarrier(&___initialSkinName_29, value);
	}

	inline static int32_t get_offset_of_initialFlipX_30() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___initialFlipX_30)); }
	inline bool get_initialFlipX_30() const { return ___initialFlipX_30; }
	inline bool* get_address_of_initialFlipX_30() { return &___initialFlipX_30; }
	inline void set_initialFlipX_30(bool value)
	{
		___initialFlipX_30 = value;
	}

	inline static int32_t get_offset_of_initialFlipY_31() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___initialFlipY_31)); }
	inline bool get_initialFlipY_31() const { return ___initialFlipY_31; }
	inline bool* get_address_of_initialFlipY_31() { return &___initialFlipY_31; }
	inline void set_initialFlipY_31(bool value)
	{
		___initialFlipY_31 = value;
	}

	inline static int32_t get_offset_of_startingAnimation_32() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___startingAnimation_32)); }
	inline String_t* get_startingAnimation_32() const { return ___startingAnimation_32; }
	inline String_t** get_address_of_startingAnimation_32() { return &___startingAnimation_32; }
	inline void set_startingAnimation_32(String_t* value)
	{
		___startingAnimation_32 = value;
		Il2CppCodeGenWriteBarrier(&___startingAnimation_32, value);
	}

	inline static int32_t get_offset_of_startingLoop_33() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___startingLoop_33)); }
	inline bool get_startingLoop_33() const { return ___startingLoop_33; }
	inline bool* get_address_of_startingLoop_33() { return &___startingLoop_33; }
	inline void set_startingLoop_33(bool value)
	{
		___startingLoop_33 = value;
	}

	inline static int32_t get_offset_of_timeScale_34() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___timeScale_34)); }
	inline float get_timeScale_34() const { return ___timeScale_34; }
	inline float* get_address_of_timeScale_34() { return &___timeScale_34; }
	inline void set_timeScale_34(float value)
	{
		___timeScale_34 = value;
	}

	inline static int32_t get_offset_of_freeze_35() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___freeze_35)); }
	inline bool get_freeze_35() const { return ___freeze_35; }
	inline bool* get_address_of_freeze_35() { return &___freeze_35; }
	inline void set_freeze_35(bool value)
	{
		___freeze_35 = value;
	}

	inline static int32_t get_offset_of_unscaledTime_36() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___unscaledTime_36)); }
	inline bool get_unscaledTime_36() const { return ___unscaledTime_36; }
	inline bool* get_address_of_unscaledTime_36() { return &___unscaledTime_36; }
	inline void set_unscaledTime_36(bool value)
	{
		___unscaledTime_36 = value;
	}

	inline static int32_t get_offset_of_overrideTexture_37() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___overrideTexture_37)); }
	inline Texture_t2243626319 * get_overrideTexture_37() const { return ___overrideTexture_37; }
	inline Texture_t2243626319 ** get_address_of_overrideTexture_37() { return &___overrideTexture_37; }
	inline void set_overrideTexture_37(Texture_t2243626319 * value)
	{
		___overrideTexture_37 = value;
		Il2CppCodeGenWriteBarrier(&___overrideTexture_37, value);
	}

	inline static int32_t get_offset_of_skeleton_38() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___skeleton_38)); }
	inline Skeleton_t1387859465 * get_skeleton_38() const { return ___skeleton_38; }
	inline Skeleton_t1387859465 ** get_address_of_skeleton_38() { return &___skeleton_38; }
	inline void set_skeleton_38(Skeleton_t1387859465 * value)
	{
		___skeleton_38 = value;
		Il2CppCodeGenWriteBarrier(&___skeleton_38, value);
	}

	inline static int32_t get_offset_of_state_39() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___state_39)); }
	inline AnimationState_t1491536497 * get_state_39() const { return ___state_39; }
	inline AnimationState_t1491536497 ** get_address_of_state_39() { return &___state_39; }
	inline void set_state_39(AnimationState_t1491536497 * value)
	{
		___state_39 = value;
		Il2CppCodeGenWriteBarrier(&___state_39, value);
	}

	inline static int32_t get_offset_of_meshGenerator_40() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___meshGenerator_40)); }
	inline MeshGenerator_t3385794548 * get_meshGenerator_40() const { return ___meshGenerator_40; }
	inline MeshGenerator_t3385794548 ** get_address_of_meshGenerator_40() { return &___meshGenerator_40; }
	inline void set_meshGenerator_40(MeshGenerator_t3385794548 * value)
	{
		___meshGenerator_40 = value;
		Il2CppCodeGenWriteBarrier(&___meshGenerator_40, value);
	}

	inline static int32_t get_offset_of_meshBuffers_41() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___meshBuffers_41)); }
	inline DoubleBuffered_1_t4168345978 * get_meshBuffers_41() const { return ___meshBuffers_41; }
	inline DoubleBuffered_1_t4168345978 ** get_address_of_meshBuffers_41() { return &___meshBuffers_41; }
	inline void set_meshBuffers_41(DoubleBuffered_1_t4168345978 * value)
	{
		___meshBuffers_41 = value;
		Il2CppCodeGenWriteBarrier(&___meshBuffers_41, value);
	}

	inline static int32_t get_offset_of_currentInstructions_42() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___currentInstructions_42)); }
	inline SkeletonRendererInstruction_t1881716398 * get_currentInstructions_42() const { return ___currentInstructions_42; }
	inline SkeletonRendererInstruction_t1881716398 ** get_address_of_currentInstructions_42() { return &___currentInstructions_42; }
	inline void set_currentInstructions_42(SkeletonRendererInstruction_t1881716398 * value)
	{
		___currentInstructions_42 = value;
		Il2CppCodeGenWriteBarrier(&___currentInstructions_42, value);
	}

	inline static int32_t get_offset_of_UpdateLocal_43() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___UpdateLocal_43)); }
	inline UpdateBonesDelegate_t2937009411 * get_UpdateLocal_43() const { return ___UpdateLocal_43; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of_UpdateLocal_43() { return &___UpdateLocal_43; }
	inline void set_UpdateLocal_43(UpdateBonesDelegate_t2937009411 * value)
	{
		___UpdateLocal_43 = value;
		Il2CppCodeGenWriteBarrier(&___UpdateLocal_43, value);
	}

	inline static int32_t get_offset_of_UpdateWorld_44() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___UpdateWorld_44)); }
	inline UpdateBonesDelegate_t2937009411 * get_UpdateWorld_44() const { return ___UpdateWorld_44; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of_UpdateWorld_44() { return &___UpdateWorld_44; }
	inline void set_UpdateWorld_44(UpdateBonesDelegate_t2937009411 * value)
	{
		___UpdateWorld_44 = value;
		Il2CppCodeGenWriteBarrier(&___UpdateWorld_44, value);
	}

	inline static int32_t get_offset_of_UpdateComplete_45() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___UpdateComplete_45)); }
	inline UpdateBonesDelegate_t2937009411 * get_UpdateComplete_45() const { return ___UpdateComplete_45; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of_UpdateComplete_45() { return &___UpdateComplete_45; }
	inline void set_UpdateComplete_45(UpdateBonesDelegate_t2937009411 * value)
	{
		___UpdateComplete_45 = value;
		Il2CppCodeGenWriteBarrier(&___UpdateComplete_45, value);
	}

	inline static int32_t get_offset_of_OnPostProcessVertices_46() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___OnPostProcessVertices_46)); }
	inline MeshGeneratorDelegate_t3815339587 * get_OnPostProcessVertices_46() const { return ___OnPostProcessVertices_46; }
	inline MeshGeneratorDelegate_t3815339587 ** get_address_of_OnPostProcessVertices_46() { return &___OnPostProcessVertices_46; }
	inline void set_OnPostProcessVertices_46(MeshGeneratorDelegate_t3815339587 * value)
	{
		___OnPostProcessVertices_46 = value;
		Il2CppCodeGenWriteBarrier(&___OnPostProcessVertices_46, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
