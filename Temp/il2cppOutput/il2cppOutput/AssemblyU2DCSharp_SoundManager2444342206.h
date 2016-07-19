#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t2444342206  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioClip SoundManager::mainMusicClip
	AudioClip_t3714538611 * ___mainMusicClip_2;
	// UnityEngine.AudioSource SoundManager::mainMusicSource
	AudioSource_t3628549054 * ___mainMusicSource_3;
	// UnityEngine.AudioClip SoundManager::pickUpClip
	AudioClip_t3714538611 * ___pickUpClip_4;
	// UnityEngine.AudioSource SoundManager::pickUpSource
	AudioSource_t3628549054 * ___pickUpSource_5;
	// UnityEngine.AudioClip SoundManager::tapClip
	AudioClip_t3714538611 * ___tapClip_6;
	// UnityEngine.AudioSource SoundManager::tapSource
	AudioSource_t3628549054 * ___tapSource_7;
	// UnityEngine.AudioClip SoundManager::playerDieClip
	AudioClip_t3714538611 * ___playerDieClip_8;
	// UnityEngine.AudioSource SoundManager::playerDieSource
	AudioSource_t3628549054 * ___playerDieSource_9;
	// UnityEngine.AudioClip SoundManager::buttonClickClip
	AudioClip_t3714538611 * ___buttonClickClip_10;
	// UnityEngine.AudioSource SoundManager::buttonClickSource
	AudioSource_t3628549054 * ___buttonClickSource_11;
	// UnityEngine.AudioClip SoundManager::awardClip
	AudioClip_t3714538611 * ___awardClip_12;
	// UnityEngine.AudioSource SoundManager::awardSource
	AudioSource_t3628549054 * ___awardSource_13;
	// UnityEngine.AudioClip SoundManager::x2ScoreClip
	AudioClip_t3714538611 * ___x2ScoreClip_14;
	// UnityEngine.AudioSource SoundManager::x2ScoreSource
	AudioSource_t3628549054 * ___x2ScoreSource_15;

public:
	inline static int32_t get_offset_of_mainMusicClip_2() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___mainMusicClip_2)); }
	inline AudioClip_t3714538611 * get_mainMusicClip_2() const { return ___mainMusicClip_2; }
	inline AudioClip_t3714538611 ** get_address_of_mainMusicClip_2() { return &___mainMusicClip_2; }
	inline void set_mainMusicClip_2(AudioClip_t3714538611 * value)
	{
		___mainMusicClip_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainMusicClip_2, value);
	}

	inline static int32_t get_offset_of_mainMusicSource_3() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___mainMusicSource_3)); }
	inline AudioSource_t3628549054 * get_mainMusicSource_3() const { return ___mainMusicSource_3; }
	inline AudioSource_t3628549054 ** get_address_of_mainMusicSource_3() { return &___mainMusicSource_3; }
	inline void set_mainMusicSource_3(AudioSource_t3628549054 * value)
	{
		___mainMusicSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainMusicSource_3, value);
	}

	inline static int32_t get_offset_of_pickUpClip_4() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___pickUpClip_4)); }
	inline AudioClip_t3714538611 * get_pickUpClip_4() const { return ___pickUpClip_4; }
	inline AudioClip_t3714538611 ** get_address_of_pickUpClip_4() { return &___pickUpClip_4; }
	inline void set_pickUpClip_4(AudioClip_t3714538611 * value)
	{
		___pickUpClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___pickUpClip_4, value);
	}

	inline static int32_t get_offset_of_pickUpSource_5() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___pickUpSource_5)); }
	inline AudioSource_t3628549054 * get_pickUpSource_5() const { return ___pickUpSource_5; }
	inline AudioSource_t3628549054 ** get_address_of_pickUpSource_5() { return &___pickUpSource_5; }
	inline void set_pickUpSource_5(AudioSource_t3628549054 * value)
	{
		___pickUpSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___pickUpSource_5, value);
	}

	inline static int32_t get_offset_of_tapClip_6() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___tapClip_6)); }
	inline AudioClip_t3714538611 * get_tapClip_6() const { return ___tapClip_6; }
	inline AudioClip_t3714538611 ** get_address_of_tapClip_6() { return &___tapClip_6; }
	inline void set_tapClip_6(AudioClip_t3714538611 * value)
	{
		___tapClip_6 = value;
		Il2CppCodeGenWriteBarrier(&___tapClip_6, value);
	}

	inline static int32_t get_offset_of_tapSource_7() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___tapSource_7)); }
	inline AudioSource_t3628549054 * get_tapSource_7() const { return ___tapSource_7; }
	inline AudioSource_t3628549054 ** get_address_of_tapSource_7() { return &___tapSource_7; }
	inline void set_tapSource_7(AudioSource_t3628549054 * value)
	{
		___tapSource_7 = value;
		Il2CppCodeGenWriteBarrier(&___tapSource_7, value);
	}

	inline static int32_t get_offset_of_playerDieClip_8() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___playerDieClip_8)); }
	inline AudioClip_t3714538611 * get_playerDieClip_8() const { return ___playerDieClip_8; }
	inline AudioClip_t3714538611 ** get_address_of_playerDieClip_8() { return &___playerDieClip_8; }
	inline void set_playerDieClip_8(AudioClip_t3714538611 * value)
	{
		___playerDieClip_8 = value;
		Il2CppCodeGenWriteBarrier(&___playerDieClip_8, value);
	}

	inline static int32_t get_offset_of_playerDieSource_9() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___playerDieSource_9)); }
	inline AudioSource_t3628549054 * get_playerDieSource_9() const { return ___playerDieSource_9; }
	inline AudioSource_t3628549054 ** get_address_of_playerDieSource_9() { return &___playerDieSource_9; }
	inline void set_playerDieSource_9(AudioSource_t3628549054 * value)
	{
		___playerDieSource_9 = value;
		Il2CppCodeGenWriteBarrier(&___playerDieSource_9, value);
	}

	inline static int32_t get_offset_of_buttonClickClip_10() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___buttonClickClip_10)); }
	inline AudioClip_t3714538611 * get_buttonClickClip_10() const { return ___buttonClickClip_10; }
	inline AudioClip_t3714538611 ** get_address_of_buttonClickClip_10() { return &___buttonClickClip_10; }
	inline void set_buttonClickClip_10(AudioClip_t3714538611 * value)
	{
		___buttonClickClip_10 = value;
		Il2CppCodeGenWriteBarrier(&___buttonClickClip_10, value);
	}

	inline static int32_t get_offset_of_buttonClickSource_11() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___buttonClickSource_11)); }
	inline AudioSource_t3628549054 * get_buttonClickSource_11() const { return ___buttonClickSource_11; }
	inline AudioSource_t3628549054 ** get_address_of_buttonClickSource_11() { return &___buttonClickSource_11; }
	inline void set_buttonClickSource_11(AudioSource_t3628549054 * value)
	{
		___buttonClickSource_11 = value;
		Il2CppCodeGenWriteBarrier(&___buttonClickSource_11, value);
	}

	inline static int32_t get_offset_of_awardClip_12() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___awardClip_12)); }
	inline AudioClip_t3714538611 * get_awardClip_12() const { return ___awardClip_12; }
	inline AudioClip_t3714538611 ** get_address_of_awardClip_12() { return &___awardClip_12; }
	inline void set_awardClip_12(AudioClip_t3714538611 * value)
	{
		___awardClip_12 = value;
		Il2CppCodeGenWriteBarrier(&___awardClip_12, value);
	}

	inline static int32_t get_offset_of_awardSource_13() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___awardSource_13)); }
	inline AudioSource_t3628549054 * get_awardSource_13() const { return ___awardSource_13; }
	inline AudioSource_t3628549054 ** get_address_of_awardSource_13() { return &___awardSource_13; }
	inline void set_awardSource_13(AudioSource_t3628549054 * value)
	{
		___awardSource_13 = value;
		Il2CppCodeGenWriteBarrier(&___awardSource_13, value);
	}

	inline static int32_t get_offset_of_x2ScoreClip_14() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___x2ScoreClip_14)); }
	inline AudioClip_t3714538611 * get_x2ScoreClip_14() const { return ___x2ScoreClip_14; }
	inline AudioClip_t3714538611 ** get_address_of_x2ScoreClip_14() { return &___x2ScoreClip_14; }
	inline void set_x2ScoreClip_14(AudioClip_t3714538611 * value)
	{
		___x2ScoreClip_14 = value;
		Il2CppCodeGenWriteBarrier(&___x2ScoreClip_14, value);
	}

	inline static int32_t get_offset_of_x2ScoreSource_15() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___x2ScoreSource_15)); }
	inline AudioSource_t3628549054 * get_x2ScoreSource_15() const { return ___x2ScoreSource_15; }
	inline AudioSource_t3628549054 ** get_address_of_x2ScoreSource_15() { return &___x2ScoreSource_15; }
	inline void set_x2ScoreSource_15(AudioSource_t3628549054 * value)
	{
		___x2ScoreSource_15 = value;
		Il2CppCodeGenWriteBarrier(&___x2ScoreSource_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
