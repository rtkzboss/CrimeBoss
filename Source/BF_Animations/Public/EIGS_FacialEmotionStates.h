#pragma once
#include "CoreMinimal.h"
#include "EIGS_FacialEmotionStates.generated.h"

UENUM(BlueprintType)
enum class EIGS_FacialEmotionStates : uint8 {
    FES_Default,
    FES_Angry,
    FES_Pain,
    FES_Surprise,
    FES_Fear,
    FES_Happy,
    FES_Sad,
    FES_Death,
};

