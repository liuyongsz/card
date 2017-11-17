#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Version
struct Version_t1755874712;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterface
struct  NetworkInterface_t63927633  : public Il2CppObject
{
public:

public:
};

struct NetworkInterface_t63927633_StaticFields
{
public:
	// System.Version System.Net.NetworkInformation.NetworkInterface::windowsVer51
	Version_t1755874712 * ___windowsVer51_0;
	// System.Boolean System.Net.NetworkInformation.NetworkInterface::runningOnUnix
	bool ___runningOnUnix_1;

public:
	inline static int32_t get_offset_of_windowsVer51_0() { return static_cast<int32_t>(offsetof(NetworkInterface_t63927633_StaticFields, ___windowsVer51_0)); }
	inline Version_t1755874712 * get_windowsVer51_0() const { return ___windowsVer51_0; }
	inline Version_t1755874712 ** get_address_of_windowsVer51_0() { return &___windowsVer51_0; }
	inline void set_windowsVer51_0(Version_t1755874712 * value)
	{
		___windowsVer51_0 = value;
		Il2CppCodeGenWriteBarrier(&___windowsVer51_0, value);
	}

	inline static int32_t get_offset_of_runningOnUnix_1() { return static_cast<int32_t>(offsetof(NetworkInterface_t63927633_StaticFields, ___runningOnUnix_1)); }
	inline bool get_runningOnUnix_1() const { return ___runningOnUnix_1; }
	inline bool* get_address_of_runningOnUnix_1() { return &___runningOnUnix_1; }
	inline void set_runningOnUnix_1(bool value)
	{
		___runningOnUnix_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
