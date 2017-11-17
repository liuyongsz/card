#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
struct Win32_SOCKET_ADDRESS_t1093973396;
struct Win32_SOCKET_ADDRESS_t1093973396_marshaled_pinvoke;
struct Win32_SOCKET_ADDRESS_t1093973396_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_SOCKET_1093973396.h"

// System.Net.IPAddress System.Net.NetworkInformation.Win32_SOCKET_ADDRESS::GetIPAddress()
extern "C"  IPAddress_t1399971723 * Win32_SOCKET_ADDRESS_GetIPAddress_m3946757953 (Win32_SOCKET_ADDRESS_t1093973396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Win32_SOCKET_ADDRESS_t1093973396;
struct Win32_SOCKET_ADDRESS_t1093973396_marshaled_pinvoke;

extern "C" void Win32_SOCKET_ADDRESS_t1093973396_marshal_pinvoke(const Win32_SOCKET_ADDRESS_t1093973396& unmarshaled, Win32_SOCKET_ADDRESS_t1093973396_marshaled_pinvoke& marshaled);
extern "C" void Win32_SOCKET_ADDRESS_t1093973396_marshal_pinvoke_back(const Win32_SOCKET_ADDRESS_t1093973396_marshaled_pinvoke& marshaled, Win32_SOCKET_ADDRESS_t1093973396& unmarshaled);
extern "C" void Win32_SOCKET_ADDRESS_t1093973396_marshal_pinvoke_cleanup(Win32_SOCKET_ADDRESS_t1093973396_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Win32_SOCKET_ADDRESS_t1093973396;
struct Win32_SOCKET_ADDRESS_t1093973396_marshaled_com;

extern "C" void Win32_SOCKET_ADDRESS_t1093973396_marshal_com(const Win32_SOCKET_ADDRESS_t1093973396& unmarshaled, Win32_SOCKET_ADDRESS_t1093973396_marshaled_com& marshaled);
extern "C" void Win32_SOCKET_ADDRESS_t1093973396_marshal_com_back(const Win32_SOCKET_ADDRESS_t1093973396_marshaled_com& marshaled, Win32_SOCKET_ADDRESS_t1093973396& unmarshaled);
extern "C" void Win32_SOCKET_ADDRESS_t1093973396_marshal_com_cleanup(Win32_SOCKET_ADDRESS_t1093973396_marshaled_com& marshaled);
