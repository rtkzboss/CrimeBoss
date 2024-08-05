#pragma once
#include "CoreMinimal.h"
#include "EMETA_JobStartRejectionReason.generated.h"

UENUM(BlueprintType)
enum class EMETA_JobStartRejectionReason : uint8 {
    None,
    RandEvent_NotEnoughMoney,
    NotEnoughIntelValue,
    WrongAmountOfAvailableSoldiers,
    TurfWar_NotEnoughMoneyToSendSoldiers,
    TurfWar_CannotRecaptureTurfTheSameDay,
};

