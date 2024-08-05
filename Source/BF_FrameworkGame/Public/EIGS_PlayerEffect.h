#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerEffect.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlayerEffect : uint8 {
    PE_VisorEffect,
    PE_ArmorEffect,
    PE_DamageEffect,
    PE_HealthEffect,
    PE_RainOnCameraEffect,
    PE_FlashbangEffect,
    PE_DownStateEffect,
    PE_FinalDeathEffect,
    PE_FallingEffect,
    PE_OnFireEffect,
    PE_StimshotEffect,
    PE_None = 255,
};

