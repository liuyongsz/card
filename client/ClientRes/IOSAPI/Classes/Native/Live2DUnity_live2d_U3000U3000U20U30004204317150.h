#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,live2d.　 　 >
struct Dictionary_2_t2400131260;
// System.Collections.Generic.List`1<live2d.　 　　>
struct List_1_t4149452746;
// live2d.DrawDataID
struct DrawDataID_t1444079665;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t2912116861;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t2833400353;
// live2d.　  　/　
struct U3000_t262583959;

#include "Live2DUnity_live2d_DrawParam1378702819.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.　　 　
struct  U3000U3000U20U3000_t4204317150  : public DrawParam_t1378702819
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,live2d.　 　 > live2d.　　 　::commandsCache
	Dictionary_2_t2400131260 * ___commandsCache_25;
	// System.Collections.Generic.List`1<live2d.　 　　> live2d.　　 　::batches
	List_1_t4149452746 * ___batches_26;
	// live2d.DrawDataID live2d.　　 　::currentDDID
	DrawDataID_t1444079665 * ___currentDDID_27;
	// System.Int32 live2d.　　 　::batchIndex
	int32_t ___batchIndex_28;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> live2d.　　 　::textures
	List_1_t2912116861 * ___textures_29;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> live2d.　　 　::reserveTextureNo
	Dictionary_2_t2833400353 * ___reserveTextureNo_30;
	// UnityEngine.Matrix4x4 live2d.　　 　::unityMatrix
	Matrix4x4_t2933234003  ___unityMatrix_31;
	// live2d.　  　/　 live2d.　　 　::clipBufPre_clipContextMask
	U3000_t262583959 * ___clipBufPre_clipContextMask_32;
	// live2d.　  　/　 live2d.　　 　::clipBufPre_clipContextDraw
	U3000_t262583959 * ___clipBufPre_clipContextDraw_33;

public:
	inline static int32_t get_offset_of_commandsCache_25() { return static_cast<int32_t>(offsetof(U3000U3000U20U3000_t4204317150, ___commandsCache_25)); }
	inline Dictionary_2_t2400131260 * get_commandsCache_25() const { return ___commandsCache_25; }
	inline Dictionary_2_t2400131260 ** get_address_of_commandsCache_25() { return &___commandsCache_25; }
	inline void set_commandsCache_25(Dictionary_2_t2400131260 * value)
	{
		___commandsCache_25 = value;
		Il2CppCodeGenWriteBarrier(&___commandsCache_25, value);
	}

	inline static int32_t get_offset_of_batches_26() { return static_cast<int32_t>(offsetof(U3000U3000U20U3000_t4204317150, ___batches_26)); }
	inline List_1_t4149452746 * get_batches_26() const { return ___batches_26; }
	inline List_1_t4149452746 ** get_address_of_batches_26() { return &___batches_26; }
	inline void set_batches_26(List_1_t4149452746 * value)
	{
		___batches_26 = value;
		Il2CppCodeGenWriteBarrier(&___batches_26, value);
	}

	inline static int32_t get_offset_of_currentDDID_27() { return static_cast<int32_t>(offsetof(U3000U3000U20U3000_t4204317150, ___currentDDID_27)); }
	inline DrawDataID_t1444079665 * get_currentDDID_27() const { return ___currentDDID_27; }
	inline DrawDataID_t1444079665 ** get_address_of_currentDDID_27() { return &___currentDDID_27; }
	inline void set_currentDDID_27(DrawDataID_t1444079665 * value)
	{
		___currentDDID_27 = value;
		Il2CppCodeGenWriteBarrier(&___currentDDID_27, value);
	}

	inline static int32_t get_offset_of_batchIndex_28() { return static_cast<int32_t>(offsetof(U3000U3000U20U3000_t4204317150, ___batchIndex_28)); }
	inline int32_t get_batchIndex_28() const { return ___batchIndex_28; }
	inline int32_t* get_address_of_batchIndex_28() { return &___batchIndex_28; }
	inline void set_batchIndex_28(int32_t value)
	{
		___batchIndex_28 = value;
	}

	inline static int32_t get_offset_of_textures_29() { return static_cast<int32_t>(offsetof(U3000U3000U20U3000_t4204317150, ___textures_29)); }
	inline List_1_t2912116861 * get_textures_29() const { return ___textures_29; }
	inline List_1_t2912116861 ** get_address_of_textures_29() { return &___textures_29; }
	inline void set_textures_29(List_1_t2912116861 * value)
	{
		___textures_29 = value;
		Il2CppCodeGenWriteBarrier(&___textures_29, value);
	}

	inline static int32_t get_offset_of_reserveTextureNo_30() { return static_cast<int32_t>(offsetof(U3000U3000U20U3000_t4204317150, ___reserveTextureNo_30)); }
	inline Dictionary_2_t2833400353 * get_reserveTextureNo_30() const { return ___reserveTextureNo_30; }
	inline Dictionary_2_t2833400353 ** get_address_of_reserveTextureNo_30() { return &___reserveTextureNo_30; }
	inline void set_reserveTextureNo_30(Dictionary_2_t2833400353 * value)
	{
		___reserveTextureNo_30 = value;
		Il2CppCodeGenWriteBarrier(&___reserveTextureNo_30, value);
	}

	inline static int32_t get_offset_of_unityMatrix_31() { return static_cast<int32_t>(offsetof(U3000U3000U20U3000_t4204317150, ___unityMatrix_31)); }
	inline Matrix4x4_t2933234003  get_unityMatrix_31() const { return ___unityMatrix_31; }
	inline Matrix4x4_t2933234003 * get_address_of_unityMatrix_31() { return &___unityMatrix_31; }
	inline void set_unityMatrix_31(Matrix4x4_t2933234003  value)
	{
		___unityMatrix_31 = value;
	}

	inline static int32_t get_offset_of_clipBufPre_clipContextMask_32() { return static_cast<int32_t>(offsetof(U3000U3000U20U3000_t4204317150, ___clipBufPre_clipContextMask_32)); }
	inline U3000_t262583959 * get_clipBufPre_clipContextMask_32() const { return ___clipBufPre_clipContextMask_32; }
	inline U3000_t262583959 ** get_address_of_clipBufPre_clipContextMask_32() { return &___clipBufPre_clipContextMask_32; }
	inline void set_clipBufPre_clipContextMask_32(U3000_t262583959 * value)
	{
		___clipBufPre_clipContextMask_32 = value;
		Il2CppCodeGenWriteBarrier(&___clipBufPre_clipContextMask_32, value);
	}

	inline static int32_t get_offset_of_clipBufPre_clipContextDraw_33() { return static_cast<int32_t>(offsetof(U3000U3000U20U3000_t4204317150, ___clipBufPre_clipContextDraw_33)); }
	inline U3000_t262583959 * get_clipBufPre_clipContextDraw_33() const { return ___clipBufPre_clipContextDraw_33; }
	inline U3000_t262583959 ** get_address_of_clipBufPre_clipContextDraw_33() { return &___clipBufPre_clipContextDraw_33; }
	inline void set_clipBufPre_clipContextDraw_33(U3000_t262583959 * value)
	{
		___clipBufPre_clipContextDraw_33 = value;
		Il2CppCodeGenWriteBarrier(&___clipBufPre_clipContextDraw_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
