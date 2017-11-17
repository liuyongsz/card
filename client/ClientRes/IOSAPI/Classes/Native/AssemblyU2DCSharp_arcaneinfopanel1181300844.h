#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UITexture
struct UITexture_t2537039969;
// UILabel
struct UILabel_t1795115428;

#include "AssemblyU2DCSharp_BasePanel542715433.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// arcaneinfopanel
struct  arcaneinfopanel_t1181300844  : public BasePanel_t542715433
{
public:
	// UITexture arcaneinfopanel::arcaneTexture
	UITexture_t2537039969 * ___arcaneTexture_2;
	// UILabel arcaneinfopanel::arcaneName
	UILabel_t1795115428 * ___arcaneName_3;
	// UILabel arcaneinfopanel::arcanePoint
	UILabel_t1795115428 * ___arcanePoint_4;
	// UILabel arcaneinfopanel::arcaneDes
	UILabel_t1795115428 * ___arcaneDes_5;

public:
	inline static int32_t get_offset_of_arcaneTexture_2() { return static_cast<int32_t>(offsetof(arcaneinfopanel_t1181300844, ___arcaneTexture_2)); }
	inline UITexture_t2537039969 * get_arcaneTexture_2() const { return ___arcaneTexture_2; }
	inline UITexture_t2537039969 ** get_address_of_arcaneTexture_2() { return &___arcaneTexture_2; }
	inline void set_arcaneTexture_2(UITexture_t2537039969 * value)
	{
		___arcaneTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___arcaneTexture_2, value);
	}

	inline static int32_t get_offset_of_arcaneName_3() { return static_cast<int32_t>(offsetof(arcaneinfopanel_t1181300844, ___arcaneName_3)); }
	inline UILabel_t1795115428 * get_arcaneName_3() const { return ___arcaneName_3; }
	inline UILabel_t1795115428 ** get_address_of_arcaneName_3() { return &___arcaneName_3; }
	inline void set_arcaneName_3(UILabel_t1795115428 * value)
	{
		___arcaneName_3 = value;
		Il2CppCodeGenWriteBarrier(&___arcaneName_3, value);
	}

	inline static int32_t get_offset_of_arcanePoint_4() { return static_cast<int32_t>(offsetof(arcaneinfopanel_t1181300844, ___arcanePoint_4)); }
	inline UILabel_t1795115428 * get_arcanePoint_4() const { return ___arcanePoint_4; }
	inline UILabel_t1795115428 ** get_address_of_arcanePoint_4() { return &___arcanePoint_4; }
	inline void set_arcanePoint_4(UILabel_t1795115428 * value)
	{
		___arcanePoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___arcanePoint_4, value);
	}

	inline static int32_t get_offset_of_arcaneDes_5() { return static_cast<int32_t>(offsetof(arcaneinfopanel_t1181300844, ___arcaneDes_5)); }
	inline UILabel_t1795115428 * get_arcaneDes_5() const { return ___arcaneDes_5; }
	inline UILabel_t1795115428 ** get_address_of_arcaneDes_5() { return &___arcaneDes_5; }
	inline void set_arcaneDes_5(UILabel_t1795115428 * value)
	{
		___arcaneDes_5 = value;
		Il2CppCodeGenWriteBarrier(&___arcaneDes_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
