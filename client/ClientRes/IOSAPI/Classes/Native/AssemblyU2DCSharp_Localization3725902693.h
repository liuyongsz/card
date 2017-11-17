#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Localization
struct Localization_t3725902693;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// UnityEngine.TextAsset[]
struct TextAssetU5BU5D_t1190170664;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t3557165234;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Localization
struct  Localization_t3725902693  : public MonoBehaviour_t1158329972
{
public:
	// System.String Localization::startingLanguage
	String_t* ___startingLanguage_5;
	// UnityEngine.TextAsset[] Localization::languages
	TextAssetU5BU5D_t1190170664* ___languages_6;

public:
	inline static int32_t get_offset_of_startingLanguage_5() { return static_cast<int32_t>(offsetof(Localization_t3725902693, ___startingLanguage_5)); }
	inline String_t* get_startingLanguage_5() const { return ___startingLanguage_5; }
	inline String_t** get_address_of_startingLanguage_5() { return &___startingLanguage_5; }
	inline void set_startingLanguage_5(String_t* value)
	{
		___startingLanguage_5 = value;
		Il2CppCodeGenWriteBarrier(&___startingLanguage_5, value);
	}

	inline static int32_t get_offset_of_languages_6() { return static_cast<int32_t>(offsetof(Localization_t3725902693, ___languages_6)); }
	inline TextAssetU5BU5D_t1190170664* get_languages_6() const { return ___languages_6; }
	inline TextAssetU5BU5D_t1190170664** get_address_of_languages_6() { return &___languages_6; }
	inline void set_languages_6(TextAssetU5BU5D_t1190170664* value)
	{
		___languages_6 = value;
		Il2CppCodeGenWriteBarrier(&___languages_6, value);
	}
};

struct Localization_t3725902693_StaticFields
{
public:
	// Localization Localization::mInstance
	Localization_t3725902693 * ___mInstance_2;
	// System.String[] Localization::knownLanguages
	StringU5BU5D_t1642385972* ___knownLanguages_3;
	// System.Boolean Localization::localizationHasBeenSet
	bool ___localizationHasBeenSet_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Localization::mOldDictionary
	Dictionary_2_t3943999495 * ___mOldDictionary_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.String[]> Localization::mDictionary
	Dictionary_2_t3557165234 * ___mDictionary_8;
	// System.Int32 Localization::mLanguageIndex
	int32_t ___mLanguageIndex_9;
	// System.String Localization::mLanguage
	String_t* ___mLanguage_10;

public:
	inline static int32_t get_offset_of_mInstance_2() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mInstance_2)); }
	inline Localization_t3725902693 * get_mInstance_2() const { return ___mInstance_2; }
	inline Localization_t3725902693 ** get_address_of_mInstance_2() { return &___mInstance_2; }
	inline void set_mInstance_2(Localization_t3725902693 * value)
	{
		___mInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_2, value);
	}

	inline static int32_t get_offset_of_knownLanguages_3() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___knownLanguages_3)); }
	inline StringU5BU5D_t1642385972* get_knownLanguages_3() const { return ___knownLanguages_3; }
	inline StringU5BU5D_t1642385972** get_address_of_knownLanguages_3() { return &___knownLanguages_3; }
	inline void set_knownLanguages_3(StringU5BU5D_t1642385972* value)
	{
		___knownLanguages_3 = value;
		Il2CppCodeGenWriteBarrier(&___knownLanguages_3, value);
	}

	inline static int32_t get_offset_of_localizationHasBeenSet_4() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___localizationHasBeenSet_4)); }
	inline bool get_localizationHasBeenSet_4() const { return ___localizationHasBeenSet_4; }
	inline bool* get_address_of_localizationHasBeenSet_4() { return &___localizationHasBeenSet_4; }
	inline void set_localizationHasBeenSet_4(bool value)
	{
		___localizationHasBeenSet_4 = value;
	}

	inline static int32_t get_offset_of_mOldDictionary_7() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mOldDictionary_7)); }
	inline Dictionary_2_t3943999495 * get_mOldDictionary_7() const { return ___mOldDictionary_7; }
	inline Dictionary_2_t3943999495 ** get_address_of_mOldDictionary_7() { return &___mOldDictionary_7; }
	inline void set_mOldDictionary_7(Dictionary_2_t3943999495 * value)
	{
		___mOldDictionary_7 = value;
		Il2CppCodeGenWriteBarrier(&___mOldDictionary_7, value);
	}

	inline static int32_t get_offset_of_mDictionary_8() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mDictionary_8)); }
	inline Dictionary_2_t3557165234 * get_mDictionary_8() const { return ___mDictionary_8; }
	inline Dictionary_2_t3557165234 ** get_address_of_mDictionary_8() { return &___mDictionary_8; }
	inline void set_mDictionary_8(Dictionary_2_t3557165234 * value)
	{
		___mDictionary_8 = value;
		Il2CppCodeGenWriteBarrier(&___mDictionary_8, value);
	}

	inline static int32_t get_offset_of_mLanguageIndex_9() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mLanguageIndex_9)); }
	inline int32_t get_mLanguageIndex_9() const { return ___mLanguageIndex_9; }
	inline int32_t* get_address_of_mLanguageIndex_9() { return &___mLanguageIndex_9; }
	inline void set_mLanguageIndex_9(int32_t value)
	{
		___mLanguageIndex_9 = value;
	}

	inline static int32_t get_offset_of_mLanguage_10() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mLanguage_10)); }
	inline String_t* get_mLanguage_10() const { return ___mLanguage_10; }
	inline String_t** get_address_of_mLanguage_10() { return &___mLanguage_10; }
	inline void set_mLanguage_10(String_t* value)
	{
		___mLanguage_10 = value;
		Il2CppCodeGenWriteBarrier(&___mLanguage_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
