#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsInRange.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_IsInRange : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsInRange();

};

