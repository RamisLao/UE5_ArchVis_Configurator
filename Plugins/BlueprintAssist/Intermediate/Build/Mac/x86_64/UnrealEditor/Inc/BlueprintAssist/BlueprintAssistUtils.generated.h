// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTASSIST_BlueprintAssistUtils_generated_h
#error "BlueprintAssistUtils.generated.h already included, missing '#pragma once' in BlueprintAssistUtils.h"
#endif
#define BLUEPRINTASSIST_BlueprintAssistUtils_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistUtils_h


#define FOREACH_ENUM_EBAROUNDINGMETHOD(op) \
	op(EBARoundingMethod::Round) \
	op(EBARoundingMethod::Ceil) \
	op(EBARoundingMethod::Floor) 

enum class EBARoundingMethod : uint8;
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBARoundingMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
