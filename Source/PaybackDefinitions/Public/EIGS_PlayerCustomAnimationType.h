#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerCustomAnimationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlayerCustomAnimationType : uint8 {
    PCA_PressButton,
    PCA_Hold,
    PCA_Push,
    PCA_Ziptie,
    PCA_Revive,
    PCA_PhonePickup,
    PCA_Buzzsaw,
    PCA_Default,
    PCA_Universal,
    PCA_Payload,
    PCA_FenceUnhinge,
    PCA_TakeWeapon,
};

