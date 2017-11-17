#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t2464096222;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t2464096221;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t1094906160;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIGeometry
struct  UIGeometry_t1005900006  : public Il2CppObject
{
public:
	// BetterList`1<UnityEngine.Vector3> UIGeometry::verts
	BetterList_1_t2464096222 * ___verts_0;
	// BetterList`1<UnityEngine.Vector2> UIGeometry::uvs
	BetterList_1_t2464096221 * ___uvs_1;
	// BetterList`1<UnityEngine.Color32> UIGeometry::cols
	BetterList_1_t1094906160 * ___cols_2;
	// BetterList`1<UnityEngine.Vector3> UIGeometry::mRtpVerts
	BetterList_1_t2464096222 * ___mRtpVerts_3;
	// UnityEngine.Vector3 UIGeometry::mRtpNormal
	Vector3_t2243707580  ___mRtpNormal_4;
	// UnityEngine.Vector4 UIGeometry::mRtpTan
	Vector4_t2243707581  ___mRtpTan_5;

public:
	inline static int32_t get_offset_of_verts_0() { return static_cast<int32_t>(offsetof(UIGeometry_t1005900006, ___verts_0)); }
	inline BetterList_1_t2464096222 * get_verts_0() const { return ___verts_0; }
	inline BetterList_1_t2464096222 ** get_address_of_verts_0() { return &___verts_0; }
	inline void set_verts_0(BetterList_1_t2464096222 * value)
	{
		___verts_0 = value;
		Il2CppCodeGenWriteBarrier(&___verts_0, value);
	}

	inline static int32_t get_offset_of_uvs_1() { return static_cast<int32_t>(offsetof(UIGeometry_t1005900006, ___uvs_1)); }
	inline BetterList_1_t2464096221 * get_uvs_1() const { return ___uvs_1; }
	inline BetterList_1_t2464096221 ** get_address_of_uvs_1() { return &___uvs_1; }
	inline void set_uvs_1(BetterList_1_t2464096221 * value)
	{
		___uvs_1 = value;
		Il2CppCodeGenWriteBarrier(&___uvs_1, value);
	}

	inline static int32_t get_offset_of_cols_2() { return static_cast<int32_t>(offsetof(UIGeometry_t1005900006, ___cols_2)); }
	inline BetterList_1_t1094906160 * get_cols_2() const { return ___cols_2; }
	inline BetterList_1_t1094906160 ** get_address_of_cols_2() { return &___cols_2; }
	inline void set_cols_2(BetterList_1_t1094906160 * value)
	{
		___cols_2 = value;
		Il2CppCodeGenWriteBarrier(&___cols_2, value);
	}

	inline static int32_t get_offset_of_mRtpVerts_3() { return static_cast<int32_t>(offsetof(UIGeometry_t1005900006, ___mRtpVerts_3)); }
	inline BetterList_1_t2464096222 * get_mRtpVerts_3() const { return ___mRtpVerts_3; }
	inline BetterList_1_t2464096222 ** get_address_of_mRtpVerts_3() { return &___mRtpVerts_3; }
	inline void set_mRtpVerts_3(BetterList_1_t2464096222 * value)
	{
		___mRtpVerts_3 = value;
		Il2CppCodeGenWriteBarrier(&___mRtpVerts_3, value);
	}

	inline static int32_t get_offset_of_mRtpNormal_4() { return static_cast<int32_t>(offsetof(UIGeometry_t1005900006, ___mRtpNormal_4)); }
	inline Vector3_t2243707580  get_mRtpNormal_4() const { return ___mRtpNormal_4; }
	inline Vector3_t2243707580 * get_address_of_mRtpNormal_4() { return &___mRtpNormal_4; }
	inline void set_mRtpNormal_4(Vector3_t2243707580  value)
	{
		___mRtpNormal_4 = value;
	}

	inline static int32_t get_offset_of_mRtpTan_5() { return static_cast<int32_t>(offsetof(UIGeometry_t1005900006, ___mRtpTan_5)); }
	inline Vector4_t2243707581  get_mRtpTan_5() const { return ___mRtpTan_5; }
	inline Vector4_t2243707581 * get_address_of_mRtpTan_5() { return &___mRtpTan_5; }
	inline void set_mRtpTan_5(Vector4_t2243707581  value)
	{
		___mRtpTan_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
