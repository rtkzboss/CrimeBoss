#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_CoverInCombatRange.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_CoverInCombatRange : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_CoverInCombatRange();

};

