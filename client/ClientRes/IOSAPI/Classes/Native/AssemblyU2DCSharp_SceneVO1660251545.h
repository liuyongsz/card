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
#include "AssemblyU2DCSharp_EScene3501443013.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneVO
struct  SceneVO_t1660251545  : public Il2CppObject
{
public:
	// System.String SceneVO::sceneName
	String_t* ___sceneName_0;
	// EScene SceneVO::scenetype
	int32_t ___scenetype_1;
	// System.String SceneVO::abname
	String_t* ___abname_2;
	// System.Boolean SceneVO::loading
	bool ___loading_3;

public:
	inline static int32_t get_offset_of_sceneName_0() { return static_cast<int32_t>(offsetof(SceneVO_t1660251545, ___sceneName_0)); }
	inline String_t* get_sceneName_0() const { return ___sceneName_0; }
	inline String_t** get_address_of_sceneName_0() { return &___sceneName_0; }
	inline void set_sceneName_0(String_t* value)
	{
		___sceneName_0 = value;
		Il2CppCodeGenWriteBarrier(&___sceneName_0, value);
	}

	inline static int32_t get_offset_of_scenetype_1() { return static_cast<int32_t>(offsetof(SceneVO_t1660251545, ___scenetype_1)); }
	inline int32_t get_scenetype_1() const { return ___scenetype_1; }
	inline int32_t* get_address_of_scenetype_1() { return &___scenetype_1; }
	inline void set_scenetype_1(int32_t value)
	{
		___scenetype_1 = value;
	}

	inline static int32_t get_offset_of_abname_2() { return static_cast<int32_t>(offsetof(SceneVO_t1660251545, ___abname_2)); }
	inline String_t* get_abname_2() const { return ___abname_2; }
	inline String_t** get_address_of_abname_2() { return &___abname_2; }
	inline void set_abname_2(String_t* value)
	{
		___abname_2 = value;
		Il2CppCodeGenWriteBarrier(&___abname_2, value);
	}

	inline static int32_t get_offset_of_loading_3() { return static_cast<int32_t>(offsetof(SceneVO_t1660251545, ___loading_3)); }
	inline bool get_loading_3() const { return ___loading_3; }
	inline bool* get_address_of_loading_3() { return &___loading_3; }
	inline void set_loading_3(bool value)
	{
		___loading_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
