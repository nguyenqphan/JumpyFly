#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Sprite
struct Sprite_t4006040370;
// UnityEngine.UI.Image
struct Image_t3354615620;
// SoundManager
struct SoundManager_t2444342206;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundEFButton
struct  SoundEFButton_t2268977442  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject SoundEFButton::imageSwapButton
	GameObject_t4012695102 * ___imageSwapButton_2;
	// UnityEngine.Sprite SoundEFButton::soundOnImage
	Sprite_t4006040370 * ___soundOnImage_3;
	// UnityEngine.Sprite SoundEFButton::soundOffImage
	Sprite_t4006040370 * ___soundOffImage_4;
	// UnityEngine.UI.Image SoundEFButton::image
	Image_t3354615620 * ___image_5;
	// SoundManager SoundEFButton::soundManager
	SoundManager_t2444342206 * ___soundManager_6;

public:
	inline static int32_t get_offset_of_imageSwapButton_2() { return static_cast<int32_t>(offsetof(SoundEFButton_t2268977442, ___imageSwapButton_2)); }
	inline GameObject_t4012695102 * get_imageSwapButton_2() const { return ___imageSwapButton_2; }
	inline GameObject_t4012695102 ** get_address_of_imageSwapButton_2() { return &___imageSwapButton_2; }
	inline void set_imageSwapButton_2(GameObject_t4012695102 * value)
	{
		___imageSwapButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___imageSwapButton_2, value);
	}

	inline static int32_t get_offset_of_soundOnImage_3() { return static_cast<int32_t>(offsetof(SoundEFButton_t2268977442, ___soundOnImage_3)); }
	inline Sprite_t4006040370 * get_soundOnImage_3() const { return ___soundOnImage_3; }
	inline Sprite_t4006040370 ** get_address_of_soundOnImage_3() { return &___soundOnImage_3; }
	inline void set_soundOnImage_3(Sprite_t4006040370 * value)
	{
		___soundOnImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___soundOnImage_3, value);
	}

	inline static int32_t get_offset_of_soundOffImage_4() { return static_cast<int32_t>(offsetof(SoundEFButton_t2268977442, ___soundOffImage_4)); }
	inline Sprite_t4006040370 * get_soundOffImage_4() const { return ___soundOffImage_4; }
	inline Sprite_t4006040370 ** get_address_of_soundOffImage_4() { return &___soundOffImage_4; }
	inline void set_soundOffImage_4(Sprite_t4006040370 * value)
	{
		___soundOffImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___soundOffImage_4, value);
	}

	inline static int32_t get_offset_of_image_5() { return static_cast<int32_t>(offsetof(SoundEFButton_t2268977442, ___image_5)); }
	inline Image_t3354615620 * get_image_5() const { return ___image_5; }
	inline Image_t3354615620 ** get_address_of_image_5() { return &___image_5; }
	inline void set_image_5(Image_t3354615620 * value)
	{
		___image_5 = value;
		Il2CppCodeGenWriteBarrier(&___image_5, value);
	}

	inline static int32_t get_offset_of_soundManager_6() { return static_cast<int32_t>(offsetof(SoundEFButton_t2268977442, ___soundManager_6)); }
	inline SoundManager_t2444342206 * get_soundManager_6() const { return ___soundManager_6; }
	inline SoundManager_t2444342206 ** get_address_of_soundManager_6() { return &___soundManager_6; }
	inline void set_soundManager_6(SoundManager_t2444342206 * value)
	{
		___soundManager_6 = value;
		Il2CppCodeGenWriteBarrier(&___soundManager_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
