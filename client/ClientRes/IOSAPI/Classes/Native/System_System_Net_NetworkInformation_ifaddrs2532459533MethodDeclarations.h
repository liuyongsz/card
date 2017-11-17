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

// System.Net.NetworkInformation.ifaddrs
struct ifaddrs_t2532459533;
struct ifaddrs_t2532459533_marshaled_pinvoke;
struct ifaddrs_t2532459533_marshaled_com;

#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct ifaddrs_t2532459533;
struct ifaddrs_t2532459533_marshaled_pinvoke;

extern "C" void ifaddrs_t2532459533_marshal_pinvoke(const ifaddrs_t2532459533& unmarshaled, ifaddrs_t2532459533_marshaled_pinvoke& marshaled);
extern "C" void ifaddrs_t2532459533_marshal_pinvoke_back(const ifaddrs_t2532459533_marshaled_pinvoke& marshaled, ifaddrs_t2532459533& unmarshaled);
extern "C" void ifaddrs_t2532459533_marshal_pinvoke_cleanup(ifaddrs_t2532459533_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ifaddrs_t2532459533;
struct ifaddrs_t2532459533_marshaled_com;

extern "C" void ifaddrs_t2532459533_marshal_com(const ifaddrs_t2532459533& unmarshaled, ifaddrs_t2532459533_marshaled_com& marshaled);
extern "C" void ifaddrs_t2532459533_marshal_com_back(const ifaddrs_t2532459533_marshaled_com& marshaled, ifaddrs_t2532459533& unmarshaled);
extern "C" void ifaddrs_t2532459533_marshal_com_cleanup(ifaddrs_t2532459533_marshaled_com& marshaled);
