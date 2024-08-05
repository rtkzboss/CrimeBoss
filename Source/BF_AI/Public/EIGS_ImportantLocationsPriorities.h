#pragma once
#include "CoreMinimal.h"
#include "EIGS_ImportantLocationsPriorities.generated.h"

UENUM(BlueprintType)
enum class EIGS_ImportantLocationsPriorities : uint8 {
    BT_Squad,
    BT_Character,
    BT_Defending,
    BT_Breaching,
};

