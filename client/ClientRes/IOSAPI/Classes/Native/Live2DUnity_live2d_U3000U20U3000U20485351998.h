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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_CombineInstance64595210.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.　 　 
struct  U3000U20U3000U20_t485351998  : public Il2CppObject
{
public:
	// System.String live2d.　 　 ::name
	String_t* ___name_0;
	// UnityEngine.CombineInstance live2d.　 　 ::combine
	CombineInstance_t64595210  ___combine_1;
	// System.Int32 live2d.　 　 ::opacity
	int32_t ___opacity_2;
	// UnityEngine.Color live2d.　 　 ::color
	Color_t2020392075  ___color_3;
	// UnityEngine.Vector3[] live2d.　 　 ::vertices
	Vector3U5BU5D_t1172311765* ___vertices_4;
	// UnityEngine.Color[] live2d.　 　 ::colors
	ColorU5BU5D_t672350442* ___colors_5;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3000U20U3000U20_t485351998, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_combine_1() { return static_cast<int32_t>(offsetof(U3000U20U3000U20_t485351998, ___combine_1)); }
	inline CombineInstance_t64595210  get_combine_1() const { return ___combine_1; }
	inline CombineInstance_t64595210 * get_address_of_combine_1() { return &___combine_1; }
	inline void set_combine_1(CombineInstance_t64595210  value)
	{
		___combine_1 = value;
	}

	inline static int32_t get_offset_of_opacity_2() { return static_cast<int32_t>(offsetof(U3000U20U3000U20_t485351998, ___opacity_2)); }
	inline int32_t get_opacity_2() const { return ___opacity_2; }
	inline int32_t* get_address_of_opacity_2() { return &___opacity_2; }
	inline void set_opacity_2(int32_t value)
	{
		___opacity_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(U3000U20U3000U20_t485351998, ___color_3)); }
	inline Color_t2020392075  get_color_3() const { return ___color_3; }
	inline Color_t2020392075 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_t2020392075  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_vertices_4() { return static_cast<int32_t>(offsetof(U3000U20U3000U20_t485351998, ___vertices_4)); }
	inline Vector3U5BU5D_t1172311765* get_vertices_4() const { return ___vertices_4; }
	inline Vector3U5BU5D_t1172311765** get_address_of_vertices_4() { return &___vertices_4; }
	inline void set_vertices_4(Vector3U5BU5D_t1172311765* value)
	{
		___vertices_4 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_4, value);
	}

	inline static int32_t get_offset_of_colors_5() { return static_cast<int32_t>(offsetof(U3000U20U3000U20_t485351998, ___colors_5)); }
	inline ColorU5BU5D_t672350442* get_colors_5() const { return ___colors_5; }
	inline ColorU5BU5D_t672350442** get_address_of_colors_5() { return &___colors_5; }
	inline void set_colors_5(ColorU5BU5D_t672350442* value)
	{
		___colors_5 = value;
		Il2CppCodeGenWriteBarrier(&___colors_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
