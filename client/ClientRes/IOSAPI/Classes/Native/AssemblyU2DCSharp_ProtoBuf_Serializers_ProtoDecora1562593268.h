#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.ProtoDecoratorBase
struct  ProtoDecoratorBase_t1562593268  : public Il2CppObject
{
public:
	// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Serializers.ProtoDecoratorBase::Tail
	Il2CppObject * ___Tail_0;

public:
	inline static int32_t get_offset_of_Tail_0() { return static_cast<int32_t>(offsetof(ProtoDecoratorBase_t1562593268, ___Tail_0)); }
	inline Il2CppObject * get_Tail_0() const { return ___Tail_0; }
	inline Il2CppObject ** get_address_of_Tail_0() { return &___Tail_0; }
	inline void set_Tail_0(Il2CppObject * value)
	{
		___Tail_0 = value;
		Il2CppCodeGenWriteBarrier(&___Tail_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
