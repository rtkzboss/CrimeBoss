#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpecialActionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SpecialActionType : uint8 {
    SAT_None,
    SAT_Ping,
    SAT_Shout,
    SAT_ShoutForHelp,
    SAT_Follow,
    SAT_Stop,
    SAT_Ziptying,
    SAT_LootBagPickup,
    SAT_Subdue,
};

