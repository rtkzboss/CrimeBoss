#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_ForceFailure.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_ForceFailure : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_ForceFailure();

};

