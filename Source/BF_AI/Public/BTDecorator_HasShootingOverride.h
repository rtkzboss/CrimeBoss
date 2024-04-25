#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_HasShootingOverride.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_HasShootingOverride : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_HasShootingOverride();

};

