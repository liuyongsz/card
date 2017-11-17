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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VersionAssetData
struct  VersionAssetData_t3174368812  : public Il2CppObject
{
public:
	// System.String VersionAssetData::idField
	String_t* ___idField_0;
	// System.String VersionAssetData::pathField
	String_t* ___pathField_1;
	// System.String VersionAssetData::md5Field
	String_t* ___md5Field_2;
	// System.Int32 VersionAssetData::sizeField
	int32_t ___sizeField_3;
	// System.Boolean VersionAssetData::isHighSpeedSave
	bool ___isHighSpeedSave_4;
	// System.Int32 VersionAssetData::iLimitVer
	int32_t ___iLimitVer_5;
	// System.Boolean VersionAssetData::bLoadError
	bool ___bLoadError_6;

public:
	inline static int32_t get_offset_of_idField_0() { return static_cast<int32_t>(offsetof(VersionAssetData_t3174368812, ___idField_0)); }
	inline String_t* get_idField_0() const { return ___idField_0; }
	inline String_t** get_address_of_idField_0() { return &___idField_0; }
	inline void set_idField_0(String_t* value)
	{
		___idField_0 = value;
		Il2CppCodeGenWriteBarrier(&___idField_0, value);
	}

	inline static int32_t get_offset_of_pathField_1() { return static_cast<int32_t>(offsetof(VersionAssetData_t3174368812, ___pathField_1)); }
	inline String_t* get_pathField_1() const { return ___pathField_1; }
	inline String_t** get_address_of_pathField_1() { return &___pathField_1; }
	inline void set_pathField_1(String_t* value)
	{
		___pathField_1 = value;
		Il2CppCodeGenWriteBarrier(&___pathField_1, value);
	}

	inline static int32_t get_offset_of_md5Field_2() { return static_cast<int32_t>(offsetof(VersionAssetData_t3174368812, ___md5Field_2)); }
	inline String_t* get_md5Field_2() const { return ___md5Field_2; }
	inline String_t** get_address_of_md5Field_2() { return &___md5Field_2; }
	inline void set_md5Field_2(String_t* value)
	{
		___md5Field_2 = value;
		Il2CppCodeGenWriteBarrier(&___md5Field_2, value);
	}

	inline static int32_t get_offset_of_sizeField_3() { return static_cast<int32_t>(offsetof(VersionAssetData_t3174368812, ___sizeField_3)); }
	inline int32_t get_sizeField_3() const { return ___sizeField_3; }
	inline int32_t* get_address_of_sizeField_3() { return &___sizeField_3; }
	inline void set_sizeField_3(int32_t value)
	{
		___sizeField_3 = value;
	}

	inline static int32_t get_offset_of_isHighSpeedSave_4() { return static_cast<int32_t>(offsetof(VersionAssetData_t3174368812, ___isHighSpeedSave_4)); }
	inline bool get_isHighSpeedSave_4() const { return ___isHighSpeedSave_4; }
	inline bool* get_address_of_isHighSpeedSave_4() { return &___isHighSpeedSave_4; }
	inline void set_isHighSpeedSave_4(bool value)
	{
		___isHighSpeedSave_4 = value;
	}

	inline static int32_t get_offset_of_iLimitVer_5() { return static_cast<int32_t>(offsetof(VersionAssetData_t3174368812, ___iLimitVer_5)); }
	inline int32_t get_iLimitVer_5() const { return ___iLimitVer_5; }
	inline int32_t* get_address_of_iLimitVer_5() { return &___iLimitVer_5; }
	inline void set_iLimitVer_5(int32_t value)
	{
		___iLimitVer_5 = value;
	}

	inline static int32_t get_offset_of_bLoadError_6() { return static_cast<int32_t>(offsetof(VersionAssetData_t3174368812, ___bLoadError_6)); }
	inline bool get_bLoadError_6() const { return ___bLoadError_6; }
	inline bool* get_address_of_bLoadError_6() { return &___bLoadError_6; }
	inline void set_bLoadError_6(bool value)
	{
		___bLoadError_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
