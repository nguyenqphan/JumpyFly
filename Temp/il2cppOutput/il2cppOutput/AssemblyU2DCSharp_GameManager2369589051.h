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

#include "AssemblyU2DCSharp_Singleton_1_gen2622404444.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2369589051  : public Singleton_1_t2622404444
{
public:
	// System.String GameManager::curPlayerName
	String_t* ___curPlayerName_3;
	// System.Boolean GameManager::isPurchased
	bool ___isPurchased_4;
	// System.Int32 GameManager::numSpawnedCube
	int32_t ___numSpawnedCube_5;
	// System.Int32 GameManager::smallCubeColorNum
	int32_t ___smallCubeColorNum_6;
	// System.Int32 GameManager::tinyCubeColorNum
	int32_t ___tinyCubeColorNum_7;
	// System.Int32 GameManager::numOfGame
	int32_t ___numOfGame_8;
	// System.Boolean GameManager::isEffectOn
	bool ___isEffectOn_9;
	// System.Boolean GameManager::isDouble
	bool ___isDouble_10;
	// System.Boolean GameManager::isSlowScore
	bool ___isSlowScore_11;
	// System.Boolean GameManager::isStarted
	bool ___isStarted_12;
	// System.Boolean GameManager::isCameraMoved
	bool ___isCameraMoved_13;
	// System.Boolean GameManager::isStartButtonPressed
	bool ___isStartButtonPressed_14;
	// System.Int32 GameManager::score
	int32_t ___score_15;
	// System.Int32 GameManager::bestScore
	int32_t ___bestScore_16;
	// System.Int32 GameManager::gold
	int32_t ___gold_17;
	// System.Int32 GameManager::curPlayerIndex
	int32_t ___curPlayerIndex_18;
	// System.Int32 GameManager::curPrice
	int32_t ___curPrice_19;
	// System.Int32 GameManager::curPlayerAvail
	int32_t ___curPlayerAvail_20;
	// System.Int32 GameManager::curPlayerAvailSB
	int32_t ___curPlayerAvailSB_21;
	// System.Int32 GameManager::curPlayerAvailSC
	int32_t ___curPlayerAvailSC_22;
	// System.Int32 GameManager::amountOfDiamond
	int32_t ___amountOfDiamond_23;

public:
	inline static int32_t get_offset_of_curPlayerName_3() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerName_3)); }
	inline String_t* get_curPlayerName_3() const { return ___curPlayerName_3; }
	inline String_t** get_address_of_curPlayerName_3() { return &___curPlayerName_3; }
	inline void set_curPlayerName_3(String_t* value)
	{
		___curPlayerName_3 = value;
		Il2CppCodeGenWriteBarrier(&___curPlayerName_3, value);
	}

	inline static int32_t get_offset_of_isPurchased_4() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isPurchased_4)); }
	inline bool get_isPurchased_4() const { return ___isPurchased_4; }
	inline bool* get_address_of_isPurchased_4() { return &___isPurchased_4; }
	inline void set_isPurchased_4(bool value)
	{
		___isPurchased_4 = value;
	}

	inline static int32_t get_offset_of_numSpawnedCube_5() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___numSpawnedCube_5)); }
	inline int32_t get_numSpawnedCube_5() const { return ___numSpawnedCube_5; }
	inline int32_t* get_address_of_numSpawnedCube_5() { return &___numSpawnedCube_5; }
	inline void set_numSpawnedCube_5(int32_t value)
	{
		___numSpawnedCube_5 = value;
	}

	inline static int32_t get_offset_of_smallCubeColorNum_6() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___smallCubeColorNum_6)); }
	inline int32_t get_smallCubeColorNum_6() const { return ___smallCubeColorNum_6; }
	inline int32_t* get_address_of_smallCubeColorNum_6() { return &___smallCubeColorNum_6; }
	inline void set_smallCubeColorNum_6(int32_t value)
	{
		___smallCubeColorNum_6 = value;
	}

	inline static int32_t get_offset_of_tinyCubeColorNum_7() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___tinyCubeColorNum_7)); }
	inline int32_t get_tinyCubeColorNum_7() const { return ___tinyCubeColorNum_7; }
	inline int32_t* get_address_of_tinyCubeColorNum_7() { return &___tinyCubeColorNum_7; }
	inline void set_tinyCubeColorNum_7(int32_t value)
	{
		___tinyCubeColorNum_7 = value;
	}

	inline static int32_t get_offset_of_numOfGame_8() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___numOfGame_8)); }
	inline int32_t get_numOfGame_8() const { return ___numOfGame_8; }
	inline int32_t* get_address_of_numOfGame_8() { return &___numOfGame_8; }
	inline void set_numOfGame_8(int32_t value)
	{
		___numOfGame_8 = value;
	}

	inline static int32_t get_offset_of_isEffectOn_9() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isEffectOn_9)); }
	inline bool get_isEffectOn_9() const { return ___isEffectOn_9; }
	inline bool* get_address_of_isEffectOn_9() { return &___isEffectOn_9; }
	inline void set_isEffectOn_9(bool value)
	{
		___isEffectOn_9 = value;
	}

	inline static int32_t get_offset_of_isDouble_10() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isDouble_10)); }
	inline bool get_isDouble_10() const { return ___isDouble_10; }
	inline bool* get_address_of_isDouble_10() { return &___isDouble_10; }
	inline void set_isDouble_10(bool value)
	{
		___isDouble_10 = value;
	}

	inline static int32_t get_offset_of_isSlowScore_11() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isSlowScore_11)); }
	inline bool get_isSlowScore_11() const { return ___isSlowScore_11; }
	inline bool* get_address_of_isSlowScore_11() { return &___isSlowScore_11; }
	inline void set_isSlowScore_11(bool value)
	{
		___isSlowScore_11 = value;
	}

	inline static int32_t get_offset_of_isStarted_12() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isStarted_12)); }
	inline bool get_isStarted_12() const { return ___isStarted_12; }
	inline bool* get_address_of_isStarted_12() { return &___isStarted_12; }
	inline void set_isStarted_12(bool value)
	{
		___isStarted_12 = value;
	}

	inline static int32_t get_offset_of_isCameraMoved_13() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isCameraMoved_13)); }
	inline bool get_isCameraMoved_13() const { return ___isCameraMoved_13; }
	inline bool* get_address_of_isCameraMoved_13() { return &___isCameraMoved_13; }
	inline void set_isCameraMoved_13(bool value)
	{
		___isCameraMoved_13 = value;
	}

	inline static int32_t get_offset_of_isStartButtonPressed_14() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isStartButtonPressed_14)); }
	inline bool get_isStartButtonPressed_14() const { return ___isStartButtonPressed_14; }
	inline bool* get_address_of_isStartButtonPressed_14() { return &___isStartButtonPressed_14; }
	inline void set_isStartButtonPressed_14(bool value)
	{
		___isStartButtonPressed_14 = value;
	}

	inline static int32_t get_offset_of_score_15() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___score_15)); }
	inline int32_t get_score_15() const { return ___score_15; }
	inline int32_t* get_address_of_score_15() { return &___score_15; }
	inline void set_score_15(int32_t value)
	{
		___score_15 = value;
	}

	inline static int32_t get_offset_of_bestScore_16() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___bestScore_16)); }
	inline int32_t get_bestScore_16() const { return ___bestScore_16; }
	inline int32_t* get_address_of_bestScore_16() { return &___bestScore_16; }
	inline void set_bestScore_16(int32_t value)
	{
		___bestScore_16 = value;
	}

	inline static int32_t get_offset_of_gold_17() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___gold_17)); }
	inline int32_t get_gold_17() const { return ___gold_17; }
	inline int32_t* get_address_of_gold_17() { return &___gold_17; }
	inline void set_gold_17(int32_t value)
	{
		___gold_17 = value;
	}

	inline static int32_t get_offset_of_curPlayerIndex_18() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerIndex_18)); }
	inline int32_t get_curPlayerIndex_18() const { return ___curPlayerIndex_18; }
	inline int32_t* get_address_of_curPlayerIndex_18() { return &___curPlayerIndex_18; }
	inline void set_curPlayerIndex_18(int32_t value)
	{
		___curPlayerIndex_18 = value;
	}

	inline static int32_t get_offset_of_curPrice_19() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPrice_19)); }
	inline int32_t get_curPrice_19() const { return ___curPrice_19; }
	inline int32_t* get_address_of_curPrice_19() { return &___curPrice_19; }
	inline void set_curPrice_19(int32_t value)
	{
		___curPrice_19 = value;
	}

	inline static int32_t get_offset_of_curPlayerAvail_20() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerAvail_20)); }
	inline int32_t get_curPlayerAvail_20() const { return ___curPlayerAvail_20; }
	inline int32_t* get_address_of_curPlayerAvail_20() { return &___curPlayerAvail_20; }
	inline void set_curPlayerAvail_20(int32_t value)
	{
		___curPlayerAvail_20 = value;
	}

	inline static int32_t get_offset_of_curPlayerAvailSB_21() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerAvailSB_21)); }
	inline int32_t get_curPlayerAvailSB_21() const { return ___curPlayerAvailSB_21; }
	inline int32_t* get_address_of_curPlayerAvailSB_21() { return &___curPlayerAvailSB_21; }
	inline void set_curPlayerAvailSB_21(int32_t value)
	{
		___curPlayerAvailSB_21 = value;
	}

	inline static int32_t get_offset_of_curPlayerAvailSC_22() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerAvailSC_22)); }
	inline int32_t get_curPlayerAvailSC_22() const { return ___curPlayerAvailSC_22; }
	inline int32_t* get_address_of_curPlayerAvailSC_22() { return &___curPlayerAvailSC_22; }
	inline void set_curPlayerAvailSC_22(int32_t value)
	{
		___curPlayerAvailSC_22 = value;
	}

	inline static int32_t get_offset_of_amountOfDiamond_23() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___amountOfDiamond_23)); }
	inline int32_t get_amountOfDiamond_23() const { return ___amountOfDiamond_23; }
	inline int32_t* get_address_of_amountOfDiamond_23() { return &___amountOfDiamond_23; }
	inline void set_amountOfDiamond_23(int32_t value)
	{
		___amountOfDiamond_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
