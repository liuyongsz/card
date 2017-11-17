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

// System.Net.NetworkInformation.MacOsStructs.sockaddr
struct sockaddr_t3329842375;
struct sockaddr_t3329842375_marshaled_pinvoke;
struct sockaddr_t3329842375_marshaled_com;

#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct sockaddr_t3329842375;
struct sockaddr_t3329842375_marshaled_pinvoke;

extern "C" void sockaddr_t3329842375_marshal_pinvoke(const sockaddr_t3329842375& unmarshaled, sockaddr_t3329842375_marshaled_pinvoke& marshaled);
extern "C" void sockaddr_t3329842375_marshal_pinvoke_back(const sockaddr_t3329842375_marshaled_pinvoke& marshaled, sockaddr_t3329842375& unmarshaled);
extern "C" void sockaddr_t3329842375_marshal_pinvoke_cleanup(sockaddr_t3329842375_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct sockaddr_t3329842375;
struct sockaddr_t3329842375_marshaled_com;

extern "C" void sockaddr_t3329842375_marshal_com(const sockaddr_t3329842375& unmarshaled, sockaddr_t3329842375_marshaled_com& marshaled);
extern "C" void sockaddr_t3329842375_marshal_com_back(const sockaddr_t3329842375_marshaled_com& marshaled, sockaddr_t3329842375& unmarshaled);
extern "C" void sockaddr_t3329842375_marshal_com_cleanup(sockaddr_t3329842375_marshaled_com& marshaled);
