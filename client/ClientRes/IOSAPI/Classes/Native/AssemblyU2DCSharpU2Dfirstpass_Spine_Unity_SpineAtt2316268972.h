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

#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_SpineAtt2518254498.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SpineAttachment
struct  SpineAttachment_t2316268972  : public SpineAttributeBase_t2518254498
{
public:
	// System.Boolean Spine.Unity.SpineAttachment::returnAttachmentPath
	bool ___returnAttachmentPath_3;
	// System.Boolean Spine.Unity.SpineAttachment::currentSkinOnly
	bool ___currentSkinOnly_4;
	// System.Boolean Spine.Unity.SpineAttachment::placeholdersOnly
	bool ___placeholdersOnly_5;
	// System.String Spine.Unity.SpineAttachment::skinField
	String_t* ___skinField_6;
	// System.String Spine.Unity.SpineAttachment::slotField
	String_t* ___slotField_7;

public:
	inline static int32_t get_offset_of_returnAttachmentPath_3() { return static_cast<int32_t>(offsetof(SpineAttachment_t2316268972, ___returnAttachmentPath_3)); }
	inline bool get_returnAttachmentPath_3() const { return ___returnAttachmentPath_3; }
	inline bool* get_address_of_returnAttachmentPath_3() { return &___returnAttachmentPath_3; }
	inline void set_returnAttachmentPath_3(bool value)
	{
		___returnAttachmentPath_3 = value;
	}

	inline static int32_t get_offset_of_currentSkinOnly_4() { return static_cast<int32_t>(offsetof(SpineAttachment_t2316268972, ___currentSkinOnly_4)); }
	inline bool get_currentSkinOnly_4() const { return ___currentSkinOnly_4; }
	inline bool* get_address_of_currentSkinOnly_4() { return &___currentSkinOnly_4; }
	inline void set_currentSkinOnly_4(bool value)
	{
		___currentSkinOnly_4 = value;
	}

	inline static int32_t get_offset_of_placeholdersOnly_5() { return static_cast<int32_t>(offsetof(SpineAttachment_t2316268972, ___placeholdersOnly_5)); }
	inline bool get_placeholdersOnly_5() const { return ___placeholdersOnly_5; }
	inline bool* get_address_of_placeholdersOnly_5() { return &___placeholdersOnly_5; }
	inline void set_placeholdersOnly_5(bool value)
	{
		___placeholdersOnly_5 = value;
	}

	inline static int32_t get_offset_of_skinField_6() { return static_cast<int32_t>(offsetof(SpineAttachment_t2316268972, ___skinField_6)); }
	inline String_t* get_skinField_6() const { return ___skinField_6; }
	inline String_t** get_address_of_skinField_6() { return &___skinField_6; }
	inline void set_skinField_6(String_t* value)
	{
		___skinField_6 = value;
		Il2CppCodeGenWriteBarrier(&___skinField_6, value);
	}

	inline static int32_t get_offset_of_slotField_7() { return static_cast<int32_t>(offsetof(SpineAttachment_t2316268972, ___slotField_7)); }
	inline String_t* get_slotField_7() const { return ___slotField_7; }
	inline String_t** get_address_of_slotField_7() { return &___slotField_7; }
	inline void set_slotField_7(String_t* value)
	{
		___slotField_7 = value;
		Il2CppCodeGenWriteBarrier(&___slotField_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
