#pragma once
#include "CoreMinimal.h"
#include "EIGS_GRWaitType.generated.h"

UENUM(BlueprintType)
enum class EIGS_GRWaitType : uint8 {
    GW_None,
    GW_Barrel_Notice,
    GW_Barrel_React,
    GW_C4_Notice,
    GW_C4_React,
    GW_Grenade_Notice,
    GW_Grenade_React,
    GW_Unknown = 255,
};

