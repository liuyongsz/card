#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Attachment2584075367.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.VertexAttachment
struct  VertexAttachment_t2755655897  : public Attachment_t2584075367
{
public:
	// System.Int32 Spine.VertexAttachment::id
	int32_t ___id_3;
	// System.Int32[] Spine.VertexAttachment::bones
	Int32U5BU5D_t3030399641* ___bones_4;
	// System.Single[] Spine.VertexAttachment::vertices
	SingleU5BU5D_t577127397* ___vertices_5;
	// System.Int32 Spine.VertexAttachment::worldVerticesLength
	int32_t ___worldVerticesLength_6;

public:
	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(VertexAttachment_t2755655897, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}

	inline static int32_t get_offset_of_bones_4() { return static_cast<int32_t>(offsetof(VertexAttachment_t2755655897, ___bones_4)); }
	inline Int32U5BU5D_t3030399641* get_bones_4() const { return ___bones_4; }
	inline Int32U5BU5D_t3030399641** get_address_of_bones_4() { return &___bones_4; }
	inline void set_bones_4(Int32U5BU5D_t3030399641* value)
	{
		___bones_4 = value;
		Il2CppCodeGenWriteBarrier(&___bones_4, value);
	}

	inline static int32_t get_offset_of_vertices_5() { return static_cast<int32_t>(offsetof(VertexAttachment_t2755655897, ___vertices_5)); }
	inline SingleU5BU5D_t577127397* get_vertices_5() const { return ___vertices_5; }
	inline SingleU5BU5D_t577127397** get_address_of_vertices_5() { return &___vertices_5; }
	inline void set_vertices_5(SingleU5BU5D_t577127397* value)
	{
		___vertices_5 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_5, value);
	}

	inline static int32_t get_offset_of_worldVerticesLength_6() { return static_cast<int32_t>(offsetof(VertexAttachment_t2755655897, ___worldVerticesLength_6)); }
	inline int32_t get_worldVerticesLength_6() const { return ___worldVerticesLength_6; }
	inline int32_t* get_address_of_worldVerticesLength_6() { return &___worldVerticesLength_6; }
	inline void set_worldVerticesLength_6(int32_t value)
	{
		___worldVerticesLength_6 = value;
	}
};

struct VertexAttachment_t2755655897_StaticFields
{
public:
	// System.Int32 Spine.VertexAttachment::nextID
	int32_t ___nextID_1;
	// System.Object Spine.VertexAttachment::nextIdLock
	Il2CppObject * ___nextIdLock_2;

public:
	inline static int32_t get_offset_of_nextID_1() { return static_cast<int32_t>(offsetof(VertexAttachment_t2755655897_StaticFields, ___nextID_1)); }
	inline int32_t get_nextID_1() const { return ___nextID_1; }
	inline int32_t* get_address_of_nextID_1() { return &___nextID_1; }
	inline void set_nextID_1(int32_t value)
	{
		___nextID_1 = value;
	}

	inline static int32_t get_offset_of_nextIdLock_2() { return static_cast<int32_t>(offsetof(VertexAttachment_t2755655897_StaticFields, ___nextIdLock_2)); }
	inline Il2CppObject * get_nextIdLock_2() const { return ___nextIdLock_2; }
	inline Il2CppObject ** get_address_of_nextIdLock_2() { return &___nextIdLock_2; }
	inline void set_nextIdLock_2(Il2CppObject * value)
	{
		___nextIdLock_2 = value;
		Il2CppCodeGenWriteBarrier(&___nextIdLock_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
