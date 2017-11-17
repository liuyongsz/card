#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UILabel
struct UILabel_t1795115428;
// UISprite
struct UISprite_t603616735;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "AssemblyU2DCSharp_BasePanel542715433.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// promptpanel
struct  promptpanel_t545155156  : public BasePanel_t542715433
{
public:
	// UILabel promptpanel::context
	UILabel_t1795115428 * ___context_2;
	// UILabel promptpanel::title
	UILabel_t1795115428 * ___title_3;
	// UISprite promptpanel::okBtn
	UISprite_t603616735 * ___okBtn_4;
	// UISprite promptpanel::cancelBtn
	UISprite_t603616735 * ___cancelBtn_5;
	// UISprite promptpanel::copyTeamBtn
	UISprite_t603616735 * ___copyTeamBtn_6;
	// UISprite promptpanel::createBtn
	UISprite_t603616735 * ___createBtn_7;
	// UnityEngine.Transform promptpanel::normal
	Transform_t3275118058 * ___normal_8;
	// UnityEngine.Transform promptpanel::createTeam
	Transform_t3275118058 * ___createTeam_9;

public:
	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(promptpanel_t545155156, ___context_2)); }
	inline UILabel_t1795115428 * get_context_2() const { return ___context_2; }
	inline UILabel_t1795115428 ** get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(UILabel_t1795115428 * value)
	{
		___context_2 = value;
		Il2CppCodeGenWriteBarrier(&___context_2, value);
	}

	inline static int32_t get_offset_of_title_3() { return static_cast<int32_t>(offsetof(promptpanel_t545155156, ___title_3)); }
	inline UILabel_t1795115428 * get_title_3() const { return ___title_3; }
	inline UILabel_t1795115428 ** get_address_of_title_3() { return &___title_3; }
	inline void set_title_3(UILabel_t1795115428 * value)
	{
		___title_3 = value;
		Il2CppCodeGenWriteBarrier(&___title_3, value);
	}

	inline static int32_t get_offset_of_okBtn_4() { return static_cast<int32_t>(offsetof(promptpanel_t545155156, ___okBtn_4)); }
	inline UISprite_t603616735 * get_okBtn_4() const { return ___okBtn_4; }
	inline UISprite_t603616735 ** get_address_of_okBtn_4() { return &___okBtn_4; }
	inline void set_okBtn_4(UISprite_t603616735 * value)
	{
		___okBtn_4 = value;
		Il2CppCodeGenWriteBarrier(&___okBtn_4, value);
	}

	inline static int32_t get_offset_of_cancelBtn_5() { return static_cast<int32_t>(offsetof(promptpanel_t545155156, ___cancelBtn_5)); }
	inline UISprite_t603616735 * get_cancelBtn_5() const { return ___cancelBtn_5; }
	inline UISprite_t603616735 ** get_address_of_cancelBtn_5() { return &___cancelBtn_5; }
	inline void set_cancelBtn_5(UISprite_t603616735 * value)
	{
		___cancelBtn_5 = value;
		Il2CppCodeGenWriteBarrier(&___cancelBtn_5, value);
	}

	inline static int32_t get_offset_of_copyTeamBtn_6() { return static_cast<int32_t>(offsetof(promptpanel_t545155156, ___copyTeamBtn_6)); }
	inline UISprite_t603616735 * get_copyTeamBtn_6() const { return ___copyTeamBtn_6; }
	inline UISprite_t603616735 ** get_address_of_copyTeamBtn_6() { return &___copyTeamBtn_6; }
	inline void set_copyTeamBtn_6(UISprite_t603616735 * value)
	{
		___copyTeamBtn_6 = value;
		Il2CppCodeGenWriteBarrier(&___copyTeamBtn_6, value);
	}

	inline static int32_t get_offset_of_createBtn_7() { return static_cast<int32_t>(offsetof(promptpanel_t545155156, ___createBtn_7)); }
	inline UISprite_t603616735 * get_createBtn_7() const { return ___createBtn_7; }
	inline UISprite_t603616735 ** get_address_of_createBtn_7() { return &___createBtn_7; }
	inline void set_createBtn_7(UISprite_t603616735 * value)
	{
		___createBtn_7 = value;
		Il2CppCodeGenWriteBarrier(&___createBtn_7, value);
	}

	inline static int32_t get_offset_of_normal_8() { return static_cast<int32_t>(offsetof(promptpanel_t545155156, ___normal_8)); }
	inline Transform_t3275118058 * get_normal_8() const { return ___normal_8; }
	inline Transform_t3275118058 ** get_address_of_normal_8() { return &___normal_8; }
	inline void set_normal_8(Transform_t3275118058 * value)
	{
		___normal_8 = value;
		Il2CppCodeGenWriteBarrier(&___normal_8, value);
	}

	inline static int32_t get_offset_of_createTeam_9() { return static_cast<int32_t>(offsetof(promptpanel_t545155156, ___createTeam_9)); }
	inline Transform_t3275118058 * get_createTeam_9() const { return ___createTeam_9; }
	inline Transform_t3275118058 ** get_address_of_createTeam_9() { return &___createTeam_9; }
	inline void set_createTeam_9(Transform_t3275118058 * value)
	{
		___createTeam_9 = value;
		Il2CppCodeGenWriteBarrier(&___createTeam_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
