#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AbsorbMoveEff
struct  AbsorbMoveEff_t97855973  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 AbsorbMoveEff::BombPoint
	Vector3_t2243707580  ___BombPoint_2;
	// System.Single AbsorbMoveEff::BombSpeed
	float ___BombSpeed_3;
	// System.Single AbsorbMoveEff::BombAcc
	float ___BombAcc_4;
	// System.Single AbsorbMoveEff::AbsorbAcc
	float ___AbsorbAcc_5;
	// UnityEngine.Vector3 AbsorbMoveEff::AbsorbPoint
	Vector3_t2243707580  ___AbsorbPoint_6;
	// UnityEngine.Vector3 AbsorbMoveEff::mMDir
	Vector3_t2243707580  ___mMDir_7;
	// System.Boolean AbsorbMoveEff::mIsMove
	bool ___mIsMove_8;
	// System.Single AbsorbMoveEff::mEcuteTime
	float ___mEcuteTime_9;
	// UnityEngine.Vector3 AbsorbMoveEff::mAbsorbVec
	Vector3_t2243707580  ___mAbsorbVec_10;
	// UnityEngine.Vector3 AbsorbMoveEff::mBmobDir
	Vector3_t2243707580  ___mBmobDir_11;
	// UnityEngine.Vector3 AbsorbMoveEff::mExcutePoint
	Vector3_t2243707580  ___mExcutePoint_12;
	// UnityEngine.Vector3 AbsorbMoveEff::mAddV
	Vector3_t2243707580  ___mAddV_13;
	// DG.Tweening.Ease AbsorbMoveEff::DoEase
	int32_t ___DoEase_14;

public:
	inline static int32_t get_offset_of_BombPoint_2() { return static_cast<int32_t>(offsetof(AbsorbMoveEff_t97855973, ___BombPoint_2)); }
	inline Vector3_t2243707580  get_BombPoint_2() const { return ___BombPoint_2; }
	inline Vector3_t2243707580 * get_address_of_BombPoint_2() { return &___BombPoint_2; }
	inline void set_BombPoint_2(Vector3_t2243707580  value)
	{
		___BombPoint_2 = value;
	}

	inline static int32_t get_offset_of_BombSpeed_3() { return static_cast<int32_t>(offsetof(AbsorbMoveEff_t97855973, ___BombSpeed_3)); }
	inline float get_BombSpeed_3() const { return ___BombSpeed_3; }
	inline float* get_address_of_BombSpeed_3() { return &___BombSpeed_3; }
	inline void set_BombSpeed_3(float value)
	{
		___BombSpeed_3 = value;
	}

	inline static int32_t get_offset_of_BombAcc_4() { return static_cast<int32_t>(offsetof(AbsorbMoveEff_t97855973, ___BombAcc_4)); }
	inline float get_BombAcc_4() const { return ___BombAcc_4; }
	inline float* get_address_of_BombAcc_4() { return &___BombAcc_4; }
	inline void set_BombAcc_4(float value)
	{
		___BombAcc_4 = value;
	}

	inline static int32_t get_offset_of_AbsorbAcc_5() { return static_cast<int32_t>(offsetof(AbsorbMoveEff_t97855973, ___AbsorbAcc_5)); }
	inline float get_AbsorbAcc_5() const { return ___AbsorbAcc_5; }
	inline float* get_address_of_AbsorbAcc_5() { return &___AbsorbAcc_5; }
	inline void set_AbsorbAcc_5(float value)
	{
		___AbsorbAcc_5 = value;
	}

	inline static int32_t get_offset_of_AbsorbPoint_6() { return static_cast<int32_t>(offsetof(AbsorbMoveEff_t97855973, ___AbsorbPoint_6)); }
	inline Vector3_t2243707580  get_AbsorbPoint_6() const { return ___AbsorbPoint_6; }
	inline Vector3_t2243707580 * get_address_of_AbsorbPoint_6() { return &___AbsorbPoint_6; }
	inline void set_AbsorbPoint_6(Vector3_t2243707580  value)
	{
		___AbsorbPoint_6 = value;
	}

	inline static int32_t get_offset_of_mMDir_7() { return static_cast<int32_t>(offsetof(AbsorbMoveEff_t97855973, ___mMDir_7)); }
	inline Vector3_t2243707580  get_mMDir_7() const { return ___mMDir_7; }
	inline Vector3_t2243707580 * get_address_of_mMDir_7() { return &___mMDir_7; }
	inline void set_mMDir_7(Vector3_t2243707580  value)
	{
		___mMDir_7 = value;
	}

	inline static int32_t get_offset_of_mIsMove_8() { return static_cast<int32_t>(offsetof(AbsorbMoveEff_t97855973, ___mIsMove_8)); }
	inline bool get_mIsMove_8() const { return ___mIsMove_8; }
	inline bool* get_address_of_mIsMove_8() { return &___mIsMove_8; }
	inline void set_mIsMove_8(bool value)
	{
		___mIsMove_8 = value;
	}

	inline static int32_t get_offset_of_mEcuteTime_9() { return static_cast<int32_t>(offsetof(AbsorbMoveEff_t97855973, ___mEcuteTime_9)); }
	inline float get_mEcuteTime_9() const { return ___mEcuteTime_9; }
	inline float* get_address_of_mEcuteTime_9() { return &___mEcuteTime_9; }
	inline void set_mEcuteTime_9(float value)
	{
		___mEcuteTime_9 = value;
	}

	inline static int32_t get_offset_of_mAbsorbVec_10() { return static_cast<int32_t>(offsetof(AbsorbMoveEff_t97855973, ___mAbsorbVec_10)); }
	inline Vector3_t2243707580  get_mAbsorbVec_10() const { return ___mAbsorbVec_10; }
	inline Vector3_t2243707580 * get_address_of_mAbsorbVec_10() { return &___mAbsorbVec_10; }
	inline void set_mAbsorbVec_10(Vector3_t2243707580  value)
	{
		___mAbsorbVec_10 = value;
	}

	inline static int32_t get_offset_of_mBmobDir_11() { return static_cast<int32_t>(offsetof(AbsorbMoveEff_t97855973, ___mBmobDir_11)); }
	inline Vector3_t2243707580  get_mBmobDir_11() const { return ___mBmobDir_11; }
	inline Vector3_t2243707580 * get_address_of_mBmobDir_11() { return &___mBmobDir_11; }
	inline void set_mBmobDir_11(Vector3_t2243707580  value)
	{
		___mBmobDir_11 = value;
	}

	inline static int32_t get_offset_of_mExcutePoint_12() { return static_cast<int32_t>(offsetof(AbsorbMoveEff_t97855973, ___mExcutePoint_12)); }
	inline Vector3_t2243707580  get_mExcutePoint_12() const { return ___mExcutePoint_12; }
	inline Vector3_t2243707580 * get_address_of_mExcutePoint_12() { return &___mExcutePoint_12; }
	inline void set_mExcutePoint_12(Vector3_t2243707580  value)
	{
		___mExcutePoint_12 = value;
	}

	inline static int32_t get_offset_of_mAddV_13() { return static_cast<int32_t>(offsetof(AbsorbMoveEff_t97855973, ___mAddV_13)); }
	inline Vector3_t2243707580  get_mAddV_13() const { return ___mAddV_13; }
	inline Vector3_t2243707580 * get_address_of_mAddV_13() { return &___mAddV_13; }
	inline void set_mAddV_13(Vector3_t2243707580  value)
	{
		___mAddV_13 = value;
	}

	inline static int32_t get_offset_of_DoEase_14() { return static_cast<int32_t>(offsetof(AbsorbMoveEff_t97855973, ___DoEase_14)); }
	inline int32_t get_DoEase_14() const { return ___DoEase_14; }
	inline int32_t* get_address_of_DoEase_14() { return &___DoEase_14; }
	inline void set_DoEase_14(int32_t value)
	{
		___DoEase_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
