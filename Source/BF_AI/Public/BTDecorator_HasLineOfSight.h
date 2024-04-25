#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_HasLineOfSight.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_HasLineOfSight : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_HasLineOfSight();

};

