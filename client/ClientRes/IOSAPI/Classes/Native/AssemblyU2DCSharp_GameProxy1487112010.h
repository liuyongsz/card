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
// System.Action
struct Action_t3226471752;

#include "AssemblyU2DCSharp_PureMVC_Patterns_Proxy_1_gen2414835808.h"
#include "AssemblyU2DCSharp_EScene3501443013.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameProxy
struct  GameProxy_t1487112010  : public Proxy_1_t2414835808
{
public:
	// System.Boolean GameProxy::m_IsStart
	bool ___m_IsStart_4;
	// EScene GameProxy::m_currSceneType
	int32_t ___m_currSceneType_5;
	// System.String GameProxy::m_loadingscene
	String_t* ___m_loadingscene_6;
	// System.Boolean GameProxy::_compelteConfig
	bool ____compelteConfig_7;
	// System.String GameProxy::m_currSceneName
	String_t* ___m_currSceneName_8;
	// System.Action GameProxy::InitTextManagerComplete
	Action_t3226471752 * ___InitTextManagerComplete_9;

public:
	inline static int32_t get_offset_of_m_IsStart_4() { return static_cast<int32_t>(offsetof(GameProxy_t1487112010, ___m_IsStart_4)); }
	inline bool get_m_IsStart_4() const { return ___m_IsStart_4; }
	inline bool* get_address_of_m_IsStart_4() { return &___m_IsStart_4; }
	inline void set_m_IsStart_4(bool value)
	{
		___m_IsStart_4 = value;
	}

	inline static int32_t get_offset_of_m_currSceneType_5() { return static_cast<int32_t>(offsetof(GameProxy_t1487112010, ___m_currSceneType_5)); }
	inline int32_t get_m_currSceneType_5() const { return ___m_currSceneType_5; }
	inline int32_t* get_address_of_m_currSceneType_5() { return &___m_currSceneType_5; }
	inline void set_m_currSceneType_5(int32_t value)
	{
		___m_currSceneType_5 = value;
	}

	inline static int32_t get_offset_of_m_loadingscene_6() { return static_cast<int32_t>(offsetof(GameProxy_t1487112010, ___m_loadingscene_6)); }
	inline String_t* get_m_loadingscene_6() const { return ___m_loadingscene_6; }
	inline String_t** get_address_of_m_loadingscene_6() { return &___m_loadingscene_6; }
	inline void set_m_loadingscene_6(String_t* value)
	{
		___m_loadingscene_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_loadingscene_6, value);
	}

	inline static int32_t get_offset_of__compelteConfig_7() { return static_cast<int32_t>(offsetof(GameProxy_t1487112010, ____compelteConfig_7)); }
	inline bool get__compelteConfig_7() const { return ____compelteConfig_7; }
	inline bool* get_address_of__compelteConfig_7() { return &____compelteConfig_7; }
	inline void set__compelteConfig_7(bool value)
	{
		____compelteConfig_7 = value;
	}

	inline static int32_t get_offset_of_m_currSceneName_8() { return static_cast<int32_t>(offsetof(GameProxy_t1487112010, ___m_currSceneName_8)); }
	inline String_t* get_m_currSceneName_8() const { return ___m_currSceneName_8; }
	inline String_t** get_address_of_m_currSceneName_8() { return &___m_currSceneName_8; }
	inline void set_m_currSceneName_8(String_t* value)
	{
		___m_currSceneName_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_currSceneName_8, value);
	}

	inline static int32_t get_offset_of_InitTextManagerComplete_9() { return static_cast<int32_t>(offsetof(GameProxy_t1487112010, ___InitTextManagerComplete_9)); }
	inline Action_t3226471752 * get_InitTextManagerComplete_9() const { return ___InitTextManagerComplete_9; }
	inline Action_t3226471752 ** get_address_of_InitTextManagerComplete_9() { return &___InitTextManagerComplete_9; }
	inline void set_InitTextManagerComplete_9(Action_t3226471752 * value)
	{
		___InitTextManagerComplete_9 = value;
		Il2CppCodeGenWriteBarrier(&___InitTextManagerComplete_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
