#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Spine.Unity.Modules.SlotBlendModes/MaterialTexturePair,UnityEngine.Material>
struct Dictionary_2_t1385650963;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SlotBlendModes
struct  SlotBlendModes_t3822523761  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material Spine.Unity.Modules.SlotBlendModes::multiplyMaterialSource
	Material_t193706927 * ___multiplyMaterialSource_3;
	// UnityEngine.Material Spine.Unity.Modules.SlotBlendModes::screenMaterialSource
	Material_t193706927 * ___screenMaterialSource_4;
	// UnityEngine.Texture2D Spine.Unity.Modules.SlotBlendModes::texture
	Texture2D_t3542995729 * ___texture_5;
	// System.Boolean Spine.Unity.Modules.SlotBlendModes::<Applied>k__BackingField
	bool ___U3CAppliedU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_multiplyMaterialSource_3() { return static_cast<int32_t>(offsetof(SlotBlendModes_t3822523761, ___multiplyMaterialSource_3)); }
	inline Material_t193706927 * get_multiplyMaterialSource_3() const { return ___multiplyMaterialSource_3; }
	inline Material_t193706927 ** get_address_of_multiplyMaterialSource_3() { return &___multiplyMaterialSource_3; }
	inline void set_multiplyMaterialSource_3(Material_t193706927 * value)
	{
		___multiplyMaterialSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___multiplyMaterialSource_3, value);
	}

	inline static int32_t get_offset_of_screenMaterialSource_4() { return static_cast<int32_t>(offsetof(SlotBlendModes_t3822523761, ___screenMaterialSource_4)); }
	inline Material_t193706927 * get_screenMaterialSource_4() const { return ___screenMaterialSource_4; }
	inline Material_t193706927 ** get_address_of_screenMaterialSource_4() { return &___screenMaterialSource_4; }
	inline void set_screenMaterialSource_4(Material_t193706927 * value)
	{
		___screenMaterialSource_4 = value;
		Il2CppCodeGenWriteBarrier(&___screenMaterialSource_4, value);
	}

	inline static int32_t get_offset_of_texture_5() { return static_cast<int32_t>(offsetof(SlotBlendModes_t3822523761, ___texture_5)); }
	inline Texture2D_t3542995729 * get_texture_5() const { return ___texture_5; }
	inline Texture2D_t3542995729 ** get_address_of_texture_5() { return &___texture_5; }
	inline void set_texture_5(Texture2D_t3542995729 * value)
	{
		___texture_5 = value;
		Il2CppCodeGenWriteBarrier(&___texture_5, value);
	}

	inline static int32_t get_offset_of_U3CAppliedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SlotBlendModes_t3822523761, ___U3CAppliedU3Ek__BackingField_6)); }
	inline bool get_U3CAppliedU3Ek__BackingField_6() const { return ___U3CAppliedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CAppliedU3Ek__BackingField_6() { return &___U3CAppliedU3Ek__BackingField_6; }
	inline void set_U3CAppliedU3Ek__BackingField_6(bool value)
	{
		___U3CAppliedU3Ek__BackingField_6 = value;
	}
};

struct SlotBlendModes_t3822523761_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Spine.Unity.Modules.SlotBlendModes/MaterialTexturePair,UnityEngine.Material> Spine.Unity.Modules.SlotBlendModes::materialTable
	Dictionary_2_t1385650963 * ___materialTable_2;

public:
	inline static int32_t get_offset_of_materialTable_2() { return static_cast<int32_t>(offsetof(SlotBlendModes_t3822523761_StaticFields, ___materialTable_2)); }
	inline Dictionary_2_t1385650963 * get_materialTable_2() const { return ___materialTable_2; }
	inline Dictionary_2_t1385650963 ** get_address_of_materialTable_2() { return &___materialTable_2; }
	inline void set_materialTable_2(Dictionary_2_t1385650963 * value)
	{
		___materialTable_2 = value;
		Il2CppCodeGenWriteBarrier(&___materialTable_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
