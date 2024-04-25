#pragma once
#include "CoreMinimal.h"
#include "EMETA_CharacterState.generated.h"

UENUM(BlueprintType)
enum class EMETA_CharacterState : uint8 {
    None,
    Available,
    Resting,
    Missing,
    Arrested,
    Jailed,
    MissionLocked,
    Dead,
    Buried,
    Healing,
};

