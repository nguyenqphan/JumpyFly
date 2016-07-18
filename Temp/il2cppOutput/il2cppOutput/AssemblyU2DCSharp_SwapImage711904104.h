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

// SwapImage
struct  SwapImage_t711904104  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject SwapImage::imageSwapButton
	GameObject_t4012695102 * ___imageSwapButton_2;
	// UnityEngine.Sprite SwapImage::musicOnImage
	Sprite_t4006040370 * ___musicOnImage_3;
	// UnityEngine.Sprite SwapImage::musicOffImage
	Sprite_t4006040370 * ___musicOffImage_4;
	// UnityEngine.UI.Image SwapImage::image
	Image_t3354615620 * ___image_5;
	// SoundManager SwapImage::soundManager
	SoundManager_t2444342206 * ___soundManager_6;
	// System.Boolean SwapImage::isMusicOn
	bool ___isMusicOn_7;

public:
	inline static int32_t get_offset_of_imageSwapButton_2() { return static_cast<int32_t>(offsetof(SwapImage_t711904104, ___imageSwapButton_2)); }
	inline GameObject_t4012695102 * get_imageSwapButton_2() const { return ___imageSwapButton_2; }
	inline GameObject_t4012695102 ** get_address_of_imageSwapButton_2() { return &___imageSwapButton_2; }
	inline void set_imageSwapButton_2(GameObject_t4012695102 * value)
	{
		___imageSwapButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___imageSwapButton_2, value);
	}

	inline static int32_t get_offset_of_musicOnImage_3() { return static_cast<int32_t>(offsetof(SwapImage_t711904104, ___musicOnImage_3)); }
	inline Sprite_t4006040370 * get_musicOnImage_3() const { return ___musicOnImage_3; }
	inline Sprite_t4006040370 ** get_address_of_musicOnImage_3() { return &___musicOnImage_3; }
	inline void set_musicOnImage_3(Sprite_t4006040370 * value)
	{
		___musicOnImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___musicOnImage_3, value);
	}

	inline static int32_t get_offset_of_musicOffImage_4() { return static_cast<int32_t>(offsetof(SwapImage_t711904104, ___musicOffImage_4)); }
	inline Sprite_t4006040370 * get_musicOffImage_4() const { return ___musicOffImage_4; }
	inline Sprite_t4006040370 ** get_address_of_musicOffImage_4() { return &___musicOffImage_4; }
	inline void set_musicOffImage_4(Sprite_t4006040370 * value)
	{
		___musicOffImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___musicOffImage_4, value);
	}

	inline static int32_t get_offset_of_image_5() { return static_cast<int32_t>(offsetof(SwapImage_t711904104, ___image_5)); }
	inline Image_t3354615620 * get_image_5() const { return ___image_5; }
	inline Image_t3354615620 ** get_address_of_image_5() { return &___image_5; }
	inline void set_image_5(Image_t3354615620 * value)
	{
		___image_5 = value;
		Il2CppCodeGenWriteBarrier(&___image_5, value);
	}

	inline static int32_t get_offset_of_soundManager_6() { return static_cast<int32_t>(offsetof(SwapImage_t711904104, ___soundManager_6)); }
	inline SoundManager_t2444342206 * get_soundManager_6() const { return ___soundManager_6; }
	inline SoundManager_t2444342206 ** get_address_of_soundManager_6() { return &___soundManager_6; }
	inline void set_soundManager_6(SoundManager_t2444342206 * value)
	{
		___soundManager_6 = value;
		Il2CppCodeGenWriteBarrier(&___soundManager_6, value);
	}

	inline static int32_t get_offset_of_isMusicOn_7() { return static_cast<int32_t>(offsetof(SwapImage_t711904104, ___isMusicOn_7)); }
	inline bool get_isMusicOn_7() const { return ___isMusicOn_7; }
	inline bool* get_address_of_isMusicOn_7() { return &___isMusicOn_7; }
	inline void set_isMusicOn_7(bool value)
	{
		___isMusicOn_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
