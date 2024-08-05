#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_MoveToBase.h"
#include "BTTask_ChargeToPosition.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_ChargeToPosition : public UIGS_BTTask_MoveToBase {
    GENERATED_BODY()
public:
    UBTTask_ChargeToPosition();

};

