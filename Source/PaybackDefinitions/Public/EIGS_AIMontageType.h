#pragma once
#include "CoreMinimal.h"
#include "EIGS_AIMontageType.generated.h"

UENUM(BlueprintType)
enum class EIGS_AIMontageType : uint8 {
    AIM_Unknown = 255,
    AIM_Breach = 0,
    AIM_SpecialObjective,
    AIM_HitReactionMedium,
    AIM_HitReactionHeavy,
    AIM_SpawnAnimation,
    AIM_CoverPeek,
    AIM_Dodge,
    AIM_UNUSED,
    AIM_Roll,
    AIM_SmartLink,
    AIM_Leaning,
    AIM_Reaction,
    AIM_SituationalDeath,
    AIM_MeleePush,
    AIM_Car,
    AIM_MAX_INDEX,
};

