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
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChartboostSDK.CBExternal
struct  CBExternal_t4221835521  : public Il2CppObject
{
public:

public:
};

struct CBExternal_t4221835521_StaticFields
{
public:
	// System.Boolean ChartboostSDK.CBExternal::initialized
	bool ___initialized_0;
	// System.String ChartboostSDK.CBExternal::_logTag
	String_t* ____logTag_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ChartboostSDK.CBExternal::<>f__switch$map0
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map0_2;

public:
	inline static int32_t get_offset_of_initialized_0() { return static_cast<int32_t>(offsetof(CBExternal_t4221835521_StaticFields, ___initialized_0)); }
	inline bool get_initialized_0() const { return ___initialized_0; }
	inline bool* get_address_of_initialized_0() { return &___initialized_0; }
	inline void set_initialized_0(bool value)
	{
		___initialized_0 = value;
	}

	inline static int32_t get_offset_of__logTag_1() { return static_cast<int32_t>(offsetof(CBExternal_t4221835521_StaticFields, ____logTag_1)); }
	inline String_t* get__logTag_1() const { return ____logTag_1; }
	inline String_t** get_address_of__logTag_1() { return &____logTag_1; }
	inline void set__logTag_1(String_t* value)
	{
		____logTag_1 = value;
		Il2CppCodeGenWriteBarrier(&____logTag_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_2() { return static_cast<int32_t>(offsetof(CBExternal_t4221835521_StaticFields, ___U3CU3Ef__switchU24map0_2)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map0_2() const { return ___U3CU3Ef__switchU24map0_2; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map0_2() { return &___U3CU3Ef__switchU24map0_2; }
	inline void set_U3CU3Ef__switchU24map0_2(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
