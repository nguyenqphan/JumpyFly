#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// admob.Admob
struct Admob_t486577996;
// admob.Admob/AdmobEventHandler
struct AdmobEventHandler_t2165620685;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// admob.Admob
struct  Admob_t486577996  : public Il2CppObject
{
public:
	// admob.Admob/AdmobEventHandler admob.Admob::bannerEventHandler
	AdmobEventHandler_t2165620685 * ___bannerEventHandler_1;
	// admob.Admob/AdmobEventHandler admob.Admob::interstitialEventHandler
	AdmobEventHandler_t2165620685 * ___interstitialEventHandler_2;
	// admob.Admob/AdmobEventHandler admob.Admob::rewardedVideoEventHandler
	AdmobEventHandler_t2165620685 * ___rewardedVideoEventHandler_3;

public:
	inline static int32_t get_offset_of_bannerEventHandler_1() { return static_cast<int32_t>(offsetof(Admob_t486577996, ___bannerEventHandler_1)); }
	inline AdmobEventHandler_t2165620685 * get_bannerEventHandler_1() const { return ___bannerEventHandler_1; }
	inline AdmobEventHandler_t2165620685 ** get_address_of_bannerEventHandler_1() { return &___bannerEventHandler_1; }
	inline void set_bannerEventHandler_1(AdmobEventHandler_t2165620685 * value)
	{
		___bannerEventHandler_1 = value;
		Il2CppCodeGenWriteBarrier(&___bannerEventHandler_1, value);
	}

	inline static int32_t get_offset_of_interstitialEventHandler_2() { return static_cast<int32_t>(offsetof(Admob_t486577996, ___interstitialEventHandler_2)); }
	inline AdmobEventHandler_t2165620685 * get_interstitialEventHandler_2() const { return ___interstitialEventHandler_2; }
	inline AdmobEventHandler_t2165620685 ** get_address_of_interstitialEventHandler_2() { return &___interstitialEventHandler_2; }
	inline void set_interstitialEventHandler_2(AdmobEventHandler_t2165620685 * value)
	{
		___interstitialEventHandler_2 = value;
		Il2CppCodeGenWriteBarrier(&___interstitialEventHandler_2, value);
	}

	inline static int32_t get_offset_of_rewardedVideoEventHandler_3() { return static_cast<int32_t>(offsetof(Admob_t486577996, ___rewardedVideoEventHandler_3)); }
	inline AdmobEventHandler_t2165620685 * get_rewardedVideoEventHandler_3() const { return ___rewardedVideoEventHandler_3; }
	inline AdmobEventHandler_t2165620685 ** get_address_of_rewardedVideoEventHandler_3() { return &___rewardedVideoEventHandler_3; }
	inline void set_rewardedVideoEventHandler_3(AdmobEventHandler_t2165620685 * value)
	{
		___rewardedVideoEventHandler_3 = value;
		Il2CppCodeGenWriteBarrier(&___rewardedVideoEventHandler_3, value);
	}
};

struct Admob_t486577996_StaticFields
{
public:
	// admob.Admob admob.Admob::_instance
	Admob_t486577996 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(Admob_t486577996_StaticFields, ____instance_0)); }
	inline Admob_t486577996 * get__instance_0() const { return ____instance_0; }
	inline Admob_t486577996 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(Admob_t486577996 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
