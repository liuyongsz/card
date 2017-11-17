#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1204166949;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Camera
struct Camera_t189460977;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.Shader[]
struct ShaderU5BU5D_t1916779366;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rendering_CameraEvent2007842675.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Rendering_RenderTargetIdent772440638.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlightingBase
struct  HighlightingBase_t336099813  : public MonoBehaviour_t1158329972
{
public:
	// System.Single HighlightingSystem.HighlightingBase::offsetFactor
	float ___offsetFactor_16;
	// System.Single HighlightingSystem.HighlightingBase::offsetUnits
	float ___offsetUnits_17;
	// UnityEngine.Rendering.CommandBuffer HighlightingSystem.HighlightingBase::renderBuffer
	CommandBuffer_t1204166949 * ___renderBuffer_18;
	// System.Boolean HighlightingSystem.HighlightingBase::isDirty
	bool ___isDirty_19;
	// System.Int32 HighlightingSystem.HighlightingBase::cachedWidth
	int32_t ___cachedWidth_20;
	// System.Int32 HighlightingSystem.HighlightingBase::cachedHeight
	int32_t ___cachedHeight_21;
	// System.Int32 HighlightingSystem.HighlightingBase::cachedAA
	int32_t ___cachedAA_22;
	// System.Int32 HighlightingSystem.HighlightingBase::_downsampleFactor
	int32_t ____downsampleFactor_23;
	// System.Int32 HighlightingSystem.HighlightingBase::_iterations
	int32_t ____iterations_24;
	// System.Single HighlightingSystem.HighlightingBase::_blurMinSpread
	float ____blurMinSpread_25;
	// System.Single HighlightingSystem.HighlightingBase::_blurSpread
	float ____blurSpread_26;
	// System.Single HighlightingSystem.HighlightingBase::_blurIntensity
	float ____blurIntensity_27;
	// UnityEngine.RenderTexture HighlightingSystem.HighlightingBase::highlightingBuffer
	RenderTexture_t2666733923 * ___highlightingBuffer_28;
	// UnityEngine.Camera HighlightingSystem.HighlightingBase::cam
	Camera_t189460977 * ___cam_29;
	// System.Boolean HighlightingSystem.HighlightingBase::isSupported
	bool ___isSupported_30;
	// System.Boolean HighlightingSystem.HighlightingBase::isDepthAvailable
	bool ___isDepthAvailable_31;
	// UnityEngine.Material HighlightingSystem.HighlightingBase::blurMaterial
	Material_t193706927 * ___blurMaterial_37;

public:
	inline static int32_t get_offset_of_offsetFactor_16() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___offsetFactor_16)); }
	inline float get_offsetFactor_16() const { return ___offsetFactor_16; }
	inline float* get_address_of_offsetFactor_16() { return &___offsetFactor_16; }
	inline void set_offsetFactor_16(float value)
	{
		___offsetFactor_16 = value;
	}

	inline static int32_t get_offset_of_offsetUnits_17() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___offsetUnits_17)); }
	inline float get_offsetUnits_17() const { return ___offsetUnits_17; }
	inline float* get_address_of_offsetUnits_17() { return &___offsetUnits_17; }
	inline void set_offsetUnits_17(float value)
	{
		___offsetUnits_17 = value;
	}

	inline static int32_t get_offset_of_renderBuffer_18() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___renderBuffer_18)); }
	inline CommandBuffer_t1204166949 * get_renderBuffer_18() const { return ___renderBuffer_18; }
	inline CommandBuffer_t1204166949 ** get_address_of_renderBuffer_18() { return &___renderBuffer_18; }
	inline void set_renderBuffer_18(CommandBuffer_t1204166949 * value)
	{
		___renderBuffer_18 = value;
		Il2CppCodeGenWriteBarrier(&___renderBuffer_18, value);
	}

	inline static int32_t get_offset_of_isDirty_19() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___isDirty_19)); }
	inline bool get_isDirty_19() const { return ___isDirty_19; }
	inline bool* get_address_of_isDirty_19() { return &___isDirty_19; }
	inline void set_isDirty_19(bool value)
	{
		___isDirty_19 = value;
	}

	inline static int32_t get_offset_of_cachedWidth_20() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___cachedWidth_20)); }
	inline int32_t get_cachedWidth_20() const { return ___cachedWidth_20; }
	inline int32_t* get_address_of_cachedWidth_20() { return &___cachedWidth_20; }
	inline void set_cachedWidth_20(int32_t value)
	{
		___cachedWidth_20 = value;
	}

	inline static int32_t get_offset_of_cachedHeight_21() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___cachedHeight_21)); }
	inline int32_t get_cachedHeight_21() const { return ___cachedHeight_21; }
	inline int32_t* get_address_of_cachedHeight_21() { return &___cachedHeight_21; }
	inline void set_cachedHeight_21(int32_t value)
	{
		___cachedHeight_21 = value;
	}

	inline static int32_t get_offset_of_cachedAA_22() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___cachedAA_22)); }
	inline int32_t get_cachedAA_22() const { return ___cachedAA_22; }
	inline int32_t* get_address_of_cachedAA_22() { return &___cachedAA_22; }
	inline void set_cachedAA_22(int32_t value)
	{
		___cachedAA_22 = value;
	}

	inline static int32_t get_offset_of__downsampleFactor_23() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ____downsampleFactor_23)); }
	inline int32_t get__downsampleFactor_23() const { return ____downsampleFactor_23; }
	inline int32_t* get_address_of__downsampleFactor_23() { return &____downsampleFactor_23; }
	inline void set__downsampleFactor_23(int32_t value)
	{
		____downsampleFactor_23 = value;
	}

	inline static int32_t get_offset_of__iterations_24() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ____iterations_24)); }
	inline int32_t get__iterations_24() const { return ____iterations_24; }
	inline int32_t* get_address_of__iterations_24() { return &____iterations_24; }
	inline void set__iterations_24(int32_t value)
	{
		____iterations_24 = value;
	}

	inline static int32_t get_offset_of__blurMinSpread_25() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ____blurMinSpread_25)); }
	inline float get__blurMinSpread_25() const { return ____blurMinSpread_25; }
	inline float* get_address_of__blurMinSpread_25() { return &____blurMinSpread_25; }
	inline void set__blurMinSpread_25(float value)
	{
		____blurMinSpread_25 = value;
	}

	inline static int32_t get_offset_of__blurSpread_26() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ____blurSpread_26)); }
	inline float get__blurSpread_26() const { return ____blurSpread_26; }
	inline float* get_address_of__blurSpread_26() { return &____blurSpread_26; }
	inline void set__blurSpread_26(float value)
	{
		____blurSpread_26 = value;
	}

	inline static int32_t get_offset_of__blurIntensity_27() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ____blurIntensity_27)); }
	inline float get__blurIntensity_27() const { return ____blurIntensity_27; }
	inline float* get_address_of__blurIntensity_27() { return &____blurIntensity_27; }
	inline void set__blurIntensity_27(float value)
	{
		____blurIntensity_27 = value;
	}

	inline static int32_t get_offset_of_highlightingBuffer_28() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___highlightingBuffer_28)); }
	inline RenderTexture_t2666733923 * get_highlightingBuffer_28() const { return ___highlightingBuffer_28; }
	inline RenderTexture_t2666733923 ** get_address_of_highlightingBuffer_28() { return &___highlightingBuffer_28; }
	inline void set_highlightingBuffer_28(RenderTexture_t2666733923 * value)
	{
		___highlightingBuffer_28 = value;
		Il2CppCodeGenWriteBarrier(&___highlightingBuffer_28, value);
	}

	inline static int32_t get_offset_of_cam_29() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___cam_29)); }
	inline Camera_t189460977 * get_cam_29() const { return ___cam_29; }
	inline Camera_t189460977 ** get_address_of_cam_29() { return &___cam_29; }
	inline void set_cam_29(Camera_t189460977 * value)
	{
		___cam_29 = value;
		Il2CppCodeGenWriteBarrier(&___cam_29, value);
	}

	inline static int32_t get_offset_of_isSupported_30() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___isSupported_30)); }
	inline bool get_isSupported_30() const { return ___isSupported_30; }
	inline bool* get_address_of_isSupported_30() { return &___isSupported_30; }
	inline void set_isSupported_30(bool value)
	{
		___isSupported_30 = value;
	}

	inline static int32_t get_offset_of_isDepthAvailable_31() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___isDepthAvailable_31)); }
	inline bool get_isDepthAvailable_31() const { return ___isDepthAvailable_31; }
	inline bool* get_address_of_isDepthAvailable_31() { return &___isDepthAvailable_31; }
	inline void set_isDepthAvailable_31(bool value)
	{
		___isDepthAvailable_31 = value;
	}

	inline static int32_t get_offset_of_blurMaterial_37() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___blurMaterial_37)); }
	inline Material_t193706927 * get_blurMaterial_37() const { return ___blurMaterial_37; }
	inline Material_t193706927 ** get_address_of_blurMaterial_37() { return &___blurMaterial_37; }
	inline void set_blurMaterial_37(Material_t193706927 * value)
	{
		___blurMaterial_37 = value;
		Il2CppCodeGenWriteBarrier(&___blurMaterial_37, value);
	}
};

struct HighlightingBase_t336099813_StaticFields
{
public:
	// UnityEngine.Color HighlightingSystem.HighlightingBase::colorClear
	Color_t2020392075  ___colorClear_9;
	// System.String HighlightingSystem.HighlightingBase::renderBufferName
	String_t* ___renderBufferName_10;
	// UnityEngine.Matrix4x4 HighlightingSystem.HighlightingBase::identityMatrix
	Matrix4x4_t2933234003  ___identityMatrix_11;
	// UnityEngine.Rendering.RenderTargetIdentifier HighlightingSystem.HighlightingBase::highlightingBufferID
	RenderTargetIdentifier_t772440638  ___highlightingBufferID_12;
	// UnityEngine.Rendering.RenderTargetIdentifier HighlightingSystem.HighlightingBase::cameraTargetID
	RenderTargetIdentifier_t772440638  ___cameraTargetID_13;
	// UnityEngine.Mesh HighlightingSystem.HighlightingBase::quad
	Mesh_t1356156583 * ___quad_14;
	// System.Int32 HighlightingSystem.HighlightingBase::graphicsDeviceVersion
	int32_t ___graphicsDeviceVersion_15;
	// System.String[] HighlightingSystem.HighlightingBase::shaderPaths
	StringU5BU5D_t1642385972* ___shaderPaths_32;
	// UnityEngine.Shader[] HighlightingSystem.HighlightingBase::shaders
	ShaderU5BU5D_t1916779366* ___shaders_33;
	// UnityEngine.Material[] HighlightingSystem.HighlightingBase::materials
	MaterialU5BU5D_t3123989686* ___materials_34;
	// UnityEngine.Material HighlightingSystem.HighlightingBase::cutMaterial
	Material_t193706927 * ___cutMaterial_35;
	// UnityEngine.Material HighlightingSystem.HighlightingBase::compMaterial
	Material_t193706927 * ___compMaterial_36;
	// System.Boolean HighlightingSystem.HighlightingBase::initialized
	bool ___initialized_38;

public:
	inline static int32_t get_offset_of_colorClear_9() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___colorClear_9)); }
	inline Color_t2020392075  get_colorClear_9() const { return ___colorClear_9; }
	inline Color_t2020392075 * get_address_of_colorClear_9() { return &___colorClear_9; }
	inline void set_colorClear_9(Color_t2020392075  value)
	{
		___colorClear_9 = value;
	}

	inline static int32_t get_offset_of_renderBufferName_10() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___renderBufferName_10)); }
	inline String_t* get_renderBufferName_10() const { return ___renderBufferName_10; }
	inline String_t** get_address_of_renderBufferName_10() { return &___renderBufferName_10; }
	inline void set_renderBufferName_10(String_t* value)
	{
		___renderBufferName_10 = value;
		Il2CppCodeGenWriteBarrier(&___renderBufferName_10, value);
	}

	inline static int32_t get_offset_of_identityMatrix_11() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___identityMatrix_11)); }
	inline Matrix4x4_t2933234003  get_identityMatrix_11() const { return ___identityMatrix_11; }
	inline Matrix4x4_t2933234003 * get_address_of_identityMatrix_11() { return &___identityMatrix_11; }
	inline void set_identityMatrix_11(Matrix4x4_t2933234003  value)
	{
		___identityMatrix_11 = value;
	}

	inline static int32_t get_offset_of_highlightingBufferID_12() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___highlightingBufferID_12)); }
	inline RenderTargetIdentifier_t772440638  get_highlightingBufferID_12() const { return ___highlightingBufferID_12; }
	inline RenderTargetIdentifier_t772440638 * get_address_of_highlightingBufferID_12() { return &___highlightingBufferID_12; }
	inline void set_highlightingBufferID_12(RenderTargetIdentifier_t772440638  value)
	{
		___highlightingBufferID_12 = value;
	}

	inline static int32_t get_offset_of_cameraTargetID_13() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___cameraTargetID_13)); }
	inline RenderTargetIdentifier_t772440638  get_cameraTargetID_13() const { return ___cameraTargetID_13; }
	inline RenderTargetIdentifier_t772440638 * get_address_of_cameraTargetID_13() { return &___cameraTargetID_13; }
	inline void set_cameraTargetID_13(RenderTargetIdentifier_t772440638  value)
	{
		___cameraTargetID_13 = value;
	}

	inline static int32_t get_offset_of_quad_14() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___quad_14)); }
	inline Mesh_t1356156583 * get_quad_14() const { return ___quad_14; }
	inline Mesh_t1356156583 ** get_address_of_quad_14() { return &___quad_14; }
	inline void set_quad_14(Mesh_t1356156583 * value)
	{
		___quad_14 = value;
		Il2CppCodeGenWriteBarrier(&___quad_14, value);
	}

	inline static int32_t get_offset_of_graphicsDeviceVersion_15() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___graphicsDeviceVersion_15)); }
	inline int32_t get_graphicsDeviceVersion_15() const { return ___graphicsDeviceVersion_15; }
	inline int32_t* get_address_of_graphicsDeviceVersion_15() { return &___graphicsDeviceVersion_15; }
	inline void set_graphicsDeviceVersion_15(int32_t value)
	{
		___graphicsDeviceVersion_15 = value;
	}

	inline static int32_t get_offset_of_shaderPaths_32() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___shaderPaths_32)); }
	inline StringU5BU5D_t1642385972* get_shaderPaths_32() const { return ___shaderPaths_32; }
	inline StringU5BU5D_t1642385972** get_address_of_shaderPaths_32() { return &___shaderPaths_32; }
	inline void set_shaderPaths_32(StringU5BU5D_t1642385972* value)
	{
		___shaderPaths_32 = value;
		Il2CppCodeGenWriteBarrier(&___shaderPaths_32, value);
	}

	inline static int32_t get_offset_of_shaders_33() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___shaders_33)); }
	inline ShaderU5BU5D_t1916779366* get_shaders_33() const { return ___shaders_33; }
	inline ShaderU5BU5D_t1916779366** get_address_of_shaders_33() { return &___shaders_33; }
	inline void set_shaders_33(ShaderU5BU5D_t1916779366* value)
	{
		___shaders_33 = value;
		Il2CppCodeGenWriteBarrier(&___shaders_33, value);
	}

	inline static int32_t get_offset_of_materials_34() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___materials_34)); }
	inline MaterialU5BU5D_t3123989686* get_materials_34() const { return ___materials_34; }
	inline MaterialU5BU5D_t3123989686** get_address_of_materials_34() { return &___materials_34; }
	inline void set_materials_34(MaterialU5BU5D_t3123989686* value)
	{
		___materials_34 = value;
		Il2CppCodeGenWriteBarrier(&___materials_34, value);
	}

	inline static int32_t get_offset_of_cutMaterial_35() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___cutMaterial_35)); }
	inline Material_t193706927 * get_cutMaterial_35() const { return ___cutMaterial_35; }
	inline Material_t193706927 ** get_address_of_cutMaterial_35() { return &___cutMaterial_35; }
	inline void set_cutMaterial_35(Material_t193706927 * value)
	{
		___cutMaterial_35 = value;
		Il2CppCodeGenWriteBarrier(&___cutMaterial_35, value);
	}

	inline static int32_t get_offset_of_compMaterial_36() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___compMaterial_36)); }
	inline Material_t193706927 * get_compMaterial_36() const { return ___compMaterial_36; }
	inline Material_t193706927 ** get_address_of_compMaterial_36() { return &___compMaterial_36; }
	inline void set_compMaterial_36(Material_t193706927 * value)
	{
		___compMaterial_36 = value;
		Il2CppCodeGenWriteBarrier(&___compMaterial_36, value);
	}

	inline static int32_t get_offset_of_initialized_38() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___initialized_38)); }
	inline bool get_initialized_38() const { return ___initialized_38; }
	inline bool* get_address_of_initialized_38() { return &___initialized_38; }
	inline void set_initialized_38(bool value)
	{
		___initialized_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
