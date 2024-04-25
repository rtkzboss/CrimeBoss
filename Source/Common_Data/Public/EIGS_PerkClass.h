#pragma once
#include "CoreMinimal.h"
#include "EIGS_PerkClass.generated.h"

UENUM(BlueprintType)
enum class EIGS_PerkClass : uint8 {
    PC_Generic,
    PC_Combat,
    PC_Defense,
    PC_Stealth,
    PC_Agility,
    PC_Special,
};

