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
	// System.Int32 GameManager::curShapeValue
	int32_t ___curShapeValue_4;
	// System.Boolean GameManager::isPurchased
	bool ___isPurchased_5;
	// System.Int32 GameManager::numSpawnedCube
	int32_t ___numSpawnedCube_6;
	// System.Int32 GameManager::smallCubeColorNum
	int32_t ___smallCubeColorNum_7;
	// System.Int32 GameManager::tinyCubeColorNum
	int32_t ___tinyCubeColorNum_8;
	// System.Int32 GameManager::numOfGame
	int32_t ___numOfGame_9;
	// System.Int32 GameManager::numOfPlay
	int32_t ___numOfPlay_10;
	// System.Boolean GameManager::isEffectOn
	bool ___isEffectOn_11;
	// System.Boolean GameManager::isDouble
	bool ___isDouble_12;
	// System.Boolean GameManager::isSlowScore
	bool ___isSlowScore_13;
	// System.Boolean GameManager::isStarted
	bool ___isStarted_14;
	// System.Boolean GameManager::isCameraMoved
	bool ___isCameraMoved_15;
	// System.Boolean GameManager::isStartButtonPressed
	bool ___isStartButtonPressed_16;
	// System.Int32 GameManager::score
	int32_t ___score_17;
	// System.Int32 GameManager::bestScore
	int32_t ___bestScore_18;
	// System.Int32 GameManager::gold
	int32_t ___gold_19;
	// System.Int32 GameManager::curPlayerIndex
	int32_t ___curPlayerIndex_20;
	// System.Int32 GameManager::curPrice
	int32_t ___curPrice_21;
	// System.Int32 GameManager::curPlayerAvail
	int32_t ___curPlayerAvail_22;
	// System.Int32 GameManager::curPlayerAvailSB
	int32_t ___curPlayerAvailSB_23;
	// System.Int32 GameManager::curPlayerAvailSC
	int32_t ___curPlayerAvailSC_24;
	// System.Int32 GameManager::amountOfDiamond
	int32_t ___amountOfDiamond_25;

public:
	inline static int32_t get_offset_of_curPlayerName_3() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerName_3)); }
	inline String_t* get_curPlayerName_3() const { return ___curPlayerName_3; }
	inline String_t** get_address_of_curPlayerName_3() { return &___curPlayerName_3; }
	inline void set_curPlayerName_3(String_t* value)
	{
		___curPlayerName_3 = value;
		Il2CppCodeGenWriteBarrier(&___curPlayerName_3, value);
	}

	inline static int32_t get_offset_of_curShapeValue_4() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curShapeValue_4)); }
	inline int32_t get_curShapeValue_4() const { return ___curShapeValue_4; }
	inline int32_t* get_address_of_curShapeValue_4() { return &___curShapeValue_4; }
	inline void set_curShapeValue_4(int32_t value)
	{
		___curShapeValue_4 = value;
	}

	inline static int32_t get_offset_of_isPurchased_5() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isPurchased_5)); }
	inline bool get_isPurchased_5() const { return ___isPurchased_5; }
	inline bool* get_address_of_isPurchased_5() { return &___isPurchased_5; }
	inline void set_isPurchased_5(bool value)
	{
		___isPurchased_5 = value;
	}

	inline static int32_t get_offset_of_numSpawnedCube_6() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___numSpawnedCube_6)); }
	inline int32_t get_numSpawnedCube_6() const { return ___numSpawnedCube_6; }
	inline int32_t* get_address_of_numSpawnedCube_6() { return &___numSpawnedCube_6; }
	inline void set_numSpawnedCube_6(int32_t value)
	{
		___numSpawnedCube_6 = value;
	}

	inline static int32_t get_offset_of_smallCubeColorNum_7() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___smallCubeColorNum_7)); }
	inline int32_t get_smallCubeColorNum_7() const { return ___smallCubeColorNum_7; }
	inline int32_t* get_address_of_smallCubeColorNum_7() { return &___smallCubeColorNum_7; }
	inline void set_smallCubeColorNum_7(int32_t value)
	{
		___smallCubeColorNum_7 = value;
	}

	inline static int32_t get_offset_of_tinyCubeColorNum_8() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___tinyCubeColorNum_8)); }
	inline int32_t get_tinyCubeColorNum_8() const { return ___tinyCubeColorNum_8; }
	inline int32_t* get_address_of_tinyCubeColorNum_8() { return &___tinyCubeColorNum_8; }
	inline void set_tinyCubeColorNum_8(int32_t value)
	{
		___tinyCubeColorNum_8 = value;
	}

	inline static int32_t get_offset_of_numOfGame_9() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___numOfGame_9)); }
	inline int32_t get_numOfGame_9() const { return ___numOfGame_9; }
	inline int32_t* get_address_of_numOfGame_9() { return &___numOfGame_9; }
	inline void set_numOfGame_9(int32_t value)
	{
		___numOfGame_9 = value;
	}

	inline static int32_t get_offset_of_numOfPlay_10() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___numOfPlay_10)); }
	inline int32_t get_numOfPlay_10() const { return ___numOfPlay_10; }
	inline int32_t* get_address_of_numOfPlay_10() { return &___numOfPlay_10; }
	inline void set_numOfPlay_10(int32_t value)
	{
		___numOfPlay_10 = value;
	}

	inline static int32_t get_offset_of_isEffectOn_11() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isEffectOn_11)); }
	inline bool get_isEffectOn_11() const { return ___isEffectOn_11; }
	inline bool* get_address_of_isEffectOn_11() { return &___isEffectOn_11; }
	inline void set_isEffectOn_11(bool value)
	{
		___isEffectOn_11 = value;
	}

	inline static int32_t get_offset_of_isDouble_12() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isDouble_12)); }
	inline bool get_isDouble_12() const { return ___isDouble_12; }
	inline bool* get_address_of_isDouble_12() { return &___isDouble_12; }
	inline void set_isDouble_12(bool value)
	{
		___isDouble_12 = value;
	}

	inline static int32_t get_offset_of_isSlowScore_13() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isSlowScore_13)); }
	inline bool get_isSlowScore_13() const { return ___isSlowScore_13; }
	inline bool* get_address_of_isSlowScore_13() { return &___isSlowScore_13; }
	inline void set_isSlowScore_13(bool value)
	{
		___isSlowScore_13 = value;
	}

	inline static int32_t get_offset_of_isStarted_14() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isStarted_14)); }
	inline bool get_isStarted_14() const { return ___isStarted_14; }
	inline bool* get_address_of_isStarted_14() { return &___isStarted_14; }
	inline void set_isStarted_14(bool value)
	{
		___isStarted_14 = value;
	}

	inline static int32_t get_offset_of_isCameraMoved_15() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isCameraMoved_15)); }
	inline bool get_isCameraMoved_15() const { return ___isCameraMoved_15; }
	inline bool* get_address_of_isCameraMoved_15() { return &___isCameraMoved_15; }
	inline void set_isCameraMoved_15(bool value)
	{
		___isCameraMoved_15 = value;
	}

	inline static int32_t get_offset_of_isStartButtonPressed_16() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isStartButtonPressed_16)); }
	inline bool get_isStartButtonPressed_16() const { return ___isStartButtonPressed_16; }
	inline bool* get_address_of_isStartButtonPressed_16() { return &___isStartButtonPressed_16; }
	inline void set_isStartButtonPressed_16(bool value)
	{
		___isStartButtonPressed_16 = value;
	}

	inline static int32_t get_offset_of_score_17() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___score_17)); }
	inline int32_t get_score_17() const { return ___score_17; }
	inline int32_t* get_address_of_score_17() { return &___score_17; }
	inline void set_score_17(int32_t value)
	{
		___score_17 = value;
	}

	inline static int32_t get_offset_of_bestScore_18() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___bestScore_18)); }
	inline int32_t get_bestScore_18() const { return ___bestScore_18; }
	inline int32_t* get_address_of_bestScore_18() { return &___bestScore_18; }
	inline void set_bestScore_18(int32_t value)
	{
		___bestScore_18 = value;
	}

	inline static int32_t get_offset_of_gold_19() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___gold_19)); }
	inline int32_t get_gold_19() const { return ___gold_19; }
	inline int32_t* get_address_of_gold_19() { return &___gold_19; }
	inline void set_gold_19(int32_t value)
	{
		___gold_19 = value;
	}

	inline static int32_t get_offset_of_curPlayerIndex_20() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerIndex_20)); }
	inline int32_t get_curPlayerIndex_20() const { return ___curPlayerIndex_20; }
	inline int32_t* get_address_of_curPlayerIndex_20() { return &___curPlayerIndex_20; }
	inline void set_curPlayerIndex_20(int32_t value)
	{
		___curPlayerIndex_20 = value;
	}

	inline static int32_t get_offset_of_curPrice_21() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPrice_21)); }
	inline int32_t get_curPrice_21() const { return ___curPrice_21; }
	inline int32_t* get_address_of_curPrice_21() { return &___curPrice_21; }
	inline void set_curPrice_21(int32_t value)
	{
		___curPrice_21 = value;
	}

	inline static int32_t get_offset_of_curPlayerAvail_22() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerAvail_22)); }
	inline int32_t get_curPlayerAvail_22() const { return ___curPlayerAvail_22; }
	inline int32_t* get_address_of_curPlayerAvail_22() { return &___curPlayerAvail_22; }
	inline void set_curPlayerAvail_22(int32_t value)
	{
		___curPlayerAvail_22 = value;
	}

	inline static int32_t get_offset_of_curPlayerAvailSB_23() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerAvailSB_23)); }
	inline int32_t get_curPlayerAvailSB_23() const { return ___curPlayerAvailSB_23; }
	inline int32_t* get_address_of_curPlayerAvailSB_23() { return &___curPlayerAvailSB_23; }
	inline void set_curPlayerAvailSB_23(int32_t value)
	{
		___curPlayerAvailSB_23 = value;
	}

	inline static int32_t get_offset_of_curPlayerAvailSC_24() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerAvailSC_24)); }
	inline int32_t get_curPlayerAvailSC_24() const { return ___curPlayerAvailSC_24; }
	inline int32_t* get_address_of_curPlayerAvailSC_24() { return &___curPlayerAvailSC_24; }
	inline void set_curPlayerAvailSC_24(int32_t value)
	{
		___curPlayerAvailSC_24 = value;
	}

	inline static int32_t get_offset_of_amountOfDiamond_25() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___amountOfDiamond_25)); }
	inline int32_t get_amountOfDiamond_25() const { return ___amountOfDiamond_25; }
	inline int32_t* get_address_of_amountOfDiamond_25() { return &___amountOfDiamond_25; }
	inline void set_amountOfDiamond_25(int32_t value)
	{
		___amountOfDiamond_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
