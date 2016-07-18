#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PanelController
struct PanelController_t2622049440;
// UpdateScore
struct UpdateScore_t1082839849;
// Spawner
struct Spawner_t3948062024;
// SoundManager
struct SoundManager_t2444342206;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CBAdManager
struct  CBAdManager_t3240185963  : public MonoBehaviour_t3012272455
{
public:
	// PanelController CBAdManager::panelController
	PanelController_t2622049440 * ___panelController_2;
	// UpdateScore CBAdManager::updateScore
	UpdateScore_t1082839849 * ___updateScore_3;
	// Spawner CBAdManager::spawner
	Spawner_t3948062024 * ___spawner_4;
	// SoundManager CBAdManager::soundManager
	SoundManager_t2444342206 * ___soundManager_5;

public:
	inline static int32_t get_offset_of_panelController_2() { return static_cast<int32_t>(offsetof(CBAdManager_t3240185963, ___panelController_2)); }
	inline PanelController_t2622049440 * get_panelController_2() const { return ___panelController_2; }
	inline PanelController_t2622049440 ** get_address_of_panelController_2() { return &___panelController_2; }
	inline void set_panelController_2(PanelController_t2622049440 * value)
	{
		___panelController_2 = value;
		Il2CppCodeGenWriteBarrier(&___panelController_2, value);
	}

	inline static int32_t get_offset_of_updateScore_3() { return static_cast<int32_t>(offsetof(CBAdManager_t3240185963, ___updateScore_3)); }
	inline UpdateScore_t1082839849 * get_updateScore_3() const { return ___updateScore_3; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_3() { return &___updateScore_3; }
	inline void set_updateScore_3(UpdateScore_t1082839849 * value)
	{
		___updateScore_3 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_3, value);
	}

	inline static int32_t get_offset_of_spawner_4() { return static_cast<int32_t>(offsetof(CBAdManager_t3240185963, ___spawner_4)); }
	inline Spawner_t3948062024 * get_spawner_4() const { return ___spawner_4; }
	inline Spawner_t3948062024 ** get_address_of_spawner_4() { return &___spawner_4; }
	inline void set_spawner_4(Spawner_t3948062024 * value)
	{
		___spawner_4 = value;
		Il2CppCodeGenWriteBarrier(&___spawner_4, value);
	}

	inline static int32_t get_offset_of_soundManager_5() { return static_cast<int32_t>(offsetof(CBAdManager_t3240185963, ___soundManager_5)); }
	inline SoundManager_t2444342206 * get_soundManager_5() const { return ___soundManager_5; }
	inline SoundManager_t2444342206 ** get_address_of_soundManager_5() { return &___soundManager_5; }
	inline void set_soundManager_5(SoundManager_t2444342206 * value)
	{
		___soundManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___soundManager_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
