#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChartboostSDK.CBInPlay
struct  CBInPlay_t2441280239  : public Il2CppObject
{
public:
	// UnityEngine.Texture2D ChartboostSDK.CBInPlay::appIcon
	Texture2D_t2509538522 * ___appIcon_0;
	// System.String ChartboostSDK.CBInPlay::appName
	String_t* ___appName_1;
	// System.IntPtr ChartboostSDK.CBInPlay::inPlayUniqueId
	IntPtr_t ___inPlayUniqueId_2;

public:
	inline static int32_t get_offset_of_appIcon_0() { return static_cast<int32_t>(offsetof(CBInPlay_t2441280239, ___appIcon_0)); }
	inline Texture2D_t2509538522 * get_appIcon_0() const { return ___appIcon_0; }
	inline Texture2D_t2509538522 ** get_address_of_appIcon_0() { return &___appIcon_0; }
	inline void set_appIcon_0(Texture2D_t2509538522 * value)
	{
		___appIcon_0 = value;
		Il2CppCodeGenWriteBarrier(&___appIcon_0, value);
	}

	inline static int32_t get_offset_of_appName_1() { return static_cast<int32_t>(offsetof(CBInPlay_t2441280239, ___appName_1)); }
	inline String_t* get_appName_1() const { return ___appName_1; }
	inline String_t** get_address_of_appName_1() { return &___appName_1; }
	inline void set_appName_1(String_t* value)
	{
		___appName_1 = value;
		Il2CppCodeGenWriteBarrier(&___appName_1, value);
	}

	inline static int32_t get_offset_of_inPlayUniqueId_2() { return static_cast<int32_t>(offsetof(CBInPlay_t2441280239, ___inPlayUniqueId_2)); }
	inline IntPtr_t get_inPlayUniqueId_2() const { return ___inPlayUniqueId_2; }
	inline IntPtr_t* get_address_of_inPlayUniqueId_2() { return &___inPlayUniqueId_2; }
	inline void set_inPlayUniqueId_2(IntPtr_t value)
	{
		___inPlayUniqueId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
