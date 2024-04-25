#pragma once
#include "CoreMinimal.h"
#include "EMETA_FPSMissionSubtype.generated.h"

UENUM(BlueprintType)
enum class EMETA_FPSMissionSubtype : uint8 {
    MoneyMaking,
    Story,
    BigHeist,
    SurvivalMission,
    CharacterMission,
    WarehouseAttack,
    WeakenMission,
};

