#pragma once
#include "CoreMinimal.h"
#include "EIGS_RopeType.generated.h"

UENUM(BlueprintType)
enum class EIGS_RopeType : uint8 {
    RT_None,
    RT_Navlink,
    RT_Helicopter,
    RT_PlayerRapelling,
};

