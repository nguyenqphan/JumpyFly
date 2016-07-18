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
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// ChartboostSDK.CBLocation
struct CBLocation_t3648673003;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChartboostSDK.CBLocation
struct  CBLocation_t3648673003  : public Il2CppObject
{
public:
	// System.String ChartboostSDK.CBLocation::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}
};

struct CBLocation_t3648673003_StaticFields
{
public:
	// System.Collections.Hashtable ChartboostSDK.CBLocation::map
	Hashtable_t3875263730 * ___map_1;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::Default
	CBLocation_t3648673003 * ___Default_2;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::Startup
	CBLocation_t3648673003 * ___Startup_3;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::HomeScreen
	CBLocation_t3648673003 * ___HomeScreen_4;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::MainMenu
	CBLocation_t3648673003 * ___MainMenu_5;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::GameScreen
	CBLocation_t3648673003 * ___GameScreen_6;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::Achievements
	CBLocation_t3648673003 * ___Achievements_7;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::Quests
	CBLocation_t3648673003 * ___Quests_8;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::Pause
	CBLocation_t3648673003 * ___Pause_9;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::LevelStart
	CBLocation_t3648673003 * ___LevelStart_10;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::LevelComplete
	CBLocation_t3648673003 * ___LevelComplete_11;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::TurnComplete
	CBLocation_t3648673003 * ___TurnComplete_12;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::IAPStore
	CBLocation_t3648673003 * ___IAPStore_13;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::ItemStore
	CBLocation_t3648673003 * ___ItemStore_14;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::GameOver
	CBLocation_t3648673003 * ___GameOver_15;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::LeaderBoard
	CBLocation_t3648673003 * ___LeaderBoard_16;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::Settings
	CBLocation_t3648673003 * ___Settings_17;
	// ChartboostSDK.CBLocation ChartboostSDK.CBLocation::Quit
	CBLocation_t3648673003 * ___Quit_18;

public:
	inline static int32_t get_offset_of_map_1() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___map_1)); }
	inline Hashtable_t3875263730 * get_map_1() const { return ___map_1; }
	inline Hashtable_t3875263730 ** get_address_of_map_1() { return &___map_1; }
	inline void set_map_1(Hashtable_t3875263730 * value)
	{
		___map_1 = value;
		Il2CppCodeGenWriteBarrier(&___map_1, value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___Default_2)); }
	inline CBLocation_t3648673003 * get_Default_2() const { return ___Default_2; }
	inline CBLocation_t3648673003 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(CBLocation_t3648673003 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier(&___Default_2, value);
	}

	inline static int32_t get_offset_of_Startup_3() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___Startup_3)); }
	inline CBLocation_t3648673003 * get_Startup_3() const { return ___Startup_3; }
	inline CBLocation_t3648673003 ** get_address_of_Startup_3() { return &___Startup_3; }
	inline void set_Startup_3(CBLocation_t3648673003 * value)
	{
		___Startup_3 = value;
		Il2CppCodeGenWriteBarrier(&___Startup_3, value);
	}

	inline static int32_t get_offset_of_HomeScreen_4() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___HomeScreen_4)); }
	inline CBLocation_t3648673003 * get_HomeScreen_4() const { return ___HomeScreen_4; }
	inline CBLocation_t3648673003 ** get_address_of_HomeScreen_4() { return &___HomeScreen_4; }
	inline void set_HomeScreen_4(CBLocation_t3648673003 * value)
	{
		___HomeScreen_4 = value;
		Il2CppCodeGenWriteBarrier(&___HomeScreen_4, value);
	}

	inline static int32_t get_offset_of_MainMenu_5() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___MainMenu_5)); }
	inline CBLocation_t3648673003 * get_MainMenu_5() const { return ___MainMenu_5; }
	inline CBLocation_t3648673003 ** get_address_of_MainMenu_5() { return &___MainMenu_5; }
	inline void set_MainMenu_5(CBLocation_t3648673003 * value)
	{
		___MainMenu_5 = value;
		Il2CppCodeGenWriteBarrier(&___MainMenu_5, value);
	}

	inline static int32_t get_offset_of_GameScreen_6() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___GameScreen_6)); }
	inline CBLocation_t3648673003 * get_GameScreen_6() const { return ___GameScreen_6; }
	inline CBLocation_t3648673003 ** get_address_of_GameScreen_6() { return &___GameScreen_6; }
	inline void set_GameScreen_6(CBLocation_t3648673003 * value)
	{
		___GameScreen_6 = value;
		Il2CppCodeGenWriteBarrier(&___GameScreen_6, value);
	}

	inline static int32_t get_offset_of_Achievements_7() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___Achievements_7)); }
	inline CBLocation_t3648673003 * get_Achievements_7() const { return ___Achievements_7; }
	inline CBLocation_t3648673003 ** get_address_of_Achievements_7() { return &___Achievements_7; }
	inline void set_Achievements_7(CBLocation_t3648673003 * value)
	{
		___Achievements_7 = value;
		Il2CppCodeGenWriteBarrier(&___Achievements_7, value);
	}

	inline static int32_t get_offset_of_Quests_8() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___Quests_8)); }
	inline CBLocation_t3648673003 * get_Quests_8() const { return ___Quests_8; }
	inline CBLocation_t3648673003 ** get_address_of_Quests_8() { return &___Quests_8; }
	inline void set_Quests_8(CBLocation_t3648673003 * value)
	{
		___Quests_8 = value;
		Il2CppCodeGenWriteBarrier(&___Quests_8, value);
	}

	inline static int32_t get_offset_of_Pause_9() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___Pause_9)); }
	inline CBLocation_t3648673003 * get_Pause_9() const { return ___Pause_9; }
	inline CBLocation_t3648673003 ** get_address_of_Pause_9() { return &___Pause_9; }
	inline void set_Pause_9(CBLocation_t3648673003 * value)
	{
		___Pause_9 = value;
		Il2CppCodeGenWriteBarrier(&___Pause_9, value);
	}

	inline static int32_t get_offset_of_LevelStart_10() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___LevelStart_10)); }
	inline CBLocation_t3648673003 * get_LevelStart_10() const { return ___LevelStart_10; }
	inline CBLocation_t3648673003 ** get_address_of_LevelStart_10() { return &___LevelStart_10; }
	inline void set_LevelStart_10(CBLocation_t3648673003 * value)
	{
		___LevelStart_10 = value;
		Il2CppCodeGenWriteBarrier(&___LevelStart_10, value);
	}

	inline static int32_t get_offset_of_LevelComplete_11() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___LevelComplete_11)); }
	inline CBLocation_t3648673003 * get_LevelComplete_11() const { return ___LevelComplete_11; }
	inline CBLocation_t3648673003 ** get_address_of_LevelComplete_11() { return &___LevelComplete_11; }
	inline void set_LevelComplete_11(CBLocation_t3648673003 * value)
	{
		___LevelComplete_11 = value;
		Il2CppCodeGenWriteBarrier(&___LevelComplete_11, value);
	}

	inline static int32_t get_offset_of_TurnComplete_12() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___TurnComplete_12)); }
	inline CBLocation_t3648673003 * get_TurnComplete_12() const { return ___TurnComplete_12; }
	inline CBLocation_t3648673003 ** get_address_of_TurnComplete_12() { return &___TurnComplete_12; }
	inline void set_TurnComplete_12(CBLocation_t3648673003 * value)
	{
		___TurnComplete_12 = value;
		Il2CppCodeGenWriteBarrier(&___TurnComplete_12, value);
	}

	inline static int32_t get_offset_of_IAPStore_13() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___IAPStore_13)); }
	inline CBLocation_t3648673003 * get_IAPStore_13() const { return ___IAPStore_13; }
	inline CBLocation_t3648673003 ** get_address_of_IAPStore_13() { return &___IAPStore_13; }
	inline void set_IAPStore_13(CBLocation_t3648673003 * value)
	{
		___IAPStore_13 = value;
		Il2CppCodeGenWriteBarrier(&___IAPStore_13, value);
	}

	inline static int32_t get_offset_of_ItemStore_14() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___ItemStore_14)); }
	inline CBLocation_t3648673003 * get_ItemStore_14() const { return ___ItemStore_14; }
	inline CBLocation_t3648673003 ** get_address_of_ItemStore_14() { return &___ItemStore_14; }
	inline void set_ItemStore_14(CBLocation_t3648673003 * value)
	{
		___ItemStore_14 = value;
		Il2CppCodeGenWriteBarrier(&___ItemStore_14, value);
	}

	inline static int32_t get_offset_of_GameOver_15() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___GameOver_15)); }
	inline CBLocation_t3648673003 * get_GameOver_15() const { return ___GameOver_15; }
	inline CBLocation_t3648673003 ** get_address_of_GameOver_15() { return &___GameOver_15; }
	inline void set_GameOver_15(CBLocation_t3648673003 * value)
	{
		___GameOver_15 = value;
		Il2CppCodeGenWriteBarrier(&___GameOver_15, value);
	}

	inline static int32_t get_offset_of_LeaderBoard_16() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___LeaderBoard_16)); }
	inline CBLocation_t3648673003 * get_LeaderBoard_16() const { return ___LeaderBoard_16; }
	inline CBLocation_t3648673003 ** get_address_of_LeaderBoard_16() { return &___LeaderBoard_16; }
	inline void set_LeaderBoard_16(CBLocation_t3648673003 * value)
	{
		___LeaderBoard_16 = value;
		Il2CppCodeGenWriteBarrier(&___LeaderBoard_16, value);
	}

	inline static int32_t get_offset_of_Settings_17() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___Settings_17)); }
	inline CBLocation_t3648673003 * get_Settings_17() const { return ___Settings_17; }
	inline CBLocation_t3648673003 ** get_address_of_Settings_17() { return &___Settings_17; }
	inline void set_Settings_17(CBLocation_t3648673003 * value)
	{
		___Settings_17 = value;
		Il2CppCodeGenWriteBarrier(&___Settings_17, value);
	}

	inline static int32_t get_offset_of_Quit_18() { return static_cast<int32_t>(offsetof(CBLocation_t3648673003_StaticFields, ___Quit_18)); }
	inline CBLocation_t3648673003 * get_Quit_18() const { return ___Quit_18; }
	inline CBLocation_t3648673003 ** get_address_of_Quit_18() { return &___Quit_18; }
	inline void set_Quit_18(CBLocation_t3648673003 * value)
	{
		___Quit_18 = value;
		Il2CppCodeGenWriteBarrier(&___Quit_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
