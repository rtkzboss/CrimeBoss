#pragma once
#include "CoreMinimal.h"
#include "BTTask_ReactToOffenceAmbient.h"
#include "BTTask_DutyReaction.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_DutyReaction : public UBTTask_ReactToOffenceAmbient {
    GENERATED_BODY()
public:
    UBTTask_DutyReaction();

};

