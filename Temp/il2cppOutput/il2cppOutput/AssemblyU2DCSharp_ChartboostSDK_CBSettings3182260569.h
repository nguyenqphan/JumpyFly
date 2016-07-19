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
// ChartboostSDK.CBSettings
struct CBSettings_t3182260569;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChartboostSDK.CBSettings
struct  CBSettings_t3182260569  : public ScriptableObject_t184905905
{
public:
	// System.String ChartboostSDK.CBSettings::iOSAppId
	String_t* ___iOSAppId_26;
	// System.String ChartboostSDK.CBSettings::iOSAppSecret
	String_t* ___iOSAppSecret_27;
	// System.String ChartboostSDK.CBSettings::androidAppId
	String_t* ___androidAppId_28;
	// System.String ChartboostSDK.CBSettings::androidAppSecret
	String_t* ___androidAppSecret_29;
	// System.String ChartboostSDK.CBSettings::amazonAppId
	String_t* ___amazonAppId_30;
	// System.String ChartboostSDK.CBSettings::amazonAppSecret
	String_t* ___amazonAppSecret_31;
	// System.Boolean ChartboostSDK.CBSettings::isLoggingEnabled
	bool ___isLoggingEnabled_32;
	// System.String[] ChartboostSDK.CBSettings::androidPlatformLabels
	StringU5BU5D_t2956870243* ___androidPlatformLabels_33;
	// System.Int32 ChartboostSDK.CBSettings::selectedAndroidPlatformIndex
	int32_t ___selectedAndroidPlatformIndex_34;

public:
	inline static int32_t get_offset_of_iOSAppId_26() { return static_cast<int32_t>(offsetof(CBSettings_t3182260569, ___iOSAppId_26)); }
	inline String_t* get_iOSAppId_26() const { return ___iOSAppId_26; }
	inline String_t** get_address_of_iOSAppId_26() { return &___iOSAppId_26; }
	inline void set_iOSAppId_26(String_t* value)
	{
		___iOSAppId_26 = value;
		Il2CppCodeGenWriteBarrier(&___iOSAppId_26, value);
	}

	inline static int32_t get_offset_of_iOSAppSecret_27() { return static_cast<int32_t>(offsetof(CBSettings_t3182260569, ___iOSAppSecret_27)); }
	inline String_t* get_iOSAppSecret_27() const { return ___iOSAppSecret_27; }
	inline String_t** get_address_of_iOSAppSecret_27() { return &___iOSAppSecret_27; }
	inline void set_iOSAppSecret_27(String_t* value)
	{
		___iOSAppSecret_27 = value;
		Il2CppCodeGenWriteBarrier(&___iOSAppSecret_27, value);
	}

	inline static int32_t get_offset_of_androidAppId_28() { return static_cast<int32_t>(offsetof(CBSettings_t3182260569, ___androidAppId_28)); }
	inline String_t* get_androidAppId_28() const { return ___androidAppId_28; }
	inline String_t** get_address_of_androidAppId_28() { return &___androidAppId_28; }
	inline void set_androidAppId_28(String_t* value)
	{
		___androidAppId_28 = value;
		Il2CppCodeGenWriteBarrier(&___androidAppId_28, value);
	}

	inline static int32_t get_offset_of_androidAppSecret_29() { return static_cast<int32_t>(offsetof(CBSettings_t3182260569, ___androidAppSecret_29)); }
	inline String_t* get_androidAppSecret_29() const { return ___androidAppSecret_29; }
	inline String_t** get_address_of_androidAppSecret_29() { return &___androidAppSecret_29; }
	inline void set_androidAppSecret_29(String_t* value)
	{
		___androidAppSecret_29 = value;
		Il2CppCodeGenWriteBarrier(&___androidAppSecret_29, value);
	}

	inline static int32_t get_offset_of_amazonAppId_30() { return static_cast<int32_t>(offsetof(CBSettings_t3182260569, ___amazonAppId_30)); }
	inline String_t* get_amazonAppId_30() const { return ___amazonAppId_30; }
	inline String_t** get_address_of_amazonAppId_30() { return &___amazonAppId_30; }
	inline void set_amazonAppId_30(String_t* value)
	{
		___amazonAppId_30 = value;
		Il2CppCodeGenWriteBarrier(&___amazonAppId_30, value);
	}

	inline static int32_t get_offset_of_amazonAppSecret_31() { return static_cast<int32_t>(offsetof(CBSettings_t3182260569, ___amazonAppSecret_31)); }
	inline String_t* get_amazonAppSecret_31() const { return ___amazonAppSecret_31; }
	inline String_t** get_address_of_amazonAppSecret_31() { return &___amazonAppSecret_31; }
	inline void set_amazonAppSecret_31(String_t* value)
	{
		___amazonAppSecret_31 = value;
		Il2CppCodeGenWriteBarrier(&___amazonAppSecret_31, value);
	}

	inline static int32_t get_offset_of_isLoggingEnabled_32() { return static_cast<int32_t>(offsetof(CBSettings_t3182260569, ___isLoggingEnabled_32)); }
	inline bool get_isLoggingEnabled_32() const { return ___isLoggingEnabled_32; }
	inline bool* get_address_of_isLoggingEnabled_32() { return &___isLoggingEnabled_32; }
	inline void set_isLoggingEnabled_32(bool value)
	{
		___isLoggingEnabled_32 = value;
	}

	inline static int32_t get_offset_of_androidPlatformLabels_33() { return static_cast<int32_t>(offsetof(CBSettings_t3182260569, ___androidPlatformLabels_33)); }
	inline StringU5BU5D_t2956870243* get_androidPlatformLabels_33() const { return ___androidPlatformLabels_33; }
	inline StringU5BU5D_t2956870243** get_address_of_androidPlatformLabels_33() { return &___androidPlatformLabels_33; }
	inline void set_androidPlatformLabels_33(StringU5BU5D_t2956870243* value)
	{
		___androidPlatformLabels_33 = value;
		Il2CppCodeGenWriteBarrier(&___androidPlatformLabels_33, value);
	}

	inline static int32_t get_offset_of_selectedAndroidPlatformIndex_34() { return static_cast<int32_t>(offsetof(CBSettings_t3182260569, ___selectedAndroidPlatformIndex_34)); }
	inline int32_t get_selectedAndroidPlatformIndex_34() const { return ___selectedAndroidPlatformIndex_34; }
	inline int32_t* get_address_of_selectedAndroidPlatformIndex_34() { return &___selectedAndroidPlatformIndex_34; }
	inline void set_selectedAndroidPlatformIndex_34(int32_t value)
	{
		___selectedAndroidPlatformIndex_34 = value;
	}
};

struct CBSettings_t3182260569_StaticFields
{
public:
	// System.Boolean ChartboostSDK.CBSettings::credentialsWarning
	bool ___credentialsWarning_24;
	// ChartboostSDK.CBSettings ChartboostSDK.CBSettings::instance
	CBSettings_t3182260569 * ___instance_25;

public:
	inline static int32_t get_offset_of_credentialsWarning_24() { return static_cast<int32_t>(offsetof(CBSettings_t3182260569_StaticFields, ___credentialsWarning_24)); }
	inline bool get_credentialsWarning_24() const { return ___credentialsWarning_24; }
	inline bool* get_address_of_credentialsWarning_24() { return &___credentialsWarning_24; }
	inline void set_credentialsWarning_24(bool value)
	{
		___credentialsWarning_24 = value;
	}

	inline static int32_t get_offset_of_instance_25() { return static_cast<int32_t>(offsetof(CBSettings_t3182260569_StaticFields, ___instance_25)); }
	inline CBSettings_t3182260569 * get_instance_25() const { return ___instance_25; }
	inline CBSettings_t3182260569 ** get_address_of_instance_25() { return &___instance_25; }
	inline void set_instance_25(CBSettings_t3182260569 * value)
	{
		___instance_25 = value;
		Il2CppCodeGenWriteBarrier(&___instance_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
