#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t3614634134;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_LinkType3478309428.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UILinkText
struct  UILinkText_t2030967587  : public MonoBehaviour_t1158329972
{
public:
	// LinkType UILinkText::linktype
	int32_t ___linktype_2;
	// System.Object[] UILinkText::args
	ObjectU5BU5D_t3614634134* ___args_3;
	// UnityEngine.GameObject UILinkText::voiceObject
	GameObject_t1756533147 * ___voiceObject_4;

public:
	inline static int32_t get_offset_of_linktype_2() { return static_cast<int32_t>(offsetof(UILinkText_t2030967587, ___linktype_2)); }
	inline int32_t get_linktype_2() const { return ___linktype_2; }
	inline int32_t* get_address_of_linktype_2() { return &___linktype_2; }
	inline void set_linktype_2(int32_t value)
	{
		___linktype_2 = value;
	}

	inline static int32_t get_offset_of_args_3() { return static_cast<int32_t>(offsetof(UILinkText_t2030967587, ___args_3)); }
	inline ObjectU5BU5D_t3614634134* get_args_3() const { return ___args_3; }
	inline ObjectU5BU5D_t3614634134** get_address_of_args_3() { return &___args_3; }
	inline void set_args_3(ObjectU5BU5D_t3614634134* value)
	{
		___args_3 = value;
		Il2CppCodeGenWriteBarrier(&___args_3, value);
	}

	inline static int32_t get_offset_of_voiceObject_4() { return static_cast<int32_t>(offsetof(UILinkText_t2030967587, ___voiceObject_4)); }
	inline GameObject_t1756533147 * get_voiceObject_4() const { return ___voiceObject_4; }
	inline GameObject_t1756533147 ** get_address_of_voiceObject_4() { return &___voiceObject_4; }
	inline void set_voiceObject_4(GameObject_t1756533147 * value)
	{
		___voiceObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___voiceObject_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
