﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.SocialPlatforms.ISocialPlatform
struct ISocialPlatform_t341327709;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t198308673;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
extern "C"  Il2CppObject * Social_get_Active_m590102927 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
extern "C"  Il2CppObject * Social_get_localUser_m2966161563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern "C"  void Social_ReportProgress_m1649091494 (Il2CppObject * __this /* static, unused */, String_t* ___achievementID, double ___progress, Action_1_t359458046 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C"  void Social_ReportScore_m2033004471 (Il2CppObject * __this /* static, unused */, int64_t ___score, String_t* ___board, Action_1_t359458046 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ShowAchievementsUI()
extern "C"  void Social_ShowAchievementsUI_m2977882297 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ShowLeaderboardUI()
extern "C"  void Social_ShowLeaderboardUI_m4061198994 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
